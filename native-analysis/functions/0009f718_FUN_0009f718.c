/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009f718 FUN_0009f718 */

void FUN_0009f718(int **param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  FILE *pFVar7;
  char *__modes;
  int iVar8;
  int iVar9;
  int *piVar10;
  char acStack_21c [512];
  int local_1c;
  
  iVar3 = DAT_0009f7f0;
  iVar8 = DAT_0009f7ec + 0x9f728;
  local_1c = **(int **)(iVar8 + DAT_0009f7f0);
  if (**param_1 == 0) {
    iVar5 = FUN_0009e480(param_1 + 2);
    iVar9 = 0;
    do {
      cVar1 = *(char *)(iVar5 + iVar9);
      cVar2 = *(char *)(DAT_0009f7f4 + 0x9f862 + iVar9);
      if (cVar1 != cVar2) {
        if (cVar2 == '\\') {
          if (cVar1 != '/') goto LAB_0009f7d4;
        }
        else if ((cVar2 != '/') || (cVar1 != '\\')) {
LAB_0009f7d4:
          uVar4 = (uint)*(byte *)(param_1 + 0xd);
          goto LAB_0009f740;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 3);
    uVar6 = FUN_0009e480(param_1 + 2);
    FUN_0009f3c4(uVar6,acStack_21c);
    if (param_1[0xf] == (int *)0x7) {
      __modes = (char *)(DAT_0009f7fc + 0x9f7e0);
    }
    else {
      __modes = (char *)(DAT_0009f7f8 + 0x9f798);
    }
    piVar10 = *param_1;
    pFVar7 = fopen(acStack_21c,__modes);
    piVar10[2] = (int)pFVar7;
    if ((FILE *)(*param_1)[2] == (FILE *)0x0) {
      param_1[0xe] = (int *)0x0;
      *(undefined *)(param_1 + 0xd) = 0;
      uVar4 = 0;
    }
    else {
      fseek((FILE *)(*param_1)[2],0,2);
      piVar10 = (int *)ftell((FILE *)(*param_1)[2]);
      param_1[0xe] = piVar10;
      fseek((FILE *)(*param_1)[2],0,0);
      uVar4 = 1;
      *(undefined *)(param_1 + 0xd) = 1;
    }
  }
  else {
    uVar4 = FUN_0009f4cc(param_1,0,0);
    *(char *)(param_1 + 0xd) = (char)uVar4;
  }
LAB_0009f740:
  if (local_1c == **(int **)(iVar8 + iVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



