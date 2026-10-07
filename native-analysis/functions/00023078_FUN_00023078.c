/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00023078 FUN_00023078 */

void FUN_00023078(int param_1,byte param_2,float param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  
  iVar3 = DAT_000231a8;
  *(byte *)(param_1 + 0x3c) = param_2;
  fVar7 = DAT_000231a0;
  fVar6 = *(float *)((uint)param_2 * 0x2ec + *(int *)(iVar3 + 0x2308e) + 0x204);
  fVar4 = param_3 * fVar6 * *(float *)(DAT_000231ac + 0x230ae) * DAT_0002319c;
  fVar5 = param_3 * fVar6 * *(float *)(DAT_000231ac + 0x230b2) * DAT_0002319c;
  fVar6 = param_3 * fVar6 * *(float *)(DAT_000231ac + 0x230aa) * DAT_0002319c;
  *(float *)(param_1 + 0x28) = fVar6;
  *(float *)(param_1 + 0x2c) = fVar4;
  *(float *)(param_1 + 0x30) = fVar5;
  *(float *)(param_1 + 0xa8) = fVar6;
  *(float *)(param_1 + 0xac) = fVar4;
  *(float *)(param_1 + 0xb0) = fVar5;
  iVar3 = (uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(iVar3 + 0x2308e);
  fVar7 = *(float *)(iVar3 + 0x208) + *(float *)(iVar3 + 0x204) * fVar7;
  if (fVar7 == 0.0 || fVar7 < 0.0 != NAN(fVar7)) {
    if (*(int **)(param_1 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x38) + 4))();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  else {
    pvVar2 = *(void **)(param_1 + 0x38);
    if (pvVar2 == (void *)0x0) {
      pvVar2 = operator_new(0x18);
      FUN_0008caf0();
      *(void **)(param_1 + 0x38) = pvVar2;
    }
    uVar1 = DAT_000231a4;
    fVar7 = DAT_000231a0;
    uVar8 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)((int)pvVar2 + 4) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((int)pvVar2 + 8) = uVar8;
    *(undefined4 *)((int)pvVar2 + 0xc) = uVar1;
    iVar3 = (uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_000231b0 + 0x23154);
    *(float *)(*(int *)(param_1 + 0x38) + 0x14) =
         (*(float *)(iVar3 + 0x208) + *(float *)(iVar3 + 0x204) * fVar7) * param_3;
  }
  return;
}



