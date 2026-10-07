/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002c928 FUN_0002c928 */

void FUN_0002c928(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar4 = DAT_0002c9b8;
  iVar5 = *(int *)(DAT_0002c9b8 + 0x2c936);
  if (iVar5 != 0) {
    iVar1 = iVar5 + *(int *)(iVar5 + -4) * 0x78;
    iVar2 = iVar1;
    if (iVar5 != iVar1) {
      do {
        puVar3 = (undefined4 *)(iVar1 + -0x78);
        iVar1 = iVar1 + -0x78;
        (**(code **)*puVar3)(iVar1);
        iVar2 = *(int *)(iVar4 + 0x2c936);
      } while (*(int *)(iVar4 + 0x2c936) != iVar1);
    }
    operator_delete__((void *)(iVar2 + -8));
    *(undefined4 *)(DAT_0002c9bc + 0x2c96e) = 0;
  }
  puVar3 = (undefined4 *)operator_new__((param_1 * 0xf + 1) * 8);
  puVar3[1] = param_1;
  puVar6 = puVar3 + 2;
  *puVar3 = 0x78;
  if (param_1 != 0) {
    iVar4 = 0;
    iVar5 = DAT_0002c9c0 + 0x2c998;
    do {
      iVar4 = iVar4 + 1;
      puVar3[2] = iVar5;
      *(undefined *)(puVar3 + 4) = 0;
      *(undefined *)((int)puVar3 + 0x11) = 0;
      *(undefined *)((int)puVar3 + 0x12) = 0;
      *(undefined *)((int)puVar3 + 0x13) = 0xff;
      puVar3[0x1e] = 0xffffffff;
      *(undefined *)((int)puVar3 + 0x7d) = 0;
      puVar3 = puVar3 + 0x1e;
    } while (iVar4 != param_1);
  }
  iVar4 = DAT_0002c9c4;
  *(undefined4 **)(DAT_0002c9c4 + 0x2c9b4) = puVar6;
  *(int *)((int)&DAT_0002c9bc + iVar4) = param_1;
  *(undefined4 *)((int)&DAT_0002c9b8 + iVar4) = 0;
  return;
}



