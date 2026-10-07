/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9a7c FUN_000a9a7c */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000a9a7c(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar4 = (param_3 + 1) * 2;
  iVar3 = param_3;
  iVar1 = param_3;
  if (iVar4 < param_4) {
    do {
      iVar3 = iVar4 + -1;
      puVar2 = (undefined4 *)(param_2 + iVar4 * 0x14);
      iVar5 = param_2 + iVar1 * 0x14;
      puVar6 = (undefined4 *)(param_2 + iVar3 * 0x14);
      iVar1 = FUN_000a988c(puVar2,puVar6);
      if (iVar1 == 0) {
        iVar3 = iVar4;
        puVar6 = puVar2;
      }
      FUN_000a07fc(iVar5,*puVar6);
      iVar4 = (iVar3 + 1) * 2;
      *(undefined4 *)(iVar5 + 4) = puVar6[1];
      *(undefined4 *)(iVar5 + 8) = puVar6[2];
      *(undefined4 *)(iVar5 + 0xc) = puVar6[3];
      *(undefined4 *)(iVar5 + 0x10) = puVar6[4];
      iVar1 = iVar3;
    } while (param_4 != iVar4 && param_4 + (iVar3 + 1) * -2 < 0 == SBORROW4(param_4,iVar4));
  }
  if (iVar4 == param_4) {
    iVar1 = param_2 + iVar3 * 0x14;
    iVar3 = iVar4 + -1;
    iVar4 = param_2 + iVar3 * 0x14;
    FUN_000a07fc(iVar1,*(undefined4 *)(param_2 + iVar3 * 0x14));
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar4 + 4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
  }
  local_3c = 0;
  FUN_000a07fc(&local_3c,*param_5);
  local_38 = param_5[1];
  local_34 = param_5[2];
  local_30 = param_5[3];
  local_2c = param_5[4];
  FUN_000a99d4(param_1,param_2,iVar3,param_3,&local_3c);
  FUN_000a08c8(&local_3c);
  return;
}



