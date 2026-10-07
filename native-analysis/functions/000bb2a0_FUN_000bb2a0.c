/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bb2a0 FUN_000bb2a0 */

int FUN_000bb2a0(char *param_1,undefined4 param_2)

{
  FILE *__stream;
  int iVar1;
  
  __stream = fopen(param_1,(char *)(DAT_000bb2d0 + 0xbb2aa));
  if (__stream == (FILE *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_000bb26c(__stream,param_2,0,0);
    if (iVar1 != 0) {
      fclose(__stream);
    }
  }
  return iVar1;
}



