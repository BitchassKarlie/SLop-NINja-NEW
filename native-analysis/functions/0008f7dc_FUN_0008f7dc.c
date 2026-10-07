/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008f7dc FUN_0008f7dc */

int FUN_0008f7dc(char *param_1,char *param_2,int *param_3,char **param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  char *__format;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  cVar1 = *param_1;
  iVar10 = 0;
  while (cVar1 != '=') {
    iVar6 = iVar10 + 1;
    cVar1 = param_1[iVar6];
    if ((cVar1 == '\n' || cVar1 == '\r') || (iVar10 = iVar6, cVar1 == '\0')) goto LAB_0008f802;
  }
  iVar6 = iVar10 + -1;
  if (param_1[iVar6] != ' ' && 0 < iVar6) {
    do {
      iVar6 = iVar6 + -1;
      uVar8 = (byte)param_1[iVar6] - 0x20;
      if (uVar8 != 0) {
        uVar8 = 1;
      }
      if (iVar6 < 1) {
        uVar8 = 0;
      }
      else {
        uVar8 = uVar8 & 1;
      }
    } while (uVar8 != 0);
  }
  if (param_2 != (char *)0x0) {
    param_1[iVar10] = '\0';
    strcpy(param_2,param_1 + iVar6 + 1);
    param_1[iVar10] = '=';
  }
  iVar6 = iVar10 + 1;
  uVar8 = (uint)(byte)param_1[iVar6];
  if ((uVar8 != 10 && uVar8 != 0xd) && (uVar8 != 0)) {
    uVar9 = 1 - (int)param_3;
    if ((int *)0x1 < param_3) {
      uVar9 = 0;
    }
    if (param_4 == (char **)0x0) {
      uVar9 = uVar9 | 1;
    }
    if (uVar9 != 0) {
      return iVar6;
    }
    if (uVar8 == 0x2d) {
      iVar10 = iVar10 + 2;
      uVar8 = (uint)(byte)param_1[iVar10];
      if (uVar8 == 10 || uVar8 == 0xd) {
        return -iVar10;
      }
      bVar2 = true;
      if (uVar8 == 0) {
        return -iVar10;
      }
    }
    else {
      bVar2 = false;
      iVar10 = iVar6;
    }
    if (uVar8 == 0x22) {
      iVar10 = iVar10 + 1;
      uVar8 = (uint)(byte)param_1[iVar10];
      if ((uVar8 == 10 || uVar8 == 0xd) || (iVar6 = iVar10, uVar8 == 0)) {
        return -iVar10;
      }
      while( true ) {
        uVar9 = uVar8 - 0x22;
        if (uVar9 != 0) {
          uVar9 = 1;
        }
        if (uVar8 == 0x2e) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar9 & 1;
        }
        if (uVar9 == 0) break;
        iVar6 = iVar6 + 1;
        uVar8 = (uint)(byte)param_1[iVar6];
        if ((uVar8 == 10 || uVar8 == 0xd) || (uVar8 == 0)) goto LAB_0008f802;
      }
      if (uVar8 == 0x2e) {
        pcVar3 = (char *)operator_new__((5 - iVar10) + iVar6);
        __format = (char *)(DAT_0008fa2c + 0x8fa1c);
        *param_4 = pcVar3;
        param_1[iVar6] = '\0';
        sprintf(*param_4,__format);
        param_1[iVar6] = (char)uVar8;
      }
      else {
        pcVar3 = (char *)operator_new__((1 - iVar10) + iVar6);
        *param_4 = pcVar3;
        param_1[iVar6] = '\0';
        strcpy(*param_4,param_1 + iVar10);
        param_1[iVar6] = (char)uVar8;
      }
    }
    else {
      uVar9 = uVar8 - 0x20;
      if (uVar9 != 0) {
        uVar9 = 1;
      }
      if (uVar8 == 0xd) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 & 1;
      }
      iVar6 = iVar10;
      if ((uVar9 != 0) && (uVar8 != 10)) {
        while (uVar8 != 0) {
          iVar6 = iVar6 + 1;
          uVar8 = (uint)(byte)param_1[iVar6];
          uVar9 = uVar8 - 0x20;
          if (uVar9 != 0) {
            uVar9 = 1;
          }
          if (uVar8 == 0xd) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar9 & 1;
          }
          if ((uVar9 == 0) || (uVar8 == 10)) break;
        }
      }
      iVar5 = iVar6 + -1;
      if (iVar5 < iVar10) {
        iVar7 = 0;
      }
      else {
        uVar8 = (byte)param_1[iVar5] - 0x30;
        if (9 < (uVar8 & 0xff)) {
          return iVar6;
        }
        iVar4 = 1;
        iVar7 = 0;
        while( true ) {
          iVar7 = iVar4 * uVar8 + iVar7;
          iVar5 = iVar5 + -1;
          iVar4 = iVar4 * 10;
          if (iVar5 < iVar10) break;
          uVar8 = (byte)param_1[iVar5] - 0x30;
          if (9 < (uVar8 & 0xff)) {
            return iVar6;
          }
        }
      }
      if (bVar2) {
        iVar10 = -1;
      }
      else {
        iVar10 = 1;
      }
      *param_3 = iVar7 * iVar10;
    }
    cVar1 = param_1[iVar6];
    if ((cVar1 != '\n' && cVar1 != '\r') && (cVar1 != '\0')) {
      return iVar6;
    }
  }
LAB_0008f802:
  return -iVar6;
}



