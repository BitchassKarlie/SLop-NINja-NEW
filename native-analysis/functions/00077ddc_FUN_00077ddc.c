/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077ddc FUN_00077ddc */

undefined4 FUN_00077ddc(int param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (*(uint **)(param_1 + 0x20) != (uint *)0x0) {
    puVar3 = (uint *)0x0;
    puVar2 = *(uint **)(param_1 + 0x20);
    do {
      if (*puVar2 < param_2) {
        puVar1 = (uint *)puVar2[4];
      }
      else {
        puVar1 = (uint *)puVar2[3];
        puVar3 = puVar2;
      }
      puVar2 = puVar1;
    } while (puVar1 != (uint *)0x0);
    if ((puVar3 != (uint *)0x0) && (*puVar3 <= param_2)) {
      FUN_00077d38(param_1,*(undefined4 *)(puVar3[1] + 0x10));
      return 1;
    }
  }
  return 0;
}



