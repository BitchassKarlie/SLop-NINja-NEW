/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008fa30 FUN_0008fa30 */

void FUN_0008fa30(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float extraout_s15;
  float fVar10;
  undefined8 uVar11;
  undefined4 local_54;
  int local_50;
  undefined auStack_4c [32];
  int local_2c;
  
  iVar1 = DAT_0008fb20;
  iVar8 = 0;
  iVar7 = DAT_0008fb1c + 0x8fa48;
  local_2c = **(int **)(iVar7 + DAT_0008fb20);
  param_2[2] = DAT_0008fb18;
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < param_3) {
    iVar4 = DAT_0008fb28 + 0x8fa72;
    iVar6 = DAT_0008fb2c + 0x8fa78;
    iVar9 = DAT_0008fb24 + 0x8fa80;
    do {
      local_54 = 0;
      local_50 = -0xaabe;
      iVar2 = FUN_0008f7dc(param_1 + iVar8,auStack_4c,&local_50,&local_54);
      iVar3 = FUN_0008f77c(auStack_4c,iVar9);
      if (iVar3 == 0) {
        iVar3 = FUN_0008f77c(auStack_4c,iVar4);
        if (iVar3 == 0) {
          uVar11 = FUN_0008f77c(auStack_4c,iVar6);
          if ((int)uVar11 != 0) {
            piVar5 = (int *)((ulonglong)uVar11 >> 0x20);
            fVar10 = extraout_s15;
            if (local_50 != -0xaabe) {
              fVar10 = (float)(longlong)local_50;
              piVar5 = param_2;
            }
            if (local_50 != -0xaabe) {
              piVar5[2] = (int)fVar10;
            }
          }
        }
        else if (local_50 != -0xaabe) {
          param_2[1] = local_50;
        }
      }
      else if (local_50 != -0xaabe) {
        *param_2 = local_50;
      }
      if (iVar2 < 0) {
        iVar8 = (iVar8 + 2) - iVar2;
        break;
      }
      iVar8 = iVar8 + iVar2;
    } while (iVar8 < param_3);
  }
  if (local_2c != **(int **)(iVar7 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar8);
  }
  return;
}



