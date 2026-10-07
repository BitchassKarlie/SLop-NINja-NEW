/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00080560 FUN_00080560 */

void FUN_00080560(float *param_1,float param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = FUN_0007e454();
  fVar2 = param_1[0xe];
  if (*(char *)((int)fVar2 + 0x4b) == '\0') {
    fVar9 = *param_1;
  }
  else {
    iVar6 = 0x4c;
    iVar7 = 0;
    fVar9 = *param_1;
    do {
      iVar3 = (int)fVar2 + iVar6;
      fVar2 = (float)(longlong)(int)(uint)*(ushort *)(iVar3 + 4);
      if ((fVar2 <= fVar9) &&
         (((*(ushort *)(iVar3 + 6) == 0 ||
           (fVar8 = (float)(longlong)(int)(uint)*(ushort *)(iVar3 + 6),
           fVar8 < fVar9 == (NAN(fVar8) || NAN(fVar9)))) &&
          (iVar5 = (int)((float)(longlong)(int)(uint)*(byte *)(iVar3 + 9) *
                        ((fVar9 + param_2 * param_1[8]) - fVar2)) -
                   (int)((float)(longlong)(int)(uint)*(byte *)(iVar3 + 9) * (fVar9 - fVar2)),
          0 < iVar5)))) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          FUN_0007fae4(param_1,iVar3,uVar1);
        } while (iVar4 != iVar5);
        fVar2 = (float)(longlong)(int)(uint)*(ushort *)(iVar3 + 4);
        fVar9 = *param_1;
      }
      if (fVar2 == fVar9) {
        if (*(char *)(iVar3 + 8) != '\0') {
          iVar5 = 0;
          do {
            iVar5 = iVar5 + 1;
            FUN_0007fae4(param_1,iVar3,uVar1);
          } while (iVar5 < (int)(uint)*(byte *)(iVar3 + 8));
          fVar9 = *param_1;
        }
        if (param_1[8] == 0.0) {
          fVar9 = fVar9 + param_2;
          *param_1 = fVar9;
        }
      }
      fVar2 = param_1[0xe];
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x24;
    } while (iVar7 < (int)(uint)*(byte *)((int)fVar2 + 0x4b));
  }
  *param_1 = fVar9 + param_2 * param_1[8];
  param_1[2] = param_1[2] + param_1[5];
  param_1[3] = param_1[3] + param_1[6];
  param_1[4] = param_1[4] + param_1[7];
  return;
}



