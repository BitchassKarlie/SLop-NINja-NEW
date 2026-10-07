/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099c24 FUN_00099c24 */

uint * FUN_00099c24(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  uint *local_2c;
  undefined auStack_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  puVar4 = *(uint **)(param_1 + 4);
  if (puVar4 == (uint *)0x0) {
    local_3c = *param_2;
  }
  else {
    local_3c = *param_2;
    puVar2 = (uint *)0x0;
    do {
      if (*puVar4 < local_3c) {
        puVar3 = (uint *)puVar4[5];
      }
      else {
        puVar3 = (uint *)puVar4[4];
        puVar2 = puVar4;
      }
      puVar4 = puVar3;
    } while (puVar3 != (uint *)0x0);
    puVar4 = puVar2;
    if ((puVar2 != (uint *)0x0) && (*puVar2 <= local_3c)) {
      return puVar2 + 1;
    }
  }
  local_1c = 0;
  local_34 = 0;
  local_20 = 0;
  local_38 = 0;
  FUN_00099618(&local_34,0);
  local_30 = param_1;
  local_2c = puVar4;
  FUN_00099b04(auStack_28,param_1,param_1,puVar4,&local_3c);
  iVar1 = FUN_000a75e0(&local_34,0);
  if (iVar1 != 0) {
    FUN_00017d24();
  }
  iVar1 = FUN_000a75e0(&local_1c,0);
  if (iVar1 != 0) {
    FUN_00017d24();
  }
  return (uint *)(local_24 + 4);
}



