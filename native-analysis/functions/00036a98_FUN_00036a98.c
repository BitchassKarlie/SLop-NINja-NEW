/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00036a98 FUN_00036a98 */

void FUN_00036a98(void)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar1 = DAT_00036b00;
  FUN_0002fa48(local_14,DAT_00036afc + 0x36aa6);
  FUN_00017d64(iVar1 + 0x36ab0,local_14[0]);
  FUN_00017d90(local_14);
  FUN_0002fa48(&local_18,DAT_00036b04 + 0x36ac6);
  FUN_00017d64(iVar1 + 0x36ab4,local_18);
  FUN_00017d90(&local_18);
  FUN_0002fa48(&local_1c,DAT_00036b08 + 0x36ae0);
  FUN_00017d64(iVar1 + 0x36ab8,local_1c);
  FUN_00017d90(&local_1c);
  *(undefined *)(iVar1 + 0x36abc) = 1;
  return;
}



