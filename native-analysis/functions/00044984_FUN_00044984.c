/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00044984 FUN_00044984 */

void FUN_00044984(void)

{
  int iVar1;
  undefined uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar1 = DAT_00044a78;
  if (*(char *)(DAT_00044a78 + 0x449f2) == '\0') {
    *(undefined *)(DAT_00044a78 + 0x449f2) = 1;
    uVar2 = FUN_0006e1c0();
    *(undefined *)(iVar1 + 0x4499e) = uVar2;
    FUN_00038a18();
    FUN_0002fa48(local_14,DAT_00044a7c + 0x449ae);
    FUN_00017d64(iVar1 + 0x449ca,local_14[0]);
    FUN_00017d90(local_14);
    FUN_0002fa48(&local_18,DAT_00044a80 + 0x449ca);
    FUN_00017d64(iVar1 + 0x449ce,local_18);
    FUN_00017d90(&local_18);
    FUN_0002fa48(&local_1c,DAT_00044a84 + 0x449e6);
    FUN_00017d64(iVar1 + 0x449b2,local_1c);
    FUN_00017d90(&local_1c);
    FUN_0002fa48(&local_20,DAT_00044a88 + 0x44a02);
    FUN_00017d64(iVar1 + 0x449be,local_20);
    FUN_00017d90(&local_20);
    FUN_0002fa48(&local_24,DAT_00044a8c + 0x44a1e);
    FUN_00017d64(iVar1 + 0x449ba,local_24);
    FUN_00017d90(&local_24);
    FUN_00017d64(iVar1 + 0x449b6,*(undefined4 *)(iVar1 + 0x449be));
    FUN_0002fa48(&local_28,DAT_00044a90 + 0x44a44);
    FUN_00017d64(iVar1 + 0x449c2,local_28);
    FUN_00017d90(&local_28);
    FUN_0002fa48(&local_2c,DAT_00044a94 + 0x44a5e);
    FUN_00017d64(iVar1 + 0x449d2,local_2c);
    FUN_00017d90(&local_2c);
  }
  return;
}



