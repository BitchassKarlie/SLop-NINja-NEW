/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000316b0 FUN_000316b0 */

void FUN_000316b0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = 0;
  uVar1 = FUN_0001c940();
  iVar2 = FUN_0001bd8c(uVar1,4,&local_10);
  while (iVar2 != 0) {
    *(byte *)(iVar2 + 0xc) = *(byte *)(iVar2 + 0xc) | 0x11;
    uVar1 = FUN_0001c940();
    iVar2 = FUN_0001bdb8(uVar1,4,&local_10);
  }
  return;
}



