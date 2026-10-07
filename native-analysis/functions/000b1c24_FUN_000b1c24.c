/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1c24 FUN_000b1c24 */

void FUN_000b1c24(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_000b1b84(param_1,param_3,param_4,param_4,param_2,param_3);
  if (param_4 != 0) {
    while( true ) {
      FUN_0009e7a4(iVar1,param_5);
      *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_5 + 0x28);
      *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_5 + 0x2c);
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_5 + 0x30);
      *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_5 + 0x34);
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_5 + 0x38);
      *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_5 + 0x3c);
      param_4 = param_4 + -1;
      *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_5 + 0x40);
      if (param_4 == 0) break;
      iVar1 = iVar1 + 0x44;
    }
  }
  return;
}



