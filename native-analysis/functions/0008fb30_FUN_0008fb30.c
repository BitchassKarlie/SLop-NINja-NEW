/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008fb30 FUN_0008fb30 */

void FUN_0008fb30(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 local_54;
  int local_50;
  undefined auStack_4c [32];
  int local_2c;
  
  iVar3 = DAT_0008fd08;
  iVar2 = DAT_0008fcfc;
  iVar1 = DAT_0008fcf8;
  iVar8 = DAT_0008fcf4 + 0x8fb44;
  local_2c = **(int **)(iVar8 + DAT_0008fcf8);
  if (param_3 < 1) {
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    iVar6 = DAT_0008fd00 + 0x8fb64;
    iVar9 = DAT_0008fd04 + 0x8fb6a;
    iVar7 = DAT_0008fd0c + 0x8fb78;
    iVar10 = DAT_0008fd10 + 0x8fb7c;
    do {
      local_54 = 0;
      local_50 = -0xaabe;
      iVar4 = FUN_0008f7dc(param_1 + iVar11,auStack_4c,&local_50,&local_54);
      iVar5 = FUN_0008f77c(auStack_4c,iVar2 + 0x8fbb8);
      if (iVar5 == 0) {
        iVar5 = FUN_0008f77c(auStack_4c,iVar9);
        if (iVar5 == 0) {
          iVar5 = FUN_0008f77c(auStack_4c,iVar6);
          if (iVar5 == 0) {
            iVar5 = FUN_0008f77c(auStack_4c,iVar7);
            if (iVar5 == 0) {
              iVar5 = FUN_0008f77c(auStack_4c,iVar10);
              if (iVar5 == 0) {
                iVar5 = FUN_0008f77c(auStack_4c,iVar3 + 0x8fc6e);
                if (iVar5 == 0) {
                  iVar5 = FUN_0008f77c(auStack_4c,DAT_0008fd14 + 0x8fc90);
                  if (iVar5 == 0) {
                    iVar5 = FUN_0008f77c(auStack_4c,DAT_0008fd18 + 0x8fcb4);
                    if (iVar5 == 0) {
                      iVar5 = FUN_0008f77c(auStack_4c,DAT_0008fd1c + 0x8fcdc);
                      if ((iVar5 != 0) && (local_50 != -0xaabe)) {
                        *(char *)(param_2 + 0x10) = (char)local_50;
                      }
                    }
                    else if (local_50 != -0xaabe) {
                      *(float *)(param_2 + 8) = (float)(longlong)local_50;
                    }
                  }
                  else if (local_50 != -0xaabe) {
                    *(float *)(param_2 + 6) = (float)(longlong)local_50;
                  }
                }
                else if (local_50 != -0xaabe) {
                  *(float *)(param_2 + 4) = (float)(longlong)local_50;
                }
              }
              else if (local_50 != -0xaabe) {
                *(float *)(param_2 + 0xc) = (float)(longlong)local_50;
              }
            }
            else if (local_50 != -0xaabe) {
              *(float *)(param_2 + 2) = (float)(longlong)local_50;
            }
          }
          else if (local_50 != -0xaabe) {
            *(float *)(param_2 + 10) = (float)(longlong)local_50;
          }
        }
        else if (local_50 != -0xaabe) {
          *(float *)(param_2 + 0xe) = (float)(longlong)local_50;
        }
      }
      else if (local_50 != -0xaabe) {
        *param_2 = (short)local_50;
      }
      if (iVar4 < 0) {
        iVar11 = (iVar11 + 2) - iVar4;
        break;
      }
      iVar11 = iVar11 + iVar4;
    } while (iVar11 < param_3);
  }
  if (local_2c != **(int **)(iVar8 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar11);
  }
  return;
}



