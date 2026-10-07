/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000be1e8 FUN_000be1e8 */

undefined4 FUN_000be1e8(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  if (0 < param_1[2]) {
    uVar8 = param_5 - param_1[3];
    if ((int)uVar8 < 0) {
      if (0 < param_4) {
        iVar7 = 0;
        do {
          iVar1 = FUN_000bdee8(param_1,param_3);
          if (iVar1 == -1) {
            return 0xffffffff;
          }
          iVar5 = *param_1;
          iVar3 = param_1[4];
          if (0 < iVar5) {
            iVar6 = 0;
            iVar2 = param_2 + iVar7 * 4;
            iVar4 = 0;
            do {
              iVar4 = iVar4 + 1;
              iVar7 = iVar7 + 1;
              *(int *)(iVar2 + iVar6) =
                   (*(int *)(iVar3 + iVar5 * iVar1 * 4 + iVar6) << (-uVar8 & 0xff)) +
                   *(int *)(iVar2 + iVar6);
              iVar6 = iVar6 + 4;
            } while (iVar4 < *param_1);
          }
        } while (iVar7 < param_4);
      }
    }
    else if (0 < param_4) {
      iVar7 = 0;
      do {
        while( true ) {
          iVar1 = FUN_000bdee8(param_1,param_3);
          if (iVar1 == -1) {
            return 0xffffffff;
          }
          iVar5 = *param_1;
          iVar3 = param_1[4];
          if (iVar5 < 1) break;
          iVar6 = 0;
          iVar2 = param_2 + iVar7 * 4;
          iVar4 = 0;
          do {
            iVar4 = iVar4 + 1;
            iVar7 = iVar7 + 1;
            *(int *)(iVar2 + iVar6) =
                 (*(int *)(iVar3 + iVar5 * iVar1 * 4 + iVar6) >> (uVar8 & 0xff)) +
                 *(int *)(iVar2 + iVar6);
            iVar6 = iVar6 + 4;
          } while (iVar4 < *param_1);
          if (param_4 <= iVar7) {
            return 0;
          }
        }
      } while (iVar7 < param_4);
    }
  }
  return 0;
}



