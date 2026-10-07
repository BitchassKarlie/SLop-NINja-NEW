/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003cbe0 FUN_0003cbe0 */

void FUN_0003cbe0(void)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar1 = DAT_0003cc88;
  FUN_0002fa48(local_14,DAT_0003cc84 + 0x3cbee);
  FUN_00017d64(iVar1 + 0x3cbf8,local_14[0]);
  FUN_00017d90(local_14);
  FUN_0002fa48(&local_18,DAT_0003cc8c + 0x3cc0e);
  FUN_00017d64(iVar1 + 0x3cbfc,local_18);
  FUN_00017d90(&local_18);
  FUN_0002fa48(&local_1c,DAT_0003cc90 + 0x3cc2a);
  FUN_00017d64(iVar1 + 0x3cc00,local_1c);
  FUN_00017d90(&local_1c);
  FUN_00038a18();
  FUN_0002fa48(&local_20,DAT_0003cc94 + 0x3cc4a);
  FUN_00017d64(iVar1 + 0x3cc04,local_20);
  FUN_00017d90(&local_20);
  FUN_0002fa48(&local_24,DAT_0003cc98 + 0x3cc64);
  FUN_00017d64(iVar1 + 0x3cc08,local_24);
  FUN_00017d90(&local_24);
  *(undefined *)(iVar1 + 0x3cc10) = 1;
  return;
}



