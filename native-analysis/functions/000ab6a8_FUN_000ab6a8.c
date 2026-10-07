/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ab6a8 FUN_000ab6a8 */

void FUN_000ab6a8(int param_1,uint *param_2,int param_3,int param_4,char param_5)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int local_54 [10];
  int local_2c;
  
  iVar2 = DAT_000ab818;
  iVar8 = DAT_000ab814 + 0xab6b6;
  local_2c = **(int **)(iVar8 + DAT_000ab818);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0009e838(local_54,0);
  uVar6 = *param_2;
  if (uVar6 == 1) {
    bVar1 = true;
LAB_000ab7bc:
    if ((local_54[0] != 1) || ((param_5 != '\0' && (bVar1)))) {
      FUN_000ab654(param_1);
      FUN_0009e7a4(*(undefined4 *)(param_1 + 8),local_54);
      iVar4 = DAT_000ab820 + 0xab7dc;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x28;
      FUN_0009e814(local_54,iVar4);
    }
    FUN_0009e858(local_54);
    if (local_2c == **(int **)(iVar8 + iVar2)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  uVar12 = 0;
  iVar4 = DAT_000ab81c + 0xab6f8;
  bVar1 = true;
  if (param_4 == 0) goto LAB_000ab77c;
  do {
    iVar10 = 0;
    iVar11 = 0;
    while( true ) {
      uVar13 = *(uint *)(param_3 + iVar10) - 1;
      if (uVar13 == 0) break;
      uVar9 = *param_2;
      uVar7 = 0;
      while( true ) {
        iVar5 = param_3 + iVar10 + 4;
        if (0x20 < *(uint *)(param_3 + iVar10)) {
          iVar5 = *(int *)(param_3 + iVar10 + 4);
        }
        puVar3 = param_2 + 1;
        if (0x20 < uVar9) {
          puVar3 = (uint *)param_2[1];
        }
        if (*(char *)((int)puVar3 + uVar7 + uVar12) != *(char *)(iVar5 + uVar7)) break;
        uVar7 = uVar7 + 1;
        if (uVar13 <= uVar7) goto LAB_000ab780;
      }
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 0x28;
      uVar13 = uVar12;
      if (iVar11 == param_4) goto LAB_000ab752;
    }
LAB_000ab780:
    uVar12 = uVar13 + uVar12;
    if ((local_54[0] != 1) || (param_5 != '\0')) {
      FUN_000ab654(param_1);
      FUN_0009e7a4(*(undefined4 *)(param_1 + 8),local_54);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x28;
      FUN_0009e814(local_54,iVar4);
      bVar1 = true;
    }
    while( true ) {
      if (uVar6 - 1 <= uVar12) goto LAB_000ab7bc;
      if (param_4 != 0) break;
LAB_000ab77c:
      uVar9 = *param_2;
      uVar13 = uVar12;
LAB_000ab752:
      uVar12 = uVar13 + 1;
      puVar3 = param_2 + 1;
      if (0x20 < uVar9) {
        puVar3 = (uint *)param_2[1];
      }
      FUN_0009e750(local_54,*(undefined *)((int)puVar3 + uVar13));
      bVar1 = false;
    }
  } while( true );
}



