/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b97b0 FUN_000b97b0 */

longlong FUN_000b97b0(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*(int *)(param_1 + 0x58) < 2) || (*(int *)(param_1 + 4) == 0)) ||
     (*(int *)(param_1 + 0x34) <= param_2)) {
    lVar4 = -0x83;
  }
  else if (param_2 < 0) {
    if (*(int *)(param_1 + 0x34) < 1) {
      lVar4 = 0;
    }
    else {
      iVar2 = 0;
      lVar1 = 0;
      do {
        lVar5 = FUN_000b97b0(param_1,iVar2);
        lVar4 = lVar5 + lVar1;
        iVar2 = iVar2 + 1;
        lVar1 = lVar5 + lVar1;
      } while (iVar2 < *(int *)(param_1 + 0x34));
    }
  }
  else {
    iVar2 = param_2 * 2 + 1;
    lVar4 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x44) + iVar2 * 8) * 1000;
    iVar3 = *(int *)(*(int *)(param_1 + 0x48) + param_2 * 0x20 + 8);
    lVar4 = __aeabi_ldivmod((int)lVar4,
                            *(int *)(*(int *)(param_1 + 0x44) + iVar2 * 8 + 4) * 1000 +
                            (int)((ulonglong)lVar4 >> 0x20),iVar3,iVar3 >> 0x1f);
  }
  return lVar4;
}



