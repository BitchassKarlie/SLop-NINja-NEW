/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004de00 FUN_0004de00 */

void FUN_0004de00(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = DAT_0004deb4;
  if (*(char *)(DAT_0004deb4 + 0x4de26) == '\0') {
    iVar2 = DAT_0004deb8 + 0x4de18;
    FUN_0002fa48(&local_14,iVar2);
    FUN_00017d64(iVar1 + 0x4de0e,local_14);
    FUN_00017d90(&local_14);
    FUN_0002fa48(&local_18,iVar2);
    FUN_00017d64(iVar1 + 0x4de12,local_18);
    FUN_00017d90(&local_18);
    FUN_0002fa48(&local_1c,iVar2);
    FUN_00017d64(iVar1 + 0x4de16,local_1c);
    FUN_00017d90(&local_1c);
    FUN_0002fa48(&local_20,iVar2);
    FUN_00017d64(iVar1 + 0x4de1a,local_20);
    FUN_00017d90(&local_20);
    FUN_0002fa48(&local_24,iVar2);
    FUN_00017d64(iVar1 + 0x4de1e,local_24);
    FUN_00017d90(&local_24);
    FUN_0002fa48(&local_28,iVar2);
    FUN_00017d64(iVar1 + 0x4de22,local_28);
    FUN_00017d90(&local_28);
    *(undefined *)(iVar1 + 0x4de26) = 1;
  }
  return;
}



