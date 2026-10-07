/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bfce4 FUN_000bfce4 */

void FUN_000bfce4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1 - param_1[8];
  param_1[8] = param_1[8] + *param_1;
  iVar1 = param_1[1] - param_1[9];
  param_1[9] = param_1[9] + param_1[1];
  iVar2 = param_1[10];
  *param_1 = (int)((ulonglong)((longlong)(iVar1 + iVar3) * 0x5a82799a) >> 0x20) << 1;
  iVar4 = param_1[3];
  param_1[1] = (int)((ulonglong)((longlong)(iVar1 - iVar3) * 0x5a82799a) >> 0x20) << 1;
  iVar1 = param_1[2];
  param_1[10] = iVar1 + iVar2;
  param_1[2] = iVar4 - param_1[0xb];
  param_1[3] = iVar2 - iVar1;
  iVar2 = param_1[0xc] - param_1[4];
  param_1[0xc] = param_1[4] + param_1[0xc];
  iVar1 = param_1[0xd] - param_1[5];
  param_1[0xb] = param_1[0xb] + iVar4;
  param_1[0xd] = param_1[5] + param_1[0xd];
  param_1[4] = (int)((ulonglong)((longlong)(iVar2 - iVar1) * 0x5a82799a) >> 0x20) << 1;
  iVar4 = param_1[0xe];
  iVar3 = param_1[0xf];
  param_1[5] = (int)((ulonglong)((longlong)(iVar1 + iVar2) * 0x5a82799a) >> 0x20) << 1;
  param_1[0xe] = param_1[6] + iVar4;
  param_1[6] = iVar4 - param_1[6];
  param_1[0xf] = param_1[7] + iVar3;
  param_1[7] = iVar3 - param_1[7];
  FUN_000bfc88();
  FUN_000bfc88(param_1 + 8);
  return;
}



