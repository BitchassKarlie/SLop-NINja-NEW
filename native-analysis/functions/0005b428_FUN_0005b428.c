/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005b428 FUN_0005b428 */

void FUN_0005b428(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar4 = DAT_0005b50c + 0x5b436;
  if (*(char *)(param_1 + 300) == '\0') {
    if (*(int *)(param_1 + 0x130) == 0) {
      uVar2 = *(undefined4 *)
               (*(int *)(*(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x90) * 4) + 0x10);
      uVar1 = FUN_0007b72c();
      local_24 = *(undefined4 *)(DAT_0005b514 + 0x5b4b2);
      local_20 = *(undefined4 *)(DAT_0005b514 + 0x5b4b6);
      local_1c = *(undefined4 *)(DAT_0005b514 + 0x5b4ba);
      FUN_0007cae4(uVar1,uVar2,&local_24,0);
      uVar1 = FUN_0007b72c();
      iVar5 = FUN_000793e8(uVar1,uVar2);
      if (iVar5 != 0) {
        *(int *)(*(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x90) * 4) = iVar5;
        *(undefined4 *)(param_1 + 0x130) = 2;
        *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
      }
      FUN_0008f060(param_1 + 0xa0,0x80,DAT_0005b51c + 0x5b504,
                   *(undefined4 *)(*(int *)(iVar4 + DAT_0005b518) + 0x24));
    }
  }
  else if ((*(int *)(param_1 + 0x128) != 0) &&
          (iVar4 = *(int *)(*(int *)(param_1 + 0x128) + 0x120), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0xb8) = *(undefined4 *)(iVar4 + 0x10);
    *(undefined4 *)(iVar4 + 0xbc) = *(undefined4 *)(iVar4 + 0x14);
    *(undefined4 *)(iVar4 + 0xc0) = *(undefined4 *)(iVar4 + 0x18);
    iVar4 = DAT_0005b510;
    iVar5 = *(int *)(*(int *)(param_1 + 0x128) + 0x120);
    puVar3 = (undefined4 *)(DAT_0005b510 + 0x5b462);
    uVar1 = *(undefined4 *)(DAT_0005b510 + 0x5b466);
    uVar2 = *(undefined4 *)(DAT_0005b510 + 0x5b46a);
    *(undefined4 *)(iVar5 + 0x1c) = *puVar3;
    *(undefined4 *)(iVar5 + 0x20) = uVar1;
    *(undefined4 *)(iVar5 + 0x24) = uVar2;
    iVar5 = *(int *)(*(int *)(param_1 + 0x128) + 0x120);
    uVar1 = *(undefined4 *)(iVar4 + 0x5b466);
    uVar2 = *(undefined4 *)(iVar4 + 0x5b46a);
    *(undefined4 *)(iVar5 + 0xc4) = *puVar3;
    *(undefined4 *)(iVar5 + 200) = uVar1;
    *(undefined4 *)(iVar5 + 0xcc) = uVar2;
    iVar5 = *(int *)(*(int *)(param_1 + 0x128) + 0x120);
    uVar1 = *(undefined4 *)(iVar4 + 0x5b466);
    uVar2 = *(undefined4 *)(iVar4 + 0x5b46a);
    *(undefined4 *)(iVar5 + 0x9c) = *puVar3;
    *(undefined4 *)(iVar5 + 0xa0) = uVar1;
    *(undefined4 *)(iVar5 + 0xa4) = uVar2;
  }
  return;
}



