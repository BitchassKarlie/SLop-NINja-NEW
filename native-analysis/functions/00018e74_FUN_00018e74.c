/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00018e74 FUN_00018e74 */

undefined4 FUN_00018e74(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint uVar5;
  int local_18;
  uint *local_14;
  
  if (*(uint **)(param_1 + 0xb4) != (uint *)0x0) {
    local_14 = (uint *)0x0;
    puVar4 = *(uint **)(param_1 + 0xb4);
    do {
      if (*puVar4 < param_2) {
        puVar1 = (uint *)puVar4[4];
      }
      else {
        puVar1 = (uint *)puVar4[3];
        local_14 = puVar4;
      }
      puVar4 = puVar1;
    } while (puVar1 != (uint *)0x0);
    if ((local_14 != (uint *)0x0) && (*local_14 <= param_2)) {
      local_18 = param_1 + 0xb0;
      uVar5 = *(uint *)(local_14[1] + 0x194);
      uVar2 = FUN_0006c798(*(undefined4 *)(*(int *)(DAT_00018ed4 + 0x18e82 + DAT_00018ed8) + 4));
      if ((uVar2 & uVar5) != 0) {
        uVar3 = FUN_00018c64(param_1,local_14[1],&local_18);
        return uVar3;
      }
    }
  }
  return 0;
}



