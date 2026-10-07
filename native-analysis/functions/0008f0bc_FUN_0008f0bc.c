/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008f0bc FUN_0008f0bc */

uint FUN_0008f0bc(byte *param_1)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  sVar1 = strlen((char *)param_1);
  uVar8 = sVar1;
  if (sVar1 < 0xc) {
    uVar2 = 0x9e3779b9;
    uVar15 = 0x805;
    uVar4 = uVar2;
  }
  else {
    uVar2 = 0x9e3779b9;
    uVar15 = 0x805;
    uVar4 = uVar2;
    do {
      uVar9 = (uint)*param_1;
      if (uVar9 == 0x5c) {
        uVar9 = 0x2f;
      }
      else if (uVar9 - 0x41 < 0x1a) {
        uVar9 = uVar9 + 0x20;
      }
      uVar5 = (uint)param_1[1];
      if (uVar5 == 0x5c) {
        iVar14 = 0x2f00;
      }
      else {
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 + 0x20;
        }
        iVar14 = uVar5 << 8;
      }
      uVar5 = (uint)param_1[2];
      if (uVar5 == 0x5c) {
        iVar12 = 0x2f0000;
      }
      else {
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 + 0x20;
        }
        iVar12 = uVar5 << 0x10;
      }
      uVar5 = (uint)param_1[3];
      if (uVar5 == 0x5c) {
        iVar10 = 0x2f000000;
      }
      else {
        if (uVar5 - 0x41 < 0x1a) {
          uVar5 = uVar5 + 0x20;
        }
        iVar10 = uVar5 << 0x18;
      }
      uVar5 = (uint)param_1[4];
      if (uVar5 == 0x5c) {
        uVar5 = 0x2f;
      }
      else if (uVar5 - 0x41 < 0x1a) {
        uVar5 = uVar5 + 0x20;
      }
      uVar6 = (uint)param_1[5];
      if (uVar6 == 0x5c) {
        iVar7 = 0x2f00;
      }
      else {
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 + 0x20;
        }
        iVar7 = uVar6 << 8;
      }
      uVar6 = (uint)param_1[6];
      if (uVar6 == 0x5c) {
        iVar13 = 0x2f0000;
      }
      else {
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 + 0x20;
        }
        iVar13 = uVar6 << 0x10;
      }
      uVar6 = (uint)param_1[7];
      if (uVar6 == 0x5c) {
        iVar11 = 0x2f000000;
      }
      else {
        if (uVar6 - 0x41 < 0x1a) {
          uVar6 = uVar6 + 0x20;
        }
        iVar11 = uVar6 << 0x18;
      }
      uVar6 = (uint)param_1[8];
      iVar11 = uVar2 + uVar5 + iVar7 + iVar13 + iVar11;
      if (uVar6 == 0x5c) {
        uVar6 = 0x2f;
      }
      else if (uVar6 - 0x41 < 0x1a) {
        uVar6 = uVar6 + 0x20;
      }
      uVar2 = (uint)param_1[9];
      if (uVar2 == 0x5c) {
        iVar7 = 0x2f00;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 + 0x20;
        }
        iVar7 = uVar2 << 8;
      }
      uVar2 = (uint)param_1[10];
      if (uVar2 == 0x5c) {
        iVar13 = 0x2f0000;
      }
      else if (uVar2 - 0x41 < 0x1a) {
        iVar13 = (uVar2 + 0x20) * 0x10000;
      }
      else {
        iVar13 = uVar2 << 0x10;
      }
      uVar2 = (uint)param_1[0xb];
      if (uVar2 == 0x5c) {
        iVar3 = 0x2f000000;
      }
      else {
        if (uVar2 - 0x41 < 0x1a) {
          uVar2 = uVar2 + 0x20;
        }
        iVar3 = uVar2 << 0x18;
      }
      uVar8 = uVar8 - 0xc;
      param_1 = param_1 + 0xc;
      uVar15 = iVar13 + uVar15 + uVar6 + iVar7 + iVar3;
      uVar9 = ((uVar4 + uVar9 + iVar14 + iVar12 + iVar10) - iVar11) - uVar15 ^ uVar15 >> 0xd;
      uVar4 = (iVar11 - uVar15) - uVar9 ^ uVar9 << 8;
      uVar2 = (uVar15 - uVar9) - uVar4 ^ uVar4 >> 0xd;
      uVar5 = (uVar9 - uVar4) - uVar2 ^ uVar2 >> 0xc;
      uVar15 = (uVar4 - uVar2) - uVar5 ^ uVar5 << 0x10;
      uVar9 = (uVar2 - uVar5) - uVar15 ^ uVar15 >> 5;
      uVar4 = (uVar5 - uVar15) - uVar9 ^ uVar9 >> 3;
      uVar2 = (uVar15 - uVar9) - uVar4 ^ uVar4 << 10;
      uVar15 = (uVar9 - uVar4) - uVar2 ^ uVar2 >> 0xf;
    } while (0xb < uVar8);
  }
  uVar15 = sVar1 + uVar15;
  switch(uVar8) {
  case 0xb:
    uVar8 = (uint)param_1[10];
    if (uVar8 == 0x5c) {
      iVar14 = 0x2f000000;
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 + 0x20;
      }
      iVar14 = uVar8 << 0x18;
    }
    uVar15 = uVar15 + iVar14;
  case 10:
    uVar8 = (uint)param_1[9];
    if (uVar8 == 0x5c) {
      iVar14 = 0x2f0000;
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 + 0x20;
      }
      iVar14 = uVar8 << 0x10;
    }
    uVar15 = uVar15 + iVar14;
  case 9:
    uVar8 = (uint)param_1[8];
    if (uVar8 == 0x5c) {
      iVar14 = 0x2f00;
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 + 0x20;
      }
      iVar14 = uVar8 << 8;
    }
    uVar15 = uVar15 + iVar14;
  case 8:
    uVar8 = (uint)param_1[7];
    if (uVar8 == 0x5c) {
      iVar14 = 0x2f000000;
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 + 0x20;
      }
      iVar14 = uVar8 << 0x18;
    }
    uVar2 = uVar2 + iVar14;
  case 7:
    uVar8 = (uint)param_1[6];
    if (uVar8 == 0x5c) {
      iVar14 = 0x2f0000;
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 + 0x20;
      }
      iVar14 = uVar8 << 0x10;
    }
    uVar2 = uVar2 + iVar14;
  case 6:
    uVar8 = (uint)param_1[5];
    if (uVar8 == 0x5c) {
      iVar14 = 0x2f00;
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 + 0x20;
      }
      iVar14 = uVar8 << 8;
    }
    uVar2 = uVar2 + iVar14;
  case 5:
    uVar8 = (uint)param_1[4];
    if (uVar8 == 0x5c) {
      uVar2 = uVar2 + 0x2f;
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 + 0x20;
      }
      uVar2 = uVar2 + uVar8;
    }
  case 4:
    uVar8 = (uint)param_1[3];
    if (uVar8 == 0x5c) {
      iVar14 = 0x2f000000;
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 + 0x20;
      }
      iVar14 = uVar8 << 0x18;
    }
    uVar4 = uVar4 + iVar14;
  case 3:
    uVar8 = (uint)param_1[2];
    if (uVar8 == 0x5c) {
      iVar14 = 0x2f0000;
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 + 0x20;
      }
      iVar14 = uVar8 << 0x10;
    }
    uVar4 = uVar4 + iVar14;
  case 2:
    uVar8 = (uint)param_1[1];
    if (uVar8 == 0x5c) {
      iVar14 = 0x2f00;
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 + 0x20;
      }
      iVar14 = uVar8 << 8;
    }
    uVar4 = uVar4 + iVar14;
  case 1:
    uVar8 = (uint)*param_1;
    if (uVar8 == 0x5c) {
      uVar4 = uVar4 + 0x2f;
    }
    else {
      if (uVar8 - 0x41 < 0x1a) {
        uVar8 = uVar8 + 0x20;
      }
      uVar4 = uVar4 + uVar8;
    }
  default:
    uVar9 = (uVar4 - uVar2) - uVar15 ^ uVar15 >> 0xd;
    uVar4 = (uVar2 - uVar15) - uVar9 ^ uVar9 << 8;
    uVar8 = (uVar15 - uVar9) - uVar4 ^ uVar4 >> 0xd;
    uVar2 = (uVar9 - uVar4) - uVar8 ^ uVar8 >> 0xc;
    uVar4 = (uVar4 - uVar8) - uVar2 ^ uVar2 << 0x10;
    uVar15 = (uVar8 - uVar2) - uVar4 ^ uVar4 >> 5;
    uVar2 = (uVar2 - uVar4) - uVar15 ^ uVar15 >> 3;
    uVar8 = (uVar4 - uVar15) - uVar2 ^ uVar2 << 10;
    return (uVar15 - uVar2) - uVar8 ^ uVar8 >> 0xf;
  }
}



