/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003b708 FUN_0003b708 */

void FUN_0003b708(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_24;
  
  iVar5 = DAT_0003b7b8;
  iVar6 = DAT_0003b7b4 + 0x3b71a;
  iVar7 = *(int *)(iVar6 + DAT_0003b7b8);
  if (*(int *)(iVar7 + 0x60) == 0) {
    pvVar4 = operator_new(0x430);
    FUN_0008f684();
    iVar3 = DAT_0003b7c4;
    *(void **)(iVar7 + 0x60) = pvVar4;
    FUN_00090014(pvVar4,iVar3 + 0x3b7a6);
  }
  iVar7 = DAT_0003b7bc;
  uVar1 = DAT_0003b7ac;
  iVar5 = *(int *)(*(int *)(iVar6 + iVar5) + 0x24);
  *(undefined4 *)(param_1 + 0x80) = DAT_0003b7ac;
  *(int *)(param_1 + 0x78) = iVar5;
  *(float *)(param_1 + 0x74) = (float)(longlong)iVar5;
  FUN_0002fa48(&local_24,iVar7 + 0x3b740);
  FUN_00017d64(param_1 + 0x68,local_24);
  FUN_00017d90(&local_24);
  uVar2 = DAT_0003b7b0;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  sprintf((char *)(param_1 + 0x88),(char *)(DAT_0003b7c0 + 0x3b780),*(undefined4 *)(param_1 + 0x78))
  ;
  return;
}



