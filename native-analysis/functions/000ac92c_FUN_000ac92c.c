/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac92c FUN_000ac92c */

void FUN_000ac92c(undefined4 param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  
  if (param_4 < param_3) {
    iVar4 = (param_3 + -1) / 2;
    uVar1 = *(uint *)(param_2 + iVar4 * 0x10);
    uVar2 = *param_5;
    if (uVar1 < uVar2) {
      do {
        puVar5 = (uint *)(param_2 + iVar4 * 0x10);
        iVar6 = param_2 + param_3 * 0x10;
        *(uint *)(param_2 + param_3 * 0x10) = uVar1;
        *(uint *)(iVar6 + 4) = puVar5[1];
        FUN_0009f860(iVar6 + 8);
        piVar3 = (int *)puVar5[2];
        *(int **)(iVar6 + 8) = piVar3;
        if (piVar3 != (int *)0x0) {
          *piVar3 = *piVar3 + 1;
        }
        *(uint *)(iVar6 + 0xc) = puVar5[3];
        if (iVar4 <= param_4) goto LAB_000ac9ce;
        iVar6 = (iVar4 + -1) / 2;
        uVar1 = *(uint *)(param_2 + iVar6 * 0x10);
        uVar2 = *param_5;
        param_3 = iVar4;
        iVar4 = iVar6;
      } while (uVar1 < uVar2);
    }
    else {
      puVar5 = (uint *)(param_2 + param_3 * 0x10);
    }
  }
  else {
    puVar5 = (uint *)(param_2 + param_3 * 0x10);
LAB_000ac9ce:
    uVar2 = *param_5;
  }
  *puVar5 = uVar2;
  puVar5[1] = param_5[1];
  FUN_0009f860(puVar5 + 2);
  piVar3 = (int *)param_5[2];
  puVar5[2] = (uint)piVar3;
  if (piVar3 != (int *)0x0) {
    *piVar3 = *piVar3 + 1;
  }
  puVar5[3] = param_5[3];
  return;
}



