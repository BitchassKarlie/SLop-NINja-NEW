/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000951d0 FUN_000951d0 */

void FUN_000951d0(int param_1,uint param_2,char *param_3,int *param_4)

{
  if (param_2 < 3) {
    strcpy((char *)(param_2 * 100 + param_1 + 0x188),param_3);
    if (*(char *)(param_4 + 8) != '\0') {
      param_4 = (int *)*param_4;
    }
    if (param_4 != (int *)0x0) {
      (**(code **)(*param_4 + 8))(param_4,param_2 * 100 + param_1 + 0x164);
    }
  }
  return;
}



