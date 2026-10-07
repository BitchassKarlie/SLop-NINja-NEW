/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001bfac FUN_0001bfac */

void FUN_0001bfac(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int **ppiVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  if (((*param_1 != 0) && (iVar2 = param_1[0x404], iVar2 != 0)) && (0 < param_1[0x408])) {
    iVar7 = 0;
    iVar8 = 0;
    while( true ) {
      piVar6 = *(int **)(iVar2 + iVar7 + 4);
      for (ppiVar5 = (int **)*piVar6; (int **)piVar6 != ppiVar5; ppiVar5 = (int **)*ppiVar5) {
        piVar3 = ppiVar5[2];
        bVar1 = *(byte *)(piVar3 + 3);
        if ((bVar1 & 0x11) == 0) {
          *(byte *)(piVar3 + 3) = bVar1 | 0xc;
          (**(code **)(*piVar3 + 0x10))(piVar3,param_2);
          (**(code **)(*piVar3 + 0x18))(piVar3,param_2);
          bVar1 = *(byte *)(piVar3 + 3);
        }
        if ((int)((uint)bVar1 << 0x1b) < 0) {
          iVar2 = param_1[0x403];
          param_1[iVar2 + 0x203] = (int)piVar3;
          param_1[0x403] = iVar2 + 1;
        }
      }
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0xc;
      if (param_1[0x408] <= iVar8) break;
      iVar2 = param_1[0x404];
    }
  }
  if (param_1[0x403] != 0) {
    uVar4 = 0;
    piVar6 = param_1 + 0x203;
    do {
      FUN_0001bf54(param_1,*piVar6);
      uVar4 = uVar4 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar4 < (uint)param_1[0x403]);
  }
  param_1[0x403] = 0;
  return;
}



