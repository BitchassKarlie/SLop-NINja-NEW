/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00086624 FUN_00086624 */

void FUN_00086624(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  double local_18;
  
  FUN_0009a8bc(param_2,DAT_00086694 + 0x86634,param_1);
  FUN_0009a8bc(param_2,DAT_00086698 + 0x86644,param_1 + 0x74);
  uVar1 = FUN_0009a4a0(param_2,DAT_0008669c + 0x8664e);
  uVar1 = FUN_00084f38(uVar1,param_1 + 0xc);
  iVar2 = DAT_000866a0 + 0x86660;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  FUN_0009a8bc(param_2,iVar2,param_1 + 4);
  iVar2 = FUN_0009a884(param_2,DAT_000866a4 + 0x86670,&local_18);
  if (iVar2 == 0) {
    *(float *)(param_1 + 0x70) = (float)local_18;
  }
  FUN_0009a8bc(param_2,DAT_000866a8 + 0x8668c,param_1 + 0x78);
  return;
}



