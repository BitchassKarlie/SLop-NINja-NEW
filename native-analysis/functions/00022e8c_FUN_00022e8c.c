/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00022e8c FUN_00022e8c */

void FUN_00022e8c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float fVar8;
  undefined auStack_4830 [18432];
  undefined4 local_30;
  undefined4 local_2c;
  undefined *local_28;
  int local_24 [2];
  
  iVar5 = DAT_00022fbc + 0x22ea2;
  if (*(int *)(DAT_00022fb8 + 0x22ec6) != 0) {
    local_30 = 0;
    local_2c = 0;
    uVar1 = FUN_0001c940();
    iVar2 = FUN_0001bd8c(uVar1,0,&local_30);
    local_24[0] = 0;
    local_28 = auStack_4830;
    if (iVar2 != 0) {
      do {
        while( true ) {
          fVar8 = *(float *)(iVar2 + 0x28);
          if (fVar8 == 0.0 || fVar8 < 0.0 != NAN(fVar8)) break;
          FUN_00022bf4(iVar2,&local_28,local_24);
          uVar1 = FUN_0001c940();
          iVar2 = FUN_0001bdb8(uVar1,0,&local_30);
          if (iVar2 == 0) goto LAB_00022f20;
        }
        uVar1 = FUN_0001c940();
        iVar2 = FUN_0001bdb8(uVar1,0,&local_30);
      } while (iVar2 != 0);
    }
LAB_00022f20:
    iVar2 = DAT_00022fc4;
    iVar7 = *(int *)(iVar5 + DAT_00022fc0);
    puVar6 = (undefined4 *)(DAT_00022fc4 + 0x22f2e);
    *(undefined *)(iVar7 + 0x18d4) = 0;
    uVar1 = *(undefined4 *)(iVar2 + 0x22f32);
    uVar3 = *(undefined4 *)(iVar2 + 0x22f36);
    uVar4 = *(undefined4 *)(iVar2 + 0x22f3a);
    *(undefined4 *)(iVar7 + 0x1094) = *puVar6;
    *(undefined4 *)(iVar7 + 0x1098) = uVar1;
    *(undefined4 *)(iVar7 + 0x109c) = uVar3;
    *(undefined4 *)(iVar7 + 0x10a0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x22f42);
    uVar3 = *(undefined4 *)(iVar2 + 0x22f46);
    uVar4 = *(undefined4 *)(iVar2 + 0x22f4a);
    *(undefined4 *)(iVar7 + 0x10a4) = *(undefined4 *)(iVar2 + 0x22f3e);
    *(undefined4 *)(iVar7 + 0x10a8) = uVar1;
    *(undefined4 *)(iVar7 + 0x10ac) = uVar3;
    *(undefined4 *)(iVar7 + 0x10b0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x22f52);
    uVar3 = *(undefined4 *)(iVar2 + 0x22f56);
    uVar4 = *(undefined4 *)(iVar2 + 0x22f5a);
    *(undefined4 *)(iVar7 + 0x10b4) = *(undefined4 *)(iVar2 + 0x22f4e);
    *(undefined4 *)(iVar7 + 0x10b8) = uVar1;
    *(undefined4 *)(iVar7 + 0x10bc) = uVar3;
    *(undefined4 *)(iVar7 + 0x10c0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x22f62);
    uVar3 = *(undefined4 *)(iVar2 + 0x22f66);
    uVar4 = *(undefined4 *)(iVar2 + 0x22f6a);
    *(undefined4 *)(iVar7 + 0x10c4) = *(undefined4 *)(iVar2 + 0x22f5e);
    *(undefined4 *)(iVar7 + 0x10c8) = uVar1;
    *(undefined4 *)(iVar7 + 0x10cc) = uVar3;
    *(undefined4 *)(iVar7 + 0x10d0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x22f32);
    uVar3 = *(undefined4 *)(iVar2 + 0x22f36);
    uVar4 = *(undefined4 *)(iVar2 + 0x22f3a);
    *(undefined4 *)(iVar7 + 0x1894) = *puVar6;
    *(undefined4 *)(iVar7 + 0x1898) = uVar1;
    *(undefined4 *)(iVar7 + 0x189c) = uVar3;
    *(undefined4 *)(iVar7 + 0x18a0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x22f42);
    uVar3 = *(undefined4 *)(iVar2 + 0x22f46);
    uVar4 = *(undefined4 *)(iVar2 + 0x22f4a);
    *(undefined4 *)(iVar7 + 0x18a4) = *(undefined4 *)(iVar2 + 0x22f3e);
    *(undefined4 *)(iVar7 + 0x18a8) = uVar1;
    *(undefined4 *)(iVar7 + 0x18ac) = uVar3;
    *(undefined4 *)(iVar7 + 0x18b0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x22f52);
    uVar3 = *(undefined4 *)(iVar2 + 0x22f56);
    uVar4 = *(undefined4 *)(iVar2 + 0x22f5a);
    *(undefined4 *)(iVar7 + 0x18b4) = *(undefined4 *)(iVar2 + 0x22f4e);
    *(undefined4 *)(iVar7 + 0x18b8) = uVar1;
    *(undefined4 *)(iVar7 + 0x18bc) = uVar3;
    *(undefined4 *)(iVar7 + 0x18c0) = uVar4;
    iVar5 = DAT_00022fc8;
    uVar1 = *(undefined4 *)(iVar2 + 0x22f62);
    uVar3 = *(undefined4 *)(iVar2 + 0x22f66);
    uVar4 = *(undefined4 *)(iVar2 + 0x22f6a);
    *(undefined4 *)(iVar7 + 0x18c4) = *(undefined4 *)(iVar2 + 0x22f5e);
    *(undefined4 *)(iVar7 + 0x18c8) = uVar1;
    *(undefined4 *)(iVar7 + 0x18cc) = uVar3;
    *(undefined4 *)(iVar7 + 0x18d0) = uVar4;
    *(int *)(iVar7 + 0x18d8) = *(int *)(iVar7 + 0x18d8) + 1;
    FUN_0008d434(iVar7,1);
    FUN_000995e4(*(undefined4 *)(iVar5 + 0x22fa4));
    FUN_000a3434(auStack_4830,local_24[0] * 6 + -1,0);
    FUN_000995e0(*(undefined4 *)(iVar5 + 0x22fa4));
  }
  return;
}



