/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000adfac FUN_000adfac */

void FUN_000adfac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    iVar1 = (uVar5 & 0xf) << 1;
    uVar3 = *(uint *)(param_1 + ((uVar5 >> 4) + 8) * 4);
    uVar4 = uVar3 >> iVar1;
    if ((int)(((*(uint *)(param_1 + (uVar5 >> 4) * 4 + 0x3c) ^ uVar3) >> iVar1) << 0x1f) < 0) {
      if ((int)(uVar4 << 0x1f) < 0) {
        FUN_000ad52c(param_1,uVar5,1,0x3f800000,*(undefined4 *)(param_1 + 0x1c));
        uVar2 = 2;
      }
      else {
        if (-1 < (int)(uVar4 << 0x1e)) {
          FUN_000ad52c(param_1,uVar5,4,0x3f800000,*(undefined4 *)(param_1 + 0x1c));
        }
LAB_000adfde:
        uVar2 = 8;
      }
    }
    else {
      if (-1 < (int)(uVar4 << 0x1f)) goto LAB_000adfde;
      uVar2 = 2;
    }
    uVar3 = uVar5 + 1;
    FUN_000ad52c(param_1,uVar5,uVar2,0x3f800000,*(undefined4 *)(param_1 + 0x1c));
    uVar5 = uVar3;
    if (uVar3 == 0x6c) {
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x38);
      return;
    }
  } while( true );
}



