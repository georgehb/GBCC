#include "gbcc_colour.h"
#include <stdbool.h>
#include <stdint.h>


static uint32_t lerp_colour(uint8_t r, uint8_t g, uint8_t b);
static bool lut_initialised = false;
static uint32_t lut_calc[32][32][32];

/* 
 * Dimensions are as follows:
 * 0 - which of R, G, B are we looking at?
 * 1 - R
 * 2 - G
 * 3 - B
 */
static const uint8_t lut[3][5][5][5] =
{
	{
		{
			{ 0x00, 0x00, 0x00, 0x00, 0x00 },
			{ 0x00, 0x00, 0x00, 0x00, 0x00 },
			{ 0x00, 0x00, 0x00, 0x00, 0x00 },
			{ 0x00, 0x00, 0x00, 0x00, 0x00 },
			{ 0x00, 0x00, 0x00, 0x00, 0x00 }
		},
		{
			{ 0x18, 0x10, 0x20, 0x30, 0x20 },
			{ 0x18, 0x20, 0x20, 0x20, 0x30 },
			{ 0x30, 0x30, 0x40, 0x40, 0x40 },
			{ 0x50, 0x50, 0x40, 0x50, 0x50 },
			{ 0x70, 0x70, 0x70, 0x70, 0x70 }
		},
		{
			{ 0x40, 0x30, 0x30, 0x50, 0x60 },
			{ 0x40, 0x40, 0x50, 0x60, 0x60 },
			{ 0x50, 0x50, 0x60, 0x80, 0x80 },
			{ 0x90, 0x90, 0x90, 0x90, 0x90 },
			{ 0xA0, 0xA0, 0xB0, 0xA0, 0xA0 }
		},
		{
			{ 0x60, 0x60, 0x60, 0x60, 0x70 },
			{ 0x70, 0x70, 0x70, 0x70, 0x80 },
			{ 0xA0, 0xA0, 0xA0, 0xB0, 0xC0 },
			{ 0xF0, 0xF0, 0xF0, 0xF0, 0xF0 },
			{ 0xF0, 0xFF, 0xFF, 0xFF, 0xFF }
		},
		{
			{ 0x70, 0x70, 0x70, 0x70, 0x70 },
			{ 0x80, 0x80, 0x80, 0x80, 0x80 },
			{ 0xC0, 0xC0, 0xD0, 0xE0, 0xF0 },
			{ 0xF0, 0xF0, 0xF0, 0xFF, 0xFF },
			{ 0xFF, 0xFF, 0xFF, 0xFF, 0xFF }
		}
	},
	{
		{
			{ 0x00, 0x00, 0x00, 0x10, 0x18 },
			{ 0x18, 0x20, 0x40, 0x70, 0x70 },
			{ 0x30, 0x40, 0x60, 0xa0, 0xa0 },
			{ 0x80, 0x90, 0xa0, 0xC0, 0xF0 },
			{ 0xC0, 0xD0, 0xFF, 0xFF, 0xFF }
		},
		{
			{ 0x00, 0x00, 0x20, 0x30, 0x50 },
			{ 0x14, 0x20, 0x20, 0x40, 0x50 },
			{ 0x40, 0x50, 0x60, 0x80, 0x90 },
			{ 0x80, 0x80, 0xA0, 0xD0, 0xF0 },
			{ 0xC0, 0xD0, 0xD0, 0xFF, 0xFF }
		},
		{
			{ 0x00, 0x00, 0x18, 0x38, 0x40 },
			{ 0x20, 0x20, 0x40, 0x60, 0x60 },
			{ 0x40, 0x40, 0x60, 0x80, 0x80 },
			{ 0x80, 0x80, 0xA0, 0xC0, 0xD0 },
			{ 0xA0, 0xA0, 0xD0, 0xF0, 0xF0 }
		},
		{
			{ 0x00, 0x00, 0x30, 0x30, 0x40 },
			{ 0x30, 0x30, 0x40, 0x50, 0x60 },
			{ 0x50, 0x50, 0x70, 0xA0, 0xB0 },
			{ 0xB0, 0xC0, 0xD0, 0xF0, 0xF0 },
			{ 0xC0, 0xE0, 0xFF, 0xFF, 0xFF }
		},
		{
			{ 0x00, 0x00, 0x30, 0x40, 0x40 },
			{ 0x30, 0x30, 0x40, 0x50, 0x60 },
			{ 0x50, 0x50, 0x80, 0xB0, 0xC0 },
			{ 0xB0, 0xB0, 0xD0, 0xF0, 0xF0 },
			{ 0xC0, 0xC8, 0xE0, 0xFF, 0xFF }
		}
	},
	{
		{
			{ 0x00, 0x08, 0x20, 0x40, 0x50 },
			{ 0x00, 0x18, 0x48, 0x90, 0x90 },
			{ 0x00, 0x10, 0x40, 0x90, 0x90 },
			{ 0x00, 0x28, 0x68, 0x80, 0xC0 },
			{ 0x00, 0x40, 0x90, 0xD0, 0xD0 }
		},
		{
			{ 0x00, 0x10, 0x30, 0x40, 0x80 },
			{ 0x00, 0x20, 0x24, 0x50, 0x60 },
			{ 0x00, 0x20, 0x48, 0x90, 0xA0 },
			{ 0x00, 0x20, 0x60, 0xA0, 0xE0 },
			{ 0x00, 0x50, 0x80, 0xC0, 0xC0 }
		},
		{
			{ 0x00, 0x18, 0x30, 0x50, 0x60 },
			{ 0x00, 0x10, 0x50, 0x70, 0x70 },
			{ 0x00, 0x20, 0x50, 0x80, 0x88 },
			{ 0x00, 0x30, 0x60, 0x90, 0xC0 },
			{ 0x40, 0x50, 0x80, 0xC0, 0xC0 }
		},
		{
			{ 0x00, 0x20, 0x40, 0x50, 0x60 },
			{ 0x00, 0x20, 0x40, 0x60, 0x70 },
			{ 0x00, 0x20, 0x60, 0xB0, 0xC0 },
			{ 0x30, 0x60, 0x90, 0xE0, 0xF0 },
			{ 0x40, 0x90, 0xC0, 0xF0, 0xFF }
		},
		{
			{ 0x00, 0x20, 0x40, 0x50, 0x60 },
			{ 0x00, 0x20, 0x40, 0x60, 0x70 },
			{ 0x00, 0x20, 0x60, 0xB0, 0xC0 },
			{ 0x30, 0x60, 0xA0, 0xE0, 0xFF },
			{ 0x30, 0x60, 0xB0, 0xF0, 0xFF }
		}
	}
};

