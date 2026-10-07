/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000658a0 FUN_000658a0 */

int * FUN_000658a0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_000658fc + 0x658b0;
  *param_1 = DAT_000658f8 + 0x658b6;
  if (param_1[0x24] != 0) {
    iVar2 = *(int *)(iVar2 + DAT_00065900);
    FUN_00073984(*(undefined4 *)(iVar2 + 0x18c),param_1[0x24],
                 *(undefined4 *)(DAT_00065904 + 0x658c4 + param_1[0x26] * 4));
    uVar1 = DAT_000658f4;
    param_1[0x24] = 0;
    **(undefined4 **)(iVar2 + 0x18c) = uVar1;
  }
  FUN_00017d64(param_1 + 0x1a,0);
  FUN_0004a8a4(param_1);
  return param_1;
}



