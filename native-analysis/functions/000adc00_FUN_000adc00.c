/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000adc00 FUN_000adc00 */

void FUN_000adc00(int param_1,undefined4 param_2,undefined param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1c8) != *(int *)(param_1 + 0x1cc)) {
    iVar3 = *(int *)(param_1 + 0x1c8);
    iVar2 = *(int *)(param_1 + 0x1c0);
    iVar1 = iVar2 + iVar3 * 0x14;
    *(undefined4 *)(iVar1 + 0x10) = param_6;
    *(undefined4 *)(iVar1 + 0xc) = param_5;
    *(undefined4 *)(iVar1 + 8) = param_4;
    *(undefined *)(iVar1 + 4) = param_3;
    *(undefined4 *)(iVar2 + iVar3 * 0x14) = param_2;
    if (*(int *)(param_1 + 0x1c8) == *(int *)(param_1 + 0x1c4) + -1) {
      *(undefined4 *)(param_1 + 0x1c8) = 0;
    }
    else {
      *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
    }
  }
  return;
}



