/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9944 FUN_000b9944 */

undefined8 FUN_000b9944(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x58) < 2) {
    uVar1 = 0xffffff7d;
    uVar2 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    uVar2 = *(undefined4 *)(param_1 + 0x54);
  }
  return CONCAT44(uVar2,uVar1);
}



