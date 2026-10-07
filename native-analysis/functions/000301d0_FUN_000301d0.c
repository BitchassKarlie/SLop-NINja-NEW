/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000301d0 FUN_000301d0 */

float FUN_000301d0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(DAT_00030214 + 0x301da);
  fVar3 = DAT_0003020c;
  if ((iVar1 != 0) &&
     ((*(int *)(iVar1 + 200) == 6 ||
      ((fVar2 = *(float *)(iVar1 + 0x70), 0.0 < fVar2 &&
       (fVar3 = fVar2, fVar2 < DAT_00030210 == (NAN(fVar2) || NAN(DAT_00030210)))))))) {
    fVar3 = DAT_00030210;
  }
  return fVar3;
}



