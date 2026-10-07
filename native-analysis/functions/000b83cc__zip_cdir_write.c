/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b83cc _zip_cdir_write */

uint _zip_cdir_write(int *param_1,FILE *param_2,undefined4 param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = ftell(param_2);
  param_1[3] = lVar1;
  if (0 < param_1[1]) {
    iVar5 = 0;
    iVar6 = 0;
    do {
      iVar2 = _zip_dirent_write(*param_1 + iVar5,param_2,0,param_3);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x3c;
    } while (iVar6 < param_1[1]);
  }
  lVar1 = ftell(param_2);
  param_1[2] = lVar1 - param_1[3];
  fwrite((void *)(DAT_000b8484 + 0xb8424),1,4,param_2);
  FUN_000b81bc(0,param_2);
  FUN_000b815c(*(undefined2 *)(param_1 + 1),param_2);
  FUN_000b815c(*(undefined2 *)(param_1 + 1),param_2);
  FUN_000b81bc(param_1[2],param_2);
  FUN_000b81bc(param_1[3],param_2);
  FUN_000b815c(*(undefined2 *)(param_1 + 5),param_2);
  fwrite((void *)param_1[4],1,(uint)*(ushort *)(param_1 + 5),param_2);
  uVar3 = *(ushort *)&param_2->_IO_read_base & 0x40;
  if ((*(ushort *)&param_2->_IO_read_base & 0x40) != 0) {
    puVar4 = (undefined4 *)__errno();
    _zip_error_set(param_3,6,*puVar4);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



