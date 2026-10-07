/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009df4c FUN_0009df4c */

int FUN_0009df4c(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  void *local_28;
  char local_21;
  
  iVar9 = param_1 + 0x20;
  FUN_00099d70(iVar9,DAT_0009e060 + 0x9df60,0);
  iVar3 = DAT_0009e064;
  uVar1 = FUN_0009a138(param_1);
  if (param_3 != (undefined4 *)0x0) {
    FUN_0009ce2c(param_3,param_2,param_4);
    uVar5 = param_3[1];
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(undefined4 *)(param_1 + 8) = uVar5;
  }
  if ((*(char *)(param_1 + 0x2c) == '\0') &&
     (iVar2 = FUN_0009cf88(param_2,DAT_0009e074 + 0x9dff8,0,param_4), iVar2 == 0)) {
    iVar3 = FUN_0009d384(param_2,iVar9,1,DAT_0009e078 + 0x9e00a,0,param_4);
    if (iVar3 != 0) {
      iVar3 = iVar3 + -1;
    }
  }
  else {
    iVar2 = DAT_0009e068;
    *(undefined *)(param_1 + 0x2c) = 1;
    iVar2 = FUN_0009cf88(param_2,iVar2 + 0x9dfa6,0,param_4);
    if (iVar2 == 0) {
      FUN_0009d4f8(uVar1,0xf,param_2,param_3,param_4);
      iVar3 = 0;
    }
    else {
      pcVar7 = (char *)(param_2 + 9);
      if ((pcVar7 != (char *)0x0) && (*(char *)(param_2 + 9) != '\0')) {
        iVar2 = DAT_0009e07c + 0x9e024;
        pcVar8 = pcVar7;
        while (iVar4 = FUN_0009cf88(pcVar8,iVar2,0,param_4), pcVar7 = pcVar8, iVar4 == 0) {
          pcVar7 = pcVar8 + 1;
          local_21 = *pcVar8;
          FUN_00099e28(iVar9,&local_21,1);
          if ((pcVar7 == (char *)0x0) || (pcVar8 = pcVar7, *pcVar7 == '\0')) break;
        }
      }
      pvVar6 = *(void **)(iVar3 + 0x9df76 + DAT_0009e06c);
      local_28 = pvVar6;
      iVar3 = FUN_0009d384(pcVar7,&local_28,0,DAT_0009e070 + 0x9dfd2,0,param_4);
      if ((local_28 != pvVar6) && (local_28 != (void *)0x0)) {
        operator_delete__(local_28);
      }
    }
  }
  return iVar3;
}



