/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005737c FUN_0005737c */

int * FUN_0005737c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_000573e8;
  *param_1 = DAT_000573e4 + 0x57390;
  FUN_00057198();
  *(int *)(iVar2 + 0x573d2) = *(int *)(iVar2 + 0x573d2) + -1;
  FUN_00017d64(param_1 + 0x1a,0);
  if (*(int *)(iVar2 + 0x573d2) < 1) {
    FUN_00017d64(iVar2 + 0x5739e,0);
    iVar3 = 0;
    FUN_00017d64(iVar2 + 0x573a2,0);
    FUN_00017d64(iVar2 + 0x573a6,0);
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      FUN_00017d64(iVar2 + 0x573aa + iVar1,0);
    } while (iVar3 != 10);
  }
  FUN_0004a8a4(param_1);
  return param_1;
}



