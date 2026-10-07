/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084dbc FUN_00084dbc */

int FUN_00084dbc(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar4 = param_2;
  uVar6 = param_3;
  if (param_3 < param_4) {
    do {
      *(undefined4 *)(iVar4 + 4) = 0;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0;
      iVar7 = *(int *)(uVar6 + 4);
      iVar5 = *(int *)(uVar6 + 0xc) - iVar7;
      if (iVar5 == -1) {
        FUN_00017cb8(iVar4,0xffffffff);
LAB_00084e1e:
        iVar2 = *(int *)(iVar4 + 4);
        iVar1 = (*(int *)(iVar4 + 8) + -1) - iVar2;
        if (iVar1 != 0) {
          iVar3 = 0;
          do {
            iVar1 = iVar1 + -1;
            *(undefined *)(iVar2 + iVar3) = *(undefined *)(iVar7 + iVar3);
            if (iVar1 == 0) break;
            iVar3 = iVar3 + 1;
          } while (iVar5 != iVar3);
          iVar2 = *(int *)(iVar4 + 4);
        }
        *(int *)(iVar4 + 0xc) = iVar2 + iVar5;
      }
      else {
        FUN_00017cb8(iVar4,iVar5);
        if (iVar5 != 0) goto LAB_00084e1e;
      }
      if (*(void **)(uVar6 + 4) != (void *)0x0) {
        operator_delete(*(void **)(uVar6 + 4));
        *(undefined4 *)(uVar6 + 8) = 0;
        *(undefined4 *)(uVar6 + 0xc) = 0;
        *(undefined4 *)(uVar6 + 4) = 0;
      }
      uVar6 = uVar6 + 0x10;
      iVar4 = iVar4 + 0x10;
    } while (uVar6 < param_4);
    param_2 = param_2 + (~param_3 + param_4 & 0xfffffff0) + 0x10;
  }
  return param_2;
}



