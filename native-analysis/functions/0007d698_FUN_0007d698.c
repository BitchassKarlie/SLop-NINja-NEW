/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007d698 FUN_0007d698 */

undefined2 FUN_0007d698(int param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)(param_1 + 0x4b);
  if (*pbVar1 != 0) {
    iVar2 = 0;
    do {
      if ((*(short *)(param_1 + 0x52) == 0) && (*(char *)(param_1 + 0x55) != '\0')) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 0x24;
    } while (iVar2 < (int)(uint)*pbVar1);
  }
  return 1;
}



