/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b20d8 FUN_000b20d8 */

void FUN_000b20d8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_000b1e98(param_1 + 0x34,param_3,param_3,param_4,param_4);
  if (param_3 != 0) {
    iVar6 = 0;
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      iVar5 = *(int *)(param_1 + 0x38) + iVar6;
      iVar6 = iVar6 + 0x44;
      FUN_0009e770(iVar5,param_2);
      uVar2 = *(undefined4 *)(param_2 + 0x2c);
      uVar3 = *(undefined4 *)(param_2 + 0x30);
      uVar4 = *(undefined4 *)(param_2 + 0x34);
      *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(iVar5 + 0x2c) = uVar2;
      *(undefined4 *)(iVar5 + 0x30) = uVar3;
      *(undefined4 *)(iVar5 + 0x34) = uVar4;
      uVar2 = *(undefined4 *)(param_2 + 0x3c);
      *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(iVar5 + 0x3c) = uVar2;
      puVar1 = (undefined4 *)(param_2 + 0x40);
      param_2 = param_2 + 0x44;
      *(undefined4 *)(iVar5 + 0x40) = *puVar1;
    } while (iVar7 != param_3);
  }
  return;
}



