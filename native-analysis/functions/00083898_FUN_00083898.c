/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00083898 FUN_00083898 */

void FUN_00083898(int param_1,undefined4 param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  double local_18;
  
  uVar2 = FUN_0009a4a0(param_2,DAT_00083964 + 0x838a8);
  uVar1 = FUN_00084524(uVar2,DAT_00083968 + 0x838b2);
  iVar4 = DAT_0008396c + 0x838bc;
  *(undefined *)(param_1 + 0x2c) = uVar1;
  iVar4 = FUN_0009a884(param_2,iVar4,&local_18);
  if (iVar4 == 0) {
    *(float *)(param_1 + 0x30) = (float)local_18;
  }
  iVar4 = FUN_0009a884(param_2,DAT_00083970 + 0x838dc,&local_18);
  if (iVar4 == 0) {
    fVar5 = (float)local_18;
    *(float *)(param_1 + 0x34) = fVar5;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x34);
  }
  if (fVar5 != 0.0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  iVar4 = DAT_00083974;
  uVar2 = DAT_0008395c;
  *(undefined4 *)(param_1 + 0x28) = DAT_0008395c;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = DAT_00083960;
  iVar4 = FUN_0009a5d8(param_2,iVar4 + 0x83908);
  if (iVar4 != 0) {
    iVar3 = FUN_0009a884(iVar4,DAT_00083978 + 0x8391e,&local_18);
    if (iVar3 == 0) {
      *(float *)(param_1 + 0x24) = (float)local_18;
    }
    iVar4 = FUN_0009a884(iVar4,DAT_0008397c + 0x83938,&local_18);
    if (iVar4 == 0) {
      *(float *)(param_1 + 0x20) = (float)local_18;
    }
  }
  return;
}



