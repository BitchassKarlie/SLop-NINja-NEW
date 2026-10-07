/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093f70 FUN_00093f70 */

undefined4 FUN_00093f70(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  bVar1 = (byte)(((uint)(fVar4 == 0.0) << 0x1e) >> 0x18);
  cVar3 = -((char)((byte)(((uint)(fVar4 < 0.0) << 0x1f) >> 0x18) | bVar1) >> 7);
  if ((bool)(bVar1 >> 6) || (bool)cVar3 != NAN(fVar4)) {
    if (cVar3 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



