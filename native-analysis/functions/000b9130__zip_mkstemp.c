/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9130 _zip_mkstemp */

/* WARNING: Type propagation algorithm not settling */

int _zip_mkstemp(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  stat sStack_80;
  
  iVar5 = getpid();
  uVar9 = (uint)*param_1;
  pbVar8 = param_1;
  uVar10 = uVar9;
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      while (uVar9 != 0x58) {
        pbVar8 = pbVar8 + 1;
        uVar9 = (uint)*pbVar8;
        uVar10 = 0;
        if (uVar9 == 0) goto LAB_000b915e;
      }
      pbVar8 = pbVar8 + 1;
      uVar9 = (uint)*pbVar8;
      uVar10 = uVar10 + 1;
    } while (uVar9 != 0);
  }
LAB_000b915e:
  bVar2 = pbVar8[-1];
  if (bVar2 == 0x58) {
    pbVar11 = pbVar8 + -2;
    bVar1 = *(byte *)(DAT_000b92ac + 0xb9284);
    pbVar8[-1] = bVar1;
    bVar2 = pbVar8[-2];
    pbVar8 = pbVar8 + -1;
  }
  else {
    bVar1 = *(byte *)(DAT_000b929c + 0xb9174);
    pbVar11 = pbVar8 + -1;
  }
  pbVar4 = pbVar11;
  if (6 < (int)uVar10) {
    iVar3 = DAT_000b92a8;
    if (bVar2 != 0x58) goto joined_r0x000b924e;
    *pbVar11 = *(byte *)(DAT_000b92a4 + 0xb920d);
    bVar2 = pbVar11[-1];
    pbVar4 = pbVar11 + -1;
    pbVar8 = pbVar11;
  }
  while (pbVar11 = pbVar4, iVar3 = DAT_000b92a8, bVar2 == 0x58) {
    *pbVar11 = (char)iVar5 + (char)(iVar5 / 10) * -10 + 0x30;
    iVar5 = iVar5 / 10;
    pbVar4 = pbVar11 + -1;
    pbVar8 = pbVar11;
    bVar2 = pbVar11[-1];
  }
joined_r0x000b924e:
  DAT_000b92a8 = iVar3;
  if (bVar1 == 0x7a) {
    *(undefined *)(iVar3 + 0xb9258) = 0x61;
    if (*(char *)(iVar3 + 0xb9259) == 'z') {
      *(undefined *)(iVar3 + 0xb9259) = 0x61;
    }
    else {
      *(char *)(iVar3 + 0xb9259) = *(char *)(iVar3 + 0xb9259) + '\x01';
    }
  }
  else {
    *(byte *)(DAT_000b92a0 + 0xb9194) = bVar1 + 1;
  }
  if (param_1 < pbVar11) {
    do {
      if (*pbVar11 == 0x2f) {
        *pbVar11 = 0;
        iVar5 = stat((char *)param_1,&sStack_80);
        if (iVar5 != 0) {
          return 0;
        }
        if ((sStack_80.st_mode & 0xf000) != 0x4000) {
          puVar7 = (undefined4 *)__errno();
          *puVar7 = 0x14;
          return 0;
        }
        *pbVar11 = 0x2f;
        break;
      }
      pbVar11 = pbVar11 + -1;
    } while (pbVar11 != param_1);
  }
  while( true ) {
    iVar5 = open((char *)param_1,0xc2);
    if (-1 < iVar5) {
      return iVar5;
    }
    piVar6 = (int *)__errno();
    if (*piVar6 != 0x11) break;
    bVar2 = *pbVar8;
    pbVar11 = pbVar8;
    while( true ) {
      uVar10 = (uint)bVar2;
      if (uVar10 == 0) {
        return 0;
      }
      if (uVar10 != 0x7a) break;
      *pbVar11 = 0x61;
      pbVar11 = pbVar11 + 1;
      bVar2 = *pbVar11;
    }
    if (uVar10 - 0x30 < 10) {
      *pbVar11 = 0x61;
    }
    else {
      *pbVar11 = bVar2 + 1;
    }
  }
  return 0;
}



