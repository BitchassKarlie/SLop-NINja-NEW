/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9308 _zip_filerange_crc */

void _zip_filerange_crc(FILE *param_1,long param_2,size_t param_3,undefined4 *param_4,
                       undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined auStack_202c [8192];
  int local_2c;
  
  iVar1 = DAT_000b93e0;
  iVar6 = DAT_000b93dc + 0xb931a;
  local_2c = **(int **)(iVar6 + DAT_000b93e0);
  uVar2 = crc32(0,0,0);
  *param_4 = uVar2;
  iVar3 = fseek(param_1,param_2,0);
  if (iVar3 == 0) {
    if (0 < (int)param_3) {
      do {
        sVar4 = param_3;
        if (0x1fff < (int)param_3) {
          sVar4 = 0x2000;
        }
        sVar4 = fread(auStack_202c,1,sVar4,param_1);
        if (sVar4 == 0) {
          puVar5 = (undefined4 *)__errno();
          _zip_error_set(param_5,5,*puVar5);
          uVar2 = 0xffffffff;
          goto LAB_000b93a6;
        }
        param_3 = param_3 - sVar4;
        uVar2 = crc32(*param_4,auStack_202c);
        *param_4 = uVar2;
      } while (0 < (int)param_3);
    }
    uVar2 = 0;
  }
  else {
    puVar5 = (undefined4 *)__errno();
    _zip_error_set(param_5,4,*puVar5);
    uVar2 = 0xffffffff;
  }
LAB_000b93a6:
  if (local_2c == **(int **)(iVar6 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



