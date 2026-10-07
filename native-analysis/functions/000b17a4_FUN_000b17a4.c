/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b17a4 FUN_000b17a4 */

int FUN_000b17a4(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  
  if (param_3 < param_4) {
    do {
      FUN_0009e7a4(param_2,param_3);
      *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
      *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_3 + 0x2c);
      *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_3 + 0x30);
      *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_3 + 0x34);
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_3 + 0x38);
      *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_3 + 0x3c);
      uVar1 = param_3 + 0x44;
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_3 + 0x40);
      param_2 = param_2 + 0x44;
      FUN_0009e858(param_3);
      param_3 = uVar1;
    } while (uVar1 < param_4);
  }
  return param_2;
}



