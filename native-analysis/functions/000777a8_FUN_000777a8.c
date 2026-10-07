/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000777a8 FUN_000777a8 */

undefined4 FUN_000777a8(int param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  if (*(uint **)(param_1 + 0x20) != (uint *)0x0) {
    puVar1 = (uint *)0x0;
    puVar3 = *(uint **)(param_1 + 0x20);
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
      uVar4 = puVar1[1];
      *(undefined4 *)(uVar4 + 0xc) = 0xffffffff;
      *(undefined *)(uVar4 + 0x34) = 0;
      return 1;
    }
  }
  return 0;
}



