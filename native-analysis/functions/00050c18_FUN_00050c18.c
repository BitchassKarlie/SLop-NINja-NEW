/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00050c18 FUN_00050c18 */

void FUN_00050c18(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int ****ppppiVar7;
  float fVar8;
  int local_50;
  int local_4c;
  int local_48;
  int ****local_44;
  int ****local_40 [8];
  char local_20;
  int local_1c;
  
  iVar2 = DAT_00050cdc;
  iVar6 = DAT_00050cd8 + 0x50c26;
  local_1c = **(int **)(iVar6 + DAT_00050cdc);
  if (*(int *)(param_1 + 0x11c) == 1) {
    iVar4 = *(int *)(*(int *)(param_1 + 0xd0) + 0x120);
    bVar1 = *(byte *)(iVar4 + 0xb4);
    ppppiVar7 = (int ****)(uint)bVar1;
    if (ppppiVar7 == (int ****)0x0) {
      fVar8 = *(float *)(iVar4 + 0x6c);
      if (fVar8 == DAT_00050cd4 || fVar8 < DAT_00050cd4 != (NAN(fVar8) || NAN(DAT_00050cd4))) {
        *(undefined *)(iVar4 + 0xb4) = 1;
        *(byte *)(*(int *)(param_1 + 0xd0) + 0x10f) = bVar1;
        iVar4 = *(int *)(*(int *)(param_1 + 0xd0) + 0x120);
        uVar3 = *(undefined4 *)(DAT_00050ce0 + 0x50c88);
        uVar5 = *(undefined4 *)(DAT_00050ce0 + 0x50c8c);
        *(undefined4 *)(iVar4 + 0xc4) = *(undefined4 *)(DAT_00050ce0 + 0x50c84);
        *(undefined4 *)(iVar4 + 200) = uVar3;
        *(undefined4 *)(iVar4 + 0xcc) = uVar5;
        iVar4 = *(int *)(param_1 + 0xd0);
        local_50 = DAT_00050ce4 + 0x50c9c;
        local_20 = '\x01';
        local_48 = DAT_00050ce8 + 0x50ca6;
        local_4c = param_1;
        local_44 = ppppiVar7;
        local_40[0] = ppppiVar7;
        (**(code **)(DAT_00050ce4 + 0x50ca4))(&local_50,local_40);
        ppppiVar7 = (int ****)local_40;
        if (local_20 != '\0') {
          ppppiVar7 = local_40[0];
        }
        if (ppppiVar7 != (int ****)0x0) {
          (*(code *)(*ppppiVar7)[2])(ppppiVar7,iVar4 + 0x7c);
        }
        FUN_0001d358(local_40);
      }
    }
  }
  if (local_1c == **(int **)(iVar6 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



