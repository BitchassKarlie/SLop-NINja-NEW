/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001f6f8 FUN_0001f6f8 */

void FUN_0001f6f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = 0;
  local_14 = 0;
  uVar1 = FUN_0001c940();
  iVar2 = FUN_0001bd8c(uVar1,2,&local_18);
  while (iVar2 != 0) {
    if (param_1 == 0) {
      *(byte *)(iVar2 + 0xc) = *(byte *)(iVar2 + 0xc) | 0x11;
    }
    else {
      FUN_0001f6c0();
    }
    uVar1 = FUN_0001c940();
    iVar2 = FUN_0001bdb8(uVar1,2,&local_18);
  }
  return;
}



