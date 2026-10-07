/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9f18 FUN_000b9f18 */

longlong FUN_000b9f18(int param_1,int *param_2,int param_3,int *param_4,undefined8 *param_5)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  longlong lVar10;
  undefined8 uVar11;
  int local_60;
  uint local_40;
  int iStack_3c;
  undefined auStack_38 [20];
  
  uVar4 = *(uint *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc);
  uVar11 = 0xffffffffffffffff;
  local_60 = -1;
  lVar2 = -1;
  local_40 = uVar4;
  iStack_3c = iVar6;
  do {
    bVar9 = 0x3ff < local_40;
    local_40 = local_40 - 0x400;
    iStack_3c = iStack_3c + (bVar9 - 1);
    if (iStack_3c < 0) {
      local_40 = 0;
      iStack_3c = 0;
    }
    uVar5 = FUN_000b9ed8(param_1,iStack_3c,local_40,iStack_3c);
    if ((uVar5 | (int)uVar5 >> 0x1f) != 0) {
      return (longlong)(int)uVar5;
    }
    lVar3 = -1;
    while( true ) {
      uVar5 = *(uint *)(param_1 + 8);
      iVar7 = *(int *)(param_1 + 0xc);
      if ((iVar6 == iVar7 || iVar6 < iVar7) && ((iVar6 != iVar7 || (uVar4 <= uVar5)))) break;
      lVar10 = FUN_000b9af0(param_1,auStack_38,uVar4 - uVar5,(iVar6 - iVar7) - (uint)(uVar4 < uVar5)
                           );
      if (lVar10 == -0x80) {
        return -0x80;
      }
      if (lVar10 < 0) break;
      local_60 = FUN_000c2ec4(auStack_38);
      uVar11 = FUN_000c2e1c(auStack_38);
      if ((*param_4 == local_60) && (*param_4 >> 0x1f == local_60 >> 0x1f)) {
        *param_5 = uVar11;
        lVar2 = lVar10;
      }
      lVar3 = lVar10;
      if ((param_2 == (int *)0x0) || (param_3 == 0)) {
LAB_000ba026:
        lVar2 = -1;
      }
      else {
        iVar8 = *param_2;
        piVar1 = param_2;
        iVar7 = param_3;
        while (iVar8 != local_60) {
          if (iVar7 == 1) goto LAB_000ba026;
          piVar1 = piVar1 + 1;
          iVar7 = iVar7 + -1;
          iVar8 = *piVar1;
        }
      }
    }
    if (lVar3 != -1) {
      if (lVar2 == -1) {
        *param_4 = local_60;
        *param_5 = uVar11;
        lVar2 = lVar3;
      }
      return lVar2;
    }
  } while( true );
}



