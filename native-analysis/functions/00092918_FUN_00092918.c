/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00092918 FUN_00092918 */

short FUN_00092918(float param_1,float param_2)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  float fVar5;
  
  bVar2 = (byte)(((uint)(param_1 == 0.0) << 0x1e) >> 0x18);
  cVar4 = -((char)((byte)(((uint)(param_1 < 0.0) << 0x1f) >> 0x18) | bVar2) >> 7);
  if ((bool)(bVar2 >> 6) || (bool)cVar4 != NAN(param_1)) {
    if (cVar4 == '\0') {
      if (param_2 < 0.0 == NAN(param_2)) {
        return 0;
      }
      return -0x8000;
    }
    param_1 = -param_1;
    fVar5 = param_1;
    if (param_2 < 0.0) {
      param_2 = -param_2;
      bVar2 = (byte)(((uint)(param_2 == param_1) << 0x1e) >> 0x18);
      cVar4 = -((char)((byte)(((uint)(param_2 < param_1) << 0x1f) >> 0x18) | bVar2) >> 7);
      if ((bool)(bVar2 >> 6) || (bool)cVar4 != (NAN(param_2) || NAN(param_1))) {
        if (cVar4 == '\0') {
          return -0x6000;
        }
        bVar1 = false;
        sVar3 = -0x4000;
        param_1 = param_2;
      }
      else {
        bVar1 = true;
        sVar3 = -0x8000;
        fVar5 = param_2;
      }
    }
    else {
      if (param_2 == 0.0) {
        return -0x4000;
      }
      if (param_2 < param_1) {
        bVar1 = true;
        sVar3 = -0x4000;
        param_1 = param_2;
      }
      else {
        if (param_2 == param_1) {
          return -0x2000;
        }
        bVar1 = false;
        sVar3 = 0;
        fVar5 = param_2;
      }
    }
  }
  else {
    bVar2 = (byte)(((uint)(param_2 == 0.0) << 0x1e) >> 0x18);
    cVar4 = -((char)((byte)(((uint)(param_2 < 0.0) << 0x1f) >> 0x18) | bVar2) >> 7);
    fVar5 = param_1;
    if ((bool)(bVar2 >> 6) || (bool)cVar4 != NAN(param_2)) {
      if (cVar4 == '\0') {
        return 0x4000;
      }
      param_2 = -param_2;
      if (param_2 < param_1) {
        bVar1 = true;
        sVar3 = 0x4000;
        param_1 = param_2;
      }
      else {
        if (param_2 == param_1) {
          return 0x6000;
        }
        bVar1 = false;
        sVar3 = -0x8000;
        fVar5 = param_2;
      }
    }
    else {
      bVar2 = (byte)(((uint)(param_2 == param_1) << 0x1e) >> 0x18);
      cVar4 = -((char)((byte)(((uint)(param_2 < param_1) << 0x1f) >> 0x18) | bVar2) >> 7);
      if ((bool)(bVar2 >> 6) || (bool)cVar4 != (NAN(param_2) || NAN(param_1))) {
        if (cVar4 == '\0') {
          return 0x2000;
        }
        bVar1 = false;
        sVar3 = 0x4000;
        param_1 = param_2;
      }
      else {
        bVar1 = true;
        sVar3 = 0;
        fVar5 = param_2;
      }
    }
  }
  if (fVar5 == 0.0) {
    return 0;
  }
  if (bVar1) {
    fVar5 = (param_1 / fVar5) * DAT_00092a88;
    return *(short *)(&UNK_0009375a + DAT_00092a90 + (uint)(0.0 < fVar5) * (int)fVar5 * 2) + sVar3;
  }
  fVar5 = (param_1 / fVar5) * DAT_00092a88;
  return sVar3 - *(short *)(DAT_00092a8c + (uint)(0.0 < fVar5) * (int)fVar5 * 2 + 0x936fa);
}



