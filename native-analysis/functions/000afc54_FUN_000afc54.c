/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000afc54 FUN_000afc54 */

int FUN_000afc54(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_0009e7a4();
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_000af610(param_1 + 0x30,param_1 + 0x30,0,param_2 + 0x30,*(undefined4 *)(param_2 + 0x34),
               param_2 + 0x30,*(undefined4 *)(param_2 + 0x38));
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  return param_1;
}



