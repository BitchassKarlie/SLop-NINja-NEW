/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b70c8 FUN_000b70c8 */

void FUN_000b70c8(int param_1,code *param_2,undefined4 param_3,int param_4,FILE *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  size_t __n;
  undefined *local_4064;
  uint local_4060;
  undefined *local_4058;
  int local_4054;
  undefined4 local_4044;
  undefined4 local_4040;
  undefined4 local_403c;
  undefined auStack_402c [8192];
  undefined auStack_202c [8192];
  int local_2c;
  
  iVar1 = DAT_000b7280;
  iVar7 = DAT_000b727c + 0xb70e0;
  local_2c = **(int **)(iVar7 + DAT_000b7280);
  *(undefined2 *)(param_4 + 0x18) = 8;
  *(undefined4 *)(param_4 + 0x10) = 0;
  *(undefined4 *)(param_4 + 0x14) = 0;
  uVar2 = crc32(0,0,0);
  *(undefined4 *)(param_4 + 8) = uVar2;
  local_4044 = 0;
  local_4040 = 0;
  local_403c = 0;
  local_4060 = 0;
  local_4054 = 0;
  iVar3 = zip_get_archive_flag(param_1,1,0);
  if (iVar3 == 0) {
    uVar2 = 9;
  }
  else {
    uVar2 = 8;
  }
  deflateInit2_(&local_4064,9,8,0xfffffff1,uVar2,0,DAT_000b7284 + 0xb7146,0x38);
  local_4064 = (undefined *)0x0;
  local_4054 = 0x2000;
  iVar3 = 0;
  local_4060 = 0;
  local_4058 = auStack_402c;
  do {
    uVar6 = 1 - local_4060;
    if (1 < local_4060) {
      uVar6 = 0;
    }
    if (iVar3 == 0) {
      uVar6 = uVar6 & 1;
    }
    else {
      uVar6 = 0;
    }
    if (uVar6 == 0) {
LAB_000b717a:
      uVar6 = deflate(&local_4064,iVar3);
    }
    else {
      uVar6 = (*param_2)(param_3,auStack_202c,0x2000,1);
      if ((int)uVar6 < 0) {
        FUN_000b709c(param_1 + 8,param_2,param_3);
        deflateEnd(&local_4064);
        uVar2 = 0xffffffff;
        goto LAB_000b7226;
      }
      if (uVar6 == 0) {
        iVar3 = 4;
        goto LAB_000b717a;
      }
      iVar3 = 0;
      *(uint *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + uVar6;
      local_4064 = auStack_202c;
      local_4060 = uVar6;
      uVar2 = crc32(*(undefined4 *)(param_4 + 8),auStack_202c,uVar6);
      *(undefined4 *)(param_4 + 8) = uVar2;
      uVar6 = deflate(&local_4064,0);
    }
    if (1 < uVar6) {
      _zip_error_set(param_1 + 8,0xd,uVar6);
      uVar2 = 0xffffffff;
      goto LAB_000b7226;
    }
    if (local_4054 != 0x2000) {
      __n = 0x2000 - local_4054;
      sVar4 = fwrite(auStack_402c,1,__n,param_5);
      if (sVar4 != __n) {
        puVar5 = (undefined4 *)__errno();
        _zip_error_set(param_1 + 8,6,*puVar5);
        uVar2 = 0xffffffff;
        goto LAB_000b7226;
      }
      local_4054 = 0x2000;
      *(size_t *)(param_4 + 0x14) = *(int *)(param_4 + 0x14) + sVar4;
      local_4058 = auStack_402c;
    }
  } while (uVar6 != 1);
  deflateEnd(&local_4064);
  uVar2 = 0;
LAB_000b7226:
  if (local_2c != **(int **)(iVar7 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}



