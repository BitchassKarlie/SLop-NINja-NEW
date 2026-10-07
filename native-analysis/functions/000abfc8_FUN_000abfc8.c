/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000abfc8 FUN_000abfc8 */

undefined4 * FUN_000abfc8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  *param_1 = *param_2;
  FUN_0009e7a4(param_1 + 1,param_2 + 1);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  iVar2 = param_2[0xc];
  iVar5 = param_2[0xd];
  iVar4 = iVar5 - iVar2;
  if ((iVar4 != 0) && (iVar1 = FUN_00098828(param_1 + 0xb,0,iVar4), iVar2 != iVar5)) {
    do {
      *(undefined *)(iVar1 + iVar3) = *(undefined *)(iVar2 + iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar4);
  }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_000abf74(param_1 + 0xf,param_1 + 0xf,0,param_2 + 0xf,param_2[0x10],param_2 + 0xf,param_2[0x11]
              );
  return param_1;
}



