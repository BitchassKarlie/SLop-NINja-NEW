/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00096518 FUN_00096518 */

int FUN_00096518(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int local_28;
  
  if (param_2 < param_3) {
    iVar5 = 0;
    pcVar6 = (char *)(param_1 + param_2 + 0xb0);
    iVar4 = 0;
    bVar8 = false;
    bVar7 = true;
    iVar9 = DAT_00096604 + 0x9653c;
    iVar3 = DAT_00096608 + 0x9653e;
    local_28 = 0;
    bVar1 = false;
    bVar2 = false;
    do {
      if (bVar7) {
        if ((*(char *)(iVar3 + iVar4) != *pcVar6) && (*(char *)(iVar3 + iVar4 + 8) != *pcVar6)) {
          return local_28;
        }
        iVar4 = iVar4 + 1;
        if (4 < iVar4) {
          iVar4 = 0;
          bVar8 = true;
          bVar7 = false;
        }
      }
      else if (bVar8) {
        if (*pcVar6 == ']') {
          bVar2 = true;
          iVar4 = 0;
          bVar8 = false;
        }
        else {
          iVar10 = param_1 + iVar4;
          iVar4 = iVar4 + 1;
          *(char *)(iVar10 + 0x10d4) = *pcVar6;
        }
      }
      else if (bVar2) {
        if (*pcVar6 == '[') {
          iVar4 = 1;
          bVar1 = true;
          bVar2 = false;
        }
        else {
          iVar10 = param_1 + iVar4;
          iVar4 = iVar4 + 1;
          *(char *)(iVar10 + 0x12d4) = *pcVar6;
        }
      }
      else {
        if (!bVar1) {
          return local_28;
        }
        iVar10 = iVar9 + iVar4;
        if (((*(char *)(iVar10 + 0x10) == *pcVar6) || (*(char *)(iVar10 + 0x18) == *pcVar6)) &&
           (iVar4 = iVar4 + 1, 5 < iVar4)) {
          local_28 = iVar5;
        }
      }
      iVar5 = iVar5 + 1;
      pcVar6 = pcVar6 + 1;
    } while (iVar5 != param_3 - param_2);
  }
  else {
    local_28 = 0;
  }
  return local_28;
}



