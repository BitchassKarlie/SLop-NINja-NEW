/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00073b20 FUN_00073b20 */

void FUN_00073b20(float *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  
  fVar1 = DAT_00073bc4;
  iVar5 = 0;
  pfVar4 = param_1;
  do {
    if (*(char *)(pfVar4 + 3) == '\0') {
      iVar2 = FUN_000a59cc(pfVar4[1]);
      if ((iVar2 == 0) && (iVar2 = FUN_000a5d84(pfVar4[1]), iVar2 == 0)) {
        fVar6 = pfVar4[1];
        if (*(char *)(pfVar4 + 0xd) == '\0') {
          pfVar3 = param_1 + iVar5 * 0xd + 5;
        }
        else {
          pfVar3 = (float *)pfVar4[5];
        }
        if (pfVar3 != (float *)0x0) {
          iVar2 = (**(code **)((int)*pfVar3 + 0xc))();
          if (iVar2 != 0) {
            return;
          }
          fVar6 = pfVar4[1];
        }
        FUN_00098b50(fVar6);
        *(undefined *)(pfVar4 + 3) = 1;
        pfVar4[2] = 0.0;
      }
      else {
        fVar6 = pfVar4[4];
        if (fVar6 != 0.0 && fVar6 < 0.0 == NAN(fVar6)) {
          FUN_000a5ce0(pfVar4[1],fVar1 - fVar6 * (fVar1 - *param_1));
        }
      }
    }
    pfVar4 = pfVar4 + 0xd;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x20);
  return;
}



