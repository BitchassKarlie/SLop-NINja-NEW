/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00019024 FUN_00019024 */

undefined4 FUN_00019024(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int local_20;
  uint *local_1c;
  
  iVar5 = DAT_000190e0 + 0x19030;
  local_20 = param_1 + 0x60;
  if (*(uint **)(param_1 + 100) != (uint *)0x0) {
    local_1c = (uint *)0x0;
    puVar3 = *(uint **)(param_1 + 100);
    do {
      if (*puVar3 < param_3) {
        puVar2 = (uint *)puVar3[4];
      }
      else {
        puVar2 = (uint *)puVar3[3];
        local_1c = puVar3;
      }
      puVar3 = puVar2;
    } while (puVar2 != (uint *)0x0);
    if ((((local_1c != (uint *)0x0) && (*local_1c <= param_3)) &&
        (*(int *)(local_1c[1] + 0x188) <= (int)param_2)) &&
       (uVar4 = *(uint *)(local_1c[1] + 0x194),
       uVar1 = FUN_0006c798(*(undefined4 *)(*(int *)(iVar5 + DAT_000190e4) + 4)),
       (uVar1 & uVar4) != 0)) {
      FUN_00018c64(param_1,local_1c[1],&local_20);
    }
  }
  if (*(uint **)(param_1 + 0x74) != (uint *)0x0) {
    local_1c = (uint *)0x0;
    puVar3 = *(uint **)(param_1 + 0x74);
    do {
      if (*puVar3 < param_2) {
        puVar2 = (uint *)puVar3[4];
      }
      else {
        puVar2 = (uint *)puVar3[3];
        local_1c = puVar3;
      }
      puVar3 = puVar2;
    } while (puVar2 != (uint *)0x0);
    if ((local_1c != (uint *)0x0) && (*local_1c <= param_2)) {
      local_20 = param_1 + 0x70;
      uVar4 = *(uint *)(local_1c[1] + 0x194);
      uVar1 = FUN_0006c798(*(undefined4 *)(*(int *)(iVar5 + DAT_000190e4) + 4));
      if ((uVar1 & uVar4) != 0) {
        FUN_00018c64(param_1,local_1c[1],&local_20);
      }
    }
  }
  return 0;
}



