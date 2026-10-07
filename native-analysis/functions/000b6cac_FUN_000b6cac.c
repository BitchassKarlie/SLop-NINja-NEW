/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b6cac FUN_000b6cac */

undefined4 FUN_000b6cac(int param_1,undefined4 param_2,undefined param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000bb1d8(param_2,param_1 + 8,0,0,*(undefined4 *)(DAT_000b6cf4 + 0xb6cb6),
                       *(undefined4 *)(DAT_000b6cf4 + 0xb6cba),
                       *(undefined4 *)(DAT_000b6cf4 + 0xb6cbe),
                       *(undefined4 *)(DAT_000b6cf4 + 0xb6cc2));
  if ((iVar1 == 0) && (iVar1 = FUN_000bb0a0(param_1 + 8), iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x2a0) = param_2;
    uVar2 = 1;
    *(undefined *)(param_1 + 0x2a4) = param_3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



