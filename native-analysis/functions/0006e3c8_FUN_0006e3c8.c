/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006e3c8 FUN_0006e3c8 */

undefined4 FUN_0006e3c8(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 local_2c [2];
  
  piVar1 = (int *)FUN_0006e1cc();
  iVar6 = DAT_0006e49c + 0x6e3dc;
  iVar2 = (**(code **)(*piVar1 + 0x40))();
  if (iVar2 != 0) {
    uVar3 = (**(code **)(*piVar1 + 0x40))(piVar1);
    FUN_00098ec8(piVar1,uVar3);
  }
  (**(code **)(*piVar1 + 0x24))(piVar1,0,0);
  (**(code **)(*piVar1 + 0x30))(piVar1,param_1,param_2);
  piVar4 = (int *)FUN_0008d120();
  iVar2 = DAT_0006e4a4;
  local_2c[0] = DAT_0006e498;
  uVar3 = *(undefined4 *)(iVar6 + DAT_0006e4a0);
  while (iVar5 = FUN_00099150(uVar3,local_2c), iVar5 != 0) {
    (**(code **)(*piVar1 + 0x28))(piVar1,local_2c[0]);
    puVar7 = *(undefined **)(iVar6 + iVar2);
    *puVar7 = 1;
    (**(code **)(*piVar4 + 0xc))(piVar4);
    *puVar7 = 0;
    (**(code **)(*piVar1 + 0x2c))(piVar1,local_2c[0]);
    *puVar7 = 1;
    (**(code **)(*piVar4 + 0x10))(piVar4);
    (**(code **)(*piVar4 + 0x14))(piVar4);
    *puVar7 = 0;
  }
  (**(code **)(*piVar1 + 0x34))(piVar1);
  operator_delete(piVar1);
  return 0;
}



