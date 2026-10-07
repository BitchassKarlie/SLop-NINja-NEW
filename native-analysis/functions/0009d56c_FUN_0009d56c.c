/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009d56c FUN_0009d56c */

char * FUN_0009d56c(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  char cVar4;
  char *pcVar5;
  char local_19;
  
  pcVar1 = (char *)FUN_0009a138();
  pcVar2 = (char *)FUN_0009cef0(param_2,param_4);
  if (param_3 != (undefined4 *)0x0) {
    FUN_0009ce2c(param_3,pcVar2,param_4);
    uVar3 = param_3[1];
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  if (((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) || (*pcVar2 != '<')) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    FUN_0009d4f8(pcVar1,10,pcVar2,param_3,param_4);
    return (char *)0x0;
  }
  pcVar5 = pcVar2 + 1;
  FUN_00099d70(param_1 + 0x20,DAT_0009d644 + 0x9d5c0,0);
  if (pcVar5 == (char *)0x0) {
LAB_0009d5fc:
    pcVar5 = pcVar1;
    cVar4 = cRam00000000;
    if (pcVar1 != (char *)0x0) {
      FUN_0009d4f8(pcVar1,10,0,0,param_4);
      pcVar5 = (char *)0x0;
      cVar4 = cRam00000000;
    }
  }
  else {
    local_19 = pcVar2[1];
    cVar4 = local_19;
    if (local_19 != '\0') {
      if (local_19 == '>') goto LAB_0009d614;
      while (pcVar5 = pcVar2, FUN_00099e28(param_1 + 0x20,&local_19,1), pcVar5 != (char *)0xfffffffe
            ) {
        local_19 = pcVar5[2];
        if (local_19 == '\0') {
          return pcVar5 + 2;
        }
        pcVar2 = pcVar5 + 1;
        if (local_19 == '>') {
          return pcVar5 + 3;
        }
      }
      goto LAB_0009d5fc;
    }
  }
  if (cVar4 != '>') {
    return pcVar5;
  }
LAB_0009d614:
  return pcVar5 + 1;
}



