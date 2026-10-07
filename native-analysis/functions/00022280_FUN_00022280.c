/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00022280 FUN_00022280 */

undefined4 FUN_00022280(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (0 < param_1[1]) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      uVar1 = FUN_0007b72c();
      iVar2 = FUN_000793e8(uVar1,*(undefined4 *)(*param_1 + iVar3));
      if (iVar2 != 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < param_1[1]);
  }
  return 0;
}



