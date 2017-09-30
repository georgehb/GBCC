void NOP(void);
void LD_BC_d16(void);
void LD_AT_BC_A(void);
void INC_BC(void);

void INC_B(void);
void DEC_B(void);
void LD_B_d8(void);
void RLCA(void);

void LD_a16_SP(void);
void ADD_HL_BC(void);
void LD_A_AT_BC(void);
void DEC_BC(void);

void INC_C(void);
void DEC_C(void);
void LD_C_d8(void);
void RRCA(void);

void STOP_0(void);
void LD_DE_d16(void);
void LD_AT_DE_A(void);
void INC_DE(void);

void INC_D(void);
void DEC_D(void);
void LD_D_d8(void);
void RLA(void);

void JR_r8(void);
void ADD_HL_DE(void);
void LD_A_AT_DE(void);
void DEC_DE(void);

void INC_E(void);
void DEC_E(void);
void LD_E_d8(void);
void RRA(void);

void JR_NZ_r8(void);
void LD_AT_HL_d16(void);
void LDI_AT_HL_A(void);
void INC_HL(void);

void INC_H(void);
void DEC_H(void);
void LD_H_d8(void);
void DAA(void);

void JR_Z_r8(void);
void ADD_HL_HL(void);
void LDI_A_AT_HL(void);
void DEC_HL(void);

void INC_L(void);
void DEC_L(void);
void LD_L_d8(void);
void CPL(void);

void JR_NC_r8(void);
void LD_SP_d16(void);
void LDD_AT_HL_A(void);
void INC_SP(void);

void INC_AT_HL(void);
void DEC_AT_HL(void);
void LD_AT_HL_d8(void);
void SCF(void);

void JR_C_r8(void);
void ADD_HL_SP(void);
void LDD_A_AT_HL(void);
void DEC_SP(void);

void INC_A(void);
void DEC_A(void);
void LD_A_d8(void);
void CCF(void);

void LD_B_B(void);
void LD_B_C(void);
void LD_B_D(void);
void LD_B_E(void);

void LD_B_H(void);
void LD_B_L(void);
void LD_B_AT_HL(void);
void LD_B_A(void);

void LD_C_B(void);
void LD_C_C(void);
void LD_C_D(void);
void LD_C_E(void);

void LD_C_H(void);
void LD_C_L(void);
void LD_C_AT_HL(void);
void LD_C_A(void);

void LD_D_B(void);
void LD_D_C(void);
void LD_D_D(void);
void LD_D_E(void);

void LD_D_H(void);
void LD_D_L(void);
void LD_D_AT_HL(void);
void LD_D_A(void);

void LD_E_B(void);
void LD_E_C(void);
void LD_E_D(void);
void LD_E_E(void);

void LD_E_H(void);
void LD_E_L(void);
void LD_E_AT_HL(void);
void LD_E_A(void);

void LD_H_B(void);
void LD_H_C(void);
void LD_H_D(void);
void LD_H_E(void);

void LD_H_H(void);
void LD_H_L(void);
void LD_H_AT_HL(void);
void LD_H_A(void);

void LD_L_B(void);
void LD_L_C(void);
void LD_L_D(void);
void LD_L_E(void);

void LD_L_H(void);
void LD_L_L(void);
void LD_L_AT_HL(void);
void LD_L_A(void);

void LD_AT_HL_B(void);
void LD_AT_HL_C(void);
void LD_AT_HL_D(void);
void LD_AT_HL_E(void);

void LD_AT_HL_H(void);
void LD_AT_HL_L(void);
void HALT(void);
void LD_AT_HL_A(void);

void LD_A_B(void);
void LD_A_C(void);
void LD_A_D(void);
void LD_A_E(void);

void LD_A_H(void);
void LD_A_L(void);
void LD_A_AT_HL(void);
void LD_A_A(void);

void ADD_A_B(void);
void ADD_A_C(void);
void ADD_A_D(void);
void ADD_A_E(void);

void ADD_A_H(void);
void ADD_A_L(void);
void ADD_A_AT_HL(void);
void ADD_A_A(void);

void ADC_A_B(void);
void ADC_A_C(void);
void ADC_A_D(void);
void ADC_A_E(void);

void ADC_A_H(void);
void ADC_A_L(void);
void ADC_A_AT_HL(void);
void ADC_A_A(void);

void SUB_B(void);
void SUB_C(void);
void SUB_D(void);
void SUB_E(void);

void SUB_H(void);
void SUB_L(void);
void SUB_AT_HL(void);
void SUB_A(void);

void SBC_A_B(void);
void SBC_A_C(void);
void SBC_A_D(void);
void SBC_A_E(void);

void SBC_A_H(void);
void SBC_A_L(void);
void SBC_A_AT_HL(void);
void SBC_A_A(void);

