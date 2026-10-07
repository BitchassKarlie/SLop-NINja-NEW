/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9750 FUN_000b9750 */

longlong FUN_000b9750(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((*(int *)(param_1 + 0x58) < 2) || (*(int *)(param_1 + 4) == 0)) ||
     (*(int *)(param_1 + 0x34) <= param_2)) {
    lVar1 = -0x83;
  }
  else if (param_2 < 0) {
    if (*(int *)(param_1 + 0x34) < 1) {
      lVar1 = 0;
    }
    else {
      iVar2 = 0;
      lVar1 = 0;
      do {
        lVar3 = FUN_000b9750(param_1,iVar2);
        lVar1 = lVar3 + lVar1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x34));
    }
  }
  else {
    lVar1 = *(longlong *)(*(int *)(param_1 + 0x44) + param_2 * 0x10 + 8);
  }
  return lVar1;
}



