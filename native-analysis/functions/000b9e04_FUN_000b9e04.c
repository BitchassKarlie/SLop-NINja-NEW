/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9e04 FUN_000b9e04 */

longlong FUN_000b9e04(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  longlong lVar8;
  uint local_60;
  int iStack_5c;
  undefined auStack_58 [32];
  undefined auStack_38 [20];
  
  iVar6 = *(int *)(param_1 + 0x1c8);
  iVar4 = param_1 + 0x78;
  iVar5 = -1;
  local_60 = 0;
  iStack_5c = 0;
LAB_000b9e3a:
  do {
    FUN_000b9af0(param_1,auStack_38,0xffffffff,0xffffffff);
    lVar8 = CONCAT44(iStack_5c,local_60);
    if ((extraout_r1 < 0) ||
       (iVar2 = FUN_000c2e04(auStack_38), lVar8 = CONCAT44(iStack_5c,local_60), iVar2 != 0)) {
LAB_000b9e4e:
      if (lVar8 < 0) {
        lVar8 = 0;
      }
      return lVar8;
    }
    iVar2 = FUN_000c2ec4(auStack_38);
    if (iVar2 == iVar6) {
      FUN_000c3594(iVar4,auStack_38);
      do {
        iVar2 = FUN_000c3150(iVar4,auStack_58);
        while( true ) {
          if (iVar2 == 0) {
            lVar8 = FUN_000c2e1c(auStack_38);
            if (lVar8 == -1) goto LAB_000b9e3a;
            lVar8 = FUN_000c2e1c(auStack_38);
            lVar8 = lVar8 - CONCAT44(iStack_5c,local_60);
            goto LAB_000b9e4e;
          }
          if (iVar2 < 1) break;
          iVar3 = FUN_000bdb94(param_2,auStack_58);
          if (iVar5 != -1) {
            uVar1 = iVar5 + iVar3 >> 2;
            bVar7 = CARRY4(local_60,uVar1);
            local_60 = local_60 + uVar1;
            iStack_5c = iStack_5c + (iVar5 + iVar3 >> 0x1f) + (uint)bVar7;
          }
          iVar2 = FUN_000c3150(iVar4,auStack_58);
          iVar5 = iVar3;
        }
      } while( true );
    }
  } while( true );
}



