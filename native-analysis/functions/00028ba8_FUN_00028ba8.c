/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00028ba8 FUN_00028ba8 */

int FUN_00028ba8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  fVar5 = DAT_00028da8;
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    fVar8 = *(float *)(param_1 + 0x150);
    if (fVar8 == DAT_00028da8 || fVar8 < DAT_00028da8 != (NAN(fVar8) || NAN(DAT_00028da8))) {
      uVar1 = 0;
    }
    if (fVar8 != DAT_00028da8 && fVar8 < DAT_00028da8 == (NAN(fVar8) || NAN(DAT_00028da8))) {
      uVar1 = 1;
    }
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = uVar1 & 1;
    }
    if ((((uVar1 != 0) && (*(int **)(param_2 + 0x38) != (int *)0x0)) &&
        (iVar3 = *(int *)(DAT_00028dac + 0x28bb8 + DAT_00028db0), *(char *)(iVar3 + 2) == '\0')) &&
       (*(char *)(iVar3 + 9) == '\0')) {
      iVar3 = (**(code **)(**(int **)(param_2 + 0x38) + 8))();
      if (iVar3 != 1) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 0xc))
                          (*(int **)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x38),&local_34);
        return iVar3;
      }
      iVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 0xc))
                        (*(int **)(param_1 + 0x38),*(undefined4 *)(param_2 + 0x38),&local_34);
      if (iVar3 != 0) {
        iVar2 = *(int *)(param_2 + 0x38);
        iVar4 = *(int *)(param_1 + 0x38);
        fVar8 = *(float *)(iVar2 + 0x14) * *(float *)(iVar2 + 0x14);
        fVar10 = (float)*(undefined8 *)(iVar2 + 8);
        fVar9 = *(float *)(iVar4 + 8) - fVar10;
        fVar6 = *(float *)(iVar4 + 4) - *(float *)(iVar2 + 4);
        fVar11 = (float)((ulonglong)*(undefined8 *)(iVar2 + 8) >> 0x20);
        fVar7 = *(float *)(iVar4 + 0xc) - fVar11;
        fVar6 = fVar9 * fVar9 + fVar6 * fVar6 + fVar7 * fVar7;
        if (fVar8 == fVar6 || fVar8 < fVar6 != (NAN(fVar8) || NAN(fVar6))) {
          fVar10 = fVar10 + local_30;
          local_40 = *(float *)(DAT_00028db4 + 0x28c7e);
          local_3c = *(float *)(DAT_00028db4 + 0x28c82);
          local_38 = *(float *)(DAT_00028db4 + 0x28c86);
          fVar6 = local_30 * local_30 + local_34 * local_34 + local_2c * local_2c;
          fVar7 = *(float *)(iVar2 + 4) + local_34;
          fVar11 = fVar11 + local_2c;
          if (fVar8 != fVar6 && fVar8 < fVar6 == (NAN(fVar8) || NAN(fVar6))) {
            fVar8 = (float)FUN_00092d98(fVar8 - fVar6);
            local_40 = local_30 - local_2c * fVar5;
            local_38 = local_34 * fVar5 - local_30 * fVar5;
            local_3c = local_2c * fVar5 - local_34;
            iVar3 = FUN_0001a178(&local_40);
            fVar8 = *(float *)(*(int *)(param_2 + 0x38) + 0x14) - fVar8;
            iVar4 = *(int *)(param_1 + 0x38);
            local_40 = fVar8 * local_40;
            local_3c = fVar8 * local_3c;
            local_38 = fVar8 * local_38;
          }
          fVar5 = *(float *)(param_1 + 0x150);
          fVar9 = *(float *)(iVar4 + 8) - (local_3c + fVar10);
          fVar8 = *(float *)(iVar4 + 4) - (fVar7 + local_40);
          fVar6 = *(float *)(iVar4 + 0xc) - (fVar11 + local_38);
          fVar8 = fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6;
          if (fVar5 == fVar8 || fVar5 < fVar8 != (NAN(fVar5) || NAN(fVar8))) {
            fVar6 = *(float *)(iVar4 + 8) - (fVar10 - local_3c);
            fVar8 = *(float *)(iVar4 + 4) - (fVar7 - local_40);
            fVar7 = *(float *)(iVar4 + 0xc) - (fVar11 - local_38);
            fVar8 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
            if (fVar5 == fVar8 || fVar5 < fVar8 != (NAN(fVar5) || NAN(fVar8))) {
              iVar3 = 0;
            }
            if (fVar5 == fVar8 || fVar5 < fVar8 != (NAN(fVar5) || NAN(fVar8))) {
              return iVar3;
            }
            return 1;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}



