/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077e50 FUN_00077e50 */

undefined4 FUN_00077e50(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  if (*(uint **)(param_1 + 0x20) != (uint *)0x0) {
    puVar4 = (uint *)0x0;
    puVar3 = *(uint **)(param_1 + 0x20);
    do {
      if (*puVar3 < param_2) {
        puVar1 = (uint *)puVar3[4];
      }
      else {
        puVar1 = (uint *)puVar3[3];
        puVar4 = puVar3;
      }
      puVar3 = puVar1;
    } while (puVar1 != (uint *)0x0);
    if ((puVar4 != (uint *)0x0) && (*puVar4 <= param_2)) {
      uVar5 = puVar4[1];
      iVar2 = *(int *)(uVar5 + 0xc);
      if ((-1 < iVar2) &&
         (iVar2 <= *(int *)(*(int *)(DAT_00077ea0 + 0x77e5a + DAT_00077ea4) + 0x24))) {
        FUN_0002f550(-iVar2);
        *(undefined4 *)(uVar5 + 0xc) = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}



