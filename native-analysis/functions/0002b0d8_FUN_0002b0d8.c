/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002b0d8 FUN_0002b0d8 */

void FUN_0002b0d8(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar2 = DAT_0002b12c;
  iVar1 = DAT_0002b128;
  if (*(char *)(DAT_0002b128 + 0x2b196) == '\0') {
    *(undefined *)(DAT_0002b128 + 0x2b196) = 1;
    FUN_0002fa48(local_14,iVar2 + 0x2b0f6);
    FUN_00017d64(iVar1 + 0x2b18e,local_14[0]);
    FUN_00017d90(local_14);
    FUN_0002fa48(&local_18,DAT_0002b130 + 0x2b112);
    FUN_00017d64(iVar1 + 0x2b186,local_18);
    FUN_00017d90(&local_18);
  }
  return;
}



