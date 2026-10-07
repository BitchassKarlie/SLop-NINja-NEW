/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000be000 FUN_000be000 */

undefined4
FUN_000be000(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (0 < param_1[2]) {
    uVar5 = param_7 - param_1[3];
    if ((int)uVar5 < 0) {
      param_6 = param_6 + param_3;
      iVar4 = 0;
      iVar3 = param_3;
      iVar6 = param_4;
      while (iVar3 < param_6) {
        iVar1 = FUN_000bdee8(param_1,param_5,param_3,param_7,iVar6);
        if (iVar1 == -1) {
          return 0xffffffff;
        }
        param_7 = *param_1;
        param_3 = param_1[4];
        iVar1 = param_3 + param_7 * iVar1 * 4;
        if (0 < param_7) {
          param_7 = 0;
          do {
            iVar2 = *(int *)(param_2 + iVar4 * 4);
            iVar4 = iVar4 + 1;
            *(int *)(iVar2 + iVar3 * 4) =
                 (*(int *)(iVar1 + param_7 * 4) << (-uVar5 & 0xff)) + *(int *)(iVar2 + iVar3 * 4);
            if (iVar4 == param_4) {
              iVar3 = iVar3 + 1;
              iVar4 = 0;
            }
            param_3 = *param_1;
            param_7 = param_7 + 1;
          } while (param_7 < param_3);
        }
      }
    }
    else {
      param_6 = param_6 + param_3;
      iVar4 = 0;
      iVar3 = param_3;
      iVar6 = param_4;
      while (iVar3 < param_6) {
        while( true ) {
          iVar1 = FUN_000bdee8(param_1,param_5,param_3,param_7,iVar6);
          if (iVar1 == -1) {
            return 0xffffffff;
          }
          param_7 = *param_1;
          param_3 = param_1[4];
          iVar1 = param_3 + param_7 * iVar1 * 4;
          if (param_7 < 1) break;
          param_7 = 0;
          do {
            iVar2 = *(int *)(param_2 + iVar4 * 4);
            iVar4 = iVar4 + 1;
            *(int *)(iVar2 + iVar3 * 4) =
                 (*(int *)(iVar1 + param_7 * 4) >> (uVar5 & 0xff)) + *(int *)(iVar2 + iVar3 * 4);
            if (iVar4 == param_4) {
              iVar3 = iVar3 + 1;
              iVar4 = 0;
            }
            param_3 = *param_1;
            param_7 = param_7 + 1;
          } while (param_7 < param_3);
          if (param_6 <= iVar3) {
            return 0;
          }
        }
      }
    }
  }
  return 0;
}



