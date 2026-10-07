/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ae1a8 FUN_000ae1a8 */

int FUN_000ae1a8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1;
  do {
    iVar1 = iVar1 + 0x1c;
    *(undefined4 *)(iVar2 + 0x18) = 1;
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0;
    iVar2 = iVar2 + 0x1c;
  } while (iVar1 != 0xe0);
  iVar1 = param_1 + 0xe0;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 0x1c;
    *(undefined4 *)(iVar1 + 0x18) = 1;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    iVar1 = iVar1 + 0x1c;
  } while (iVar2 != 0xe0);
  *(undefined4 *)(param_1 + 0x1d0) = 1;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  FUN_000ae134(param_1 + 0x1c0);
  return param_1;
}



