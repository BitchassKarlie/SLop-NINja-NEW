/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b8284 _zip_dirent_write */

uint _zip_dirent_write(undefined2 *param_1,FILE *param_2,int param_3,undefined4 param_4)

{
  tm *ptVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  time_t local_1c;
  
  if (param_3 == 0) {
    fwrite((void *)(DAT_000b83c8 + 0xb8356),1,4,param_2);
    FUN_000b815c(*param_1,param_2);
  }
  else {
    fwrite((void *)(DAT_000b83c4 + 0xb82a2),1,4,param_2);
  }
  FUN_000b815c(param_1[1],param_2);
  FUN_000b815c(param_1[2],param_2);
  FUN_000b815c(param_1[3],param_2);
  local_1c = *(time_t *)(param_1 + 4);
  ptVar1 = localtime(&local_1c);
  iVar4 = ptVar1->tm_year;
  iVar5 = ptVar1->tm_mon;
  iVar6 = ptVar1->tm_mday;
  FUN_000b815c(ptVar1->tm_hour * 0x800 + ptVar1->tm_min * 0x20 + (ptVar1->tm_sec >> 1) & 0xffff,
               param_2);
  FUN_000b815c((iVar5 + 1) * 0x20 + (iVar4 + -0x50) * 0x200 + iVar6 & 0xffff,param_2);
  FUN_000b81bc(*(undefined4 *)(param_1 + 6),param_2);
  FUN_000b81bc(*(undefined4 *)(param_1 + 8),param_2);
  FUN_000b81bc(*(undefined4 *)(param_1 + 10),param_2);
  FUN_000b815c(param_1[0xe],param_2);
  FUN_000b815c(param_1[0x12],param_2);
  if (param_3 == 0) {
    FUN_000b815c(param_1[0x16],param_2);
    FUN_000b815c(param_1[0x17],param_2);
    FUN_000b815c(param_1[0x18],param_2);
    FUN_000b81bc(*(undefined4 *)(param_1 + 0x1a),param_2);
    FUN_000b81bc(*(undefined4 *)(param_1 + 0x1c),param_2);
  }
  if ((ushort)param_1[0xe] != 0) {
    fwrite(*(void **)(param_1 + 0xc),1,(uint)(ushort)param_1[0xe],param_2);
  }
  if ((ushort)param_1[0x12] != 0) {
    fwrite(*(void **)(param_1 + 0x10),1,(uint)(ushort)param_1[0x12],param_2);
  }
  if ((param_3 == 0) && ((ushort)param_1[0x16] != 0)) {
    fwrite(*(void **)(param_1 + 0x14),1,(uint)(ushort)param_1[0x16],param_2);
  }
  uVar2 = *(ushort *)&param_2->_IO_read_base & 0x40;
  if ((*(ushort *)&param_2->_IO_read_base & 0x40) != 0) {
    puVar3 = (undefined4 *)__errno();
    _zip_error_set(param_4,6,*puVar3);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



