/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00024f54 FUN_00024f54 */

void FUN_00024f54(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float local_3c;
  float local_38;
  float local_34;
  
  if (param_2 == 0) {
    iVar4 = FUN_00086780();
    fVar2 = DAT_00025108;
    lVar1 = (ulonglong)*(uint *)(iVar4 + 8) * (ulonglong)*(uint *)(iVar4 + 0x10) +
            CONCAT44(*(uint *)(iVar4 + 0x10) * *(int *)(iVar4 + 0xc) +
                     *(uint *)(iVar4 + 8) * *(int *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
    uVar6 = *(int *)(iVar4 + 0x1c) + (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar4 + 8) = (int)lVar1;
    *(uint *)(iVar4 + 0xc) = uVar6;
    iVar4 = FUN_00086780();
    lVar1 = (ulonglong)*(uint *)(iVar4 + 8) * (ulonglong)*(uint *)(iVar4 + 0x10) +
            CONCAT44(*(uint *)(iVar4 + 0x10) * *(int *)(iVar4 + 0xc) +
                     *(uint *)(iVar4 + 8) * *(int *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
    uVar5 = *(int *)(iVar4 + 0x1c) + (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar4 + 8) = (int)lVar1;
    *(uint *)(iVar4 + 0xc) = uVar5;
    iVar4 = FUN_00086780();
    fVar9 = DAT_0002510c;
    lVar1 = (ulonglong)*(uint *)(iVar4 + 8) * (ulonglong)*(uint *)(iVar4 + 0x10) +
            CONCAT44(*(uint *)(iVar4 + 0x10) * *(int *)(iVar4 + 0xc) +
                     *(uint *)(iVar4 + 8) * *(int *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
    uVar7 = *(int *)(iVar4 + 0x1c) + (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar4 + 8) = (int)lVar1;
    *(uint *)(iVar4 + 0xc) = uVar7;
    fVar8 = (float)(ulonglong)((uVar6 >> 0xd) - (uint)(uVar6 * 0x80000 < uVar6)) / fVar9;
    local_3c = (fVar8 + fVar8) - fVar2;
    fVar8 = (float)(ulonglong)((uVar5 >> 0xd) - (uint)(uVar5 * 0x80000 < uVar5)) / fVar9;
    local_38 = (fVar8 + fVar8) - fVar2;
    fVar9 = (float)(ulonglong)((uVar7 >> 0xd) - (uint)(uVar7 * 0x80000 < uVar7)) / fVar9;
    local_34 = (fVar9 + fVar9) - fVar2;
    iVar4 = FUN_00086780();
    lVar1 = (ulonglong)*(uint *)(iVar4 + 8) * (ulonglong)*(uint *)(iVar4 + 0x10) +
            CONCAT44(*(uint *)(iVar4 + 0x10) * *(int *)(iVar4 + 0xc) +
                     *(uint *)(iVar4 + 8) * *(int *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
    uVar5 = *(int *)(iVar4 + 0x1c) + (int)((ulonglong)lVar1 >> 0x20);
    *(int *)(iVar4 + 8) = (int)lVar1;
    *(uint *)(iVar4 + 0xc) = uVar5;
    FUN_0001a178(&local_3c);
    uVar3 = DAT_00025110;
    param_1[3] = fVar2;
    param_1[2] = uVar3;
    param_1[1] = uVar3;
    *param_1 = uVar3;
    FUN_00022344(param_1,local_3c,local_38,local_34,(short)((ulonglong)uVar5 * 0xff3a >> 0x20));
  }
  else {
    param_1[2] = 0;
    fVar2 = DAT_00025108;
    param_1[1] = 0;
    param_1[3] = fVar2;
    *param_1 = 0;
    FUN_00022344(param_1,0xbf800000,0,0,0xce2c);
  }
  return;
}



