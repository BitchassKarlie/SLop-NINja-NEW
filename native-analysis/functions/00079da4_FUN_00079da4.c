/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00079da4 FUN_00079da4 */

void FUN_00079da4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar2 = (param_7 - param_5 >> 2) * -0x45d1745d;
  if ((iVar2 != 0) &&
     (iVar2 = FUN_00079cac(param_1,param_3,iVar2,0xba2e8ba3,param_2), param_7 != param_5)) {
    iVar7 = 0;
    do {
      puVar6 = (undefined4 *)(param_5 + iVar7);
      puVar5 = (undefined4 *)(iVar2 + iVar7);
      iVar7 = iVar7 + 0x2c;
      uVar1 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *puVar5 = *puVar6;
      puVar5[1] = uVar1;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      uVar1 = puVar6[5];
      uVar3 = puVar6[6];
      uVar4 = puVar6[7];
      puVar5[4] = puVar6[4];
      puVar5[5] = uVar1;
      puVar5[6] = uVar3;
      puVar5[7] = uVar4;
      uVar1 = puVar6[9];
      uVar3 = puVar6[10];
      puVar5[8] = puVar6[8];
      puVar5[9] = uVar1;
      puVar5[10] = uVar3;
    } while (iVar7 != (((uint)(param_7 - (param_5 + 0x2c)) >> 2) * 0x3a2e8ba3 & 0x3fffffff) * 0x2c +
                      0x2c);
  }
  return;
}



