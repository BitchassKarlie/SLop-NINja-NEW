/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac870 FUN_000ac870 */

void FUN_000ac870(undefined4 param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  if (param_4 != param_2) {
    puVar3 = param_2 + 4;
    puVar6 = param_2;
    while (puVar1 = puVar3, puVar1 != param_4) {
      puVar3 = puVar6 + 4;
      puVar2 = puVar1;
      if (*puVar3 < *param_2) {
        FUN_000ac81c(param_1,param_2,param_1,puVar1,param_1,puVar1 + 4);
      }
      else {
        do {
          puVar5 = puVar2;
          uVar4 = *puVar6;
          puVar2 = puVar6;
          puVar6 = puVar6 + -4;
        } while (*puVar3 < uVar4);
        if (puVar1 != puVar5) {
          FUN_000ac81c(param_1,puVar5,param_1,puVar1,param_1,puVar1 + 4);
        }
      }
      puVar6 = puVar1;
      puVar3 = puVar1 + 4;
    }
  }
  return;
}



