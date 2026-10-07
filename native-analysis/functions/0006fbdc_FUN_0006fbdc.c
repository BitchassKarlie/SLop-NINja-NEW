/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006fbdc FUN_0006fbdc */

uint FUN_0006fbdc(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  if (*(uint **)(param_1 + 4) == (uint *)0x0) {
LAB_0006fc08:
    if (*(uint **)(param_1 + 0x14) != (uint *)0x0) {
      puVar4 = (uint *)0x0;
      puVar3 = *(uint **)(param_1 + 0x14);
      do {
        if (*puVar3 < param_2) {
          puVar2 = (uint *)puVar3[0x15];
        }
        else {
          puVar2 = (uint *)puVar3[0x14];
          puVar4 = puVar3;
        }
        puVar3 = puVar2;
      } while (puVar2 != (uint *)0x0);
      if ((puVar4 != (uint *)0x0) && (*puVar4 <= param_2)) goto LAB_0006fc02;
    }
    uVar1 = 0;
  }
  else {
    puVar4 = (uint *)0x0;
    puVar3 = *(uint **)(param_1 + 4);
    do {
      if (*puVar3 < param_2) {
        puVar2 = (uint *)puVar3[0x15];
      }
      else {
        puVar2 = (uint *)puVar3[0x14];
        puVar4 = puVar3;
      }
      puVar3 = puVar2;
    } while (puVar2 != (uint *)0x0);
    if ((puVar4 == (uint *)0x0) || (param_2 < *puVar4)) goto LAB_0006fc08;
LAB_0006fc02:
    uVar1 = puVar4[0x12];
  }
  return uVar1;
}



