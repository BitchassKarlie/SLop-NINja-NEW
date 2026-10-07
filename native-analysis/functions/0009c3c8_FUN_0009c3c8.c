/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009c3c8 FUN_0009c3c8 */

undefined4 FUN_0009c3c8(int param_1,int param_2)

{
  size_t sVar1;
  int iVar2;
  char *__s;
  
  iVar2 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar2;
  if (*(int *)(param_2 + 0x18) != 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          FUN_00099e28(param_1 + 0xc,*(undefined4 **)(param_1 + 0x10) + 2,
                       **(undefined4 **)(param_1 + 0x10));
        } while (iVar2 < *(int *)(param_1 + 4));
      }
    }
    else {
      *(undefined *)(param_1 + 8) = 0;
    }
    iVar2 = param_1 + 0xc;
    FUN_00099e28(iVar2,DAT_0009c44c + 0x9c3f2,2);
    __s = (char *)(*(int *)(param_2 + 0x20) + 8);
    sVar1 = strlen(__s);
    FUN_00099e28(iVar2,__s,sVar1);
    FUN_00099e28(iVar2,DAT_0009c450 + 0x9c412,1);
    FUN_00099e28(iVar2,*(undefined4 **)(param_1 + 0x14) + 2,**(undefined4 **)(param_1 + 0x14));
  }
  return 1;
}



