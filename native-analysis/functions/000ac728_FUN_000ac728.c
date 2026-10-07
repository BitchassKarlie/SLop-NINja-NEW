/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac728 FUN_000ac728 */

void FUN_000ac728(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_r1;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  
  iVar7 = param_4 - (int)param_2 >> 4;
  if (iVar7 != 0) {
    iVar8 = (int)param_6 - (int)param_2 >> 4;
    iVar6 = iVar8;
    iVar3 = iVar7;
    do {
      iVar11 = iVar3;
      __aeabi_idivmod(iVar6,iVar11);
      iVar6 = iVar11;
      iVar3 = extraout_r1;
    } while (extraout_r1 != 0);
    if ((iVar11 < iVar8) && (0 < iVar11)) {
      puVar9 = param_2 + iVar11 * 4;
      puVar10 = param_2 + iVar7 * 4 + iVar11 * 4;
      do {
        FUN_000ac66c(&local_38,puVar9);
        puVar4 = param_2;
        puVar1 = param_2;
        puVar2 = puVar9;
        if (param_6 != puVar10) {
          puVar4 = puVar10;
          puVar1 = puVar10;
        }
        while (puVar9 != puVar4) {
          *puVar2 = *puVar4;
          puVar2[1] = puVar4[1];
          FUN_0009f860(puVar2 + 2);
          piVar5 = (int *)puVar4[2];
          puVar2[2] = piVar5;
          if (piVar5 != (int *)0x0) {
            *piVar5 = *piVar5 + 1;
          }
          puVar2[3] = puVar4[3];
          iVar6 = (int)param_6 - (int)puVar4 >> 4;
          puVar1 = puVar4;
          puVar2 = puVar4;
          if (iVar7 < iVar6) {
            puVar4 = puVar4 + iVar7 * 4;
          }
          else {
            puVar4 = param_2 + (iVar7 - iVar6) * 4;
          }
        }
        *puVar1 = local_38;
        puVar1[1] = local_34;
        FUN_0009f860(puVar1 + 2);
        puVar1[2] = local_30;
        if (local_30 != (int *)0x0) {
          *local_30 = *local_30 + 1;
        }
        puVar9 = puVar9 + -4;
        puVar10 = puVar10 + -4;
        puVar1[3] = local_2c;
        FUN_0009f860(&local_30);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  return;
}



