/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00085e94 FUN_00085e94 */

void FUN_00085e94(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00085f34;
  iVar4 = DAT_00085f30;
  uVar2 = DAT_00085f2c;
  iVar3 = param_1 + param_2 * 4;
  *(undefined4 *)(param_1 + (param_2 + 0x16) * 4) = DAT_00085f2c;
  *(undefined4 *)(iVar3 + 0x54) = uVar2;
  *(undefined4 *)(iVar3 + 0x4c) = uVar2;
  if (-1 < *(int *)(iVar4 + 0x85ef4) << 0x1f) {
    iVar3 = __cxa_guard_acquire(iVar4 + 0x85ef4);
    if (iVar3 != 0) {
      uVar2 = FUN_0008f414(DAT_00085f40 + 0x85f1c);
      *(undefined4 *)(iVar4 + 0x85ef8) = uVar2;
      __cxa_guard_release(iVar4 + 0x85ef4);
    }
  }
  FUN_00072a80(*(undefined4 *)(*(int *)(iVar1 + 0x85ec6 + DAT_00085f38) + 0x50),
               *(undefined4 *)(DAT_00085f3c + 0x85f22));
  *(undefined4 *)(param_1 + (param_2 + 0x16) * 4 + 4) = 0;
  uVar2 = DAT_00085f2c;
  *(undefined4 *)(param_1 + (param_2 + 0x18) * 4) = DAT_00085f2c;
  iVar4 = *(int *)(param_1 + param_2 * 4);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x74) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + param_2 * 4) + 0x88) = uVar2;
  }
  return;
}



