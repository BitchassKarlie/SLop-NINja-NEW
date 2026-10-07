/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e080 FUN_0009e080 */

byte * FUN_0009e080(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  undefined local_29 [5];
  
  pbVar2 = (byte *)FUN_0009cef0(param_2,param_4);
  iVar7 = DAT_0009e1ec + 0x9e09a;
  if (pbVar2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if (*pbVar2 != 0) {
    if (param_3 != (undefined4 *)0x0) {
      FUN_0009ce2c(param_3,pbVar2,param_4);
      uVar4 = param_3[1];
      *(undefined4 *)(param_1 + 4) = *param_3;
      *(undefined4 *)(param_1 + 8) = uVar4;
    }
    pcVar3 = (char *)FUN_0009d2fc(pbVar2,param_1 + 0x14,param_4);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
      pcVar3 = (char *)FUN_0009cef0(pcVar3,param_4);
      if ((pcVar3 == (char *)0x0) || ((*pcVar3 == '\0' || (*pcVar3 != '=')))) {
        if (*(int *)(param_1 + 0x10) == 0) {
          return (byte *)0x0;
        }
        FUN_0009d4f8(*(int *)(param_1 + 0x10),7,pcVar3,param_3,param_4);
        return (byte *)0x0;
      }
      pbVar2 = (byte *)FUN_0009cef0(pcVar3 + 1,param_4);
      if ((pbVar2 != (byte *)0x0) && (bVar1 = *pbVar2, bVar1 != 0)) {
        if (bVar1 == 0x27) {
          puVar6 = &UNK_0009e1ea + DAT_0009e1fc;
        }
        else {
          if (bVar1 != 0x22) {
            FUN_00099d70(param_1 + 0x18,DAT_0009e1f0 + 0x9e116,0);
            uVar5 = (uint)*pbVar2;
            if (uVar5 == 0) {
              return pbVar2;
            }
            piVar8 = *(int **)(iVar7 + DAT_0009e1f4);
            do {
              uVar9 = ((uint)*(byte *)(*piVar8 + uVar5 + 1) << 0x1c) >> 0x1f;
              if (uVar5 == 10) {
                uVar9 = 1;
              }
              if (uVar9 != 0) {
                return pbVar2;
              }
              if (uVar5 == 0xd) {
                return pbVar2;
              }
              if (uVar5 == 0x2f) {
                return pbVar2;
              }
              if (uVar5 == 0x3e) {
                return pbVar2;
              }
              if (uVar5 == 0x22 || uVar5 == 0x27) {
                if (*(int *)(param_1 + 0x10) == 0) {
                  return (byte *)0x0;
                }
                FUN_0009d4f8(*(int *)(param_1 + 0x10),7,pbVar2,param_3,param_4);
                return (byte *)0x0;
              }
              local_29[0] = (undefined)uVar5;
              FUN_00099e28(param_1 + 0x18,local_29,1);
              pbVar2 = pbVar2 + 1;
              if (pbVar2 == (byte *)0x0) {
                return (byte *)0x0;
              }
              uVar5 = (uint)*pbVar2;
            } while (uVar5 != 0);
            return pbVar2;
          }
          puVar6 = (undefined *)(DAT_0009e1f8 + 0x9e1be);
        }
        pbVar2 = (byte *)FUN_0009d384(pbVar2 + 1,param_1 + 0x18,0,puVar6,0,param_4);
        return pbVar2;
      }
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_0009d4f8(*(int *)(param_1 + 0x10),7,pbVar2,param_3,param_4);
      return (byte *)0x0;
    }
  }
  return (byte *)0x0;
}



