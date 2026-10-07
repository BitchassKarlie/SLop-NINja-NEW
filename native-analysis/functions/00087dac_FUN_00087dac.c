/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00087dac FUN_00087dac */

undefined4 *
FUN_00087dac(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            uint param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_4;
  if (param_4 != param_6) {
    do {
      uVar2 = uVar3 + 0x7c;
      FUN_000223ec(uVar3 + 0xc);
      uVar3 = uVar2;
    } while (param_6 != uVar2);
    uVar4 = *(uint *)(param_2 + 8);
    uVar3 = param_4;
    uVar2 = param_4;
    if (param_6 < uVar4) {
      do {
        FUN_00086a14(uVar2,param_6);
        iVar1 = param_6 + 0xc;
        param_6 = param_6 + 0x7c;
        FUN_000223ec(iVar1);
        uVar3 = uVar2 + 0x7c;
        uVar2 = uVar2 + 0x7c;
      } while (param_6 < uVar4);
    }
    *(uint *)(param_2 + 8) = uVar3;
  }
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}



