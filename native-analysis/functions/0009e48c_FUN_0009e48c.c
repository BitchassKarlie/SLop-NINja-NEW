/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e48c FUN_0009e48c */

void FUN_0009e48c(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if ((param_1[9] == 0) && (*param_1 != 1)) {
    if (*param_1 < 0x21) {
      puVar1 = param_1 + 1;
    }
    else {
      puVar1 = (uint *)param_1[1];
    }
    uVar2 = FUN_0008f414(puVar1);
    param_1[9] = uVar2;
  }
  return;
}



