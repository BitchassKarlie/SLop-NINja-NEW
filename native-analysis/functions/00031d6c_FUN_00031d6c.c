/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00031d6c FUN_00031d6c */

void FUN_00031d6c(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float extraout_s15;
  float fVar11;
  
  iVar4 = DAT_00031e10;
  iVar8 = DAT_00031e14 + 0x31d8c;
  if (*(float *)(DAT_00031e10 + 0x31e6e) <= 0.0) {
    uVar5 = FUN_000a3a68();
    uVar7 = *(undefined4 *)(DAT_00031e18 + 0x31da0 + param_1 * 0xc);
    uVar9 = *(undefined4 *)(DAT_00031e18 + 0x31da0 + param_1 * 4 + 0x60);
    uVar10 = *(undefined4 *)(*(int *)(iVar8 + DAT_00031e1c) + 0x50);
    uVar6 = FUN_0008f414(uVar9);
    iVar8 = FUN_00072d2c(uVar10,uVar9,uVar6,1,1,1);
    FUN_000a4ca4(uVar5,uVar7,iVar8,iVar8 >> 0x1f,0,0);
    bVar1 = param_2 < 0.0;
    bVar2 = param_2 == 0.0;
    bVar3 = NAN(param_2);
    fVar11 = extraout_s15;
    if (!bVar2 && bVar1 == bVar3) {
      fVar11 = DAT_00031e08;
    }
    if (bVar2 || bVar1 != bVar3) {
      fVar11 = DAT_00031e0c;
    }
    if (!bVar2 && bVar1 == bVar3) {
      param_2 = param_2 + fVar11;
    }
    if (bVar2 || bVar1 != bVar3) {
      *(float *)(iVar4 + 0x31e6e) = fVar11;
    }
    if (!bVar2 && bVar1 == bVar3) {
      *(float *)(iVar4 + 0x31e6e) = param_2;
    }
  }
  return;
}



