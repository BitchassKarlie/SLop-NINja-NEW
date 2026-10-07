/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001f4b8 FUN_0001f4b8 */

void FUN_0001f4b8(int param_1,undefined4 *param_2,undefined4 *param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int **param_8,
                 float param_9,undefined param_10)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  iVar6 = DAT_0001f614 + 0x1f4cc;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xee;
  puVar4 = *(uint **)(iVar6 + DAT_0001f618);
  lVar1 = (ulonglong)*puVar4 * (ulonglong)puVar4[2] +
          CONCAT44(puVar4[2] * puVar4[1] + *puVar4 * puVar4[3],puVar4[4]);
  uVar7 = puVar4[5] + (int)((ulonglong)lVar1 >> 0x20);
  *puVar4 = (uint)lVar1;
  puVar4[1] = uVar7;
  *(float *)(param_1 + 0x4c) =
       (DAT_0001f608 +
       ((float)(ulonglong)((uVar7 >> 0xd) - (uint)(uVar7 * 0x80000 < uVar7)) / DAT_0001f600) *
       DAT_0001f604) * DAT_0001f60c;
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  uVar3 = param_3[1];
  uVar5 = param_3[2];
  *(undefined4 *)(param_1 + 0x5c) = *param_3;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 100) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x36) = param_4;
  iVar6 = DAT_0001f61c;
  *(undefined4 *)(param_1 + 0x3c) = param_5;
  *(float *)(param_1 + 0x44) = -param_9;
  fVar2 = DAT_0001f610;
  uVar3 = *(undefined4 *)(iVar6 + 0x1f588);
  uVar5 = *(undefined4 *)(iVar6 + 0x1f58c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar6 + 0x1f584);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  fVar8 = *(float *)(DAT_0001f620 + 0x1f59c);
  fVar9 = *(float *)(DAT_0001f620 + 0x1f5a0);
  *(float *)(param_1 + 0x28) = *(float *)(DAT_0001f620 + 0x1f598) * fVar2;
  *(float *)(param_1 + 0x2c) = fVar8 * fVar2;
  *(float *)(param_1 + 0x30) = fVar9 * fVar2;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x54) = param_6;
  *(undefined *)(param_1 + 0x48) = param_10;
  *(undefined4 *)(param_1 + 0x58) = param_7;
  if (*(char *)(param_8 + 8) != '\0') {
    param_8 = (int **)*param_8;
  }
  if (param_8 != (int **)0x0) {
    (**(code **)((int)*param_8 + 8))(param_8,param_1 + 0x70);
  }
  *(undefined2 *)(param_1 + 0x50) = 0;
  return;
}



