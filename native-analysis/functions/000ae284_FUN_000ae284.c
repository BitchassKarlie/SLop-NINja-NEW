/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ae284 FUN_000ae284 */

void FUN_000ae284(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_r6;
  int unaff_r7;
  undefined auStack_20 [4];
  undefined auStack_1c [4];
  
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_000ae1f4();
    iVar3 = *(int *)(iVar1 + 0x1d0) + -1;
    iVar4 = 0;
    do {
      if (iVar3 == *(int *)(iVar1 + iVar4 + 0x14)) {
        *(int *)(param_1 + 0x10) = iVar3;
        if (iVar3 == 0) goto LAB_000ae2b2;
        goto LAB_000ae378;
      }
      iVar4 = iVar4 + 0x1c;
    } while (iVar4 != 0xe0);
    *(undefined4 *)(param_1 + 0x10) = 0;
LAB_000ae2b2:
    iVar1 = FUN_000ae1f4();
    iVar3 = 0;
    iVar4 = iVar1;
    while (0 < *(int *)(iVar4 + 0x18)) {
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x1c;
      if (iVar3 == 8) goto code_r0x000ae2ca;
    }
    iVar4 = *(int *)(iVar1 + iVar3 * 0x1c + 0x14);
    *(int *)(param_1 + 0x10) = iVar4;
    if (iVar4 == 0) goto LAB_000ae2ce;
LAB_000ae378:
    iVar1 = FUN_000ae1f4();
    iVar3 = 0;
    iVar4 = iVar1;
    do {
      if (*(int *)(param_1 + 0x10) == *(int *)(iVar4 + 0x14)) {
        iVar1 = iVar1 + iVar3 * 0x1c;
        unaff_r7 = *(int *)(iVar1 + 8);
        unaff_r6 = *(int *)(iVar1 + 0xc);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x1c;
    } while (iVar3 != 8);
    FUN_000ad504(param_1,0x74,0x20,(float)(longlong)unaff_r7,
                 (float)(longlong)(unaff_r7 - *(int *)(param_1 + 0x14)),
                 *(undefined4 *)(param_1 + 0x1c));
    FUN_000ad504(param_1,0x75,0x20,(float)(longlong)unaff_r6,
                 (float)(longlong)(unaff_r6 - *(int *)(param_1 + 0x18)),
                 *(undefined4 *)(param_1 + 0x1c));
    FUN_000ad52c(param_1,0x6c,1,0x3f800000,*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x14) = unaff_r7;
    *(int *)(param_1 + 0x18) = unaff_r6;
  }
  else {
    iVar4 = FUN_000ae1f4();
    iVar1 = 0;
    iVar3 = *(int *)(iVar4 + 0x1d0) + -1;
    do {
      if (iVar3 == *(int *)(iVar4 + iVar1 + 0x14)) {
        if (iVar3 != 0) goto LAB_000ae316;
        break;
      }
      iVar1 = iVar1 + 0x1c;
    } while (iVar1 != 0xe0);
    iVar1 = FUN_000ae1f4();
    iVar3 = 0;
    iVar4 = iVar1;
    do {
      if (*(int *)(iVar4 + 0x18) < 1) {
        iVar3 = *(int *)(iVar1 + iVar3 * 0x1c + 0x14);
        goto LAB_000ae316;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x1c;
    } while (iVar3 != 8);
    iVar3 = 0;
LAB_000ae316:
    iVar1 = *(int *)(param_1 + 0x10);
    uVar2 = FUN_000ae1f4();
    iVar4 = FUN_000adda4(uVar2,*(undefined4 *)(param_1 + 0x10),auStack_1c,auStack_20);
    if ((iVar4 == 0) || (iVar3 != iVar1)) {
      FUN_000ad52c(param_1,0x6c,4,0x3f800000,*(undefined4 *)(param_1 + 0x1c));
      FUN_000ad52c(param_1,0x6c,8,0x3f800000,*(undefined4 *)(param_1 + 0x1c));
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      iVar1 = FUN_000ae1f4();
      iVar3 = 0;
      iVar4 = iVar1;
      do {
        if (*(int *)(param_1 + 0x10) == *(int *)(iVar4 + 0x14)) {
          iVar1 = iVar1 + iVar3 * 0x1c;
          unaff_r7 = *(int *)(iVar1 + 8);
          unaff_r6 = *(int *)(iVar1 + 0xc);
          break;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x1c;
      } while (iVar3 != 8);
      FUN_000ad504(param_1,0x74,0x20,(float)(longlong)unaff_r7,
                   (float)(longlong)(unaff_r7 - *(int *)(param_1 + 0x14)),
                   *(undefined4 *)(param_1 + 0x1c));
      FUN_000ad504(param_1,0x75,0x20,(float)(longlong)unaff_r6,
                   (float)(longlong)(unaff_r6 - *(int *)(param_1 + 0x18)),
                   *(undefined4 *)(param_1 + 0x1c));
      FUN_000ad52c(param_1,0x6c,2,0x3f800000,*(undefined4 *)(param_1 + 0x1c));
      *(int *)(param_1 + 0x14) = unaff_r7;
      *(int *)(param_1 + 0x18) = unaff_r6;
    }
  }
LAB_000ae356:
  uVar2 = FUN_000ae1f4();
  FUN_000adeb4(uVar2,param_1);
  FUN_000adfac(param_1);
  return;
code_r0x000ae2ca:
  *(undefined4 *)(param_1 + 0x10) = 0;
LAB_000ae2ce:
  FUN_000ad52c(param_1,0x6c,8,0x3f800000,*(undefined4 *)(param_1 + 0x1c));
  goto LAB_000ae356;
}



