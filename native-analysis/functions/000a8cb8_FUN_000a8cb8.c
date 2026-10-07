/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8cb8 FUN_000a8cb8 */

undefined4 *
FUN_000a8cb8(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_6 == param_4) {
    *param_1 = param_3;
  }
  uVar3 = param_4;
  if (param_6 == param_4) {
    param_1[1] = param_6;
  }
  else {
    do {
      uVar2 = uVar3 + 0x30;
      FUN_000a898c(uVar3);
      uVar3 = uVar2;
    } while (param_6 != uVar2);
    uVar4 = *(uint *)(param_2 + 8);
    uVar3 = param_4;
    uVar2 = param_4;
    if (param_6 < uVar4) {
      do {
        FUN_000a8b78(uVar2,param_6);
        uVar1 = param_6 + 0x30;
        FUN_000a898c(param_6);
        param_6 = uVar1;
        uVar3 = uVar2 + 0x30;
        uVar2 = uVar2 + 0x30;
      } while (uVar1 < uVar4);
    }
    *(uint *)(param_2 + 8) = uVar3;
    *param_1 = param_3;
    param_1[1] = param_4;
  }
  return param_1;
}



