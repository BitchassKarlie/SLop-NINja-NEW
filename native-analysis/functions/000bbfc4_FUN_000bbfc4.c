/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bbfc4 FUN_000bbfc4 */

undefined4 FUN_000bbfc4(void *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  
  iVar5 = DAT_000bc120 + 0xbbfd2;
  piVar8 = *(int **)(param_2 + 0x1c);
  memset(param_1,0,0x50);
  puVar2 = (undefined4 *)calloc(1,0x18);
  *(int *)((int)param_1 + 4) = param_2;
  *(undefined4 **)((int)param_1 + 0x48) = puVar2;
  if ((piVar8[2] == 0) || (uVar7 = piVar8[2] - 1, uVar7 == 0)) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      iVar6 = iVar6 + 1;
      uVar7 = uVar7 >> 1;
    } while (uVar7 != 0);
  }
  puVar2[2] = iVar6;
  uVar3 = FUN_000bdd34(0,*piVar8 / 2);
  *puVar2 = uVar3;
  uVar3 = FUN_000bdd34(0,piVar8[1] / 2);
  puVar2[1] = uVar3;
  if (piVar8[0x308] == 0) {
    pvVar4 = calloc(piVar8[7],0x34);
    piVar8[0x308] = (int)pvVar4;
    if (0 < piVar8[7]) {
      iVar6 = 0;
      iVar10 = 0;
      piVar9 = piVar8 + 0x208;
      while( true ) {
        FUN_000bd80c((int)pvVar4 + iVar6,*piVar9);
        FUN_000bd360(*piVar9);
        *piVar9 = 0;
        iVar10 = iVar10 + 1;
        iVar6 = iVar6 + 0x34;
        if (piVar8[7] <= iVar10) break;
        pvVar4 = (void *)piVar8[0x308];
        piVar9 = piVar9 + 1;
      }
    }
  }
  *(int *)((int)param_1 + 0x10) = piVar8[1];
  pvVar4 = malloc(*(int *)(param_2 + 4) << 2);
  *(void **)((int)param_1 + 8) = pvVar4;
  pvVar4 = malloc(*(int *)(param_2 + 4) << 2);
  *(void **)((int)param_1 + 0xc) = pvVar4;
  if (0 < *(int *)(param_2 + 4)) {
    iVar6 = 0;
    do {
      iVar10 = *(int *)((int)param_1 + 8);
      pvVar4 = calloc(*(size_t *)((int)param_1 + 0x10),4);
      *(void **)(iVar10 + iVar6 * 4) = pvVar4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_2 + 4));
  }
  iVar6 = 0;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  pvVar4 = calloc(piVar8[2],4);
  puVar2[3] = pvVar4;
  if (0 < piVar8[2]) {
    iVar5 = *(int *)(iVar5 + DAT_000bc124);
    piVar9 = piVar8;
    while( true ) {
      piVar1 = piVar9 + 8;
      piVar9 = piVar9 + 1;
      iVar10 = *(int *)(*piVar1 + 0xc);
      uVar3 = (**(code **)(*(int *)(iVar5 + piVar8[iVar10 + 0x48] * 4) + 4))
                        (param_1,*piVar1,piVar8[iVar10 + 0x88]);
      *(undefined4 *)((int)pvVar4 + iVar6 * 4) = uVar3;
      iVar6 = iVar6 + 1;
      if (piVar8[2] <= iVar6) break;
      pvVar4 = (void *)puVar2[3];
    }
  }
  FUN_000bb9dc(param_1);
  return 0;
}



