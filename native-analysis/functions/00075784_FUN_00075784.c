/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00075784 FUN_00075784 */

int FUN_00075784(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_2 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    iVar3 = 0;
  }
  else {
    iVar2 = FUN_000745b4();
    *(int *)(param_1 + 4) = iVar2;
    iVar3 = iVar2;
    while (iVar1 = iVar2, iVar1 != 0) {
      iVar3 = iVar1;
      iVar2 = *(int *)(iVar1 + 0x10);
    }
  }
  *(int *)(param_1 + 8) = iVar3;
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_00075738(param_1 + 0x10,param_1 + 0x10,0,param_2 + 0x10,*(undefined4 *)(param_2 + 0x14),
               param_2 + 0x10,*(undefined4 *)(param_2 + 0x18));
  *(undefined *)(param_1 + 0x20) = *(undefined *)(param_2 + 0x20);
  return param_1;
}



