/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00081f84 FUN_00081f84 */

void FUN_00081f84(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  double local_20;
  
  iVar1 = FUN_0009a884(param_2,DAT_00082034 + 0x81f94,&local_20);
  if (iVar1 == 0) {
    *(float *)(param_1 + 8) = (float)local_20;
  }
  iVar1 = FUN_0009a884(param_2,DAT_00082038 + 0x81fb2,&local_20);
  if (iVar1 == 0) {
    *(float *)(param_1 + 0xc) = (float)local_20;
  }
  uVar2 = FUN_0009a4a0(param_2,DAT_0008203c + 0x81fce);
  FUN_00084770(uVar2,param_1 + 0x10,3);
  iVar1 = DAT_00082040;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x18);
  uVar2 = FUN_0009a4a0(param_2,iVar1 + 0x81fe8);
  FUN_00084770(uVar2,param_1 + 0x10,3);
  uVar2 = FUN_0009a4a0(param_2,DAT_00082044 + 0x8200a);
  FUN_00084770(uVar2,param_1 + 0x1c,3);
  iVar1 = FUN_0009a884(param_2,DAT_00082048 + 0x82020,&local_20);
  if (iVar1 == 0) {
    *(float *)(param_1 + 4) = (float)local_20;
  }
  return;
}



