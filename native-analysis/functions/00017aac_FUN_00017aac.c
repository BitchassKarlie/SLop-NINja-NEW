/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00017aac FUN_00017aac */

undefined4 FUN_00017aac(int param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (*(uint **)(param_1 + 4) != (uint *)0x0) {
    puVar1 = (uint *)0x0;
    puVar3 = *(uint **)(param_1 + 4);
    do {
      if (*puVar3 < param_2) {
        puVar2 = (uint *)puVar3[4];
      }
      else {
        puVar2 = (uint *)puVar3[3];
        puVar1 = puVar3;
      }
      puVar3 = puVar2;
    } while (puVar2 != (uint *)0x0);
    if ((puVar1 != (uint *)0x0) && (*puVar1 <= param_2)) {
      return 1;
    }
  }
  return 0;
}



