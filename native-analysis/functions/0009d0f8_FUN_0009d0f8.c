/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009d0f8 FUN_0009d0f8 */

char * FUN_0009d0f8(char *param_1,char *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *param_3 = 0;
  if (param_1[1] != '#') {
LAB_0009d112:
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = DAT_0009d25c + 0x9d11e;
    do {
      iVar1 = strncmp(*(char **)(iVar6 + iVar4),param_1,*(size_t *)(iVar6 + iVar4 + 4));
      if (iVar1 == 0) {
        iVar6 = iVar6 + iVar5 * 0xc;
        *param_2 = *(char *)(iVar6 + 8);
        *param_3 = 1;
        return param_1 + *(int *)(iVar6 + 4);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 != 5);
    *param_2 = *param_1;
    return param_1 + 1;
  }
  if (param_1[2] == '\0') goto LAB_0009d112;
  if (param_1[2] == 'x') {
    if (param_1[3] == '\0') {
      return (char *)0x0;
    }
    pcVar2 = strchr(param_1 + 3,0x3b);
    if (pcVar2 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar2 == '\0') {
      return (char *)0x0;
    }
    uVar3 = (uint)(byte)pcVar2[-1];
    iVar4 = (int)pcVar2 - (int)param_1;
    if (uVar3 != 0x78) {
      iVar6 = 1;
      iVar5 = 0;
      while( true ) {
        if ((uVar3 - 0x30 & 0xff) < 10) {
          iVar5 = iVar6 * (uVar3 - 0x30) + iVar5;
        }
        else if ((uVar3 - 0x61 & 0xff) < 6) {
          iVar5 = iVar6 * (uVar3 - 0x57) + iVar5;
        }
        else {
          if (5 < (uVar3 - 0x41 & 0xff)) {
            return (char *)0x0;
          }
          iVar5 = iVar6 * (uVar3 - 0x37) + iVar5;
        }
        uVar3 = (uint)(byte)pcVar2[-2];
        pcVar2 = pcVar2 + -1;
        if (uVar3 == 0x78) break;
        iVar6 = iVar6 << 4;
      }
      goto LAB_0009d1c0;
    }
  }
  else {
    pcVar2 = strchr(param_1 + 2,0x3b);
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
      return (char *)0x0;
    }
    iVar4 = (int)pcVar2 - (int)param_1;
    if ((byte)pcVar2[-1] != 0x23) {
      uVar3 = (byte)pcVar2[-1] - 0x30;
      if (9 < (uVar3 & 0xff)) {
        return (char *)0x0;
      }
      iVar6 = 1;
      iVar5 = 0;
      while( true ) {
        iVar5 = iVar6 * uVar3 + iVar5;
        iVar6 = iVar6 * 10;
        if ((byte)pcVar2[-2] == 0x23) break;
        uVar3 = (byte)pcVar2[-2] - 0x30;
        pcVar2 = pcVar2 + -1;
        if (9 < (uVar3 & 0xff)) {
          return (char *)0x0;
        }
      }
      goto LAB_0009d1c0;
    }
  }
  iVar5 = 0;
LAB_0009d1c0:
  if (param_4 == 1) {
    FUN_0009cd30(iVar5,param_2,param_3);
  }
  else {
    *param_2 = (char)iVar5;
    *param_3 = 1;
  }
  return param_1 + iVar4 + 1;
}



