/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009d72c FUN_0009d72c */

char * FUN_0009d72c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  
  uVar1 = FUN_0009a138();
  iVar5 = param_1 + 0x20;
  FUN_00099d70(iVar5,DAT_0009d7e0 + 0x9d74a,0);
  iVar2 = FUN_0009cef0(param_2,param_4);
  if (param_3 != (undefined4 *)0x0) {
    FUN_0009ce2c(param_3,iVar2,param_4);
    uVar4 = param_3[1];
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
  iVar3 = FUN_0009cf88(iVar2,DAT_0009d7e4 + 0x9d780,0,param_4);
  if (iVar3 == 0) {
    FUN_0009d4f8(uVar1,0xb,iVar2,param_3,param_4);
    pcVar6 = (char *)0x0;
  }
  else {
    pcVar6 = (char *)(iVar2 + 4);
    FUN_00099d70(iVar5,DAT_0009d7e8 + 0x9d794,0);
    if (pcVar6 != (char *)0x0) {
      if (*(char *)(iVar2 + 4) != '\0') {
        iVar2 = DAT_0009d7ec + 0x9d7ac;
        do {
          iVar3 = FUN_0009cf88(pcVar6,iVar2,0,param_4);
          if (iVar3 != 0) break;
          FUN_00099e28(iVar5,pcVar6,1);
          pcVar6 = pcVar6 + 1;
          if (pcVar6 == (char *)0x0) {
            return (char *)0x0;
          }
        } while (*pcVar6 != '\0');
      }
      pcVar6 = pcVar6 + 3;
    }
  }
  return pcVar6;
}



