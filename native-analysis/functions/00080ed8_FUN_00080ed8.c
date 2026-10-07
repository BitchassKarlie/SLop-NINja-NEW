/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00080ed8 FUN_00080ed8 */

void FUN_00080ed8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar2 = (undefined4 *)operator_new(param_2 * 0x20);
  puVar5 = *(undefined4 **)(param_1 + 8);
  puVar3 = *(undefined4 **)(param_1 + 4);
  iVar6 = (int)puVar5 - (int)puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = puVar2;
    if (puVar3 < puVar5) {
      while( true ) {
        *puVar4 = *puVar3;
        puVar4[1] = puVar3[1];
        puVar4[2] = puVar3[2];
        puVar4[3] = puVar3[3];
        puVar4[4] = puVar3[4];
        puVar4[5] = puVar3[5];
        puVar4[6] = puVar3[6];
        puVar1 = puVar3 + 7;
        puVar3 = puVar3 + 8;
        puVar4[7] = *puVar1;
        if (puVar5 <= puVar3) break;
        puVar4 = puVar4 + 8;
      }
      puVar3 = *(undefined4 **)(param_1 + 4);
    }
    operator_delete(puVar3);
  }
  *(undefined4 **)(param_1 + 0xc) = puVar2 + param_2 * 8;
  *(undefined4 **)(param_1 + 8) = puVar2 + (iVar6 >> 5) * 8;
  *(undefined4 **)(param_1 + 4) = puVar2;
  return;
}



