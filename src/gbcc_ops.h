#ifndef GBCC_OPS_H
#define GBCC_OPS_H

#include "gbcc.h"

extern void (*gbcc_ops[0x100])(struct gbc* gbc);
extern const uint8_t gbcc_op_sizes[0x100];
extern const uint8_t gbcc_op_times[0x100];

/* Miscellaneous */
void INVALID(struct gbc *gbc);
void NOP(struct gbc *gbc);
void HALT(struct gbc *gbc);
void STOP(struct gbc *gbc);
void DAA(struct gbc *gbc);
void CPL(struct gbc *gbc);
void SCF(struct gbc *gbc);
void CCF(struct gbc *gbc);
void EI(struct gbc *gbc);
void DI(struct gbc *gbc);

/* Loads */
void LD_REG_REG(struct gbc *gbc);
void LD_d8(struct gbc *gbc);
void LD_d16(struct gbc *gbc);
void LD_A(struct gbc *gbc);
void LD_a16(struct gbc *gbc);
void LD_OFFSET(struct gbc *gbc);
void STORE_SP(struct gbc *gbc);
void LD_HL_SP(struct gbc *gbc);
void LD_SP_HL(struct gbc *gbc);
void PUSH_POP(struct gbc *gbc);

/* ALU */
void ALU_OP(struct gbc *gbc);
void INC_DEC_8_BIT(struct gbc *gbc);
void INC_DEC_16_BIT(struct gbc *gbc);
void ADD_HL(struct gbc *gbc);
void ADD_SP(struct gbc *gbc);
void SHIFT_A(struct gbc *gbc);

/* Jumps */
void JP(struct gbc *gbc);
void JP_HL(struct gbc *gbc);
void JP_COND(struct gbc *gbc);
void JR(struct gbc *gbc);
void JR_COND(struct gbc *gbc);

/* Calls */
void CALL(struct gbc *gbc);
void CALL_COND(struct gbc *gbc);
void RET(struct gbc *gbc);
void RETI(struct gbc *gbc);
void RET_COND(struct gbc *gbc);
void RST(struct gbc *gbc);

/* CB-prefix */
void PREFIX_CB(struct gbc *gbc);
void CB_SHIFT_OP(struct gbc *gbc);
void CB_BIT_OP(struct gbc *gbc);

#endif /* GBCC_OPS_H */
