/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000767b0 FUN_000767b0 */

undefined4 * FUN_000767b0(undefined4 *param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 local_24 [2];
  
  iVar5 = DAT_00076840 + 0x767be;
  *param_1 = 0;
  if (param_2 < 0x19) {
    puVar6 = *(uint **)(iVar5 + DAT_00076848);
    uVar2 = (uint)**(byte **)(DAT_00076844 + param_2 * 0x1c + 0x76830);
    lVar1 = (ulonglong)*puVar6 * (ulonglong)puVar6[2] +
            CONCAT44(puVar6[2] * puVar6[1] + *puVar6 * puVar6[3],puVar6[4]);
    uVar7 = puVar6[5] + (int)((ulonglong)lVar1 >> 0x20);
    uVar3 = uVar2 - 0x31;
    *puVar6 = (uint)lVar1;
    puVar6[1] = uVar7;
    uVar4 = uVar3;
    if (0xfffffffd < uVar3) {
      uVar4 = uVar7;
    }
    lVar1 = CONCAT44(puVar6,uVar4);
    if (uVar3 < 0xfffffffe) {
      lVar1 = (ulonglong)(uVar2 - 0x30) * (ulonglong)uVar7;
    }
    iVar5 = (int)lVar1;
    if (uVar3 < 0xfffffffe) {
      iVar5 = (int)((ulonglong)lVar1 >> 0x20);
    }
    FUN_0002fa48(local_24,*(undefined4 *)(&UNK_0007688a + DAT_0007684c + (iVar5 + param_2 * 7) * 4))
    ;
    FUN_00017d64(param_1,local_24[0]);
    FUN_00017d90(local_24);
  }
  return param_1;
}



