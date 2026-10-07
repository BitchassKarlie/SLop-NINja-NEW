/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ab244 FUN_000ab244 */

void FUN_000ab244(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = param_3;
  *param_1 = uVar2;
  param_1[1] = uVar2;
  param_1[3] = uVar1;
  return;
}



