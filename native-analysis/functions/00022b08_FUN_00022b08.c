/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00022b08 FUN_00022b08 */

void FUN_00022b08(float **param_1,float param_2,float param_3,float param_4,float param_5,
                 undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  
  fVar3 = DAT_00022bf0;
  fVar2 = DAT_00022bec;
  fVar1 = DAT_00022be8;
  pfVar5 = *param_1;
  iVar7 = 0;
  pfVar6 = pfVar5;
  do {
    iVar7 = iVar7 + 1;
    fVar4 = (float)FUN_0009e880(param_6);
    pfVar6[4] = fVar1;
    pfVar6[3] = fVar1;
    pfVar6[5] = fVar2;
    pfVar6[2] = fVar3;
    pfVar6[6] = fVar4;
    pfVar6 = pfVar6 + 9;
  } while (iVar7 != 6);
  pfVar5[7] = fVar1;
  pfVar5[8] = fVar2;
  *pfVar5 = param_2 - param_4;
  pfVar5[1] = param_3 - param_5;
  pfVar5[9] = *pfVar5;
  pfVar5[10] = pfVar5[1];
  pfVar5[0xb] = pfVar5[2];
  pfVar5[0xc] = pfVar5[3];
  pfVar5[0xd] = pfVar5[4];
  pfVar5[0xe] = pfVar5[5];
  pfVar5[0xf] = pfVar5[6];
  pfVar5[0x10] = pfVar5[7];
  pfVar5[0x11] = 1.0;
  pfVar5[0x12] = param_2 - param_4;
  pfVar5[0x13] = param_3 + param_5;
  pfVar5[0x19] = fVar1;
  pfVar5[0x1a] = fVar1;
  pfVar5[0x1b] = param_2 + param_4;
  pfVar5[0x1c] = param_3 - param_5;
  pfVar5[0x22] = fVar2;
  pfVar5[0x23] = fVar2;
  pfVar5[0x24] = param_2 + param_4;
  pfVar5[0x25] = param_3 + param_5;
  pfVar5[0x2b] = fVar2;
  pfVar5[0x2c] = fVar1;
  pfVar5[0x2d] = pfVar5[0x24];
  pfVar5[0x2e] = pfVar5[0x25];
  pfVar5[0x2f] = pfVar5[0x26];
  pfVar5[0x30] = pfVar5[0x27];
  pfVar5[0x31] = pfVar5[0x28];
  pfVar5[0x32] = pfVar5[0x29];
  pfVar5[0x33] = pfVar5[0x2a];
  pfVar5[0x34] = pfVar5[0x2b];
  pfVar5[0x35] = pfVar5[0x2c];
  *param_1 = pfVar5 + 0x36;
  return;
}



