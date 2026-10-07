/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000be0f0 FUN_000be0f0 */

undefined4 FUN_000be0f0(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (param_1[2] < 1) {
    if (0 < param_4) {
      iVar2 = 0;
      iVar8 = *param_1;
      do {
        if (0 < iVar8) {
          puVar3 = (undefined4 *)(param_2 + iVar2 * 4);
          do {
            *puVar3 = 0;
            iVar2 = iVar2 + 1;
            iVar8 = *param_1;
            puVar3 = puVar3 + 1;
          } while (0 < iVar8);
        }
      } while (iVar2 < param_4);
    }
  }
  else {
    uVar9 = param_5 - param_1[3];
    if ((int)uVar9 < 0) {
      if (0 < param_4) {
        iVar8 = 0;
        do {
          iVar2 = FUN_000bdee8(param_1,param_3);
          if (iVar2 == -1) {
            return 0xffffffff;
          }
          iVar6 = *param_1;
          iVar4 = param_1[4];
          if (0 < iVar6) {
            iVar7 = 0;
            iVar1 = iVar8 * 4;
            iVar5 = 0;
            do {
              iVar5 = iVar5 + 1;
              iVar8 = iVar8 + 1;
              *(int *)(param_2 + iVar1 + iVar7) =
                   *(int *)(iVar4 + iVar6 * iVar2 * 4 + iVar7) << (-uVar9 & 0xff);
              iVar7 = iVar7 + 4;
            } while (iVar5 < *param_1);
          }
        } while (iVar8 < param_4);
      }
    }
    else if (0 < param_4) {
      iVar8 = 0;
      do {
        while( true ) {
          iVar2 = FUN_000bdee8(param_1,param_3);
          if (iVar2 == -1) {
            return 0xffffffff;
          }
          iVar6 = *param_1;
          iVar4 = param_1[4];
          if (iVar6 < 1) break;
          iVar7 = 0;
          iVar1 = iVar8 * 4;
          iVar5 = 0;
          do {
            iVar5 = iVar5 + 1;
            iVar8 = iVar8 + 1;
            *(int *)(param_2 + iVar1 + iVar7) =
                 *(int *)(iVar4 + iVar6 * iVar2 * 4 + iVar7) >> (uVar9 & 0xff);
            iVar7 = iVar7 + 4;
          } while (iVar5 < *param_1);
          if (param_4 <= iVar8) {
            return 0;
          }
        }
      } while (iVar8 < param_4);
    }
  }
  return 0;
}



