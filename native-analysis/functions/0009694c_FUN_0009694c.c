/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009694c FUN_0009694c */

void FUN_0009694c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0x10c8) == '\0') {
    iVar4 = *(int *)(param_1 + 0xac);
  }
  else {
    uVar1 = FUN_000a3a68();
    FUN_000a3728(uVar1,param_1 + 0x10d4);
    *(undefined *)(param_1 + 0x10c8) = 0;
    iVar4 = *(int *)(param_1 + 0xac);
  }
  if (iVar4 == 1) {
    uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x14))();
    fVar7 = *(float *)(param_1 + 0x6c);
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x18))();
    fVar6 = *(float *)(param_1 + 0x94);
    if (((((fVar6 < (float)(longlong)*(int *)(param_1 + 0x3c) !=
            (NAN(fVar6) || NAN((float)(longlong)*(int *)(param_1 + 0x3c)))) ||
          ((float)(longlong)*(int *)(param_1 + 0x44) < fVar6)) ||
         (fVar5 = *(float *)(param_1 + 0x98), (float)(longlong)*(int *)(param_1 + 0x40) < fVar5)) ||
        (fVar5 < (float)(longlong)*(int *)(param_1 + 0x48) !=
         (NAN(fVar5) || NAN((float)(longlong)*(int *)(param_1 + 0x48))))) &&
       (((fVar6 < (float)(longlong)*(int *)(param_1 + 0x4c) !=
          (NAN(fVar6) || NAN((float)(longlong)*(int *)(param_1 + 0x4c))) ||
         ((float)(longlong)*(int *)(param_1 + 0x54) < fVar6)) ||
        ((fVar5 = *(float *)(param_1 + 0x98), (float)(longlong)*(int *)(param_1 + 0x50) < fVar5 ||
         (fVar5 < (float)(longlong)*(int *)(param_1 + 0x58) !=
          (NAN(fVar5) || NAN((float)(longlong)*(int *)(param_1 + 0x58))))))))) {
      fVar7 = ((float)(ulonglong)uVar2 * fVar7) / DAT_00096ad4;
      if ((-1 < (int)((uint)(fVar6 < *(float *)(param_1 + 0x70) - fVar7) << 0x1f)) &&
         (fVar7 = *(float *)(param_1 + 0x70) + fVar7,
         fVar6 == fVar7 || fVar6 < fVar7 != (NAN(fVar6) || NAN(fVar7)))) {
        fVar6 = ((float)(ulonglong)uVar3 * *(float *)(param_1 + 0x6c)) / DAT_00096ad4;
        fVar7 = *(float *)(param_1 + 0x98);
        if ((-1 < (int)((uint)(fVar7 < *(float *)(param_1 + 0x74) - fVar6) << 0x1f)) &&
           (fVar6 = *(float *)(param_1 + 0x74) + fVar6,
           fVar7 == fVar6 || fVar7 < fVar6 != (NAN(fVar7) || NAN(fVar6)))) goto LAB_00096974;
      }
    }
    FUN_000964b0(param_1);
  }
  else if (iVar4 == 2) {
    *(undefined4 *)(param_1 + 0xac) = 1;
  }
LAB_00096974:
  *(undefined4 *)(param_1 + 0x94) = param_2;
  uVar1 = DAT_00096ad0;
  *(undefined4 *)(param_1 + 0x98) = param_3;
  *(undefined4 *)(param_1 + 0x10d0) = uVar1;
  return;
}



