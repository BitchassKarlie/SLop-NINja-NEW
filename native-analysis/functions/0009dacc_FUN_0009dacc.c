/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009dacc FUN_0009dacc */

char * FUN_0009dacc(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  size_t sVar8;
  undefined4 uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  size_t *local_2c [2];
  
  iVar1 = DAT_0009ddb4;
  pcVar3 = (char *)FUN_0009cef0(param_2,param_4);
  pcVar4 = (char *)FUN_0009a138(param_1);
  if ((pcVar3 == (char *)0x0) || (cVar11 = *pcVar3, cVar11 == '\0')) {
    if (pcVar4 != (char *)0x0) {
      FUN_0009d4f8(pcVar4,4,0,0,param_4);
      return (char *)0x0;
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      FUN_0009ce2c(param_3,pcVar3,param_4);
      uVar9 = param_3[1];
      *(undefined4 *)(param_1 + 4) = *param_3;
      *(undefined4 *)(param_1 + 8) = uVar9;
      cVar11 = *pcVar3;
    }
    if (cVar11 == '<') {
      uVar9 = FUN_0009cef0(pcVar3 + 1,param_4);
      pcVar3 = (char *)FUN_0009d2fc(uVar9,param_1 + 0x20,param_4);
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
        local_2c[0] = (size_t *)0x0;
        FUN_00099d3c(local_2c,2,2);
        memcpy(local_2c[0] + 2,(void *)(DAT_0009ddb8 + 0x9db68),*local_2c[0]);
        FUN_00099e28(local_2c,*(undefined4 **)(param_1 + 0x20) + 2,**(undefined4 **)(param_1 + 0x20)
                    );
        FUN_00099e28(local_2c,DAT_0009ddbc + 0x9db84,1);
        iVar2 = DAT_0009ddc4;
        iVar13 = DAT_0009ddc0;
        if (*pcVar3 != '\0') {
          iVar10 = DAT_0009ddc0 + 0x9dbac;
          pcVar7 = pcVar3;
          do {
            pcVar5 = (char *)FUN_0009cef0(pcVar7,param_4);
            pcVar3 = pcVar4;
            if ((pcVar5 == (char *)0x0) || (cVar11 = *pcVar5, cVar11 == '\0')) {
              if (pcVar4 != (char *)0x0) {
                FUN_0009d4f8(pcVar4,7,pcVar7,param_3,param_4);
                pcVar3 = (char *)0x0;
              }
              break;
            }
            if (cVar11 == '/') {
              if (pcVar5[1] == '>') {
                pcVar3 = pcVar5 + 2;
              }
              else if (pcVar4 != (char *)0x0) {
                FUN_0009d4f8(pcVar4,8,pcVar5 + 1,param_3,param_4);
                pcVar3 = (char *)0x0;
              }
              break;
            }
            if (cVar11 == '>') {
              pcVar7 = (char *)FUN_0009d998(param_1,pcVar5 + 1,param_3);
              if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
                if (pcVar4 != (char *)0x0) {
                  FUN_0009d4f8(pcVar4,9,pcVar7,param_3,param_4);
                  pcVar3 = (char *)0x0;
                }
              }
              else {
                iVar13 = FUN_0009cf88(pcVar7,local_2c[0] + 2,0,param_4);
                if (iVar13 == 0) {
                  if (pcVar4 != (char *)0x0) {
                    FUN_0009d4f8(pcVar4,9,pcVar7,param_3,param_4);
                    pcVar3 = (char *)0x0;
                  }
                }
                else {
                  pcVar3 = pcVar7 + *local_2c[0];
                }
              }
              break;
            }
            piVar6 = (int *)operator_new(0x24);
            pcVar14 = *(code **)(iVar13 + 0x9dbb8);
            piVar6[2] = -1;
            piVar6[1] = -1;
            piVar6[3] = 0;
            *piVar6 = iVar10;
            piVar6[8] = 0;
            piVar6[7] = 0;
            iVar12 = *(int *)(iVar1 + 0x9dae8 + iVar2);
            piVar6[5] = iVar12;
            piVar6[6] = iVar12;
            piVar6[4] = (int)pcVar4;
            pcVar3 = (char *)(*pcVar14)(piVar6,pcVar5,param_3,param_4);
            if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
              if (pcVar4 != (char *)0x0) {
                FUN_0009d4f8(pcVar4,4,pcVar5,param_3,param_4);
              }
              (**(code **)(*piVar6 + 4))(piVar6);
              pcVar3 = (char *)0x0;
              break;
            }
            iVar12 = FUN_0009a438(param_1 + 0x2c,piVar6[5] + 8);
            if (iVar12 != 0) {
              iVar13 = piVar6[6];
              sVar8 = strlen((char *)(iVar13 + 8));
              FUN_00099d70(iVar12 + 0x18,(char *)(iVar13 + 8),sVar8);
              (**(code **)(*piVar6 + 4))(piVar6);
              pcVar3 = (char *)0x0;
              break;
            }
            FUN_0009a320(param_1 + 0x2c,piVar6);
            pcVar7 = pcVar3;
          } while (*pcVar3 != '\0');
        }
        if (local_2c[0] == *(size_t **)(iVar1 + 0x9dae8 + iVar2)) {
          return pcVar3;
        }
        if (local_2c[0] == (size_t *)0x0) {
          return pcVar3;
        }
        operator_delete__(local_2c[0]);
        return pcVar3;
      }
      if (pcVar4 != (char *)0x0) {
        FUN_0009d4f8(pcVar4,5,uVar9,param_3,param_4);
        return (char *)0x0;
      }
    }
    else if (pcVar4 != (char *)0x0) {
      FUN_0009d4f8(pcVar4,4,pcVar3,param_3,param_4);
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}



