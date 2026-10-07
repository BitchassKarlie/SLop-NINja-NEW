/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9bf8 FUN_000b9bf8 */

int FUN_000b9bf8(int param_1,undefined4 param_2,undefined4 param_3,int **param_4,int *param_5,
                undefined *param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  int iVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  undefined auStack_58 [32];
  undefined auStack_38 [20];
  
  if (param_6 == (undefined *)0x0) {
    param_6 = auStack_38;
    lVar8 = FUN_000b9af0(param_1,param_6,0x400,0);
    if (lVar8 == -0x80) {
      return -0x80;
    }
    if (lVar8 < 0) {
      return -0x84;
    }
  }
  iVar6 = param_1 + 0x78;
  FUN_000bc280(param_2);
  FUN_000bc214(param_3);
  *(undefined4 *)(param_1 + 0x58) = 2;
  do {
    iVar2 = FUN_000c2e04(param_6);
    if (iVar2 == 0) goto LAB_000b9cee;
    if (param_4 != (int **)0x0) {
      iVar2 = *param_5;
      piVar7 = *param_4;
      iVar3 = FUN_000c2ec4(param_6);
      if ((piVar7 != (int *)0x0) && (iVar2 != 0)) {
        iVar5 = *piVar7;
        while( true ) {
          if (iVar5 == iVar3) {
            if (*param_4 != (int *)0x0) {
              free(*param_4);
            }
            iVar2 = -0x85;
            *param_4 = (int *)0x0;
            *param_5 = 0;
            goto LAB_000b9cf8;
          }
          if (iVar2 == 1) break;
          piVar7 = piVar7 + 1;
          iVar5 = *piVar7;
          iVar2 = iVar2 + -1;
        }
      }
      iVar2 = FUN_000c2ec4(param_6);
      iVar3 = *param_5;
      *param_5 = iVar3 + 1;
      if (*param_4 == (int *)0x0) {
        piVar7 = (int *)malloc(4);
        *param_4 = piVar7;
      }
      else {
        piVar7 = (int *)realloc(*param_4,(iVar3 + 1) * 4);
        *param_4 = piVar7;
      }
      piVar7[*param_5 + -1] = iVar2;
    }
    if (*(int *)(param_1 + 0x58) < 3) {
      uVar4 = FUN_000c2ec4(param_6);
      FUN_000c3050(iVar6,uVar4);
      FUN_000c3594(iVar6,param_6);
      iVar2 = FUN_000c3150(iVar6,auStack_58);
      if ((0 < iVar2) && (iVar2 = FUN_000bc228(auStack_58), iVar2 != 0)) {
        *(undefined4 *)(param_1 + 0x58) = 3;
        iVar2 = FUN_000bc434(param_2,param_3,auStack_58);
        if (iVar2 != 0) goto LAB_000b9d4a;
      }
    }
    lVar8 = FUN_000b9af0(param_1,param_6,0x400,0);
    if (lVar8 == -0x80) {
      iVar2 = -0x80;
      goto LAB_000b9cf8;
    }
    if (lVar8 < 0) goto LAB_000b9cf4;
  } while ((*(int *)(param_1 + 0x58) != 3) ||
          (iVar3 = *(int *)(param_1 + 0x1c8), iVar2 = FUN_000c2ec4(param_6), iVar3 != iVar2));
  FUN_000c3594(iVar6,param_6);
LAB_000b9cee:
  if (*(int *)(param_1 + 0x58) == 3) {
    bVar1 = false;
    iVar3 = 0;
LAB_000b9d76:
    while (iVar2 = FUN_000c3150(iVar6,auStack_58), iVar2 != 0) {
      if (iVar2 == -1) goto LAB_000b9d4a;
      iVar2 = FUN_000bc434(param_2,param_3,auStack_58);
      if (iVar2 != 0) goto LAB_000b9cf8;
      iVar3 = iVar3 + 1;
      if (iVar3 == 2) {
        return 0;
      }
    }
    if (iVar3 < 2) {
      while( true ) {
        FUN_000b9af0(param_1,param_6,0x400,0);
        if (extraout_r1 < 0) {
          iVar2 = -0x85;
          goto LAB_000b9cf8;
        }
        iVar5 = *(int *)(param_1 + 0x1c8);
        iVar2 = FUN_000c2ec4(param_6);
        if (iVar5 == iVar2) break;
        iVar2 = FUN_000c2e04(param_6);
        if (iVar2 != 0) {
          if (bVar1) goto LAB_000b9d4a;
          bVar1 = true;
        }
      }
      FUN_000c3594(iVar6,param_6);
      if (iVar3 < 2) goto LAB_000b9d76;
    }
    return 0;
  }
LAB_000b9cf4:
  iVar2 = -0x84;
LAB_000b9cf8:
  FUN_000bc308(param_2);
  FUN_000bc2b4(param_3);
  *(undefined4 *)(param_1 + 0x58) = 2;
  return iVar2;
LAB_000b9d4a:
  iVar2 = -0x85;
  goto LAB_000b9cf8;
}



