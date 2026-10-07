/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9ed8 FUN_000b9ed8 */

undefined4 FUN_000b9ed8(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    uVar1 = 0xffffff7f;
  }
  else {
    if (((code *)param_1[0xa3] != (code *)0x0) && (iVar2 = (*(code *)param_1[0xa3])(), iVar2 != -1))
    {
      param_1[2] = param_3;
      param_1[3] = param_4;
      FUN_000c2fec(param_1 + 6);
      return 0;
    }
    uVar1 = 0xffffff80;
  }
  return uVar1;
}



