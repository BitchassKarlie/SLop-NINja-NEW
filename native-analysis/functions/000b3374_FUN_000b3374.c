/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b3374 FUN_000b3374 */

uint FUN_000b3374(byte **param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  pbVar3 = *param_1;
  bVar1 = *pbVar3;
  uVar4 = (uint)bVar1;
  if (uVar4 != 0) {
    *param_1 = pbVar3 + 1;
    if ((bVar1 & 0x80) == 0) {
      return uVar4;
    }
    if ((uVar4 & 0xe0) != 0xc0) {
      if ((uVar4 & 0xf0) == 0xe0) {
        uVar2 = (uint)pbVar3[1];
        if (uVar2 == 0) {
          return 0;
        }
        if ((uVar2 & 0xc0) == 0x80) {
          *param_1 = pbVar3 + 2;
          uVar7 = (uint)pbVar3[2];
          if (uVar7 == 0) {
            return 0;
          }
          if ((uVar7 & 0xc0) == 0x80) {
            *param_1 = pbVar3 + 3;
            uVar4 = uVar7 & 0x3f | (uVar4 << 0x1c) >> 0x10 | (uVar2 & 0x3f) << 6;
            if (((0x7ff < uVar4) && (0x7ff < uVar4 - 0xd800)) && (1 < uVar4 - 0xfffe)) {
              return uVar4;
            }
          }
        }
      }
      else if ((uVar4 & 0xf8) == 0xf0) {
        uVar2 = (uint)pbVar3[1];
        if (uVar2 == 0) {
          return 0;
        }
        if ((uVar2 & 0xc0) == 0x80) {
          *param_1 = pbVar3 + 2;
          uVar7 = (uint)pbVar3[2];
          if (uVar7 == 0) {
            return 0;
          }
          if ((uVar7 & 0xc0) == 0x80) {
            *param_1 = pbVar3 + 3;
            uVar5 = (uint)pbVar3[3];
            if (uVar5 == 0) {
              return 0;
            }
            if ((uVar5 & 0xc0) == 0x80) {
              *param_1 = pbVar3 + 4;
              uVar4 = uVar5 & 0x3f | (uVar2 & 0x3f) << 0xc | (uVar4 & 7) << 0x12 |
                      (uVar7 & 0x3f) << 6;
              if (uVar4 < 0x10000) {
                return 0xfffd;
              }
              return uVar4;
            }
          }
        }
      }
      else if ((uVar4 & 0xfc) == 0xf8) {
        uVar2 = (uint)pbVar3[1];
        if (uVar2 == 0) {
          return 0;
        }
        if ((uVar2 & 0xc0) == 0x80) {
          *param_1 = pbVar3 + 2;
          uVar7 = (uint)pbVar3[2];
          if (uVar7 == 0) {
            return 0;
          }
          if ((uVar7 & 0xc0) == 0x80) {
            *param_1 = pbVar3 + 3;
            uVar5 = (uint)pbVar3[3];
            if (uVar5 == 0) {
              return 0;
            }
            if ((uVar5 & 0xc0) == 0x80) {
              *param_1 = pbVar3 + 4;
              uVar6 = (uint)pbVar3[4];
              if (uVar6 == 0) {
                return 0;
              }
              if ((uVar6 & 0xc0) == 0x80) {
                *param_1 = pbVar3 + 5;
                uVar4 = (uVar2 & 0x3f) << 0x12 | (uVar4 & 3) << 0x18 | (uVar7 & 0x3f) << 0xc |
                        uVar6 & 0x3f | (uVar5 & 0x3f) << 6;
                if (uVar4 < 0x200000) {
                  return 0xfffd;
                }
                return uVar4;
              }
            }
          }
        }
      }
      else if ((uVar4 & 0xfe) == 0xfc) {
        bVar1 = pbVar3[1];
        if (bVar1 == 0) {
          return 0;
        }
        if ((bVar1 & 0xc0) == 0x80) {
          *param_1 = pbVar3 + 2;
          uVar2 = (uint)pbVar3[2];
          if (uVar2 == 0) {
            return 0;
          }
          if ((uVar2 & 0xc0) == 0x80) {
            *param_1 = pbVar3 + 3;
            uVar7 = (uint)pbVar3[3];
            if (uVar7 == 0) {
              return 0;
            }
            if ((uVar7 & 0xc0) == 0x80) {
              *param_1 = pbVar3 + 4;
              uVar5 = (uint)pbVar3[4];
              if (uVar5 == 0) {
                return 0;
              }
              if ((uVar5 & 0xc0) == 0x80) {
                *param_1 = pbVar3 + 5;
                uVar6 = (uint)pbVar3[5];
                if (uVar6 == 0) {
                  return 0;
                }
                if ((uVar6 & 0xc0) == 0x80) {
                  *param_1 = pbVar3 + 6;
                  uVar4 = (uint)(bVar1 & 0x3f) << 0x18 | (uVar4 & 1) << 0x1e |
                          (uVar2 & 0x3f) << 0x12 | (uVar7 & 0x3f) << 0xc | uVar6 & 0x3f |
                          (uVar5 & 0x3f) << 6;
                  if (0x3ffffff < uVar4) {
                    return uVar4;
                  }
                }
              }
            }
          }
        }
      }
      return 0xfffd;
    }
    uVar2 = (uint)pbVar3[1];
    if (uVar2 != 0) {
      if ((uVar2 & 0xc0) != 0x80) {
        return 0xfffd;
      }
      *param_1 = pbVar3 + 2;
      uVar4 = uVar2 & 0x3f | (uVar4 & 0x1f) << 6;
      if (uVar4 < 0x80) {
        return 0xfffd;
      }
      return uVar4;
    }
  }
  return 0;
}



