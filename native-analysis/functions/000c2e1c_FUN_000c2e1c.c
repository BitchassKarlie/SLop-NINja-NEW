/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c2e1c FUN_000c2e1c */

undefined8 FUN_000c2e1c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_1;
  uVar1 = *(uint *)(iVar4 + 10) << 8;
  uVar2 = (uVar1 | *(byte *)(iVar4 + 9)) << 8;
  uVar3 = (uVar2 | *(byte *)(iVar4 + 8)) << 8;
  return CONCAT44((((*(uint *)(iVar4 + 10) >> 0x18) << 8 | uVar1 >> 0x18) << 8 | uVar2 >> 0x18) << 8
                  | uVar3 >> 0x18,(uVar3 | *(byte *)(iVar4 + 7)) << 8 | (uint)*(byte *)(iVar4 + 6));
}



