/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c2f2c FUN_000c2f2c */

void FUN_000c2f2c(int *param_1)

{
  byte *pbVar1;
  undefined uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 != (int *)0x0) {
    uVar3 = 0;
    *(undefined *)(*param_1 + 0x16) = 0;
    *(undefined *)(*param_1 + 0x17) = 0;
    *(undefined *)(*param_1 + 0x18) = 0;
    *(undefined *)(*param_1 + 0x19) = 0;
    if (param_1[1] < 1) {
      iVar6 = *param_1;
      uVar5 = uVar3;
    }
    else {
      uVar5 = 0;
      iVar6 = *param_1;
      do {
        pbVar1 = (byte *)(iVar6 + uVar3);
        uVar3 = uVar3 + 1;
        uVar5 = *(uint *)(DAT_000c2fa8 + 0xc2f54 + ((uint)*pbVar1 ^ uVar5 >> 0x18) * 4) ^ uVar5 << 8
        ;
      } while (uVar3 != param_1[1]);
      uVar3 = uVar5 >> 0x18;
    }
    uVar2 = (undefined)uVar3;
    if (0 < param_1[3]) {
      iVar4 = 0;
      do {
        pbVar1 = (byte *)(param_1[2] + iVar4);
        iVar4 = iVar4 + 1;
        uVar5 = *(uint *)(DAT_000c2fac + 0xc2f78 + ((uint)*pbVar1 ^ uVar5 >> 0x18) * 4) ^ uVar5 << 8
        ;
      } while (iVar4 != param_1[3]);
      uVar2 = (undefined)(uVar5 >> 0x18);
    }
    *(char *)(iVar6 + 0x16) = (char)uVar5;
    *(char *)(*param_1 + 0x17) = (char)(uVar5 >> 8);
    *(char *)(*param_1 + 0x18) = (char)(uVar5 >> 0x10);
    *(undefined *)(*param_1 + 0x19) = uVar2;
  }
  return;
}



