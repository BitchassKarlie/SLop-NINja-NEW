/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000acf5c FUN_000acf5c */

void FUN_000acf5c(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4 - param_2;
  if (0x1f < iVar3) {
    iVar2 = 0;
    do {
      while (iVar1 = iVar2 + param_4, 0x1f < iVar1 - param_2) {
        iVar2 = iVar2 + -0x10;
        FUN_000acf04(param_1,param_2,param_3,iVar1,0,0);
        if (iVar3 + iVar2 < 0x20) {
          return;
        }
      }
      iVar2 = iVar2 + -0x10;
    } while (0x1f < iVar3 + iVar2);
  }
  return;
}



