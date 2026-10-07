/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002c8d0 FUN_0002c8d0 */

void FUN_0002c8d0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_0002c91c;
  iVar5 = *(int *)(DAT_0002c91c + 0x2c8dc);
  if (iVar5 != 0) {
    iVar3 = iVar5 + *(int *)(iVar5 + -4) * 0x78;
    iVar4 = iVar3;
    if (iVar5 != iVar3) {
      do {
        puVar1 = (undefined4 *)(iVar3 + -0x78);
        iVar3 = iVar3 + -0x78;
        (**(code **)*puVar1)(iVar3);
        iVar4 = *(int *)(iVar2 + 0x2c8dc);
      } while (*(int *)(iVar2 + 0x2c8dc) != iVar3);
    }
    operator_delete__((void *)(iVar4 + -8));
    *(undefined4 *)(DAT_0002c920 + 0x2c914) = 0;
  }
  *(undefined4 *)((int)&DAT_0002c924 + DAT_0002c924) = 0;
  return;
}



