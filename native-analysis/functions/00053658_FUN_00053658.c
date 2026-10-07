/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00053658 FUN_00053658 */

void FUN_00053658(undefined4 param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined auStack_30 [40];
  
  pvVar1 = operator_new(0x28);
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  *(undefined **)pvVar1 = auStack_30;
  *(undefined **)((int)pvVar1 + 4) = auStack_30;
  *(undefined4 *)((int)pvVar1 + 8) = uVar2;
  *(undefined4 *)((int)pvVar1 + 0xc) = uVar3;
  *(undefined4 *)((int)pvVar1 + 0x10) = uVar4;
  *(undefined4 *)((int)pvVar1 + 0x14) = uVar5;
  *(undefined4 *)((int)pvVar1 + 0x18) = uVar6;
  *(undefined4 *)((int)pvVar1 + 0x1c) = uVar7;
  *(undefined4 *)((int)pvVar1 + 0x20) = uVar8;
  *(undefined4 *)((int)pvVar1 + 0x24) = uVar9;
  return;
}



