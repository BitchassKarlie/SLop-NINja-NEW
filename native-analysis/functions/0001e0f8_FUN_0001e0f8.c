/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001e0f8 FUN_0001e0f8 */

void FUN_0001e0f8(void)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  uVar1 = FUN_0001c940();
  iVar2 = FUN_0001bd8c(uVar1,1,&local_10);
  while (iVar2 != 0) {
    if (*(char *)(iVar2 + 0x68) == '\0') {
      fVar3 = *(float *)(iVar2 + 0xa4);
    }
    else {
      fVar3 = *(float *)(iVar2 + 0x3c);
    }
    if ((fVar3 != 0.0 && fVar3 < 0.0 == NAN(fVar3)) && (*(char *)(iVar2 + 0x68) == '\0')) {
      FUN_0001e0c0();
    }
    uVar1 = FUN_0001c940();
    iVar2 = FUN_0001bdb8(uVar1,1,&local_10);
  }
  return;
}



