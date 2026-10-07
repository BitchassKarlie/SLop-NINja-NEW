/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009c700 FUN_0009c700 */

undefined4 FUN_0009c700(int param_1,int param_2)

{
  size_t sVar1;
  undefined4 *puVar2;
  int iVar3;
  char *__s;
  int iVar4;
  undefined4 *local_1c;
  
  iVar4 = DAT_0009c814 + 0x9c710;
  if (*(char *)(param_2 + 0x2c) == '\0') {
    if (*(char *)(param_1 + 8) == '\0') {
      if (0 < *(int *)(param_1 + 4)) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          FUN_00099e28(param_1 + 0xc,*(undefined4 **)(param_1 + 0x10) + 2,
                       **(undefined4 **)(param_1 + 0x10));
        } while (iVar3 < *(int *)(param_1 + 4));
      }
      puVar2 = *(undefined4 **)(iVar4 + DAT_0009c818);
      local_1c = puVar2;
      FUN_0009a720(param_2 + 0x20,&local_1c);
      FUN_00099e28(param_1 + 0xc,local_1c + 2,*local_1c);
      FUN_00099e28(param_1 + 0xc,*(undefined4 **)(param_1 + 0x14) + 2,
                   **(undefined4 **)(param_1 + 0x14));
      if (local_1c == puVar2) {
        return 1;
      }
    }
    else {
      puVar2 = *(undefined4 **)(iVar4 + DAT_0009c818);
      local_1c = puVar2;
      FUN_0009a720(param_2 + 0x20,&local_1c);
      FUN_00099e28(param_1 + 0xc,local_1c + 2,*local_1c);
      if (local_1c == puVar2) {
        return 1;
      }
    }
    if (local_1c != (undefined4 *)0x0) {
      operator_delete__(local_1c);
    }
  }
  else {
    if (0 < *(int *)(param_1 + 4)) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 1;
        FUN_00099e28(param_1 + 0xc,*(undefined4 **)(param_1 + 0x10) + 2,
                     **(undefined4 **)(param_1 + 0x10));
      } while (iVar4 < *(int *)(param_1 + 4));
    }
    iVar4 = param_1 + 0xc;
    FUN_00099e28(iVar4,DAT_0009c81c + 0x9c7de,9);
    __s = (char *)(*(int *)(param_2 + 0x20) + 8);
    sVar1 = strlen(__s);
    FUN_00099e28(iVar4,__s,sVar1);
    FUN_00099e28(iVar4,DAT_0009c820 + 0x9c800,3);
    FUN_00099e28(iVar4,*(undefined4 **)(param_1 + 0x14) + 2,**(undefined4 **)(param_1 + 0x14));
  }
  return 1;
}



