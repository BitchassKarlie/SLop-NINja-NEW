/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005c308 FUN_0005c308 */

void FUN_0005c308(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined4 local_40;
  undefined4 local_3c;
  
  fVar2 = DAT_0005c46c;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  iVar8 = DAT_0005c480;
  *(float *)(param_1 + 0x9c) = fVar2;
  *(float *)(param_1 + 0x124) = fVar2;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_00017d64(param_1 + 0x68,*(undefined4 *)(iVar8 + 0x5c330));
  iVar11 = DAT_0005c484 + 0x5c354;
  uVar5 = (**(code **)(**(int **)(param_1 + 0x68) + 0x14))();
  uVar6 = (**(code **)(**(int **)(param_1 + 0x68) + 0x18))();
  uVar7 = DAT_0005c470;
  *(float *)(param_1 + 0x14) = (float)(ulonglong)uVar5;
  *(float *)(param_1 + 0x18) = (float)(ulonglong)uVar6;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x28) = 3;
  *(undefined *)(param_1 + 300) = 0;
  local_40 = 0;
  local_3c = 0;
  uVar7 = FUN_0007b72c();
  iVar8 = FUN_00079418(uVar7,&local_40);
  if (iVar8 != 0) {
    iVar12 = 0;
    do {
      iVar10 = iVar12;
      FUN_0005b564(param_1 + 0x70);
      **(int **)(param_1 + 0x78) = iVar8;
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 4;
      if (*(char *)(iVar8 + 0x9c) != '\0') {
        *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + 1;
      }
      uVar7 = FUN_0007b72c();
      iVar8 = FUN_00079460(uVar7,&local_40);
      fVar4 = DAT_0005c47c;
      fVar3 = DAT_0005c478;
      fVar2 = DAT_0005c46c;
      iVar12 = iVar10 + 1;
    } while (iVar8 != 0);
    fVar13 = DAT_0005c474 / (float)(longlong)iVar10;
    iVar8 = 0;
    do {
      lVar1 = (longlong)iVar8;
      iVar8 = iVar8 + 1;
      FUN_0005b604(param_1 + 0x80);
      pfVar9 = *(float **)(param_1 + 0x88);
      pfVar9[1] = fVar4;
      pfVar9[2] = fVar2;
      *pfVar9 = (float)lVar1 * fVar13 - fVar3;
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 0xc;
    } while (iVar8 != iVar12);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  FUN_0005b658(param_1);
  FUN_0008f060(param_1 + 0xa0,0x80,DAT_0005c48c + 0x5c45e,
               *(undefined4 *)(*(int *)(iVar11 + DAT_0005c488) + 0x24));
  return;
}



