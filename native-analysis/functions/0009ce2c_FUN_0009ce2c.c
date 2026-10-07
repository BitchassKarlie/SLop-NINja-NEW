/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ce2c FUN_0009ce2c */

void FUN_0009ce2c(int *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = DAT_0009ceec;
  iVar8 = param_1[3];
  if (0 < iVar8) {
    pbVar7 = (byte *)param_1[2];
    iVar9 = *param_1;
    iVar4 = param_1[1];
joined_r0x0009ce46:
    if (pbVar7 < param_2) {
      uVar5 = (uint)*pbVar7;
      if (uVar5 == 10) {
        if (pbVar7[1] == 0xd) {
LAB_0009cec8:
          iVar9 = iVar9 + 1;
          pbVar7 = pbVar7 + 2;
          iVar4 = 0;
        }
        else {
LAB_0009ceb8:
          pbVar7 = pbVar7 + 1;
          iVar9 = iVar9 + 1;
          iVar4 = 0;
        }
        goto joined_r0x0009ce46;
      }
      if (uVar5 < 0xb) {
        if (uVar5 == 0) {
          return;
        }
        if (uVar5 == 9) {
          pbVar7 = pbVar7 + 1;
          iVar4 = __aeabi_idiv(iVar4,iVar8);
          iVar4 = iVar4 * iVar8 + iVar8;
        }
        else {
LAB_0009ce5c:
          if (param_3 == 1) {
            iVar4 = iVar4 + 1;
            iVar6 = *(int *)(iVar3 + uVar5 * 4 + 0x9ce6c);
            if (iVar6 == 0) {
              iVar6 = 1;
            }
            pbVar7 = pbVar7 + iVar6;
          }
          else {
LAB_0009ce62:
            pbVar7 = pbVar7 + 1;
            iVar4 = iVar4 + 1;
          }
        }
        goto joined_r0x0009ce46;
      }
      if (uVar5 == 0xd) {
        if (pbVar7[1] != 10) goto LAB_0009ceb8;
        goto LAB_0009cec8;
      }
      if (uVar5 != 0xef) goto LAB_0009ce5c;
      if (param_3 != 1) goto LAB_0009ce62;
      bVar1 = pbVar7[1];
      if ((bVar1 == 0) || (bVar2 = pbVar7[2], bVar2 == 0)) goto joined_r0x0009ce46;
      if (bVar1 == 0xbb) {
LAB_0009cee4:
        if (bVar2 == 0xbf) {
LAB_0009cee8:
          pbVar7 = pbVar7 + 3;
          goto joined_r0x0009ce46;
        }
      }
      else if (bVar1 == 0xbf) {
        if (bVar2 != 0xbe) goto LAB_0009cee4;
        goto LAB_0009cee8;
      }
      pbVar7 = pbVar7 + 3;
      iVar4 = iVar4 + 1;
      goto joined_r0x0009ce46;
    }
    *param_1 = iVar9;
    param_1[1] = iVar4;
    param_1[2] = (int)pbVar7;
  }
  return;
}



