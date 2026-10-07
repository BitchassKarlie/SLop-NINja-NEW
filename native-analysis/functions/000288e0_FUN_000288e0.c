/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000288e0 FUN_000288e0 */

void FUN_000288e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00028900;
  *(undefined4 *)(DAT_00028900 + 0x288f8) = param_2;
  iVar2 = DAT_00028904;
  *(undefined4 *)(iVar1 + 0x288f4) = param_1;
  *(undefined4 *)(iVar1 + 0x288fc) = param_4;
  *(undefined4 *)(iVar2 + 0x28940) = param_3;
  *(undefined *)(iVar2 + 0x28944) = param_5;
  return;
}



