/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bbe98 FUN_000bbe98 */

int FUN_000bbe98(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(param_1 + 4);
  if ((iVar1 < 0) || (iVar2 = *(int *)(param_1 + 0x14), iVar2 <= iVar1)) {
    iVar2 = 0;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      if (0 < *(int *)(iVar3 + 4)) {
        iVar2 = 0;
        while( true ) {
          *(int *)(*(int *)(param_1 + 0xc) + iVar2 * 4) =
               *(int *)(*(int *)(param_1 + 8) + iVar2 * 4) + iVar1 * 4;
          iVar2 = iVar2 + 1;
          if (*(int *)(iVar3 + 4) <= iVar2) break;
          iVar1 = *(int *)(param_1 + 0x18);
        }
      }
      *param_2 = *(undefined4 *)(param_1 + 0xc);
      iVar2 = *(int *)(param_1 + 0x14);
      iVar1 = *(int *)(param_1 + 0x18);
    }
    iVar2 = iVar2 - iVar1;
  }
  return iVar2;
}



