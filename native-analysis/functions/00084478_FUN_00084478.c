/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084478 FUN_00084478 */

void FUN_00084478(char *param_1)

{
  char cVar1;
  
  if (param_1 != (char *)0x0) {
    cVar1 = *param_1;
    while (cVar1 != '\0') {
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        *param_1 = cVar1 + -0x20;
      }
      if (param_1 == (char *)0xffffffff) {
        return;
      }
      param_1 = param_1 + 1;
      cVar1 = *param_1;
    }
  }
  return;
}



