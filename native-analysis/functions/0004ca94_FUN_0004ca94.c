/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004ca94 FUN_0004ca94 */

void FUN_0004ca94(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  float fVar3;
  int **ppiVar4;
  int **ppiVar5;
  int *piVar6;
  int *piVar7;
  float fVar8;
  
  FUN_0005fd38();
  uVar1 = DAT_0004cba8;
  *(undefined4 *)(param_1 + 0xa0) = DAT_0004cba8;
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  if (*(char *)(*(int *)(param_1 + 0xfc) + 0xc) == '\0') {
    ppiVar5 = *(int ***)(*(int *)(param_1 + 0xfc) + 4);
    ppiVar4 = (int **)*ppiVar5;
    if (ppiVar5 != ppiVar4) {
      do {
        piVar7 = ppiVar4[0x13];
        piVar6 = ppiVar4[0x14];
        piVar2 = (int *)operator_new(0x60);
        FUN_0004c9f4(piVar2,ppiVar4 + 2,piVar7,piVar6);
        fVar8 = *(float *)(param_1 + 0xa0);
        fVar3 = (float)(**(code **)(*piVar2 + 0xc))(piVar2);
        *(float *)(param_1 + 0xa0) = fVar8 + fVar3;
        fVar8 = *(float *)(param_1 + 0x9c);
        fVar3 = (float)(**(code **)(*piVar2 + 8))(piVar2);
        *(float *)(param_1 + 0x9c) = fVar8 + fVar3;
        (**(code **)(*piVar2 + 0x20))(piVar2,param_1);
        FUN_0004c8bc(param_1 + 0xa4);
        **(int ***)(param_1 + 0xac) = piVar2;
        *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 4;
        ppiVar4 = (int **)*ppiVar4;
      } while (ppiVar5 != ppiVar4);
    }
  }
  else {
    piVar2 = (int *)operator_new(0x60);
    FUN_0004c9f4(piVar2,DAT_0004cbac + 0x4cb50,0xffffffff,0);
    fVar8 = *(float *)(param_1 + 0xa0);
    fVar3 = (float)(**(code **)(*piVar2 + 0xc))(piVar2);
    *(float *)(param_1 + 0xa0) = fVar8 + fVar3;
    fVar8 = *(float *)(param_1 + 0x9c);
    fVar3 = (float)(**(code **)(*piVar2 + 8))(piVar2);
    *(float *)(param_1 + 0x9c) = fVar8 + fVar3;
    (**(code **)(*piVar2 + 0x20))(piVar2,param_1);
    FUN_0004c8bc(param_1 + 0xa4);
    **(int ***)(param_1 + 0xac) = piVar2;
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 4;
  }
  return;
}



