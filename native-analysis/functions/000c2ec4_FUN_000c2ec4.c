/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c2ec4 FUN_000c2ec4 */

uint FUN_000c2ec4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  return (uint)*(byte *)(iVar1 + 0x10) << 0x10 | (uint)*(byte *)(iVar1 + 0xf) << 8 |
         (uint)*(byte *)(iVar1 + 0xe) | (uint)*(byte *)(iVar1 + 0x11) << 0x18;
}



