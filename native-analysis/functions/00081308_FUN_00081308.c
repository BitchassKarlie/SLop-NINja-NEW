/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00081308 FUN_00081308 */

undefined4 *
FUN_00081308(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = param_4;
  if (param_4 != param_6) {
    do {
      puVar5 = puVar6 + 0xb;
      FUN_000812b0(puVar6);
      puVar6 = puVar5;
    } while (param_6 != puVar5);
    puVar7 = *(undefined4 **)(param_2 + 8);
    puVar6 = param_4;
    puVar5 = param_4;
    if (param_6 < puVar7) {
      do {
        uVar1 = param_6[1];
        uVar2 = param_6[2];
        uVar3 = param_6[3];
        *puVar5 = *param_6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
        uVar1 = param_6[5];
        uVar2 = param_6[6];
        uVar3 = param_6[7];
        puVar5[4] = param_6[4];
        puVar5[5] = uVar1;
        puVar5[6] = uVar2;
        puVar5[7] = uVar3;
        uVar1 = param_6[9];
        uVar2 = param_6[10];
        puVar5[8] = param_6[8];
        puVar5[9] = uVar1;
        puVar5[10] = uVar2;
        puVar4 = param_6 + 0xb;
        FUN_000812b0(param_6);
        param_6 = puVar4;
        puVar6 = puVar5 + 0xb;
        puVar5 = puVar5 + 0xb;
      } while (puVar4 < puVar7);
    }
    *(undefined4 **)(param_2 + 8) = puVar6;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}



