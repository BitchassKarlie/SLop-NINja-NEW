/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ab8a8 FUN_000ab8a8 */

undefined4 FUN_000ab8a8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined auStack_40 [4];
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined auStack_30 [4];
  uint local_2c;
  uint local_28;
  undefined4 local_24;
  
  iVar5 = 0;
  FUN_000ab6a8(auStack_30,param_2,DAT_000aba1c + 0xab8ba,2,0);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  if (((int)(local_28 - local_2c) >> 3) * -0x33333333 == 0) {
    local_3c = 0;
  }
  else {
    FUN_000ab59c(auStack_40);
    if (((int)(local_28 - local_2c) >> 3) * -0x33333333 != 0) {
      uVar6 = 0;
      iVar2 = local_28;
      iVar4 = local_2c;
      do {
        iVar7 = iVar4 + iVar5;
        if (*(int *)(iVar4 + iVar5) == 2) {
          if (*(char *)(iVar7 + 4) != '.') {
LAB_000ab95c:
            FUN_000ab654(auStack_40);
            FUN_0009e7a4(local_38,iVar7);
            local_38 = local_38 + 0x28;
            iVar2 = local_28;
            iVar4 = local_2c;
          }
        }
        else {
          if ((((*(int *)(iVar4 + iVar5) != 3) || (*(char *)(iVar7 + 4) != '.')) ||
              (*(char *)(iVar7 + 5) != '.')) ||
             ((iVar3 = ((int)(local_38 - local_3c) >> 3) * -0x33333333, iVar3 == 0 ||
              (((iVar3 = iVar3 + -1, iVar8 = local_3c + iVar3 * 0x28,
                *(int *)(local_3c + iVar3 * 0x28) == 3 && (*(char *)(iVar8 + 4) == '.')) &&
               (*(char *)(iVar8 + 5) == '.')))))) goto LAB_000ab95c;
          if (local_3c < local_38) {
            local_38 = local_38 - 0x28;
            FUN_0009e858();
            iVar2 = local_28;
            iVar4 = local_2c;
          }
        }
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 0x28;
      } while (uVar6 < (uint)((iVar2 - iVar4 >> 3) * -0x33333333));
    }
  }
  uVar1 = local_24;
  local_28 = local_38;
  local_24 = local_34;
  local_34 = uVar1;
  local_2c = local_3c;
  FUN_000ab4d0(auStack_40);
  FUN_000ab528(param_1,auStack_30,0,0xffffffff);
  FUN_000ab4d0(auStack_30);
  return param_1;
}



