/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009f940 FUN_0009f940 */

void FUN_0009f940(undefined4 param_1,char *param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  uint uVar8;
  
  uVar1 = FUN_0009f800();
  FUN_000ad18c(uVar1,param_1,DAT_0009fa00 + 0x9f954,7);
  sVar2 = strlen(param_2);
  iVar4 = DAT_0009fa1c;
  if (sVar2 == 0) {
    if (*(void **)(DAT_0009fa1c + 0x9f9ce) != (void *)0x0) {
      operator_delete(*(void **)(DAT_0009fa1c + 0x9f9ce));
      *(undefined4 *)(iVar4 + 0x9f9d2) = 0;
      *(undefined4 *)(iVar4 + 0x9f9d6) = 0;
      *(undefined4 *)(iVar4 + 0x9f9ce) = 0;
    }
  }
  else {
    uVar8 = sVar2 + 1;
    puVar3 = *(undefined **)(DAT_0009fa04 + 0x9f96e);
    uVar6 = *(int *)(DAT_0009fa04 + 0x9f972) - (int)puVar3;
    if ((uVar6 < uVar8) || (uVar8 * 4 < uVar6)) {
      operator_delete(puVar3);
      uVar6 = *(int *)(DAT_0009fa08 + 0x9f984) - *(int *)(DAT_0009fa08 + 0x9f980);
      if ((uVar6 <= uVar8) && (uVar6 = uVar6 + (uVar6 >> 1), uVar8 < uVar6)) {
        uVar8 = uVar6;
      }
      puVar3 = (undefined *)operator_new(uVar8);
      iVar4 = DAT_0009fa0c;
      *(undefined **)(DAT_0009fa0c + 0x9f994) = puVar3;
      *(undefined **)(iVar4 + 0x9f998) = puVar3 + uVar8;
    }
    iVar4 = DAT_0009fa10;
    sVar7 = 0;
    *(undefined **)(DAT_0009fa10 + 0x9f9a8) = puVar3;
    *puVar3 = 0;
    *(undefined *)(*(int *)(iVar4 + 0x9f9a0) + sVar2) = 0;
    iVar5 = *(int *)(iVar4 + 0x9f9a0);
    iVar4 = (*(int *)(iVar4 + 0x9f9a4) + -1) - iVar5;
    if (iVar4 != 0) {
      do {
        iVar4 = iVar4 + -1;
        *(char *)(iVar5 + sVar7) = param_2[sVar7];
        if (iVar4 == 0) {
          iVar5 = *(int *)(DAT_0009fa14 + 0x9f9be);
          goto LAB_0009f9ba;
        }
        sVar7 = sVar7 + 1;
      } while (sVar2 != sVar7);
      iVar5 = *(int *)(DAT_0009fa20 + 0x9f9f4);
    }
LAB_0009f9ba:
    *(size_t *)(DAT_0009fa18 + 0x9f9ce) = iVar5 + sVar2;
  }
  return;
}



