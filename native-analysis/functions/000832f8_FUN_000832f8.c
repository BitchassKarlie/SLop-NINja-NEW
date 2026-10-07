/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000832f8 FUN_000832f8 */

int FUN_000832f8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_00083338 + 0x83308 + DAT_0008333c);
  iVar1 = FUN_00099270(iVar2 + param_2 * 0x50 + 0x5ac,param_1);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar2 + param_2 * 0x50 + 0x5f8);
    if (iVar2 + *(int *)(iVar1 + 0x24) * 0xc != 0) {
      return *(int *)(iVar2 + *(int *)(iVar1 + 0x24) * 0xc);
    }
  }
  return (int)&DAT_00083338 + DAT_00083340;
}



