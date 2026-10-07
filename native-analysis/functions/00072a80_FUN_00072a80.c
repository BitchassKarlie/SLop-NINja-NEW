/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00072a80 FUN_00072a80 */

void FUN_00072a80(int param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined auStack_20 [8];
  int local_18;
  uint *local_14;
  
  if (*(uint **)(param_1 + 4) != (uint *)0x0) {
    local_14 = (uint *)0x0;
    puVar2 = *(uint **)(param_1 + 4);
    do {
      if (*puVar2 < param_2) {
        puVar1 = (uint *)puVar2[0x15];
      }
      else {
        puVar1 = (uint *)puVar2[0x14];
        local_14 = puVar2;
      }
      puVar2 = puVar1;
    } while (puVar1 != (uint *)0x0);
    if ((local_14 != (uint *)0x0) && (*local_14 <= param_2)) {
      local_18 = param_1;
      FUN_00072990(auStack_20,param_1,param_1,local_14);
    }
  }
  if (*(uint **)(param_1 + 0x14) != (uint *)0x0) {
    local_14 = (uint *)0x0;
    puVar2 = *(uint **)(param_1 + 0x14);
    do {
      if (*puVar2 < param_2) {
        puVar1 = (uint *)puVar2[0x15];
      }
      else {
        puVar1 = (uint *)puVar2[0x14];
        local_14 = puVar2;
      }
      puVar2 = puVar1;
    } while (puVar1 != (uint *)0x0);
    if ((local_14 != (uint *)0x0) && (*local_14 <= param_2)) {
      local_18 = param_1 + 0x10;
      FUN_00072990(auStack_20,local_18,local_18,local_14);
    }
  }
  return;
}



