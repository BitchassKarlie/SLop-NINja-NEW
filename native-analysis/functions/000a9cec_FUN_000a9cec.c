/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9cec FUN_000a9cec */

void FUN_000a9cec(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_4 - param_2;
  if (0x27 < iVar3) {
    iVar2 = 0;
    do {
      while (iVar1 = iVar2 + param_4, 0x27 < iVar1 - param_2) {
        iVar2 = iVar2 + -0x14;
        FUN_000a9c84(param_1,param_2,param_3,iVar1,0);
        if (iVar3 + iVar2 < 0x28) {
          return;
        }
      }
      iVar2 = iVar2 + -0x14;
    } while (0x27 < iVar3 + iVar2);
  }
  return;
}



