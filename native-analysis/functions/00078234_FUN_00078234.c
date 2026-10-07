/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00078234 FUN_00078234 */

void FUN_00078234(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  FUN_000780d8();
  iVar1 = DAT_0007829c;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  uVar2 = FUN_0009a5d8(param_2,iVar1 + 0x7824c);
  FUN_00077ea8(param_1,uVar2);
  if (*(int *)(param_1 + 0x38) == 0) {
    *(undefined4 *)(param_1 + 0x3c) = 1;
    puVar3 = (undefined4 *)operator_new__(0xc);
    *puVar3 = 4;
    *(undefined *)(puVar3 + 2) = 0;
    puVar3[1] = 1;
    *(undefined *)((int)puVar3 + 9) = 0;
    *(undefined *)((int)puVar3 + 10) = 0;
    *(undefined *)((int)puVar3 + 0xb) = 0xff;
    *(undefined4 **)(param_1 + 0x38) = puVar3 + 2;
    *(undefined *)((int)puVar3 + 0xb) = *(undefined *)(param_1 + 0x2f);
    *(undefined *)((int)puVar3 + 10) = *(undefined *)(param_1 + 0x2e);
    *(undefined *)((int)puVar3 + 9) = *(undefined *)(param_1 + 0x2d);
    *(undefined *)(puVar3 + 2) = *(undefined *)(param_1 + 0x2c);
  }
  return;
}



