/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00086564 FUN_00086564 */

undefined4 FUN_00086564(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = DAT_00086610 + 0x86572;
  param_1[1] = 0;
  for (iVar1 = FUN_0009a5d8(param_2,iVar4); iVar1 != 0; iVar1 = FUN_0009a4f0(iVar1,iVar4)) {
    param_1[1] = param_1[1] + 1;
  }
  iVar1 = param_1[1];
  puVar2 = (undefined4 *)operator_new__(iVar1 * 0xc);
  if (iVar1 != 0) {
    iVar4 = 0;
    puVar3 = puVar2;
    while( true ) {
      iVar4 = iVar4 + 1;
      *puVar3 = 1;
      puVar3[1] = 1;
      puVar3[2] = 100;
      if (iVar4 == iVar1) break;
      puVar3 = puVar3 + 3;
    }
  }
  iVar1 = DAT_00086614;
  *param_1 = puVar2;
  iVar4 = FUN_0009a5d8(param_2,iVar1 + 0x865c2);
  if (iVar4 != 0) {
    iVar7 = DAT_00086618 + 0x865d6;
    iVar6 = DAT_0008661c + 0x865d8;
    iVar5 = DAT_00086620 + 0x865da;
    do {
      FUN_0009a8bc(iVar4,iVar7,puVar2 + 1);
      FUN_0009a8bc(iVar4,iVar6,puVar2);
      FUN_0009a8bc(iVar4,iVar5,puVar2 + 2);
      puVar2 = puVar2 + 3;
      iVar4 = FUN_0009a4f0(iVar4,iVar1 + 0x865c2);
    } while (iVar4 != 0);
  }
  return 1;
}



