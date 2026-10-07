/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001d490 FUN_0001d490 */

float FUN_0001d490(void)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  uVar3 = FUN_0001c940();
  iVar4 = FUN_0001bca0(uVar3,1,0);
  fVar2 = DAT_0001d51c;
  fVar1 = DAT_0001d518;
  fVar8 = DAT_0001d514;
  if (iVar4 != 0) {
    iVar6 = 1;
    while( true ) {
      fVar7 = *(float *)(iVar4 + 0x14);
      iVar5 = FUN_0002f5ec();
      if (iVar5 == 0) {
        fVar7 = fVar7 + fVar2;
      }
      else {
        fVar7 = *(float *)(iVar4 + 0x10);
        iVar5 = (uint)(fVar7 < 0.0) << 0x1f;
        if (iVar5 < 0) {
          fVar7 = fVar7 + fVar1;
        }
        if (-1 < iVar5) {
          fVar7 = fVar1 - fVar7;
        }
      }
      if ((*(char *)(iVar4 + 0x88) == '\0') &&
         (fVar7 != fVar8 && fVar7 < fVar8 == (NAN(fVar7) || NAN(fVar8)))) {
        fVar8 = fVar7;
      }
      uVar3 = FUN_0001c940();
      iVar4 = FUN_0001bca0(uVar3,1,iVar6);
      if (iVar4 == 0) break;
      iVar6 = iVar6 + 1;
    }
  }
  return fVar8;
}



