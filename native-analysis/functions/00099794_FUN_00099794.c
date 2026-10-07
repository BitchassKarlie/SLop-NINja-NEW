/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099794 FUN_00099794 */

undefined4 FUN_00099794(undefined4 param_1,int param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(param_2 + 4);
  if (puVar3 != (uint *)0x0) {
    puVar2 = (uint *)0x0;
    do {
      if (*puVar3 < param_3) {
        puVar1 = (uint *)puVar3[5];
      }
      else {
        puVar1 = (uint *)puVar3[4];
        puVar2 = puVar3;
      }
      puVar3 = puVar1;
    } while (puVar3 != (uint *)0x0);
    if ((puVar2 != (uint *)0x0) && (*puVar2 <= param_3)) {
      FUN_00099734(param_1,puVar2 + 1);
      return param_1;
    }
  }
  FUN_00099718(param_1,0);
  return param_1;
}



