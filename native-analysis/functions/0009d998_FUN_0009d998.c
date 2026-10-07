/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009d998 FUN_0009d998 */

char * FUN_0009d998(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = FUN_0009a138();
  iVar9 = DAT_0009dab8 + 0x9d9b4;
  pcVar4 = (char *)FUN_0009cef0(param_2,param_4);
  iVar2 = DAT_0009dac8;
  iVar1 = DAT_0009dac4;
  if (pcVar4 == (char *)0x0) {
LAB_0009da52:
    if (iVar3 == 0) {
LAB_0009dab2:
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = (char *)0x0;
      FUN_0009d4f8(iVar3,6,0,0,param_4);
    }
  }
  else {
    cVar8 = *pcVar4;
    if (cVar8 != '\0') {
      iVar7 = DAT_0009dabc + 0x9d9d0;
      iVar10 = DAT_0009dac0 + 0x9d9d6;
      do {
        if (cVar8 == '<') {
          iVar6 = FUN_0009cf88(pcVar4,iVar7,0,param_4);
          if (iVar6 != 0) {
            return pcVar4;
          }
          piVar5 = (int *)FUN_0009d7f0(param_1,pcVar4,param_4);
          if (piVar5 == (int *)0x0) goto LAB_0009dab2;
          param_2 = (**(code **)(*piVar5 + 0xc))(piVar5,pcVar4,param_3,param_4);
LAB_0009da96:
          FUN_0009a9fc(param_1,piVar5);
        }
        else {
          piVar5 = (int *)operator_new(0x30);
          FUN_00099fc0(piVar5,4);
          *piVar5 = *(int *)(iVar9 + iVar1) + 8;
          FUN_00099d70(piVar5 + 8,iVar10,0);
          *(undefined *)(piVar5 + 0xb) = 0;
          if (**(char **)(iVar9 + iVar2) == '\0') {
            param_2 = (**(code **)(*piVar5 + 0xc))(piVar5,param_2,param_3,param_4);
          }
          else {
            param_2 = (**(code **)(*piVar5 + 0xc))(piVar5,pcVar4,param_3,param_4);
          }
          iVar6 = FUN_0009d028(piVar5);
          if (iVar6 == 0) goto LAB_0009da96;
          (**(code **)(*piVar5 + 4))(piVar5);
        }
        pcVar4 = (char *)FUN_0009cef0(param_2,param_4);
        if (pcVar4 == (char *)0x0) goto LAB_0009da52;
        cVar8 = *pcVar4;
      } while (cVar8 != '\0');
    }
  }
  return pcVar4;
}



