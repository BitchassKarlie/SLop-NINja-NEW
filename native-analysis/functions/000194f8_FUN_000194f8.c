/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000194f8 FUN_000194f8 */

uint * FUN_000194f8(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined auStack_18 [4];
  uint *local_14;
  uint local_10;
  undefined4 local_c;
  
  puVar3 = *(uint **)(param_1 + 4);
  if (puVar3 == (uint *)0x0) {
    local_10 = *param_2;
  }
  else {
    local_10 = *param_2;
    puVar1 = (uint *)0x0;
    do {
      if (*puVar3 < local_10) {
        puVar2 = (uint *)puVar3[4];
      }
      else {
        puVar2 = (uint *)puVar3[3];
        puVar1 = puVar3;
      }
      puVar3 = puVar2;
    } while (puVar2 != (uint *)0x0);
    puVar3 = puVar1;
    if ((puVar1 != (uint *)0x0) && (*puVar1 <= local_10)) goto LAB_00019544;
  }
  local_c = 0;
  FUN_00019424(auStack_18,param_1,param_1,puVar3,&local_10);
  puVar1 = local_14;
LAB_00019544:
  return puVar1 + 1;
}



