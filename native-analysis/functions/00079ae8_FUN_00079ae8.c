/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00079ae8 FUN_00079ae8 */

void FUN_00079ae8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar4 = param_7 - param_5 >> 3;
  iVar1 = iVar4 * -0x33333333;
  if ((iVar1 != 0) &&
     (iVar1 = FUN_000799e0(param_1,param_3,iVar1,iVar4,param_2), param_7 != param_5)) {
    iVar4 = 0;
    do {
      puVar7 = (undefined4 *)(param_5 + iVar4);
      puVar6 = (undefined4 *)(iVar1 + iVar4);
      iVar4 = iVar4 + 0x28;
      uVar2 = puVar7[1];
      uVar3 = puVar7[2];
      uVar5 = puVar7[3];
      *puVar6 = *puVar7;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar5;
      uVar2 = puVar7[5];
      uVar3 = puVar7[6];
      uVar5 = puVar7[7];
      puVar6[4] = puVar7[4];
      puVar6[5] = uVar2;
      puVar6[6] = uVar3;
      puVar6[7] = uVar5;
      uVar2 = puVar7[9];
      puVar6[8] = puVar7[8];
      puVar6[9] = uVar2;
    } while (iVar4 != ((((uint)(param_7 - (param_5 + 0x28)) >> 3) * 0xccccccd & 0x1fffffff) + 1) *
                      0x28);
  }
  return;
}



