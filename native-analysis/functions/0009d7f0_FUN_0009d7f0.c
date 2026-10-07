/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009d7f0 FUN_0009d7f0 */

int * FUN_0009d7f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  pcVar1 = (char *)FUN_0009cef0(param_2,param_3);
  iVar6 = DAT_0009d960 + 0x9d808;
  if (((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) && (*pcVar1 == '<')) {
    iVar2 = FUN_0009a138(param_1);
    pcVar1 = (char *)FUN_0009cef0(pcVar1,param_3);
    if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
      iVar3 = FUN_0009cf88(pcVar1,DAT_0009d964 + 0x9d844,1,param_3);
      if (iVar3 == 0) {
        iVar3 = FUN_0009cf88(pcVar1,DAT_0009d970 + 0x9d87c,0,param_3);
        if (iVar3 == 0) {
          iVar3 = FUN_0009cf88(pcVar1,DAT_0009d978 + 0x9d8be,0,param_3);
          if (iVar3 == 0) {
            iVar3 = FUN_0009cf88(pcVar1,DAT_0009d984 + 0x9d8fc,0,param_3);
            if (iVar3 == 0) {
              uVar5 = (uint)(byte)pcVar1[1];
              if (((uVar5 < 0x7f) &&
                  ((*(byte *)(**(int **)(iVar6 + DAT_0009d988) + uVar5 + 1) & 3) == 0)) &&
                 (uVar5 != 0x5f)) {
                piVar4 = (int *)operator_new(0x2c);
                FUN_00099fc0(piVar4,3);
                *piVar4 = *(int *)(iVar6 + DAT_0009d98c) + 8;
              }
              else {
                piVar4 = (int *)operator_new(0x50);
                FUN_0009bdb8(piVar4,DAT_0009d994 + 0x9d958);
              }
            }
            else {
              piVar4 = (int *)operator_new(0x2c);
              FUN_00099fc0(piVar4,6);
              *piVar4 = *(int *)(iVar6 + DAT_0009d990) + 8;
            }
          }
          else {
            piVar4 = (int *)operator_new(0x30);
            FUN_00099fc0(piVar4,4);
            iVar3 = DAT_0009d980 + 0x9d8e0;
            *piVar4 = *(int *)(iVar6 + DAT_0009d97c) + 8;
            FUN_00099d70(piVar4 + 8,iVar3,0);
            *(undefined *)(piVar4 + 0xb) = 1;
          }
        }
        else {
          piVar4 = (int *)operator_new(0x2c);
          FUN_00099fc0(piVar4,2);
          *piVar4 = *(int *)(iVar6 + DAT_0009d974) + 8;
        }
      }
      else {
        piVar4 = (int *)operator_new(0x38);
        FUN_00099fc0(piVar4,5);
        *piVar4 = *(int *)(iVar6 + DAT_0009d968) + 8;
        iVar6 = *(int *)(iVar6 + DAT_0009d96c);
        piVar4[0xb] = iVar6;
        piVar4[0xc] = iVar6;
        piVar4[0xd] = iVar6;
      }
      if (piVar4 != (int *)0x0) {
        piVar4[4] = param_1;
        return piVar4;
      }
      if (iVar2 == 0) {
        return (int *)0x0;
      }
      FUN_0009d4f8(iVar2,3,0,0,0);
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}



