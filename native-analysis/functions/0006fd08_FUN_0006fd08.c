/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006fd08 FUN_0006fd08 */

void FUN_0006fd08(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  
  uVar1 = FUN_0008f414(param_2);
  if (*(uint **)(param_1 + 0x14) != (uint *)0x0) {
    puVar2 = (uint *)0x0;
    puVar4 = *(uint **)(param_1 + 0x14);
    do {
      if (*puVar4 < uVar1) {
        puVar3 = (uint *)puVar4[0x15];
      }
      else {
        puVar3 = (uint *)puVar4[0x14];
        puVar2 = puVar4;
      }
      puVar4 = puVar3;
    } while (puVar3 != (uint *)0x0);
    if ((puVar2 != (uint *)0x0) && (*puVar2 <= uVar1)) {
      puVar2[0x12] = param_3;
    }
  }
  return;
}



