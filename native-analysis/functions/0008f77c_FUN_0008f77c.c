/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008f77c FUN_0008f77c */

bool FUN_0008f77c(byte *param_1,byte *param_2)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  
  sVar1 = strlen((char *)param_2);
  uVar3 = (uint)*param_2;
  if ((uVar3 == *param_1) && (uVar3 != 0)) {
    uVar3 = uVar3 - 0x20;
    if (uVar3 != 0) {
      uVar3 = 1;
    }
    if ((int)sVar1 < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar3 & 1;
    }
    if (uVar3 != 0) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        uVar3 = (uint)param_2[iVar2];
        if ((uVar3 != param_1[iVar2]) || (uVar3 == 0)) break;
        uVar3 = uVar3 - 0x20;
        if (uVar3 != 0) {
          uVar3 = 1;
        }
        if (iVar2 < (int)sVar1) {
          uVar3 = uVar3 & 1;
        }
        else {
          uVar3 = 0;
        }
      } while (uVar3 != 0);
      goto LAB_0008f792;
    }
  }
  iVar2 = 0;
LAB_0008f792:
  return (int)sVar1 <= iVar2;
}



