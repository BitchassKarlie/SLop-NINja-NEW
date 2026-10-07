/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b6a24 FUN_000b6a24 */

void FUN_000b6a24(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_r6;
  
  FUN_000a07fc(param_1,*(undefined4 *)(param_2 + 4));
  uVar1 = *(uint *)(param_2 + 8);
  *(uint *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(uint *)(param_2 + 0xc);
  if ((uVar2 & 0xf000) == 0) {
    if ((int)(uVar2 << 0xf) < 0) {
      if (3 < uVar1) {
        uVar1 = 4;
      }
      unaff_r6 = 0x1406;
      *(uint *)(param_1 + 4) = uVar1;
      goto LAB_000b6a4c;
    }
    if (5 < (uVar2 & 0xfff)) goto LAB_000b6a4c;
    uVar1 = 1 << (uVar2 & 0xff);
    if ((uVar1 & 3) != 0) {
      unaff_r6 = 0x1400;
      goto LAB_000b6a4c;
    }
    if ((uVar1 & 0x30) != 0) goto LAB_000b6a80;
    if ((uVar1 & 0xc) == 0) goto LAB_000b6a4c;
  }
  else {
    *(undefined4 *)(param_1 + 4) = 4;
    if (5 < (uVar2 & 0xfff)) goto LAB_000b6a4c;
    uVar1 = 1 << (uVar2 & 0xff);
    if ((uVar1 & 0x30) != 0) {
LAB_000b6a80:
      unaff_r6 = 0x1406;
      goto LAB_000b6a4c;
    }
    if ((uVar1 & 0xc) == 0) {
      unaff_r6 = 0x1401;
      if ((uVar1 & 3) == 0) {
        unaff_r6 = 0;
      }
      goto LAB_000b6a4c;
    }
  }
  unaff_r6 = 0x1402;
LAB_000b6a4c:
  *(undefined4 *)(param_1 + 0xc) = unaff_r6;
  return;
}



