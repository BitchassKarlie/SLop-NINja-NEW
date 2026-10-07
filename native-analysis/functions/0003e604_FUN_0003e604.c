/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003e604 FUN_0003e604 */

undefined4 FUN_0003e604(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x7c) + 1;
  *(int *)(param_1 + 0x7c) = iVar3;
  iVar1 = FUN_00021680(*(undefined4 *)(param_1 + 0x78));
  if (iVar3 < *(int *)(iVar1 + 0x22c)) {
    uVar2 = *(undefined4 *)(param_1 + 0x7c);
  }
  else {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  uVar2 = FUN_0002285c(0,0,*(undefined4 *)(param_1 + 0x78),uVar2);
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  return 1;
}



