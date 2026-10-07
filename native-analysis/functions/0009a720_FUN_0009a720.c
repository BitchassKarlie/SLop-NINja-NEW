/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a720 FUN_0009a720 */

void FUN_0009a720(int **param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *__format;
  byte local_4d;
  char acStack_4c [32];
  int local_2c;
  
  iVar3 = DAT_0009a860;
  iVar2 = DAT_0009a858;
  iVar11 = DAT_0009a854 + 0x9a730;
  __format = (char *)(DAT_0009a85c + 0x9a746);
  local_2c = **(int **)(iVar11 + DAT_0009a858);
  piVar7 = *param_1;
  iVar5 = *piVar7;
  iVar10 = 0;
LAB_0009a754:
  do {
    iVar9 = iVar10;
    if (iVar5 <= iVar10) {
LAB_0009a798:
      if (local_2c != **(int **)(iVar11 + iVar2)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    while( true ) {
      bVar1 = *(byte *)((int)piVar7 + iVar9 + 8);
      if (bVar1 == 0x26) break;
      if (bVar1 == 0x3c) {
        uVar6 = *(undefined4 *)(*(int *)(iVar11 + iVar3) + 0xc);
        uVar8 = *(undefined4 *)(*(int *)(iVar11 + iVar3) + 0x10);
LAB_0009a7f6:
        FUN_00099e28(param_2,uVar6,uVar8);
        piVar7 = *param_1;
        iVar5 = *piVar7;
        iVar10 = iVar9 + 1;
        goto LAB_0009a754;
      }
      if (bVar1 == 0x3e) {
        uVar6 = *(undefined4 *)(*(int *)(iVar11 + iVar3) + 0x18);
        uVar8 = *(undefined4 *)(*(int *)(iVar11 + iVar3) + 0x1c);
        goto LAB_0009a7f6;
      }
      if (bVar1 == 0x22) {
        uVar6 = *(undefined4 *)(*(int *)(iVar11 + iVar3) + 0x24);
        uVar8 = *(undefined4 *)(*(int *)(iVar11 + iVar3) + 0x28);
        goto LAB_0009a7f6;
      }
      if (bVar1 == 0x27) {
        uVar6 = *(undefined4 *)(*(int *)(iVar11 + iVar3) + 0x30);
        uVar8 = *(undefined4 *)(*(int *)(iVar11 + iVar3) + 0x34);
        goto LAB_0009a7f6;
      }
      if (0x1f < bVar1) {
        local_4d = bVar1;
        FUN_00099e28(param_2,&local_4d,1);
        piVar7 = *param_1;
        iVar5 = *piVar7;
        iVar10 = iVar9 + 1;
        goto LAB_0009a754;
      }
      iVar9 = iVar9 + 1;
      snprintf(acStack_4c,0x20,__format);
      sVar4 = strlen(acStack_4c);
      FUN_00099e28(param_2,acStack_4c,sVar4);
      piVar7 = *param_1;
      iVar5 = *piVar7;
      if (iVar5 <= iVar9) goto LAB_0009a798;
    }
    if (((iVar9 < iVar5 + -2) && (*(char *)((int)piVar7 + iVar9 + 9) == '#')) &&
       (*(char *)((int)piVar7 + iVar9 + 10) == 'x')) {
      while (iVar10 = iVar9, iVar9 < iVar5 + -1) {
        FUN_00099e28(param_2,(int)piVar7 + iVar9 + 8,1);
        piVar7 = *param_1;
        iVar10 = iVar9 + 1;
        if (*(char *)((int)piVar7 + iVar9 + 9) == ';') {
          iVar5 = *piVar7;
          break;
        }
        iVar9 = iVar10;
        iVar5 = *piVar7;
      }
      goto LAB_0009a754;
    }
    FUN_00099e28(param_2,**(undefined4 **)(iVar11 + iVar3),(*(undefined4 **)(iVar11 + iVar3))[1]);
    piVar7 = *param_1;
    iVar5 = *piVar7;
    iVar10 = iVar9 + 1;
  } while( true );
}



