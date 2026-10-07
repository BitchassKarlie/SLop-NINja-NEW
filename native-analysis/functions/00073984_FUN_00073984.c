/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00073984 FUN_00073984 */

void FUN_00073984(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0008f414(param_3);
  iVar2 = 0;
  iVar3 = 0;
  while ((*(int *)(param_1 + iVar2 + 4) != param_2 || (iVar1 != *(int *)(param_1 + iVar2 + 8)))) {
    iVar2 = iVar2 + 0x34;
    iVar3 = iVar3 + 1;
    if (iVar2 == 0x680) {
      return;
    }
  }
  iVar1 = FUN_000a59cc(param_2);
  if (iVar1 != 0) {
    FUN_000a5af0(param_2,0);
  }
  FUN_00098b50(param_2);
  param_1 = iVar3 * 0x34 + param_1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined *)(param_1 + 0xc) = 1;
  *(undefined *)(param_1 + 0xd) = 0;
  return;
}



