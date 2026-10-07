/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00079418 FUN_00079418 */

uint FUN_00079418(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  iVar3 = **(int **)(param_1 + 0x4c);
  *param_2 = param_1 + 0x48;
  param_2[1] = iVar3;
  if (iVar3 == *(int *)(param_1 + 0x4c)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(iVar3 + 8);
    if (*(uint **)(param_1 + 0x20) != (uint *)0x0) {
      puVar2 = (uint *)0x0;
      puVar5 = *(uint **)(param_1 + 0x20);
      do {
        if (*puVar5 < *(uint *)(uVar1 + 0x10)) {
          puVar4 = (uint *)puVar5[4];
        }
        else {
          puVar4 = (uint *)puVar5[3];
          puVar2 = puVar5;
        }
        puVar5 = puVar4;
      } while (puVar4 != (uint *)0x0);
      if ((puVar2 != (uint *)0x0) && (*puVar2 <= *(uint *)(uVar1 + 0x10))) {
        uVar1 = puVar2[1];
      }
    }
  }
  return uVar1;
}



