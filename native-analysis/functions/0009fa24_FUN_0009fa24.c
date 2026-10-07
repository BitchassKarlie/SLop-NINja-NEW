/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009fa24 FUN_0009fa24 */

void FUN_0009fa24(int param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  stat sStack_288;
  char acStack_21c [512];
  int local_1c;
  
  iVar3 = DAT_0009fac0;
  iVar7 = DAT_0009fabc + 0x9fa32;
  local_1c = **(int **)(iVar7 + DAT_0009fac0);
  iVar6 = 0;
  do {
    cVar1 = *(char *)(param_1 + iVar6);
    cVar2 = *(char *)(DAT_0009fac4 + 0x9fb3a + iVar6);
    if (cVar1 != cVar2) {
      if (cVar2 == '\\') {
        if (cVar1 != '/') goto LAB_0009fa98;
      }
      else if ((cVar2 != '/') || (cVar1 != '\\')) {
LAB_0009fa98:
        uVar4 = FUN_0009f800();
        uVar5 = FUN_0008f414(param_1);
        iVar6 = FUN_000ac4cc(uVar4,uVar5);
        if (iVar6 != 0) {
          iVar6 = 1;
        }
        goto LAB_0009fa84;
      }
    }
    iVar6 = iVar6 + 1;
    if (iVar6 == 3) {
      FUN_0009f3c4(param_1,acStack_21c);
      iVar6 = stat(acStack_21c,&sStack_288);
      if (iVar6 == 0) {
        if ((sStack_288.st_mode & 0xf000) == 0x8000) {
          iVar6 = 1;
        }
        else {
          iVar6 = 0;
        }
      }
      else {
        iVar6 = 0;
      }
LAB_0009fa84:
      if (local_1c == **(int **)(iVar7 + iVar3)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iVar6);
    }
  } while( true );
}



