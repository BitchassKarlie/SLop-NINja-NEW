/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004edbc FUN_0004edbc */

void FUN_0004edbc(int param_1,float param_2)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  fVar1 = DAT_0004eecc;
  iVar4 = *(int *)(param_1 + 0x8c);
  iVar5 = DAT_0004eed8 + 0x4edd2;
  if (iVar4 == 1) {
    if (*(char *)(param_1 + 0xa0) != '\0') {
      param_2 = *(float *)(param_1 + 0x9c) - param_2;
      *(float *)(param_1 + 0x9c) = param_2;
      if ((param_2 <= 0.0) && (*(char *)(*(int *)(param_1 + 0x94) + 0xf8) != '\0')) {
        *(undefined *)(param_1 + 0xa0) = 0;
        FUN_0004ed28();
      }
    }
  }
  else if (iVar4 == 2) {
    param_2 = *(float *)(param_1 + 0x98) - param_2;
    *(float *)(param_1 + 0x98) = param_2;
    if (param_2 <= fVar1) {
      iVar4 = *(int *)(iVar5 + DAT_0004eedc);
      if (*(int *)(iVar4 + 0x168) == 0) {
        piVar3 = (int *)operator_new(0x134);
        iVar5 = *(int *)(iVar4 + 0x50);
        FUN_00047588(piVar3,DAT_0004eee0 + 0x4ee8a,6,0x3ff33333,*(undefined4 *)(iVar5 + 0x104),
                     *(undefined4 *)(iVar5 + 0x100),*(undefined4 *)(iVar5 + 0x108),
                     *(undefined4 *)(iVar5 + 0x10c));
        *(int **)(iVar4 + 0x168) = piVar3;
        (**(code **)(*piVar3 + 8))(piVar3);
        FUN_00049d7c(*(undefined4 *)(iVar4 + 0x40),*(undefined4 *)(iVar4 + 0x168),0);
        param_2 = *(float *)(param_1 + 0x98);
      }
    }
    if ((int)((uint)(param_2 < DAT_0004eed0) << 0x1f) < 0) {
      *(undefined *)(param_1 + 0x27) = 1;
    }
  }
  else if ((iVar4 == 0) &&
          (param_2 = *(float *)(param_1 + 0x98) - param_2, *(float *)(param_1 + 0x98) = param_2,
          (int)((uint)(param_2 < 0.0) << 0x1f) < 0)) {
    FUN_0004eda0();
    uVar2 = DAT_0004eed4;
    *(undefined4 *)(param_1 + 0x8c) = 1;
    *(undefined4 *)(param_1 + 0x98) = uVar2;
  }
  return;
}



