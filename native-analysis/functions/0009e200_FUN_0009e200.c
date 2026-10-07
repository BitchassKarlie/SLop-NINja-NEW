/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e200 FUN_0009e200 */

byte * FUN_0009e200(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int iVar13;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  pcVar1 = (char *)FUN_0009cef0(param_2,param_4);
  iVar13 = DAT_0009e454 + 0x9e21a;
  iVar2 = FUN_0009a138(param_1);
  if (((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) ||
     (iVar3 = FUN_0009cf88(pcVar1,DAT_0009e458 + 0x9e250,1,param_4), iVar3 == 0)) {
    if (iVar2 != 0) {
      FUN_0009d4f8(iVar2,0xc,0,0,param_4);
      return (byte *)0x0;
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      FUN_0009ce2c(param_3,pcVar1,param_4);
      uVar7 = param_3[1];
      *(undefined4 *)(param_1 + 4) = *param_3;
      *(undefined4 *)(param_1 + 8) = uVar7;
    }
    iVar2 = DAT_0009e45c + 0x9e282;
    pbVar12 = (byte *)(pcVar1 + 5);
    FUN_00099d70(param_1 + 0x2c,iVar2,0);
    FUN_00099d70(param_1 + 0x30,iVar2,0);
    FUN_00099d70(param_1 + 0x34,iVar2,0);
    iVar2 = DAT_0009e464;
    if (pbVar12 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (pcVar1[5] != '\0') {
      if (pcVar1[5] != '>') {
        iVar3 = DAT_0009e460 + 0x9e2cc;
        iVar9 = DAT_0009e468 + 0x9e2d4;
        iVar10 = DAT_0009e46c + 0x9e2dc;
        do {
          pbVar12 = (byte *)FUN_0009cef0(pbVar12,param_4);
          iVar4 = FUN_0009cf88(pbVar12,iVar2 + 0x9e2e4,1,param_4);
          if (iVar4 == 0) {
            iVar6 = FUN_0009cf88(pbVar12,DAT_0009e474 + 0x9e35c,1,param_4);
            if (iVar6 == 0) {
              iVar4 = FUN_0009cf88(pbVar12,DAT_0009e478 + 0x9e3b8,1,param_4);
              if (iVar4 == 0) {
                if (pbVar12 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                uVar11 = (uint)*pbVar12;
                if (uVar11 == 0) {
                  return (byte *)0x0;
                }
                if (uVar11 == 0x3e) break;
                while( true ) {
                  uVar8 = ((uint)*(byte *)(**(int **)(iVar13 + DAT_0009e47c) + uVar11 + 1) << 0x1c)
                          >> 0x1f;
                  if (uVar11 == 10) {
                    uVar8 = 1;
                  }
                  if ((uVar8 != 0) || (uVar11 == 0xd)) break;
                  pbVar12 = pbVar12 + 1;
                  if (pbVar12 == (byte *)0x0) {
                    return (byte *)0x0;
                  }
                  uVar11 = (uint)*pbVar12;
                  if (uVar11 == 0) {
                    return (byte *)0x0;
                  }
                  if (uVar11 == 0x3e) goto LAB_0009e34c;
                }
              }
              else {
                local_44 = 0xffffffff;
                local_48 = 0xffffffff;
                local_38 = *(int *)(iVar13 + DAT_0009e470);
                local_4c = iVar3;
                local_40 = iVar6;
                local_3c = iVar6;
                local_34 = local_38;
                local_30 = iVar6;
                local_2c = iVar6;
                pbVar12 = (byte *)FUN_0009e080(&local_4c,pbVar12,param_3,param_4);
                pcVar1 = (char *)(local_34 + 8);
                sVar5 = strlen(pcVar1);
                FUN_00099d70(param_1 + 0x34,pcVar1,sVar5);
                FUN_0009d06c(&local_4c);
              }
            }
            else {
              local_44 = 0xffffffff;
              local_48 = 0xffffffff;
              local_38 = *(int *)(iVar13 + DAT_0009e470);
              local_4c = iVar9;
              local_40 = iVar4;
              local_3c = iVar4;
              local_34 = local_38;
              local_30 = iVar4;
              local_2c = iVar4;
              pbVar12 = (byte *)FUN_0009e080(&local_4c,pbVar12,param_3,param_4);
              pcVar1 = (char *)(local_34 + 8);
              sVar5 = strlen(pcVar1);
              FUN_00099d70(param_1 + 0x30,pcVar1,sVar5);
              FUN_0009d06c(&local_4c);
            }
          }
          else {
            local_44 = 0xffffffff;
            local_48 = 0xffffffff;
            local_40 = 0;
            local_38 = *(int *)(iVar13 + DAT_0009e470);
            local_3c = 0;
            local_2c = 0;
            local_30 = 0;
            local_4c = iVar10;
            local_34 = local_38;
            pbVar12 = (byte *)FUN_0009e080(&local_4c,pbVar12,param_3,param_4);
            pcVar1 = (char *)(local_34 + 8);
            sVar5 = strlen(pcVar1);
            FUN_00099d70(param_1 + 0x2c,pcVar1,sVar5);
            FUN_0009d06c(&local_4c);
          }
          if (pbVar12 == (byte *)0x0) {
            return (byte *)0x0;
          }
          if (*pbVar12 == 0) {
            return (byte *)0x0;
          }
        } while (*pbVar12 != 0x3e);
      }
LAB_0009e34c:
      return pbVar12 + 1;
    }
  }
  return (byte *)0x0;
}



