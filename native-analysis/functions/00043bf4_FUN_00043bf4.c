/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00043bf4 FUN_00043bf4 */

void FUN_00043bf4(int param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  
  iVar3 = DAT_00043d7c;
  fVar1 = DAT_00043d6c;
  iVar7 = DAT_00043d78 + 0x43c10;
  if ((int)((uint)(*(float *)(param_1 + 0xbc) < DAT_00043d6c) << 0x1f) < 0) {
    if ((*(char *)(DAT_00043d7c + 0x43c2a) != '\0') &&
       (fVar11 = -(*(float *)(param_1 + 0xbc) * DAT_00043d70),
       fVar11 = (float)FUN_000927b8((uint)(0.0 < fVar11) * (int)fVar11 & 0xffff),
       *(int *)(iVar3 + 0x43c2e) != 0)) {
      uVar4 = (**(code **)(**(int **)(iVar3 + 0x43c2e) + 0x14))();
      uVar5 = (**(code **)(**(int **)(iVar3 + 0x43c2e) + 0x18))();
      uVar2 = DAT_00043d74;
      iVar8 = *(int *)(iVar7 + DAT_00043d80);
      fVar12 = param_2[2];
      fVar10 = param_2[1];
      fVar9 = *param_2;
      *(float *)(iVar8 + 0x1894) = fVar11 * (float)(ulonglong)uVar4;
      *(float *)(iVar8 + 0x1898) = fVar1;
      *(float *)(iVar8 + 0x189c) = fVar1;
      *(float *)(iVar8 + 0x18a0) = fVar1;
      *(float *)(iVar8 + 0x18a4) = fVar1;
      *(float *)(iVar8 + 0x18a8) = fVar11 * (float)(ulonglong)uVar5;
      *(float *)(iVar8 + 0x18ac) = fVar1;
      *(float *)(iVar8 + 0x18b0) = fVar1;
      *(float *)(iVar8 + 0x18b4) = fVar1;
      *(float *)(iVar8 + 0x18b8) = fVar1;
      *(float *)(iVar8 + 0x18bc) = fVar1;
      *(float *)(iVar8 + 0x18c0) = fVar1;
      *(float *)(iVar8 + 0x18c4) = fVar9 + fVar1;
      *(float *)(iVar8 + 0x18c8) = fVar10 + fVar1;
      *(float *)(iVar8 + 0x18cc) = fVar12 + fVar1;
      *(undefined4 *)(iVar8 + 0x18d0) = uVar2;
      *(int *)(iVar8 + 0x18d8) = *(int *)(iVar8 + 0x18d8) + 1;
      FUN_0008d434(iVar8,1);
      if ((*(char *)(iVar3 + 0x43c32) == '\0') || (*(int *)(iVar3 + 0x43c36) == 0)) {
        if (*(int *)(DAT_00043d8c + 0x43d5e) != 0) {
          FUN_000995e4(*(undefined4 *)(DAT_00043d8c + 0x43d5e));
        }
      }
      else {
        FUN_000995e4(*(undefined4 *)(iVar3 + 0x43c36));
      }
      puVar6 = *(undefined **)(iVar7 + DAT_00043d84);
      local_2c = *puVar6;
      local_2a = puVar6[2];
      local_2b = puVar6[1];
      local_29 = puVar6[3];
      FUN_000a35f4(&local_2c);
      if ((*(char *)(DAT_00043d88 + 0x43d4e) == '\0') || (*(int *)(DAT_00043d88 + 0x43d52) == 0)) {
        if (*(int *)((int)&DAT_00043d70 + DAT_00043d90) != 0) {
          FUN_000995e0(*(undefined4 *)((int)&DAT_00043d70 + DAT_00043d90));
        }
      }
      else {
        FUN_000995e0(*(undefined4 *)(DAT_00043d88 + 0x43d52));
      }
    }
  }
  return;
}



