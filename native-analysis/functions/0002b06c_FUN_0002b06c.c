/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002b06c FUN_0002b06c */

void FUN_0002b06c(void)

{
  undefined uVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  
  iVar6 = DAT_0002b0c8;
  uVar5 = DAT_0002b0c4;
  iVar11 = 0;
  puVar8 = (undefined4 *)(DAT_0002b0cc + 0x2b080);
  iVar7 = DAT_0002b0c8 + 0x2b124;
  *(undefined *)(DAT_0002b0c8 + 0x2b10c) = 0;
  *(undefined4 *)(iVar6 + 0x2b0c0) = uVar5;
  *puVar8 = 1;
  *(undefined4 *)(iVar6 + 0x2b110) = 0;
  *(undefined4 *)(FUN_0002b134 + iVar6) = 0;
  *(undefined4 *)(iVar6 + 0x2b11c) = 0;
  *(undefined4 *)((int)&DAT_0002b0c4 + iVar6) = 0;
  iVar10 = DAT_0002b0d0;
  FUN_00017d64(iVar7,0);
  puVar9 = *(undefined **)(iVar10 + 0x2b0aa + DAT_0002b0d4);
  uVar1 = puVar9[3];
  uVar2 = puVar9[2];
  uVar3 = puVar9[1];
  uVar4 = *puVar9;
  do {
    iVar10 = iVar6 + 0x2b080 + iVar11;
    *(undefined *)(iVar10 + 3) = uVar1;
    *(undefined *)(iVar10 + 2) = uVar2;
    *(undefined *)(iVar10 + 1) = uVar3;
    *(undefined *)(iVar6 + 0x2b080 + iVar11) = uVar4;
    iVar11 = iVar11 + 4;
  } while (iVar11 != 0x40);
  return;
}



