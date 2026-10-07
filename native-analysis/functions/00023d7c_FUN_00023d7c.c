/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00023d7c FUN_00023d7c */

void FUN_00023d7c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  uVar1 = FUN_0001c940();
  iVar2 = FUN_0001bd8c(uVar1,0,&local_18);
  while (iVar2 != 0) {
    if ((param_1 != 0) ||
       (fVar3 = *(float *)(iVar2 + 0x80), fVar3 != 0.0 && fVar3 < 0.0 == NAN(fVar3))) {
      FUN_00023b48(iVar2,0);
    }
    uVar1 = FUN_0001c940();
    iVar2 = FUN_0001bdb8(uVar1,0,&local_18);
  }
  return;
}



