/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6e68 FUN_000a6e68 */

void FUN_000a6e68(int *param_1)

{
  int local_c;
  
  local_c = *param_1;
  if (local_c != -1) {
    glDeleteTextures(1,&local_c);
    *param_1 = -1;
  }
  return;
}



