/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000231b4 FUN_000231b4 */

void FUN_000231b4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  float fVar4;
  undefined4 uVar5;
  
  if ((param_2 != 0) &&
     (iVar2 = (uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_0002326c + 0x231d0),
     fVar4 = *(float *)(iVar2 + 0x208) + *(float *)(iVar2 + 0x204) * DAT_00023264,
     fVar4 != 0.0 && fVar4 < 0.0 == NAN(fVar4))) {
    pvVar3 = *(void **)(param_1 + 0x38);
    if (pvVar3 == (void *)0x0) {
      pvVar3 = operator_new(0x18);
      FUN_0008caf0();
      *(void **)(param_1 + 0x38) = pvVar3;
    }
    uVar1 = DAT_00023268;
    fVar4 = DAT_00023264;
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)((int)pvVar3 + 4) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((int)pvVar3 + 8) = uVar5;
    *(undefined4 *)((int)pvVar3 + 0xc) = uVar1;
    iVar2 = (uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_00023270 + 0x23224);
    *(float *)(*(int *)(param_1 + 0x38) + 0x14) =
         *(float *)(iVar2 + 0x208) + *(float *)(iVar2 + 0x204) * fVar4;
    return;
  }
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 4))();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



