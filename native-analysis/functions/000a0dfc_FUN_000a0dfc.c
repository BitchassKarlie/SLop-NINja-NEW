/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0dfc FUN_000a0dfc */

undefined4 FUN_000a0dfc(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_2c;
  int local_28;
  byte local_21;
  
  FUN_000abca4(param_2,&local_21,1);
  uVar4 = local_21 & 0xf0;
  if (uVar4 == 0x40) {
    iVar6 = 2;
    goto joined_r0x000a0e32;
  }
  if (uVar4 < 0x41) {
    if (uVar4 == 0x20) {
      iVar6 = 3;
      goto joined_r0x000a0e32;
    }
    if (uVar4 == 0x30) {
      iVar6 = 5;
      goto joined_r0x000a0e32;
    }
  }
  else {
    if (uVar4 == 0x50) {
      iVar6 = 1;
      goto joined_r0x000a0e32;
    }
    if (uVar4 == 0x60) {
      iVar6 = 0;
      goto joined_r0x000a0e32;
    }
  }
  iVar6 = 4;
joined_r0x000a0e32:
  if ((local_21 & 0xf) - 1 < 2) {
    FUN_000abca4(param_2,&local_28,4);
    if ((local_21 & 0xf) == 1) {
      iVar7 = 2;
    }
    else {
      iVar7 = 4;
    }
    uVar4 = local_28 * iVar7;
    pvVar1 = operator_new__(uVar4);
    FUN_000abca4(param_2,pvVar1,uVar4);
    piVar2 = (int *)operator_new(0x28);
    iVar5 = DAT_000a0f20 + 0xa0eb2;
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = iVar5;
    iVar3 = FUN_000a0404(piVar2 + 3);
    iVar5 = DAT_000a0f24;
    piVar2[5] = 0;
    piVar2[9] = iVar6;
    piVar2[6] = (int)pvVar1;
    piVar2[7] = local_28;
    *piVar2 = iVar5 + 0xa0ecc;
    piVar2[8] = iVar7;
    piVar2[4] = iVar3;
    local_2c = piVar2;
    iVar6 = (**(code **)(*piVar2 + 8))(piVar2);
    FUN_000a751c(iVar6 + 4);
    pvVar1 = operator_new(0x30);
    FUN_000b3d70(pvVar1,&local_2c);
    FUN_000a06fc(param_1,pvVar1);
    FUN_000a09d4(&local_2c);
  }
  else {
    pvVar1 = operator_new(0x2c);
    FUN_000a0db8(pvVar1,iVar6);
    FUN_000a06e0(param_1,pvVar1);
  }
  return param_1;
}



