/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009c454 FUN_0009c454 */

undefined4 FUN_0009c454(int param_1,int param_2,int *param_3)

{
  size_t sVar1;
  int iVar2;
  char *__s;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 4)) {
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
      FUN_00099e28(param_1 + 0xc,*(undefined4 **)(param_1 + 0x10) + 2,
                   **(undefined4 **)(param_1 + 0x10));
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  iVar2 = param_1 + 0xc;
  FUN_00099e28(iVar2,DAT_0009c540 + 0x9c490,1);
  __s = (char *)(*(int *)(param_2 + 0x20) + 8);
  sVar1 = strlen(__s);
  FUN_00099e28(iVar2,__s,sVar1);
  if (param_3 != (int *)0x0) {
    iVar3 = DAT_0009c544 + 0x9c4b2;
    do {
      do {
        FUN_00099e28(iVar2,iVar3,1);
        (**(code **)(*param_3 + 8))(param_3,0,0,iVar2);
        param_3 = (int *)param_3[8];
      } while (*(int *)param_3[6] != 0);
    } while (*(int *)param_3[5] != 0);
  }
  if (*(int *)(param_2 + 0x18) == 0) {
    FUN_00099e28(iVar2,DAT_0009c54c + 0x9c528,3);
  }
  else {
    FUN_00099e28(iVar2,DAT_0009c548 + 0x9c4ea,1);
    iVar3 = (**(code **)(**(int **)(param_2 + 0x18) + 0x20))();
    if (((iVar3 != 0) && (*(int **)(param_2 + 0x1c) == *(int **)(param_2 + 0x18))) &&
       (iVar3 = (**(code **)(**(int **)(param_2 + 0x1c) + 0x20))(), *(char *)(iVar3 + 0x2c) == '\0')
       ) {
      *(undefined *)(param_1 + 8) = 1;
      goto LAB_0009c512;
    }
  }
  FUN_00099e28(iVar2,*(undefined4 **)(param_1 + 0x14) + 2,**(undefined4 **)(param_1 + 0x14));
LAB_0009c512:
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return 1;
}



