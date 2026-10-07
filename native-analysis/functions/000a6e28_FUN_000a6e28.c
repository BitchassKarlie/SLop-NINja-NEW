/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6e28 FUN_000a6e28 */

void FUN_000a6e28(void)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(DAT_000a6e60 + 0xa6e34) == '\0') {
    do {
      iVar2 = glGetError();
      iVar1 = DAT_000a6e64;
    } while (iVar2 != 0);
    *(undefined *)(DAT_000a6e64 + 0xa6e48) = 1;
    FUN_0008d120();
    FUN_0009ebe8();
    glFinish();
    glFlush();
    FUN_0008d120();
    FUN_0009ec04();
    *(undefined *)(iVar1 + 0xa6e48) = 0;
  }
  return;
}



