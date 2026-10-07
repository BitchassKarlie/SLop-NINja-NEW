/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b7288 FUN_000b7288 */

void FUN_000b7288(FILE *param_1,uint param_2,FILE *param_3,undefined4 param_4)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined auStack_202c [8192];
  int local_2c;
  
  iVar1 = DAT_000b7350;
  iVar6 = DAT_000b734c + 0xb729a;
  local_2c = **(int **)(iVar6 + DAT_000b7350);
  if ((param_2 != 0) && (0 < (int)param_2)) {
    do {
      sVar3 = param_2;
      if (0x1fff < param_2) {
        sVar3 = 0x2000;
      }
      sVar3 = fread(auStack_202c,1,sVar3,param_1);
      if ((int)sVar3 < 0) {
        puVar4 = (undefined4 *)__errno();
        _zip_error_set(param_4,5,*puVar4);
        uVar5 = 0xffffffff;
        goto LAB_000b7308;
      }
      if (sVar3 == 0) {
        _zip_error_set(param_4,0x11,0);
        uVar5 = 0xffffffff;
        goto LAB_000b7308;
      }
      sVar2 = fwrite(auStack_202c,1,sVar3,param_3);
      if (sVar3 != sVar2) {
        puVar4 = (undefined4 *)__errno();
        _zip_error_set(param_4,6,*puVar4);
        uVar5 = 0xffffffff;
        goto LAB_000b7308;
      }
      param_2 = param_2 - sVar3;
    } while (0 < (int)param_2);
  }
  uVar5 = 0;
LAB_000b7308:
  if (local_2c == **(int **)(iVar6 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}



