/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00064b14 FUN_00064b14 */

void FUN_00064b14(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  uint local_64 [8];
  undefined local_44;
  uint local_40 [8];
  undefined local_20;
  int local_1c;
  
  iVar2 = DAT_00064c54;
  iVar8 = DAT_00064c50 + 0x64b22;
  local_1c = **(int **)(iVar8 + DAT_00064c54);
  if (*(int *)(param_1 + 0x80) != 0) {
    bVar1 = *(byte *)(DAT_00064c58 + 0x64b36);
    if (bVar1 == 0) {
      *(undefined4 *)(param_1 + 0x7c) = DAT_00064c4c;
      if ((*(int *)(param_1 + 0x8c) != 0) && (*(int *)(*(int *)(param_1 + 0x8c) + 0x278) != 0)) {
        uVar3 = FUN_0007832c();
        FUN_00077d38(uVar3,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x278) + 0x10));
        uVar6 = *(uint *)(*(int *)(*(int *)(param_1 + 0x8c) + 0x278) + 0x10);
        if (uVar6 == 0) {
          puVar9 = local_40;
          uVar3 = *(undefined4 *)(*(int *)(iVar8 + DAT_00064c5c) + 0x18c);
          local_6c = DAT_00064c70 + 0x64c30;
          local_68 = *(undefined4 *)(iVar8 + DAT_00064c64);
          local_20 = 1;
          local_40[0] = uVar6;
          (**(code **)(DAT_00064c70 + 0x64c38))(&local_6c,puVar9);
          iVar4 = DAT_00064c74 + 0x64c46;
        }
        else {
          if (uVar6 != 1) goto LAB_00064bb4;
          puVar9 = local_64;
          local_44 = 1;
          uVar3 = *(undefined4 *)(*(int *)(iVar8 + DAT_00064c5c) + 0x18c);
          local_74 = DAT_00064c60 + 0x64b96;
          local_70 = *(undefined4 *)(iVar8 + DAT_00064c64);
          local_64[0] = (uint)bVar1;
          (**(code **)(DAT_00064c60 + 0x64b9e))(&local_74,puVar9);
          iVar4 = DAT_00064c68 + 0x64ba6;
        }
        FUN_00073a7c(uVar3,iVar4,0x3f800000,puVar9);
        FUN_0001d388(puVar9);
      }
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1 + 0x80) + 0x120);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0xb8) = *(undefined4 *)(iVar4 + 0x10);
        *(undefined4 *)(iVar4 + 0xbc) = *(undefined4 *)(iVar4 + 0x14);
        *(undefined4 *)(iVar4 + 0xc0) = *(undefined4 *)(iVar4 + 0x18);
        iVar4 = DAT_00064c6c;
        iVar10 = *(int *)(*(int *)(param_1 + 0x80) + 0x120);
        puVar7 = (undefined4 *)(DAT_00064c6c + 0x64be8);
        uVar3 = *(undefined4 *)(DAT_00064c6c + 0x64bec);
        uVar5 = *(undefined4 *)(DAT_00064c6c + 0x64bf0);
        *(undefined4 *)(iVar10 + 0x1c) = *puVar7;
        *(undefined4 *)(iVar10 + 0x20) = uVar3;
        *(undefined4 *)(iVar10 + 0x24) = uVar5;
        iVar10 = *(int *)(*(int *)(param_1 + 0x80) + 0x120);
        uVar3 = *(undefined4 *)(iVar4 + 0x64bec);
        uVar5 = *(undefined4 *)(iVar4 + 0x64bf0);
        *(undefined4 *)(iVar10 + 0xc4) = *puVar7;
        *(undefined4 *)(iVar10 + 200) = uVar3;
        *(undefined4 *)(iVar10 + 0xcc) = uVar5;
        iVar10 = *(int *)(*(int *)(param_1 + 0x80) + 0x120);
        uVar3 = *(undefined4 *)(iVar4 + 0x64bec);
        uVar5 = *(undefined4 *)(iVar4 + 0x64bf0);
        *(undefined4 *)(iVar10 + 0x9c) = *puVar7;
        *(undefined4 *)(iVar10 + 0xa0) = uVar3;
        *(undefined4 *)(iVar10 + 0xa4) = uVar5;
      }
    }
  }
LAB_00064bb4:
  if (local_1c == **(int **)(iVar8 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



