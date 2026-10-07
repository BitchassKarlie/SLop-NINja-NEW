/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00017da8 FUN_00017da8 */

undefined4 FUN_00017da8(int param_1,uint param_2,undefined4 param_3)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *local_1c;
  
  local_1c = *(uint **)(param_1 + 4);
  if (local_1c != (uint *)0x0) {
    puVar2 = (uint *)0x0;
    do {
      if (*local_1c < param_2) {
        puVar1 = (uint *)local_1c[4];
      }
      else {
        puVar1 = (uint *)local_1c[3];
        puVar2 = local_1c;
      }
      local_1c = puVar1;
    } while (local_1c != (uint *)0x0);
    if ((puVar2 != (uint *)0x0) && (*puVar2 <= param_2)) {
      uVar5 = puVar2[1];
      FUN_00017d64(&local_1c,*(undefined4 *)(uVar5 + 0x84));
      piVar3 = (int *)operator_new(0x104);
      if ((byte)(*(char *)(uVar5 + 0x40) - 0x30U) < 10) {
        uVar4 = 1;
      }
      else {
        uVar4 = 2;
      }
      FUN_00058274(piVar3,uVar5,*(undefined4 *)(uVar5 + 0x18c),&local_1c,uVar4);
      FUN_00017d90(&local_1c);
      (**(code **)(*piVar3 + 8))(piVar3);
      FUN_00049d7c(param_3,piVar3,0);
      return 1;
    }
  }
  return 0;
}



