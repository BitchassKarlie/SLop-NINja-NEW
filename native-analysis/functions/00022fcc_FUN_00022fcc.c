/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00022fcc FUN_00022fcc */

undefined4 FUN_00022fcc(void)

{
  undefined4 uVar1;
  
  if (*(int *)(DAT_0002302c + 0x22fd8) < 1) {
    if (*(int *)(DAT_0002302c + 0x22fdc) < 1) {
      uVar1 = 0;
    }
    else {
      FUN_000318fc(0xffffffff,0xbf800000,2);
      uVar1 = 1;
    }
  }
  else if (*(int *)(DAT_0002302c + 0x22fdc) < 1) {
    FUN_000318fc(0xffffffff,0xbf800000,1);
    uVar1 = 1;
  }
  else {
    FUN_000318fc(0xffffffff,0xbf800000,0);
    uVar1 = 1;
  }
  return uVar1;
}



