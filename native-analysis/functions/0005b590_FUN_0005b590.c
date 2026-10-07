/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005b590 FUN_0005b590 */

void FUN_0005b590(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar2 = (undefined4 *)operator_new(param_2 * 0xc);
  puVar6 = *(undefined4 **)(param_1 + 8);
  puVar3 = *(undefined4 **)(param_1 + 4);
  iVar4 = (int)puVar6 - (int)puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = puVar2;
    if (puVar3 < puVar6) {
      do {
        *puVar5 = *puVar3;
        puVar5[1] = puVar3[1];
        puVar1 = puVar3 + 2;
        puVar3 = puVar3 + 3;
        puVar5[2] = *puVar1;
        puVar5 = puVar5 + 3;
      } while (puVar3 < puVar6);
      puVar3 = *(undefined4 **)(param_1 + 4);
    }
    operator_delete(puVar3);
  }
  *(undefined4 **)(param_1 + 4) = puVar2;
  *(undefined4 **)(param_1 + 0xc) = puVar2 + param_2 * 3;
  *(undefined4 **)(param_1 + 8) = puVar2 + (iVar4 >> 2);
  return;
}



