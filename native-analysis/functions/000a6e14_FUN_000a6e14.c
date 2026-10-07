/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6e14 FUN_000a6e14 */

undefined4 FUN_000a6e14(void)

{
  int iVar1;
  
  do {
    iVar1 = glGetError();
    if (iVar1 == 0) {
      return 0;
    }
  } while (iVar1 != 0x505);
  return 1;
}



