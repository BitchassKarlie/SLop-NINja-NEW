/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099124 FUN_00099124 */

uint FUN_00099124(byte *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint extraout_r1;
  
  uVar2 = (uint)*param_1;
  if (uVar2 != 0) {
    uVar1 = FUN_0008f414();
    __aeabi_uidivmod(uVar1,param_2);
    uVar2 = extraout_r1;
  }
  return uVar2;
}



