/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009cf88 FUN_0009cf88 */

int FUN_0009cf88(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_1 == (byte *)0x0) || (uVar4 = (uint)*param_1, uVar4 == 0)) {
LAB_0009cfee:
    iVar5 = 0;
  }
  else {
    if (param_3 == 0) {
      if (*param_2 != 0) {
        if (uVar4 == *param_2) {
          do {
            pbVar1 = param_1 + 1;
            param_2 = param_2 + 1;
            if (*pbVar1 == 0) {
              if (*param_2 < 2) {
                return 1 - (uint)*param_2;
              }
              return 0;
            }
            if (*param_2 == 0) goto LAB_0009cfc6;
            param_1 = param_1 + 1;
          } while (*pbVar1 == *param_2);
        }
        goto LAB_0009cfee;
      }
    }
    else {
      uVar2 = (uint)*param_2;
      if (uVar2 != 0) {
        iVar5 = **(int **)(DAT_0009d020 + 0x9cf90 + DAT_0009d024);
        if (param_4 == 1) goto LAB_0009d008;
        do {
          uVar4 = (uint)*(short *)(iVar5 + (uVar4 + 1) * 2);
          uVar3 = (int)*(short *)(iVar5 + (uVar2 + 1) * 2);
LAB_0009cfb4:
          if (uVar4 != uVar3) {
LAB_0009cfb8:
            if (uVar2 < 2) {
              return 1 - uVar2;
            }
            return 0;
          }
          uVar4 = (uint)param_1[1];
          param_2 = param_2 + 1;
          if (uVar4 == 0) {
            uVar2 = (uint)*param_2;
            goto LAB_0009cfb8;
          }
          uVar2 = (uint)*param_2;
          param_1 = param_1 + 1;
          if (uVar2 == 0) goto LAB_0009cfc6;
        } while (param_4 != 1);
LAB_0009d008:
        if (uVar4 < 0x80) {
          uVar4 = (uint)*(short *)(iVar5 + (uVar4 + 1) * 2);
        }
        uVar3 = uVar2;
        if (uVar2 < 0x80) {
          uVar3 = (uint)*(short *)(iVar5 + (uVar2 + 1) * 2);
        }
        goto LAB_0009cfb4;
      }
    }
LAB_0009cfc6:
    iVar5 = 1;
  }
  return iVar5;
}



