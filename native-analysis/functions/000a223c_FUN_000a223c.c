/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a223c FUN_000a223c */

uint * FUN_000a223c(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined auStack_18 [4];
  int local_14;
  uint local_10;
  void *local_c;
  
  puVar2 = *(uint **)(param_1 + 4);
  if (puVar2 == (uint *)0x0) {
    local_10 = *param_2;
  }
  else {
    local_10 = *param_2;
    puVar3 = puVar2;
    puVar2 = (uint *)0x0;
    do {
      if (*puVar3 < local_10) {
        puVar1 = (uint *)puVar3[4];
      }
      else {
        puVar1 = (uint *)puVar3[3];
        puVar2 = puVar3;
      }
      puVar3 = puVar1;
    } while (puVar1 != (uint *)0x0);
    if ((puVar2 != (uint *)0x0) && (*puVar2 <= local_10)) {
      return puVar2 + 1;
    }
  }
  local_c = (void *)0x0;
  FUN_000a2164(auStack_18,param_1,param_1,puVar2,&local_10);
  if (local_c != (void *)0x0) {
    operator_delete(local_c);
  }
  return (uint *)(local_14 + 4);
}



