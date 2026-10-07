/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008edc4 FUN_0008edc4 */

int FUN_0008edc4(byte **param_1,byte **param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  byte *pbVar8;
  uint uVar9;
  
  pbVar8 = *param_1;
  pbVar4 = pbVar8 + 1;
  *param_1 = pbVar4;
  pbVar6 = *param_2;
  if (*pbVar6 == 0) {
    bVar7 = pbVar8[1];
LAB_0008ee02:
    uVar9 = (uint)bVar7;
    if (uVar9 == 0x2a) {
      do {
        pbVar4 = pbVar4 + 1;
        *param_1 = pbVar4;
        uVar9 = (uint)*pbVar4;
      } while (uVar9 == 0x2a);
      pbVar6 = *param_2;
    }
  }
  else {
    uVar9 = (uint)pbVar8[1];
    if (uVar9 == 0x3f || uVar9 == 0x2a) {
      do {
        if (uVar9 == 0x3f) {
          *param_2 = pbVar6 + 1;
          pbVar4 = *param_1;
        }
        pbVar4 = pbVar4 + 1;
        *param_1 = pbVar4;
        pbVar6 = *param_2;
        if (*pbVar6 == 0) {
          bVar7 = *pbVar4;
          goto LAB_0008ee02;
        }
        uVar9 = (uint)*pbVar4;
      } while (uVar9 == 0x2a || uVar9 == 0x3f);
      bVar7 = *pbVar6;
      goto joined_r0x0008ee14;
    }
  }
  bVar7 = *pbVar6;
joined_r0x0008ee14:
  if (bVar7 == 0) {
    iVar5 = 1 - uVar9;
    if (1 < uVar9) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = FUN_0008ec58();
    if (iVar5 == 0) {
      do {
        pbVar6 = *param_2;
        pbVar4 = pbVar6 + 1;
        *param_2 = pbVar4;
        bVar7 = pbVar6[1];
        if ((**param_1 != bVar7) && (**param_1 != 0x5b)) {
          if (bVar7 != 0) {
            while( true ) {
              pbVar4 = pbVar4 + 1;
              *param_2 = pbVar4;
              bVar1 = *pbVar4;
              bVar2 = **param_1;
              bVar7 = bVar2;
              if ((bVar2 == bVar1) || (bVar7 = bVar1, bVar2 == 0x5b)) break;
              if (bVar1 == 0) goto LAB_0008ee70;
            }
            goto LAB_0008ee86;
          }
LAB_0008ee70:
          bVar7 = 0;
LAB_0008ee74:
          iVar5 = 0;
          goto joined_r0x0008ee76;
        }
LAB_0008ee86:
        if (bVar7 == 0) {
          bVar7 = **param_2;
          goto LAB_0008ee74;
        }
        cVar3 = FUN_0008ec58();
      } while (cVar3 != '\x01');
    }
    iVar5 = 1;
    bVar7 = **param_2;
joined_r0x0008ee76:
    if ((bVar7 == 0) && (**param_1 == 0)) {
      iVar5 = 1;
    }
  }
  return iVar5;
}



