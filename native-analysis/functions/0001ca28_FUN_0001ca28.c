/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001ca28 FUN_0001ca28 */

int * FUN_0001ca28(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined local_30 [12];
  undefined local_24 [12];
  
  iVar3 = *(int *)(param_1 + 0x808);
  uVar4 = iVar3 - 1;
  if ((int)uVar4 < 0) {
LAB_0001ca64:
    if (*(char *)(param_1 + 0x1048) == '\0') {
      piVar5 = (int *)(param_1 + 0x1028);
    }
    else {
      piVar5 = *(int **)(param_1 + 0x1028);
    }
    if ((piVar5 != (int *)0x0) &&
       (piVar5 = (int *)(**(code **)(*piVar5 + 0xc))(piVar5,param_2), piVar5 != (int *)0x0)) {
      iVar3 = *(int *)(param_1 + 0x1010) + param_2 * 0xc;
      iVar6 = *(int *)(iVar3 + 4);
      piVar1 = (int *)operator_new(0xc);
      *piVar1 = (int)local_30;
      piVar1[1] = (int)local_30;
      piVar1[2] = (int)piVar5;
      *piVar1 = iVar6;
      piVar1[1] = *(int *)(iVar6 + 4);
      *(int **)(iVar6 + 4) = piVar1;
      *(int **)piVar1[1] = piVar1;
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      *(char *)((int)piVar5 + 0x35) = (char)param_2;
      *(undefined *)(piVar5 + 0xd) = 0;
    }
  }
  else {
    piVar5 = *(int **)(param_1 + (iVar3 + 1) * 4);
    if (*(byte *)((int)piVar5 + 0x35) != param_2) {
      iVar3 = param_1 + (iVar3 + 2) * 4;
      do {
        bVar8 = uVar4 == 0;
        uVar4 = uVar4 - 1;
        if (bVar8) goto LAB_0001ca64;
        piVar5 = *(int **)(iVar3 + -8);
        iVar3 = iVar3 + -4;
      } while (*(byte *)((int)piVar5 + 0x35) != param_2);
    }
    iVar3 = *(int *)(param_1 + 0x1010) + param_2 * 0xc;
    iVar6 = *(int *)(iVar3 + 4);
    piVar1 = (int *)operator_new(0xc);
    *piVar1 = (int)local_24;
    piVar1[1] = (int)local_24;
    piVar1[2] = (int)piVar5;
    *piVar1 = iVar6;
    piVar1[1] = *(int *)(iVar6 + 4);
    *(int **)(iVar6 + 4) = piVar1;
    *(int **)piVar1[1] = piVar1;
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    uVar2 = *(int *)(param_1 + 0x808) - 1;
    *(uint *)(param_1 + 0x808) = uVar2;
    if (uVar4 < uVar2) {
      puVar7 = (undefined4 *)(param_1 + (uVar4 + 3) * 4);
      do {
        uVar4 = uVar4 + 1;
        puVar7[-1] = *puVar7;
        puVar7 = puVar7 + 1;
      } while (uVar4 < uVar2);
    }
    *(byte *)(piVar5 + 3) = *(byte *)(piVar5 + 3) & 0xfe;
  }
  return piVar5;
}



