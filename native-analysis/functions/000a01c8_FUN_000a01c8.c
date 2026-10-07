/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a01c8 FUN_000a01c8 */

int FUN_000a01c8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar3 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != puVar3) {
    do {
      puVar2 = puVar1 + 5;
      (**(code **)*puVar1)(puVar1);
      puVar1 = puVar2;
    } while (puVar3 != puVar2);
    puVar1 = *(undefined4 **)(param_1 + 4);
    puVar3 = puVar1;
  }
  *(undefined4 **)(param_1 + 8) = puVar3;
  if (puVar1 != (undefined4 *)0x0) {
    operator_delete(puVar1);
  }
  return param_1;
}



