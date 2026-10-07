/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000863bc FUN_000863bc */

void FUN_000863bc(void **param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  float fVar9;
  int local_38;
  void **local_34;
  int local_30;
  void *local_2c;
  
  iVar1 = DAT_00086554;
  iVar4 = DAT_00086550 + 0x863d2;
  iVar3 = *(int *)(iVar4 + DAT_00086554);
  if ((*(float *)(iVar3 + 0x10) == 0.0) && (*(int *)(iVar3 + 4) == 2)) {
    pvVar7 = param_1[0x15];
    pvVar5 = param_1[0x16];
    if ((int)((uint)((float)param_1[0x16] < DAT_0008653c) << 0x1f) < 0) {
      pvVar5 = DAT_00086540;
    }
    if ((int)((uint)((float)pvVar7 < (float)pvVar5) << 0x1f) < 0) {
      pvVar8 = (void *)((float)pvVar5 - (float)pvVar7);
      if (-1 < (int)((uint)((float)(void *)((float)pvVar5 - (float)pvVar7) <
                           (float)(void *)(param_2 * DAT_0008654c)) << 0x1f)) {
        pvVar8 = (void *)(param_2 * DAT_0008654c);
      }
    }
    else {
      iVar3 = (uint)((float)pvVar5 < (float)pvVar7) << 0x1f;
      if (-1 < iVar3) {
        pvVar5 = DAT_00086540;
      }
      pvVar8 = pvVar5;
      if (iVar3 < 0) {
        pvVar6 = (void *)(param_2 * DAT_00086544);
        pvVar8 = (void *)((float)pvVar5 - (float)pvVar7);
        if ((float)pvVar8 == (float)pvVar6 ||
            (float)pvVar8 < (float)pvVar6 != (NAN((float)pvVar8) || NAN((float)pvVar6))) {
          pvVar8 = pvVar6;
        }
      }
    }
    pvVar5 = *param_1;
    param_1[0x15] = (void *)((float)pvVar8 + (float)pvVar7);
    if (pvVar5 == (void *)0x0) {
      pvVar7 = operator_new(0xa0);
      FUN_00065984();
      iVar3 = DAT_00086558;
      *param_1 = pvVar7;
      local_38 = iVar3 + 0x86506;
      local_30 = DAT_0008655c + 0x8650c;
      local_34 = param_1;
      local_2c = pvVar5;
      (**(code **)(iVar3 + 0x8650e))(&local_38,(int)pvVar7 + 0x2c);
      local_38 = DAT_00086560 + 0x86522;
      FUN_00049d7c(*(undefined4 *)(*(int *)(iVar4 + iVar1) + 0x40),*param_1,0);
      *(void **)((int)*param_1 + 0x74) = param_1[0x15];
      *(void **)((int)*param_1 + 0x88) = param_1[0x13];
    }
    else {
      *(void **)((int)pvVar5 + 0x74) = (void *)((float)pvVar8 + (float)pvVar7);
      *(void **)((int)*param_1 + 0x88) = param_1[0x13];
    }
    pvVar5 = param_1[0x13];
    if ((((float)pvVar5 != 0.0 && (float)pvVar5 < 0.0 == NAN((float)pvVar5)) &&
        (param_1[0x93] != (void *)0x0)) &&
       (fVar9 = *(float *)((int)param_1[0x93] + 0x1c), fVar9 != 0.0 && fVar9 < 0.0 == NAN(fVar9))) {
      fVar2 = (float)FUN_00085600(param_1,0);
      if (fVar2 != DAT_00086548 && fVar2 < DAT_00086548 == (NAN(fVar2) || NAN(DAT_00086548))) {
        fVar2 = DAT_00086548;
      }
      pvVar5 = (void *)((float)pvVar5 - (fVar2 * param_2) / fVar9);
      param_1[0x13] = pvVar5;
      if ((float)pvVar5 <= 0.0) {
        FUN_00085e94(param_1,0);
      }
    }
  }
  return;
}



