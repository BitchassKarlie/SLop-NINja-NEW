/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001ed28 FUN_0001ed28 */

void FUN_0001ed28(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)(DAT_0001ed70 + 0x1ed30);
  iVar3 = *piVar4;
  if (iVar3 != 0) {
    iVar1 = iVar3 + *(int *)(iVar3 + -4) * 0x44;
    iVar2 = iVar1;
    if (iVar3 != iVar1) {
      do {
        iVar1 = iVar1 + -0x44;
        FUN_0001ed0c(iVar1);
        iVar2 = *piVar4;
      } while (iVar2 != iVar1);
    }
    operator_delete__((void *)(iVar2 + -8));
    *(undefined4 *)(DAT_0001ed74 + 0x1ed64) = 0;
  }
  *(undefined4 *)((int)&DAT_0001ed74 + DAT_0001ed78) = 0;
  return;
}



