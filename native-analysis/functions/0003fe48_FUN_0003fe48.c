/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003fe48 FUN_0003fe48 */

int * FUN_0003fe48(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  FUN_0004a8dc();
  iVar2 = DAT_0003ff48;
  iVar1 = DAT_0003ff44;
  param_1[0x20] = 0;
  *param_1 = iVar1 + 0x3fe6c;
  *(undefined *)((int)param_1 + 0x93) = 0xff;
  piVar3 = param_1 + 0x3e;
  *(undefined *)(param_1 + 0x24) = 0;
  *(undefined *)((int)param_1 + 0x91) = 0;
  *(undefined *)((int)param_1 + 0x92) = 0;
  param_1[0x34] = 0;
  do {
    *(undefined *)piVar3 = 0;
    *(undefined *)(piVar3 + 8) = 0;
    piVar3[0x10] = 0;
    piVar3[0x12] = 0;
    piVar3[0x11] = 0;
    piVar3[0x13] = 0;
    piVar3 = piVar3 + 0x14;
  } while (piVar3 != param_1 + 0x7a);
  FUN_0003f92c();
  iVar1 = DAT_0003ff40;
  *(undefined *)((int)param_1 + 0x26) = 1;
  param_1[8] = iVar1;
  *(undefined *)((int)param_1 + 0x92) = 0x74;
  *(undefined *)((int)param_1 + 0x93) = 0xff;
  param_1[0x1d] = 0;
  *(undefined *)((int)param_1 + 0x91) = 0x5d;
  *(undefined *)(param_1 + 0x24) = 0x3b;
  FUN_00017d64(param_1 + 0x34,0);
  iVar4 = DAT_0003ff4c;
  param_1[0x32] = iVar1;
  param_1[0x31] = 0;
  param_1[0x1e] = -1;
  iVar4 = *(int *)(iVar2 + 0x3fe7a + iVar4);
  param_1[0x1f] = -1;
  iVar2 = DAT_0003ff50 + 0x3feee;
  param_1[0x7a] = *(int *)(iVar4 + 4);
  iVar2 = FUN_0006fd8c(*(undefined4 *)(iVar4 + 0x50),iVar2);
  param_1[0x37] = 0;
  param_1[0x3c] = 0;
  param_1[0x1c] = iVar1;
  param_1[0x3d] = 0;
  param_1[0x3a] = iVar1;
  param_1[0x38] = 0;
  *(undefined *)(param_1 + 0x33) = 0;
  param_1[0x39] = 0;
  iVar2 = iVar2 + -1;
  if (iVar2 < 0) {
    iVar2 = 1;
  }
  param_1[0x36] = iVar2;
  FUN_000a3a68();
  iVar1 = FUN_000a5318();
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = 2;
  }
  param_1[0x3b] = iVar1;
  return param_1;
}



