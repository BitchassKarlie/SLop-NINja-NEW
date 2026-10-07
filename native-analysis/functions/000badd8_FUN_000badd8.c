/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000badd8 FUN_000badd8 */

/* WARNING: Removing unreachable block (ram,0x000bae98) */

undefined4 FUN_000badd8(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (1 < *(int *)(param_1 + 0x58)) {
    if (*(int *)(param_1 + 4) == 0) {
      return 0xffffff76;
    }
    if (-1 < param_4) {
      iVar6 = *(int *)(param_1 + 0x34);
      if (iVar6 < 1) {
        uVar8 = 0;
        iVar9 = 0;
        lVar11 = 0;
        iVar3 = 0;
      }
      else {
        iVar4 = 8;
        uVar8 = 0;
        iVar9 = 0;
        iVar3 = 0;
        lVar12 = 0;
        do {
          lVar11 = FUN_000b97b0(param_1,iVar3);
          lVar11 = lVar11 + lVar12;
          if (CONCAT44(param_4,param_3) < lVar11) {
            iVar6 = *(int *)(param_1 + 0x34);
            lVar11 = lVar12;
            break;
          }
          puVar7 = (uint *)(*(int *)(param_1 + 0x44) + iVar4);
          uVar2 = *puVar7;
          iVar6 = *(int *)(param_1 + 0x34);
          bVar10 = CARRY4(uVar8,uVar2);
          uVar8 = uVar8 + uVar2;
          iVar9 = iVar9 + puVar7[1] + (uint)bVar10;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x10;
          lVar12 = lVar11;
        } while (iVar3 < iVar6);
      }
      if (iVar6 != iVar3) {
        uVar5 = param_3 - (uint)lVar11;
        uVar2 = *(uint *)(*(int *)(param_1 + 0x48) + iVar3 * 0x20 + 8);
        lVar12 = (ulonglong)uVar5 * (ulonglong)uVar2;
        lVar12 = __aeabi_ldivmod((int)lVar12,
                                 uVar2 * ((param_4 - (int)((ulonglong)lVar11 >> 0x20)) -
                                         (uint)(param_3 < (uint)lVar11)) +
                                 uVar5 * ((int)uVar2 >> 0x1f) + (int)((ulonglong)lVar12 >> 0x20),
                                 1000,0);
        lVar11 = lVar12 + CONCAT44(iVar9,uVar8);
        uVar1 = FUN_000ba764(param_1,(int)((ulonglong)lVar12 >> 0x20),(int)lVar11,
                             (int)((ulonglong)lVar11 >> 0x20));
        return uVar1;
      }
    }
  }
  return 0xffffff7d;
}



