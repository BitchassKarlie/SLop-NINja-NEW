/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ab2b8 FUN_000ab2b8 */

int FUN_000ab2b8(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar7 = *param_1;
    uVar6 = 0;
    while (uVar6 != uVar7) {
      uVar4 = uVar7 + uVar6 >> 1;
      iVar2 = uVar4 + (uVar7 + uVar6 & 0xfffffffe);
      uVar3 = *(uint *)(uVar5 + iVar2 * 4);
      while (uVar1 = uVar4, param_2 < uVar3) {
        if (uVar6 == uVar1) {
          return 0;
        }
        uVar4 = uVar1 + uVar6 >> 1;
        iVar2 = uVar4 + (uVar1 + uVar6 & 0xfffffffe);
        uVar7 = uVar1;
        uVar3 = *(uint *)(uVar5 + iVar2 * 4);
      }
      if (param_2 <= uVar3) {
        return uVar5 + iVar2 * 4;
      }
      uVar6 = uVar1 + 1;
    }
  }
  return 0;
}



