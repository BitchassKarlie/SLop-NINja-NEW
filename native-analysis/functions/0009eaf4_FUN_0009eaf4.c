/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009eaf4 FUN_0009eaf4 */

void FUN_0009eaf4(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x10) != 0) && (0 < param_2)) {
    do {
      if (**(char **)(param_1 + 0x10) != '\0') {
        *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
        uVar1 = FUN_000b3374(param_1 + 0x14);
        *(undefined4 *)(param_1 + 0x18) = uVar1;
      }
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  return;
}



