/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b668c FUN_000b668c */

undefined4 FUN_000b668c(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  if (uVar1 < 6) {
    uVar2 = *(undefined4 *)(DAT_000b66a8 + 0xb669e + uVar1 * 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



