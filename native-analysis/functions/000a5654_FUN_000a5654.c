/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5654 FUN_000a5654 */

int FUN_000a5654(int param_1,int **param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  void *pvVar5;
  undefined auStack_3c [12];
  void *local_30;
  void *local_2c;
  void *local_28;
  char local_24;
  
  piVar4 = *param_2;
  if (piVar4 == (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined *)(param_1 + 0x10) = 1;
  }
  else {
    uVar1 = (**(code **)(*piVar4 + 0x7c))(piVar4,param_2[1]);
    pvVar5 = (void *)(1 - uVar1);
    if (1 < uVar1) {
      pvVar5 = (void *)0x0;
    }
    iVar2 = (**(code **)(*piVar4 + 0x178))
                      (piVar4,uVar1,DAT_000a5738 + 0xa567c,DAT_000a573c + 0xa567e);
    if (iVar2 == 0) {
      pvVar5 = (void *)((uint)pvVar5 | 1);
    }
    if (pvVar5 == (void *)0x0) {
      (**(code **)(*piVar4 + 0x44))(piVar4);
      local_24 = '\x01';
      local_30 = pvVar5;
      local_2c = pvVar5;
      local_28 = pvVar5;
      uVar3 = (**(code **)(*piVar4 + 0x17c))(piVar4,param_2[1],iVar2);
      FUN_000a3f60(auStack_3c,piVar4,uVar3);
      iVar2 = (**(code **)(*piVar4 + 0x3c))(piVar4);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(char *)(param_1 + 0x10) = local_24;
        if (local_24 == '\0') {
          FUN_000a3884(param_1,local_30,(int)local_28 - (int)local_30);
        }
      }
      else {
        (**(code **)(*piVar4 + 0x40))(piVar4);
        (**(code **)(*piVar4 + 0x44))(piVar4);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined *)(param_1 + 0x10) = 1;
      }
      if (local_30 != (void *)0x0) {
        operator_delete(local_30);
      }
    }
    else {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined *)(param_1 + 0x10) = 1;
    }
  }
  return param_1;
}



