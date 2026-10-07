/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b7e70 _zip_dirent_read */

void _zip_dirent_read(undefined2 *param_1,FILE *param_2,void **param_3,uint *param_4,int param_5,
                     undefined4 param_6)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  time_t tVar6;
  undefined4 uVar7;
  uint *puVar8;
  size_t sVar9;
  undefined4 *puVar10;
  void *__s2;
  undefined *__ptr;
  int iVar11;
  uint uVar12;
  tm local_8c;
  undefined *local_60;
  undefined auStack_5c [48];
  int local_2c;
  
  iVar1 = DAT_000b8108;
  iVar11 = DAT_000b8104 + 0xb7e86;
  if (param_5 == 0) {
    uVar12 = 0x2e;
  }
  else {
    uVar12 = 0x1e;
  }
  local_2c = **(int **)(iVar11 + DAT_000b8108);
  if ((param_4 == (uint *)0x0) || (uVar12 <= *param_4)) {
    if (param_3 == (void **)0x0) {
      __ptr = auStack_5c;
      sVar9 = fread(__ptr,1,uVar12,param_2);
      if (sVar9 < uVar12) {
        puVar10 = (undefined4 *)__errno();
        _zip_error_set(param_6,5,*puVar10);
        puVar8 = (uint *)0xffffffff;
        goto LAB_000b7fce;
      }
    }
    else {
      __ptr = (undefined *)*param_3;
    }
    if (param_5 == 0) {
      __s2 = (void *)(DAT_000b810c + 0xb7eca);
    }
    else {
      __s2 = (void *)(DAT_000b8110 + 0xb7fe8);
    }
    local_60 = __ptr;
    iVar3 = memcmp(__ptr,__s2,4);
    if (iVar3 == 0) {
      local_60 = __ptr + 4;
      if (param_5 == 0) {
        uVar2 = _zip_read2(&local_60);
        *param_1 = uVar2;
      }
      else {
        *param_1 = 0;
      }
      uVar2 = _zip_read2(&local_60);
      param_1[1] = uVar2;
      uVar2 = _zip_read2(&local_60);
      param_1[2] = uVar2;
      uVar2 = _zip_read2(&local_60);
      param_1[3] = uVar2;
      uVar4 = _zip_read2(&local_60);
      uVar5 = _zip_read2(&local_60);
      local_8c.tm_isdst = -1;
      local_8c.tm_year = ((uVar5 << 0x10) >> 0x19) + 0x50;
      local_8c.tm_mday = uVar5 & 0x1f;
      local_8c.tm_mon = ((uVar5 << 0x17) >> 0x1c) - 1;
      local_8c.tm_hour = (uVar4 << 0x10) >> 0x1b;
      local_8c.tm_min = (uVar4 << 0x15) >> 0x1a;
      local_8c.tm_sec = (uVar4 & 0x1f) << 1;
      tVar6 = mktime(&local_8c);
      *(time_t *)(param_1 + 4) = tVar6;
      uVar7 = _zip_read4(&local_60);
      *(undefined4 *)(param_1 + 6) = uVar7;
      uVar7 = _zip_read4(&local_60);
      *(undefined4 *)(param_1 + 8) = uVar7;
      uVar7 = _zip_read4(&local_60);
      *(undefined4 *)(param_1 + 10) = uVar7;
      uVar2 = _zip_read2(&local_60);
      param_1[0xe] = uVar2;
      uVar2 = _zip_read2(&local_60);
      param_1[0x12] = uVar2;
      if (param_5 == 0) {
        uVar2 = _zip_read2(&local_60);
        param_1[0x16] = uVar2;
        uVar2 = _zip_read2(&local_60);
        param_1[0x17] = uVar2;
        uVar2 = _zip_read2(&local_60);
        param_1[0x18] = uVar2;
        uVar7 = _zip_read4(&local_60);
        *(undefined4 *)(param_1 + 0x1a) = uVar7;
        uVar7 = _zip_read4(&local_60);
        *(undefined4 *)(param_1 + 0x1c) = uVar7;
      }
      else {
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        *(undefined4 *)(param_1 + 0x1a) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      uVar4 = (uint)(ushort)param_1[0xe];
      uVar5 = (uint)(ushort)param_1[0x12];
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar12 = uVar5 + uVar4 + (uint)(ushort)param_1[0x16] + uVar12;
      if ((param_4 != (uint *)0x0) && (*param_4 < uVar12)) {
        _zip_error_set(param_6,0x13);
        puVar8 = (uint *)0xffffffff;
        goto LAB_000b7fce;
      }
      if (param_3 == (void **)0x0) {
        if (uVar4 != 0) {
          iVar3 = FUN_000b7d54(param_2,uVar4,1,param_6);
          *(int *)(param_1 + 0xc) = iVar3;
          if (iVar3 == 0) goto LAB_000b803c;
          uVar5 = (uint)(ushort)param_1[0x12];
        }
        if (uVar5 != 0) {
          iVar3 = FUN_000b7d54(param_2,uVar5,0,param_6);
          *(int *)(param_1 + 0x10) = iVar3;
          if (iVar3 == 0) {
            puVar8 = (uint *)0xffffffff;
            goto LAB_000b7fce;
          }
        }
        if (param_1[0x16] != 0) {
          iVar3 = FUN_000b7d54(param_2,param_1[0x16],0,param_6);
          *(int *)(param_1 + 0x14) = iVar3;
          if (iVar3 == 0) goto LAB_000b803c;
        }
      }
      else {
        if (uVar4 != 0) {
          iVar3 = FUN_000b7e18(&local_60,uVar4,1,param_6);
          *(int *)(param_1 + 0xc) = iVar3;
          if (iVar3 == 0) {
LAB_000b803c:
            puVar8 = (uint *)0xffffffff;
            goto LAB_000b7fce;
          }
          uVar5 = (uint)(ushort)param_1[0x12];
        }
        if (uVar5 != 0) {
          iVar3 = FUN_000b7e18(&local_60,uVar5,0,param_6);
          *(int *)(param_1 + 0x10) = iVar3;
          if (iVar3 == 0) {
            puVar8 = (uint *)0xffffffff;
            goto LAB_000b7fce;
          }
        }
        if (param_1[0x16] != 0) {
          iVar3 = FUN_000b7e18(&local_60,param_1[0x16],0,param_6);
          *(int *)(param_1 + 0x14) = iVar3;
          if (iVar3 == 0) {
            puVar8 = (uint *)0xffffffff;
            goto LAB_000b7fce;
          }
        }
        *param_3 = local_60;
      }
      puVar8 = param_4;
      if (param_4 != (uint *)0x0) {
        puVar8 = (uint *)0x0;
        *param_4 = *param_4 - uVar12;
      }
      goto LAB_000b7fce;
    }
  }
  _zip_error_set(param_6,0x13,0);
  puVar8 = (uint *)0xffffffff;
LAB_000b7fce:
  if (local_2c == **(int **)(iVar11 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar8);
}



