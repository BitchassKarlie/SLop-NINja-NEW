/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003113c FUN_0003113c */

int FUN_0003113c(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(int *)(param_2 + 4) == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    iVar6 = *(int *)(param_2 + 0x14);
  }
  else {
    iVar4 = FUN_00030c90();
    *(int *)(param_1 + 4) = iVar4;
    iVar6 = iVar4;
    while (iVar3 = iVar4, iVar3 != 0) {
      iVar6 = iVar3;
      iVar4 = *(int *)(iVar3 + 0x54);
    }
    *(int *)(param_1 + 8) = iVar6;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    iVar6 = *(int *)(param_2 + 0x14);
  }
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    iVar6 = 0;
  }
  else {
    iVar4 = FUN_00030c90(param_1 + 0x10);
    *(int *)(param_1 + 0x14) = iVar4;
    iVar6 = iVar4;
    while (iVar3 = iVar4, iVar3 != 0) {
      iVar6 = iVar3;
      iVar4 = *(int *)(iVar3 + 0x54);
    }
  }
  *(int *)(param_1 + 0x18) = iVar6;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined *)(param_1 + 0x20) = *(undefined *)(param_2 + 0x20);
  *(undefined *)(param_1 + 0x21) = *(undefined *)(param_2 + 0x21);
  *(undefined *)(param_1 + 0x22) = *(undefined *)(param_2 + 0x22);
  FUN_00030e20(param_1 + 0x24,param_2 + 0x24);
  *(undefined *)(param_1 + 0x30) = *(undefined *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  uVar9 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  *(undefined4 *)(param_1 + 0x44) = uVar9;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined *)(param_1 + 0x54) = *(undefined *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  memcpy((void *)(param_1 + 100),(void *)(param_2 + 100),0x80);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0xec);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined *)(param_1 + 0x110) = *(undefined *)(param_2 + 0x110);
  *(undefined *)(param_1 + 0x111) = *(undefined *)(param_2 + 0x111);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  uVar7 = FUN_00030f60(param_1 + 0x134);
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x138) = uVar7;
  FUN_0003100c(param_1 + 0x134,param_2 + 0x134);
  if (*(int *)(param_2 + 0x144) == 0) {
    *(undefined4 *)(param_1 + 0x144) = 0;
    iVar6 = 0;
  }
  else {
    iVar4 = FUN_00031088(param_1 + 0x140);
    *(int *)(param_1 + 0x144) = iVar4;
    iVar6 = iVar4;
    while (iVar3 = iVar4, iVar3 != 0) {
      iVar6 = iVar3;
      iVar4 = *(int *)(iVar3 + 0x90);
    }
  }
  *(int *)(param_1 + 0x148) = iVar6;
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_2 + 0x14c);
  if (*(int *)(param_2 + 0x154) == 0) {
    *(undefined4 *)(param_1 + 0x154) = 0;
    iVar6 = 0;
  }
  else {
    iVar4 = FUN_00031088(param_1 + 0x150);
    *(int *)(param_1 + 0x154) = iVar4;
    iVar6 = iVar4;
    while (iVar3 = iVar4, iVar3 != 0) {
      iVar6 = iVar3;
      iVar4 = *(int *)(iVar3 + 0x90);
    }
  }
  *(int *)(param_1 + 0x158) = iVar6;
  iVar4 = param_2 + 0x16c;
  iVar6 = param_1 + 0x16c;
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x160);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  do {
    while (*(int *)(iVar4 + 4) == 0) {
      *(undefined4 *)(iVar6 + 4) = 0;
      *(undefined4 *)(iVar6 + 8) = 0;
      puVar1 = (undefined4 *)(iVar4 + 0xc);
      iVar4 = iVar4 + 0x10;
      *(undefined4 *)(iVar6 + 0xc) = *puVar1;
      iVar6 = iVar6 + 0x10;
      if (iVar4 == param_2 + 0x1ac) goto LAB_00031366;
    }
    iVar5 = FUN_000310f4(iVar6);
    *(int *)(iVar6 + 4) = iVar5;
    iVar3 = iVar5;
    while (iVar2 = iVar5, iVar2 != 0) {
      iVar3 = iVar2;
      iVar5 = *(int *)(iVar2 + 0x10);
    }
    *(int *)(iVar6 + 8) = iVar3;
    puVar1 = (undefined4 *)(iVar4 + 0xc);
    iVar4 = iVar4 + 0x10;
    *(undefined4 *)(iVar6 + 0xc) = *puVar1;
    iVar6 = iVar6 + 0x10;
  } while (iVar4 != param_2 + 0x1ac);
LAB_00031366:
  *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  uVar7 = *(undefined4 *)(param_2 + 0x1b8);
  uVar8 = *(undefined4 *)(param_2 + 0x1bc);
  uVar9 = *(undefined4 *)(param_2 + 0x1c0);
  *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(param_2 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1b8) = uVar7;
  *(undefined4 *)(param_1 + 0x1bc) = uVar8;
  *(undefined4 *)(param_1 + 0x1c0) = uVar9;
  uVar7 = *(undefined4 *)(param_2 + 0x1c8);
  uVar8 = *(undefined4 *)(param_2 + 0x1cc);
  uVar9 = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x1c4);
  *(undefined4 *)(param_1 + 0x1c8) = uVar7;
  *(undefined4 *)(param_1 + 0x1cc) = uVar8;
  *(undefined4 *)(param_1 + 0x1d0) = uVar9;
  uVar7 = *(undefined4 *)(param_2 + 0x1d8);
  uVar8 = *(undefined4 *)(param_2 + 0x1dc);
  *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x1d8) = uVar7;
  *(undefined4 *)(param_1 + 0x1dc) = uVar8;
  return param_1;
}



