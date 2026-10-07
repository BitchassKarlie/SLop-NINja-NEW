/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9f34 FUN_000a9f34 */

undefined4 *
FUN_000a9f34(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_3 + ((((int)(param_5 - param_3) >> 2) * -0x33333333) / 2) * 0x14;
  FUN_000a9e20(param_2,param_3,param_2,uVar4,param_4,param_5 - 0x14);
  uVar6 = uVar4;
  while (uVar5 = uVar6, param_3 < uVar5) {
    uVar6 = uVar5 - 0x14;
    iVar2 = FUN_000a988c(uVar6,uVar5);
    if ((iVar2 != 0) || (iVar2 = FUN_000a988c(uVar5,uVar6), iVar2 != 0)) break;
  }
  do {
    uVar4 = uVar4 + 0x14;
    uVar6 = uVar5;
    uVar1 = uVar4;
    if (param_5 <= uVar4) break;
    iVar2 = FUN_000a988c(uVar4,uVar5);
    if ((iVar2 != 0) || (iVar2 = FUN_000a988c(uVar5,uVar4), iVar2 != 0)) break;
  } while( true );
joined_r0x000a9fac:
  uVar3 = uVar6;
  if (param_5 <= uVar1) {
joined_r0x000a9fb0:
    while (uVar6 = uVar5, param_3 < uVar6) {
      uVar5 = uVar6 - 0x14;
      iVar2 = FUN_000a988c(uVar5,uVar3);
      if (iVar2 == 0) {
        iVar2 = FUN_000a988c(uVar3,uVar5);
        if (iVar2 != 0) break;
        uVar3 = uVar3 - 0x14;
        FUN_000a9d68(uVar3,uVar5);
      }
    }
    if (param_3 == uVar6) {
      if (uVar1 == param_5) {
        param_1[1] = uVar3;
        param_1[3] = uVar4;
        *param_1 = param_2;
        param_1[2] = param_2;
        return param_1;
      }
      if (uVar4 != uVar1) {
        FUN_000a9d68(uVar3,uVar4);
      }
      uVar4 = uVar4 + 0x14;
      uVar6 = uVar3 + 0x14;
      FUN_000a9d68(uVar3,uVar1);
      uVar5 = param_3;
      uVar1 = uVar1 + 0x14;
    }
    else if (uVar1 == param_5) {
      uVar5 = uVar6 - 0x14;
      uVar6 = uVar3 - 0x14;
      if (uVar5 != uVar6) {
        FUN_000a9d68(uVar5,uVar6);
      }
      uVar4 = uVar4 - 0x14;
      FUN_000a9d68(uVar6,uVar4);
      uVar1 = param_5;
    }
    else {
      FUN_000a9d68(uVar1,uVar6 - 0x14);
      uVar5 = uVar6 - 0x14;
      uVar6 = uVar3;
      uVar1 = uVar1 + 0x14;
    }
    goto joined_r0x000a9fac;
  }
  iVar2 = FUN_000a988c(uVar6,uVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_000a988c(uVar1,uVar6);
    if (iVar2 != 0) goto joined_r0x000a9fb0;
    FUN_000a9d68(uVar4,uVar1);
    uVar4 = uVar4 + 0x14;
  }
  uVar1 = uVar1 + 0x14;
  goto joined_r0x000a9fac;
}



