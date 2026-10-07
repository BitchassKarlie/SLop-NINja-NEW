/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b5034 FUN_000b5034 */

void FUN_000b5034(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x14);
  while( true ) {
    if (piVar2 == *(int **)(param_1 + 0x18)) {
      FUN_000b5008(param_1 + 0x10);
      puVar1 = *(undefined4 **)(param_1 + 0x18);
      *puVar1 = 0;
      FUN_000b4cb4(puVar1,*param_2);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
      FUN_000b4ee8(param_1);
      return;
    }
    if (*param_2 == *piVar2) break;
    piVar2 = piVar2 + 1;
  }
  return;
}



