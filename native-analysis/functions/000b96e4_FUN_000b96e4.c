/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b96e4 FUN_000b96e4 */

longlong FUN_000b96e4(int param_1,int param_2)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  
  if (((*(int *)(param_1 + 0x58) < 2) || (*(int *)(param_1 + 4) == 0)) ||
     (*(int *)(param_1 + 0x34) <= param_2)) {
    lVar1 = -0x83;
  }
  else if (param_2 < 0) {
    if (*(int *)(param_1 + 0x34) < 1) {
      lVar1 = 0;
    }
    else {
      iVar3 = 0;
      lVar1 = 0;
      do {
        lVar4 = FUN_000b96e4(param_1,iVar3);
        lVar1 = lVar4 + lVar1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x34));
    }
  }
  else {
    puVar2 = (uint *)(*(int *)(param_1 + 0x38) + param_2 * 8);
    lVar1 = CONCAT44((puVar2[3] - puVar2[1]) - (uint)(puVar2[2] < *puVar2),puVar2[2] - *puVar2);
  }
  return lVar1;
}



