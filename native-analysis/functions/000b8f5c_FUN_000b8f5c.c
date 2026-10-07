/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b8f5c FUN_000b8f5c */

void FUN_000b8f5c(undefined4 *param_1,void *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined auStack_201c [8192];
  int local_1c;
  
  iVar1 = DAT_000b9050;
  iVar5 = DAT_000b904c + 0xb8f6a;
  local_1c = **(int **)(iVar5 + DAT_000b9050);
  switch(param_4) {
  case 0:
    iVar2 = param_1[8];
    if (0 < iVar2) {
      iVar6 = 0;
      do {
        uVar4 = iVar2 - iVar6;
        if (0x1fff < uVar4) {
          uVar4 = 0x2000;
        }
        iVar3 = zip_fread(*param_1,auStack_201c,uVar4);
        if (iVar3 < 0) {
          zip_fclose(*param_1);
          iVar2 = -1;
          *param_1 = 0;
          goto LAB_000b8f8c;
        }
        iVar2 = param_1[8];
        iVar6 = iVar6 + iVar3;
      } while (iVar6 < iVar2);
    }
  case 2:
    iVar2 = 0;
    goto LAB_000b8f8c;
  case 1:
    uVar4 = param_1[9];
    if ((uVar4 != 0xffffffff) && (uVar4 <= param_3)) {
      param_3 = uVar4;
    }
    iVar2 = zip_fread(*param_1,param_2,param_3);
    if (-1 < iVar2) {
      if (param_1[9] != -1) {
        param_1[9] = param_1[9] - iVar2;
      }
      goto LAB_000b8f8c;
    }
    break;
  case 3:
    if (0x1b < param_3) {
      memcpy(param_2,param_1 + 1,0x1c);
      iVar2 = 0x1c;
      goto LAB_000b8f8c;
    }
    break;
  case 4:
    if (7 < param_3) {
      zip_file_error_get(*param_1,param_2,(int)param_2 + 4);
      iVar2 = 8;
      goto LAB_000b8f8c;
    }
    break;
  case 5:
    zip_fclose(*param_1);
    free(param_1);
    iVar2 = 0;
    goto LAB_000b8f8c;
  }
  iVar2 = -1;
LAB_000b8f8c:
  if (local_1c != **(int **)(iVar5 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



