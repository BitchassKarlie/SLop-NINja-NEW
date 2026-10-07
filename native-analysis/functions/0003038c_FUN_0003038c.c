/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003038c FUN_0003038c */

uint FUN_0003038c(float param_1,float param_2,float param_3,float param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  
  if (param_5 < 0x10) {
    iVar2 = *(int *)(DAT_00030448 + 0x303a8 + DAT_0003044c) + param_5 * 0xc;
    fVar3 = *(float *)(iVar2 + 0xac);
    if ((((fVar3 != 0.0 && fVar3 < 0.0 == NAN(fVar3)) &&
         (fVar3 = *(float *)(iVar2 + 0xa4), fVar3 < param_1 == (NAN(fVar3) || NAN(param_1)))) &&
        (fVar3 <= param_2)) &&
       ((fVar3 = *(float *)(iVar2 + 0xa8), fVar3 < param_3 == (NAN(fVar3) || NAN(param_3)) &&
        (fVar3 <= param_4)))) {
      return param_5;
    }
  }
  iVar2 = *(int *)(DAT_00030448 + 0x303a8 + DAT_0003044c);
  uVar1 = 0;
  while (((fVar3 = *(float *)(iVar2 + 0xac), fVar3 == 0.0 || fVar3 < 0.0 != NAN(fVar3) ||
          (fVar3 = *(float *)(iVar2 + 0xa4), fVar3 < param_1 != (NAN(fVar3) || NAN(param_1)))) ||
         ((param_2 < fVar3 != (NAN(param_2) || NAN(fVar3)) ||
          ((fVar3 = *(float *)(iVar2 + 0xa8), fVar3 < param_3 != (NAN(fVar3) || NAN(param_3)) ||
           (param_4 < fVar3 != (NAN(param_4) || NAN(fVar3))))))))) {
    uVar1 = uVar1 + 1;
    iVar2 = iVar2 + 0xc;
    if (uVar1 == 0x10) {
      return 0xffffffff;
    }
  }
  return uVar1;
}



