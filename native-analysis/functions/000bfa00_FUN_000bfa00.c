/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bfa00 FUN_000bfa00 */

undefined4 * FUN_000bfa00(int param_1,undefined4 param_2,size_t *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void *pvVar4;
  undefined4 uVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  size_t *psVar11;
  size_t sVar12;
  int iVar13;
  
  iVar7 = DAT_000bfb00 + 0xbfa0e;
  iVar2 = *(int *)(param_1 + 4);
  iVar10 = *(int *)(iVar2 + 0x1c);
  puVar3 = (undefined4 *)calloc(1,0x20);
  puVar3[1] = param_3;
  *puVar3 = param_2;
  pvVar4 = calloc(*param_3,4);
  puVar3[2] = pvVar4;
  pvVar4 = calloc(*param_3,4);
  puVar3[3] = pvVar4;
  pvVar4 = calloc(*param_3,4);
  puVar3[4] = pvVar4;
  pvVar4 = calloc(*param_3,4);
  puVar3[5] = pvVar4;
  iVar1 = DAT_000bfb08;
  if (0 < (int)*param_3) {
    iVar9 = 0;
    iVar8 = *(int *)(iVar7 + DAT_000bfb04);
    psVar11 = param_3;
    do {
      sVar6 = psVar11[0x101];
      sVar12 = psVar11[0x111];
      psVar11 = psVar11 + 1;
      *(undefined4 *)(puVar3[4] + iVar9 * 4) =
           *(undefined4 *)(iVar8 + *(int *)(iVar10 + (sVar6 + 0x108) * 4) * 4);
      iVar13 = puVar3[2];
      uVar5 = (**(code **)(*(int *)(puVar3[4] + iVar9 * 4) + 4))
                        (param_1,param_2,*(undefined4 *)(iVar10 + (sVar6 + 0x148) * 4));
      *(undefined4 *)(iVar13 + iVar9 * 4) = uVar5;
      *(undefined4 *)(puVar3[5] + iVar9 * 4) =
           *(undefined4 *)(*(int *)(iVar7 + iVar1) + *(int *)(iVar10 + (sVar12 + 0x188) * 4) * 4);
      iVar13 = puVar3[3];
      uVar5 = (**(code **)(*(int *)(puVar3[5] + iVar9 * 4) + 4))
                        (param_1,param_2,*(undefined4 *)(iVar10 + (sVar12 + 0x1c8) * 4));
      *(undefined4 *)(iVar13 + iVar9 * 4) = uVar5;
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)*param_3);
  }
  puVar3[6] = *(undefined4 *)(iVar2 + 4);
  return puVar3;
}



