/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00038a18 FUN_00038a18 */

void FUN_00038a18(void)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar1 = DAT_00038a70;
  if (*(int *)(DAT_00038a70 + 0x38b02) == 0) {
    FUN_0002fa48(local_14,DAT_00038a7c + 0x38a5c);
    FUN_00017d64(iVar1 + 0x38b02,local_14[0]);
    FUN_00017d90(local_14);
  }
  iVar1 = DAT_00038a74;
  if (*(int *)(DAT_00038a74 + 0x38b08) == 0) {
    FUN_0002fa48(&local_18,DAT_00038a78 + 0x38a3e);
    FUN_00017d64(iVar1 + 0x38b08,local_18);
    FUN_00017d90(&local_18);
  }
  return;
}



