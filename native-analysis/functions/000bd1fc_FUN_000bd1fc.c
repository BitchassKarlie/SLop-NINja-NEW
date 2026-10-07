/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bd1fc FUN_000bd1fc */

uint FUN_000bd1fc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    uVar2 = param_1;
    do {
      param_1 = uVar1 + 1;
      uVar2 = uVar2 >> 1;
      uVar1 = param_1;
    } while (uVar2 != 0);
  }
  return param_1;
}



