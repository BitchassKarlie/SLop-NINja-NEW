/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c2850 FUN_000c2850 */

void FUN_000c2850(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 + param_1[1];
  uVar2 = uVar1 + 7 & (int)uVar1 >> 0x20;
  if (uVar1 < 0xfffffff9) {
    uVar2 = uVar1;
  }
  param_1[1] = uVar1 & 7;
  param_1[3] = param_1[3] + ((int)uVar2 >> 3);
  *param_1 = *param_1 + ((int)uVar2 >> 3);
  return;
}



