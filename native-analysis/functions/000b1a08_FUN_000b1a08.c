/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1a08 FUN_000b1a08 */

void FUN_000b1a08(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  pvVar1 = operator_new(param_2 * 0xc);
  puVar7 = *(undefined4 **)(param_1 + 8);
  puVar6 = *(undefined4 **)(param_1 + 4);
  iVar3 = (int)puVar7 - (int)puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    if (puVar6 < puVar7) {
      iVar9 = 0;
      puVar5 = puVar6;
      do {
        uVar2 = puVar5[1];
        uVar4 = puVar5[2];
        puVar8 = (undefined4 *)((int)pvVar1 + iVar9);
        iVar9 = iVar9 + 0xc;
        *puVar8 = *puVar5;
        puVar8[1] = uVar2;
        puVar8[2] = uVar4;
        puVar5 = (undefined4 *)((int)puVar6 + iVar9);
      } while (puVar5 < puVar7);
      puVar6 = *(undefined4 **)(param_1 + 4);
    }
    operator_delete(puVar6);
  }
  *(void **)(param_1 + 4) = pvVar1;
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 0xc);
  *(void **)(param_1 + 8) = (void *)((int)pvVar1 + (iVar3 >> 2) * 4);
  return;
}



