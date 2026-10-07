/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00053c44 FUN_00053c44 */

void FUN_00053c44(int param_1,int **param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6,float *param_7,undefined *param_8,
                 undefined4 param_9)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  void *local_6c;
  undefined4 local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  pvVar2 = operator_new(0x70);
  iVar8 = DAT_00053e08 + 0x53c6a;
  FUN_0004a910();
  local_4c = DAT_00053e0c + 0x53c84;
  local_40 = 0;
  local_44 = DAT_00053e10 + 0x53c8c;
  local_48 = param_1;
  (**(code **)(DAT_00053e0c + 0x53c8c))(&local_4c,(int)pvVar2 + 0x2c);
  local_4c = DAT_00053e14 + 0x53c9c;
  *(undefined4 *)((int)pvVar2 + 0x28) = param_9;
  *(undefined *)((int)pvVar2 + 0x53) = param_8[3];
  *(undefined *)((int)pvVar2 + 0x52) = param_8[2];
  *(undefined *)((int)pvVar2 + 0x51) = param_8[1];
  *(undefined *)((int)pvVar2 + 0x50) = *param_8;
  if (param_3 != (undefined4 *)0x0) {
    uVar6 = param_3[1];
    *(undefined4 *)((int)pvVar2 + 0x58) = *param_3;
    *(undefined4 *)((int)pvVar2 + 0x5c) = uVar6;
    uVar6 = param_3[3];
    *(undefined4 *)((int)pvVar2 + 0x60) = param_3[2];
    *(undefined4 *)((int)pvVar2 + 100) = uVar6;
  }
  if ((*param_7 == 0.0) && (param_7[1] == 0.0)) {
    fVar10 = param_7[2];
    fVar9 = fVar10;
    if (fVar10 == 0.0) {
      fVar9 = DAT_00053e00;
    }
    if (fVar10 == 0.0) {
      param_7[2] = fVar9;
    }
    uVar3 = (**(code **)(**param_2 + 0x14))();
    fVar9 = *(float *)((int)pvVar2 + 0x60);
    fVar10 = *(float *)((int)pvVar2 + 0x58);
    uVar4 = (**(code **)(**param_2 + 0x18))();
    local_34 = param_7[2];
    local_38 = (float)(ulonglong)uVar4 *
               (*(float *)((int)pvVar2 + 100) - *(float *)((int)pvVar2 + 0x5c)) * local_34;
    local_3c = (float)(ulonglong)uVar3 * (fVar9 - fVar10) * local_34;
    local_34 = local_34 * DAT_00053e04;
    *param_7 = local_3c;
    param_7[1] = local_38;
    param_7[2] = local_34;
  }
  FUN_00017d64((int)pvVar2 + 0x68,*param_2);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)pvVar2 + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)pvVar2 + 0xc) = uVar6;
  *(undefined4 *)((int)pvVar2 + 0x10) = uVar7;
  uVar6 = *(undefined4 *)(DAT_00053e18 + 0x53d9e);
  uVar7 = *(undefined4 *)(DAT_00053e18 + 0x53da2);
  *(undefined4 *)((int)pvVar2 + 0x14) = *(undefined4 *)(DAT_00053e18 + 0x53d9a);
  *(undefined4 *)((int)pvVar2 + 0x18) = uVar6;
  *(undefined4 *)((int)pvVar2 + 0x1c) = uVar7;
  iVar1 = DAT_00053e1c;
  *(undefined4 *)((int)pvVar2 + 0x20) = param_4;
  FUN_00049d7c(*(undefined4 *)(*(int *)(iVar8 + iVar1) + 0x40),pvVar2,0);
  local_64 = *param_7;
  fStack_60 = param_7[1];
  fStack_5c = param_7[2];
  local_68 = param_5;
  local_58 = *param_6;
  uStack_54 = param_6[1];
  uStack_50 = param_6[2];
  iVar8 = *(int *)(param_1 + 0x104);
  local_6c = pvVar2;
  piVar5 = (int *)FUN_00053658(param_1 + 0x100,&local_6c);
  *piVar5 = iVar8;
  piVar5[1] = *(int *)(iVar8 + 4);
  *(int **)(iVar8 + 4) = piVar5;
  *(int **)piVar5[1] = piVar5;
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
  return;
}



