/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009f378 FUN_0009f378 */

void FUN_0009f378(int *param_1)

{
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(undefined *)(param_1 + 0xd) = 0;
    if (*(FILE **)(*param_1 + 8) == (FILE *)0x0) {
      FUN_000ab40c(param_1);
    }
    else {
      fclose(*(FILE **)(*param_1 + 8));
      *(undefined4 *)(*param_1 + 8) = 0;
    }
  }
  return;
}