static float lerp1d(float a, float b, float t)
{
	return a * (1 - t) + b * t;
}

uint32_t gbcc_lerp_colour(uint8_t r, uint8_t g, uint8_t b)
{
	if (!lut_initialised) {
		for (uint8_t x = 0; x < 32; x++) {
			for (uint8_t y = 0; y < 32; y++) {
				for (uint8_t z = 0; z < 32; z++) {
					lut_calc[x][y][z] = lerp_colour(x, y, z);
				}
			}
		}
		lut_initialised = true;
	}
	return lut_calc[r][g][b];
}

/* Trilinearly interpolate from gameboy r,g,b values to hex code */
uint32_t lerp_colour(uint8_t r, uint8_t g, uint8_t b)
{
	uint8_t x0 = (r / 8);
	uint8_t x1 = x0 + 1;
	uint8_t y0 = (g / 8);
	uint8_t y1 = y0 + 1;
	uint8_t z0 = (b / 8);
	uint8_t z1 = z0 + 1;

	float xd = (float)r / 8 - x0;
	float yd = (float)g / 8 - y0;
	float zd = (float)b / 8 - z0;

	float c00r = lerp1d(lut[0][x0][y0][z0], lut[0][x1][y0][z0], xd);
	float c01r = lerp1d(lut[0][x0][y0][z1], lut[0][x1][y0][z1], xd);
	float c10r = lerp1d(lut[0][x0][y1][z0], lut[0][x1][y1][z1], xd);
	float c11r = lerp1d(lut[0][x0][y1][z1], lut[0][x1][y1][z1], xd);

	float c00g = lerp1d(lut[1][x0][y0][z0], lut[1][x1][y0][z0], xd);
	float c01g = lerp1d(lut[1][x0][y0][z1], lut[1][x1][y0][z1], xd);
	float c10g = lerp1d(lut[1][x0][y1][z0], lut[1][x1][y1][z1], xd);
	float c11g = lerp1d(lut[1][x0][y1][z1], lut[1][x1][y1][z1], xd);

	float c00b = lerp1d(lut[2][x0][y0][z0], lut[2][x1][y0][z0], xd);
	float c01b = lerp1d(lut[2][x0][y0][z1], lut[2][x1][y0][z1], xd);
	float c10b = lerp1d(lut[2][x0][y1][z0], lut[2][x1][y1][z1], xd);
	float c11b = lerp1d(lut[2][x0][y1][z1], lut[2][x1][y1][z1], xd);

	float c0r = lerp1d(c00r, c10r, yd);
	float c1r = lerp1d(c01r, c11r, yd);

	float c0g = lerp1d(c00g, c10g, yd);
	float c1g = lerp1d(c01g, c11g, yd);

	float c0b = lerp1d(c00b, c10b, yd);
	float c1b = lerp1d(c01b, c11b, yd);

	float cr = lerp1d(c0r, c1r, zd);
	float cg = lerp1d(c0g, c1g, zd);
	float cb = lerp1d(c0b, c1b, zd);

	r = (uint8_t)cr;
	g = (uint8_t)cg;
	b = (uint8_t)cb;

	return (uint32_t)((uint32_t)(r << 16u) | (uint32_t)(g << 8u)) | (uint32_t)b;
}

uint32_t gbcc_colour_correct(uint32_t hex)
{
    uint8_t r = (uint8_t)((hex & 0xFF0000u) >> 19u);
    uint8_t g = (uint8_t)((hex & 0x00FF00u) >> 11u);
    uint8_t b = (uint8_t)((hex & 0x0000FFu) >> 3u);

    return gbcc_lerp_colour(r,g,b);
}

