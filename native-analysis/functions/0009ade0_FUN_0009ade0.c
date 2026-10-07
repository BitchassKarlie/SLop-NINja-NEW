/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ade0 FUN_0009ade0 */

byte FUN_0009ade0(int *param_1,void *param_2,size_t param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *__dest;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  char *pcVar6;
  void *local_30;
  undefined local_29 [5];
  
  iVar1 = DAT_0009aee8;
  FUN_0009a038();
  param_1[2] = -1;
  param_1[1] = -1;
  iVar2 = DAT_0009aeec;
  if ((int)param_3 < 1) {
    bVar5 = 0;
    FUN_0009d4f8(param_1,0xd,0,0,0);
  }
  else {
    local_30 = *(void **)(iVar1 + 0x9adfe + DAT_0009aeec);
    FUN_00099ddc(&local_30,param_3);
    __dest = (char *)operator_new__(param_3 + 1);
    *__dest = '\0';
    memcpy(__dest,param_2,param_3);
    __dest[param_3] = '\0';
    cVar4 = *__dest;
    pcVar3 = __dest;
    pcVar6 = __dest;
LAB_0009ae44:
    if (cVar4 != '\0') {
      while (cVar4 != '\n') {
        if (cVar4 != '\r') {
          pcVar6 = pcVar6 + 1;
          cVar4 = *pcVar6;
          goto LAB_0009ae44;
        }
        if (0 < (int)pcVar6 - (int)pcVar3) {
          FUN_00099e28(&local_30);
        }
        local_29[0] = 10;
        FUN_00099e28(&local_30,local_29,1);
        cVar4 = pcVar6[1];
        pcVar3 = pcVar6 + 1;
        if (cVar4 == '\n') {
          pcVar3 = pcVar6 + 2;
          cVar4 = *pcVar3;
        }
        pcVar6 = pcVar3;
        if (cVar4 == '\0') goto LAB_0009ae82;
      }
      pcVar6 = pcVar6 + 1;
      FUN_00099e28(&local_30,pcVar3,(int)pcVar6 - (int)pcVar3);
      cVar4 = *pcVar6;
      pcVar3 = pcVar6;
      goto LAB_0009ae44;
    }
LAB_0009ae82:
    if (pcVar6 != pcVar3) {
      FUN_00099e28(&local_30,pcVar3,(int)pcVar6 - (int)pcVar3);
    }
    operator_delete__(__dest);
    (**(code **)(*param_1 + 0xc))(param_1,(int)local_30 + 8,0,param_4);
    bVar5 = *(byte *)(param_1 + 0xb) ^ 1;
    if ((local_30 != *(void **)(iVar1 + 0x9adfe + iVar2)) && (local_30 != (void *)0x0)) {
      operator_delete__(local_30);
    }
  }
  return bVar5;
}



