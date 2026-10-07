/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099270 FUN_00099270 */

int FUN_00099270(int param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = 0;
  sVar2 = strlen(param_2);
  iVar7 = *(int *)(param_1 + 0x40);
  if (iVar7 != 0) {
    do {
      iVar8 = *(int *)(param_1 + 0x44);
      while( true ) {
        iVar5 = iVar6 + ((uint)(iVar7 - iVar6) >> 1);
        iVar9 = iVar8 + iVar5 * 0x28;
        uVar4 = *(uint *)(iVar9 + 8);
        sVar1 = sVar2;
        if (uVar4 <= sVar2) {
          sVar1 = uVar4;
        }
        iVar3 = memcmp(param_2,*(void **)(iVar8 + iVar5 * 0x28),sVar1 + 1);
        if (-1 < iVar3) break;
        iVar7 = iVar5;
        if (iVar5 == iVar6) {
          return 0;
        }
      }
      if (iVar3 == 0) {
        return iVar9;
      }
      iVar6 = iVar5 + 1;
    } while (iVar7 != iVar6);
  }
  return 0;
}



