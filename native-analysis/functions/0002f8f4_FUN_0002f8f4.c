/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002f8f4 FUN_0002f8f4 */

void FUN_0002f8f4(float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  float *pfVar8;
  char cVar9;
  char *pcVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  
  iVar5 = DAT_0002fa3c;
  iVar4 = DAT_0002fa38;
  fVar3 = DAT_0002fa34;
  fVar2 = DAT_0002fa30;
  fVar1 = DAT_0002fa2c;
  pfVar8 = (float *)(DAT_0002fa38 + 0x2f90c);
  cVar9 = *(char *)(DAT_0002fa38 + 0x2ff15);
  pcVar10 = (char *)(DAT_0002fa40 + 0x2f922);
  do {
    fVar11 = DAT_0002fa30;
    if (param_1 <= fVar1) {
      iVar13 = 10;
      param_1 = DAT_0002fa2c;
LAB_0002f928:
      fVar11 = *pfVar8;
      *(float *)(iVar4 + 0x2f94c) = param_1;
      *(undefined *)(iVar4 + 0x2ff0c) = 0;
      *(int *)(iVar4 + 0x2faa8) = iVar13 + *(int *)(iVar4 + 0x2faa8);
      *pfVar8 = param_1 + fVar11;
    }
    else {
      if (param_1 < fVar2 != (NAN(param_1) || NAN(fVar2))) {
        iVar13 = (int)(param_1 * fVar3);
        goto LAB_0002f928;
      }
      fVar12 = DAT_0002fa30 + *pfVar8;
      *(float *)(iVar4 + 0x2f94c) = DAT_0002fa30;
      *(undefined *)(iVar4 + 0x2ff0c) = 0;
      *(int *)(iVar4 + 0x2faa8) = *(int *)(iVar4 + 0x2faa8) + 0x20;
      *pfVar8 = fVar12;
      param_1 = fVar11;
    }
    if (cVar9 != '\0') {
      bVar7 = *(byte *)(iVar4 + 0x2f910);
      if ((uint)bVar7 == *(uint *)(iVar4 + 0x2ff10)) {
        FUN_00099050();
        FUN_0009903c();
        FUN_00099050();
        iVar5 = FUN_00099040();
        uVar6 = (uint)*(byte *)(iVar4 + 0x2f910);
        bVar7 = 1 - *(byte *)(iVar4 + 0x2f912);
        if (1 < *(byte *)(iVar4 + 0x2f912)) {
          bVar7 = 0;
        }
        *(uint *)(iVar4 + 0x2ff10) = uVar6;
        if (iVar5 == 0) {
          bVar7 = bVar7 & 1;
        }
        else {
          bVar7 = 0;
        }
        *(undefined *)(iVar4 + 0x2ff14) = 1;
        if (*(float *)(iVar4 + 0x2f924) <= 0.0) {
          FUN_00072584(*(undefined4 *)(iVar4 + 0x2f960),param_1,*(undefined4 *)(iVar4 + 0x2f950));
          uVar6 = (uint)*(byte *)(iVar4 + 0x2f910);
        }
        (**(code **)((int)&DAT_0002fa3c + DAT_0002fa44 + uVar6 * 4))(param_1,bVar7);
      }
      else {
        FUN_0002f4d8();
        *(byte *)(iVar4 + 0x2f910) = bVar7;
        *(uint *)(iVar4 + 0x2ff10) = (uint)bVar7;
      }
      return;
    }
    *(uint *)(iVar4 + 0x2ff10) = (uint)*(byte *)(iVar4 + 0x2f910);
    (**(code **)(iVar5 + (uint)*(byte *)(iVar4 + 0x2f910) * 4 + 0x2f944))(0);
    cVar9 = *pcVar10;
    *(undefined *)(iVar4 + 0x2ff15) = 1;
    if (cVar9 == '\0') {
      return;
    }
    *pcVar10 = '\0';
    cVar9 = '\x01';
  } while( true );
}



