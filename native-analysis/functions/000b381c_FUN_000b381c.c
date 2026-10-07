/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b381c FUN_000b381c */

void FUN_000b381c(char *param_1,int *param_2)

{
  undefined *puVar1;
  
  if (*param_2 != 0) {
    if (*param_1 == '\0') {
      puVar1 = (undefined *)FUN_000b37d8(param_1 + 4);
      FUN_000a7a38(puVar1 + 8,*param_2);
      *puVar1 = 1;
      FUN_000a77dc(param_1);
    }
    else {
      FUN_000a7688(*param_2);
    }
  }
  return;
}



