/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006fca8 FUN_0006fca8 */

undefined4 FUN_0006fca8(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (*(uint **)(param_1 + 0x144) == (uint *)0x0) {
LAB_0006fcda:
    if (*(uint **)(param_1 + 0x154) != (uint *)0x0) {
      puVar4 = (uint *)0x0;
      puVar3 = *(uint **)(param_1 + 0x154);
      do {
        if (*puVar3 < param_2) {
          puVar2 = (uint *)puVar3[0x24];
        }
        else {
          puVar2 = (uint *)puVar3[0x23];
          puVar4 = puVar3;
        }
        puVar3 = puVar2;
      } while (puVar2 != (uint *)0x0);
      if ((puVar4 != (uint *)0x0) && (*puVar4 <= param_2)) goto LAB_0006fcd4;
    }
    uVar1 = 0;
  }
  else {
    puVar4 = (uint *)0x0;
    puVar3 = *(uint **)(param_1 + 0x144);
    do {
      if (*puVar3 < param_2) {
        puVar2 = (uint *)puVar3[0x24];
      }
      else {
        puVar2 = (uint *)puVar3[0x23];
        puVar4 = puVar3;
      }
      puVar3 = puVar2;
    } while (puVar2 != (uint *)0x0);
    if ((puVar4 == (uint *)0x0) || (param_2 < *puVar4)) goto LAB_0006fcda;
LAB_0006fcd4:
    uVar1 = 1;
  }
  return uVar1;
}



