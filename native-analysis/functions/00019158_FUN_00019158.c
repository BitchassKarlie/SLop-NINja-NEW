/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00019158 FUN_00019158 */

undefined4 FUN_00019158(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_18;
  uint *local_14;
  
  puVar2 = *(uint **)(param_1 + 0x94);
  if (puVar2 != (uint *)0x0) {
    local_14 = (uint *)0x0;
    do {
      if (*puVar2 < param_3) {
        puVar1 = (uint *)puVar2[4];
      }
      else {
        puVar1 = (uint *)puVar2[3];
        local_14 = puVar2;
      }
      puVar2 = puVar1;
    } while (puVar2 != (uint *)0x0);
    if ((local_14 != (uint *)0x0) && (*local_14 <= param_3)) {
      local_18 = param_1 + 0x90;
      if ((*(int *)(local_14[1] + 0x188) <= param_2) &&
         (uVar5 = *(uint *)(local_14[1] + 0x194),
         uVar3 = FUN_0006c798(*(undefined4 *)(*(int *)(DAT_000191c0 + 0x19166 + DAT_000191c4) + 4)),
         (uVar3 & uVar5) != 0)) {
        uVar4 = FUN_00018c64(param_1,local_14[1],&local_18);
        return uVar4;
      }
    }
  }
  return 0;
}



