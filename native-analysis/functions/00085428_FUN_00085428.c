/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00085428 FUN_00085428 */

int FUN_00085428(int param_1,float param_2)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = (uint)(*(float *)(param_1 + 0x3c) + param_2 * *(float *)(param_1 + 0x40));
  uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
  iVar6 = (int)(*(float *)(param_1 + 0x44) + param_2 * *(float *)(param_1 + 0x48));
  if (iVar6 < 0) {
    uVar2 = -uVar5;
  }
  else {
    uVar2 = iVar6 - uVar5;
  }
  if ((int)uVar2 < 1) {
    uVar4 = 0;
  }
  else {
    puVar3 = *(uint **)(DAT_000854ac + 0x8546e);
    lVar1 = (ulonglong)*puVar3 * (ulonglong)puVar3[2] +
            CONCAT44(puVar3[2] * puVar3[1] + *puVar3 * puVar3[3],puVar3[4]);
    uVar4 = puVar3[5] + (int)((ulonglong)lVar1 >> 0x20);
    *puVar3 = (uint)lVar1;
    puVar3[1] = uVar4;
    if (uVar2 - 1 < 0xfffffffe) {
      uVar4 = (uint)((ulonglong)uVar2 * (ulonglong)uVar4 >> 0x20);
    }
  }
  return uVar4 + uVar5;
}



