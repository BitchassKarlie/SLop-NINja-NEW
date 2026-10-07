/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a99d4 FUN_000a99d4 */

void FUN_000a99d4(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_4 < param_3) {
    iVar3 = (param_3 + -1) / 2;
    iVar4 = param_2 + iVar3 * 0x14;
    iVar2 = FUN_000a988c(iVar4,param_5,param_3,param_4,param_1,param_2);
    while (iVar1 = iVar3, iVar2 != 0) {
      iVar3 = param_2 + param_3 * 0x14;
      FUN_000a07fc(iVar3,*(undefined4 *)(param_2 + iVar1 * 0x14));
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
      if (iVar1 <= param_4) goto LAB_000a99f4;
      iVar3 = (iVar1 + -1) / 2;
      iVar4 = param_2 + iVar3 * 0x14;
      iVar2 = FUN_000a988c(iVar4,param_5);
      param_3 = iVar1;
    }
  }
  iVar4 = param_2 + param_3 * 0x14;
LAB_000a99f4:
  FUN_000a07fc(iVar4,*param_5);
  *(undefined4 *)(iVar4 + 4) = param_5[1];
  *(undefined4 *)(iVar4 + 8) = param_5[2];
  *(undefined4 *)(iVar4 + 0xc) = param_5[3];
  *(undefined4 *)(iVar4 + 0x10) = param_5[4];
  return;
}



