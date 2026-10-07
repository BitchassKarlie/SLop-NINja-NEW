/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c3ac0 FUN_000c3ac0 */

undefined4 FUN_000c3ac0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) < 0) {
LAB_000c3aea:
    uVar2 = 0;
  }
  else {
    do {
      iVar1 = FUN_000c39b4(param_1,param_2);
      if (0 < iVar1) {
        return 1;
      }
      if (iVar1 == 0) goto LAB_000c3aea;
    } while (*(int *)(param_1 + 0x10) != 0);
    uVar2 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  return uVar2;
}