void AND_B(void);
void AND_C(void);
void AND_D(void);
void AND_E(void);

void AND_H(void);
void AND_L(void);
void AND_AT_HL(void);
void AND_A(void);

void XOR_B(void);
void XOR_C(void);
void XOR_D(void);
void XOR_E(void);

void XOR_H(void);
void XOR_L(void);
void XOR_AT_HL(void);
void XOR_A(void);

void OR_B(void);
void OR_C(void);
void OR_D(void);
void OR_E(void);

void OR_H(void);
void OR_L(void);
void OR_AT_HL(void);
void OR_A(void);

void CP_B(void);
void CP_C(void);
void CP_D(void);
void CP_E(void);

void CP_H(void);
void CP_L(void);
void CP_AT_HL(void);
void CP_A(void);

void RET_NZ(void);
void POP_BC(void);
void JP_NZ_a16(void);
void JP_a16(void);

void CALL_NZ_a16(void);
void PUSH_BC(void);
void ADD_A_d8(void);
void RST_00H(void);

void RET_Z(void);
void RET(void);
void JP_Z_a16(void);
void PREFIX_CB(void);

void CALL_Z_a16(void);
void CALL_a16(void);
void ADC_A_d8(void);
void RST_08H(void);

void RET_NC(void);
void POP_DE(void);
void JP_NC_a16(void);
void INVALID(void);

void CALL_NC_a16(void);
void PUSH_DE(void);
void SUB_d8(void);
void RST_10H(void);

void RET_C(void);
void RETI(void);
void JP_C_a16(void);

void CALL_C_a16(void);
void SBC_A_d8(void);
void RST_18H(void);

void LDH_a8_A(void);
void POP_HL(void);
void LD_AT_C_A(void);

void PUSH_HL(void);
void AND_d8(void);
void RST_20H(void);

void ADD_SP_r8(void);
void JP_HL(void);
void LD_a16_A(void);

void XOR_d8(void);
void RST_28H(void);

void LDH_A_a8(void);
void POP_AF(void);
void LD_A_AT_C(void);
void DI(void);

void PUSH_AF(void);
void OR_d8(void);
void RST_30H(void);

void LD_HL_SP_r8(void);
void LD_SP_HL(void);
void LD_A_a16(void);
void EI(void);

void CP_d8(void);
void RST_38H(void);


void RLC_B(void);
void RLC_C(void);
void RLC_D(void);
void RLC_E(void);

void RLC_H(void);
void RLC_L(void);
void RLC_HL(void);
void RLC_A(void);

void RRC_B(void);
void RRC_C(void);
void RRC_D(void);
void RRC_E(void);

void RRC_H(void);
void RRC_L(void);
void RRC_HL(void);
void RRC_A(void);

void RL_B(void);
void RL_C(void);
void RL_D(void);
void RL_E(void);

void RL_H(void);
void RL_L(void);
void RL_HL(void);
void RL_A(void);

void RR_B(void);
void RR_C(void);
void RR_D(void);
void RR_E(void);

void RR_H(void);
void RR_L(void);
void RR_HL(void);
void RR_A(void);

void SLA_B(void);
void SLA_C(void);
void SLA_D(void);
void SLA_E(void);

void SLA_H(void);
void SLA_L(void);
void SLA_HL(void);
void SLA_A(void);

void SRA_B(void);
void SRA_C(void);
void SRA_D(void);
void SRA_E(void);

void SRA_H(void);
void SRA_L(void);
void SRA_HL(void);
void SRA_A(void);

void SWAP_B(void);
void SWAP_C(void);
void SWAP_D(void);
void SWAP_E(void);

void SWAP_H(void);
void SWAP_L(void);
void SWAP_HL(void);
void SWAP_A(void);

void SRL_B(void);
void SRL_C(void);
void SRL_D(void);
void SRL_E(void);

void SRL_H(void);
void SRL_L(void);
void SRL_HL(void);
void SRL_A(void);

void BIT_0_B(void);
void BIT_0_C(void);
void BIT_0_D(void);
void BIT_0_E(void);

void BIT_0_H(void);
void BIT_0_L(void);
void BIT_0_HL(void);
void BIT_0_A(void);

void BIT_1_B(void);
void BIT_1_C(void);
void BIT_1_D(void);
void BIT_1_E(void);

void BIT_1_H(void);
void BIT_1_L(void);
void BIT_1_HL(void);
void BIT_1_A(void);

void BIT_2_B(void);
void BIT_2_C(void);
void BIT_2_D(void);
void BIT_2_E(void);

void BIT_2_H(void);
void BIT_2_L(void);
void BIT_2_HL(void);
void BIT_2_A(void);

