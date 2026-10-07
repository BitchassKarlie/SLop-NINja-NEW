/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00079eec FUN_00079eec */

void FUN_00079eec(int param_1,undefined4 param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  
  piVar5 = (int *)**(int **)(param_1 + 0x14);
  if (*(int **)(param_1 + 0x14) != piVar5) {
    iVar6 = DAT_00079fac + 0x79f0e;
    iVar7 = DAT_00079fb0 + 0x79f14;
    iVar8 = DAT_00079fb4 + 0x79f18;
    iVar9 = DAT_00079fb8 + 0x79f1a;
    iVar2 = DAT_00079fbc + 0x79f1c;
    iVar3 = DAT_00079fc0 + 0x79f22;
    do {
      iVar4 = piVar5[2];
      pvVar1 = operator_new(0x50);
      FUN_0009bdb8(pvVar1,iVar6);
      FUN_0009bf5c(pvVar1,iVar7,iVar4 + 0x14);
      FUN_0009bfc8(pvVar1,iVar8,SUB84((double)*(float *)(iVar4 + 0xa0),0),
                   (int)((ulonglong)(double)*(float *)(iVar4 + 0xa0) >> 0x20));
      FUN_0009bfc8(pvVar1,iVar9,SUB84((double)*(float *)(iVar4 + 0xa4),0),
                   (int)((ulonglong)(double)*(float *)(iVar4 + 0xa4) >> 0x20));
      FUN_0009bfc8(pvVar1,iVar2,SUB84((double)*(float *)(iVar4 + 0xac),0),
                   (int)((ulonglong)(double)*(float *)(iVar4 + 0xac) >> 0x20));
      if (-1 < *(int *)(iVar4 + 200)) {
        dVar10 = (double)(longlong)*(int *)(iVar4 + 200);
        FUN_0009bfc8(pvVar1,iVar3,SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20));
      }
      FUN_0009a9fc(param_2,pvVar1);
      piVar5 = (int *)*piVar5;
    } while (piVar5 != (int *)*(int *)(param_1 + 0x14));
  }
  return;
}