void BIT_3_B(void);
void BIT_3_C(void);
void BIT_3_D(void);
void BIT_3_E(void);

void BIT_3_H(void);
void BIT_3_L(void);
void BIT_3_HL(void);
void BIT_3_A(void);

void BIT_4_B(void);
void BIT_4_C(void);
void BIT_4_D(void);
void BIT_4_E(void);

void BIT_4_H(void);
void BIT_4_L(void);
void BIT_4_HL(void);
void BIT_4_A(void);

void BIT_5_B(void);
void BIT_5_C(void);
void BIT_5_D(void);
void BIT_5_E(void);

void BIT_5_H(void);
void BIT_5_L(void);
void BIT_5_HL(void);
void BIT_5_A(void);

void BIT_6_B(void);
void BIT_6_C(void);
void BIT_6_D(void);
void BIT_6_E(void);

void BIT_6_H(void);
void BIT_6_L(void);
void BIT_6_HL(void);
void BIT_6_A(void);

void BIT_7_B(void);
void BIT_7_C(void);
void BIT_7_D(void);
void BIT_7_E(void);

void BIT_7_H(void);
void BIT_7_L(void);
void BIT_7_HL(void);
void BIT_7_A(void);

void RES_0_B(void);
void RES_0_C(void);
void RES_0_D(void);
void RES_0_E(void);

void RES_0_H(void);
void RES_0_L(void);
void RES_0_HL(void);
void RES_0_A(void);

void RES_1_B(void);
void RES_1_C(void);
void RES_1_D(void);
void RES_1_E(void);

void RES_1_H(void);
void RES_1_L(void);
void RES_1_HL(void);
void RES_1_A(void);

void RES_2_B(void);
void RES_2_C(void);
void RES_2_D(void);
void RES_2_E(void);

void RES_2_H(void);
void RES_2_L(void);
void RES_2_HL(void);
void RES_2_A(void);

void RES_3_B(void);
void RES_3_C(void);
void RES_3_D(void);
void RES_3_E(void);

void RES_3_H(void);
void RES_3_L(void);
void RES_3_HL(void);
void RES_3_A(void);

void RES_4_B(void);
void RES_4_C(void);
void RES_4_D(void);
void RES_4_E(void);

void RES_4_H(void);
void RES_4_L(void);
void RES_4_HL(void);
void RES_4_A(void);

void RES_5_B(void);
void RES_5_C(void);
void RES_5_D(void);
void RES_5_E(void);

void RES_5_H(void);
void RES_5_L(void);
void RES_5_HL(void);
void RES_5_A(void);

void RES_6_B(void);
void RES_6_C(void);
void RES_6_D(void);
void RES_6_E(void);

void RES_6_H(void);
void RES_6_L(void);
void RES_6_HL(void);
void RES_6_A(void);

void RES_7_B(void);
void RES_7_C(void);
void RES_7_D(void);
void RES_7_E(void);

void RES_7_H(void);
void RES_7_L(void);
void RES_7_HL(void);
void RES_7_A(void);

void SET_0_B(void);
void SET_0_C(void);
void SET_0_D(void);
void SET_0_E(void);

void SET_0_H(void);
void SET_0_L(void);
void SET_0_HL(void);
void SET_0_A(void);

void SET_1_B(void);
void SET_1_C(void);
void SET_1_D(void);
void SET_1_E(void);

void SET_1_H(void);
void SET_1_L(void);
void SET_1_HL(void);
void SET_1_A(void);

void SET_2_B(void);
void SET_2_C(void);
void SET_2_D(void);
void SET_2_E(void);

void SET_2_H(void);
void SET_2_L(void);
void SET_2_HL(void);
void SET_2_A(void);

void SET_3_B(void);
void SET_3_C(void);
void SET_3_D(void);
void SET_3_E(void);

void SET_3_H(void);
void SET_3_L(void);
void SET_3_HL(void);
void SET_3_A(void);

void SET_4_B(void);
void SET_4_C(void);
void SET_4_D(void);
void SET_4_E(void);

void SET_4_H(void);
void SET_4_L(void);
void SET_4_HL(void);
void SET_4_A(void);

void SET_5_B(void);
void SET_5_C(void);
void SET_5_D(void);
void SET_5_E(void);

void SET_5_H(void);
void SET_5_L(void);
void SET_5_HL(void);
void SET_5_A(void);

void SET_6_B(void);
void SET_6_C(void);
void SET_6_D(void);
void SET_6_E(void);

void SET_6_H(void);
void SET_6_L(void);
void SET_6_HL(void);
void SET_6_A(void);

void SET_7_B(void);
void SET_7_C(void);
void SET_7_D(void);
void SET_7_E(void);

void SET_7_H(void);
void SET_7_L(void);
void SET_7_HL(void);
void SET_7_A(void);
