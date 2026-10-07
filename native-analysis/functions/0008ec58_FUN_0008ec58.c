/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008ec58 FUN_0008ec58 */

int FUN_0008ec58(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  bool bVar11;
  byte *local_28;
  byte *local_24;
  
  iVar5 = DAT_0008edc0;
  iVar10 = DAT_0008edbc + 0x8ec6c;
  uVar8 = (uint)*param_1;
  local_28 = param_2;
  if ((uVar8 != 0) && (*param_2 != 0)) {
    local_24 = param_1;
    do {
      pbVar9 = local_24;
      if (uVar8 == 0x3f) {
        uVar4 = 1;
        local_28 = local_28 + 1;
      }
      else if (uVar8 == 0x5b) {
        pbVar9 = local_24 + 1;
        bVar7 = local_24[1];
        bVar11 = bVar7 == 0x21;
        if (bVar11) {
          pbVar9 = local_24 + 2;
          bVar7 = *pbVar9;
        }
        bVar3 = 1;
        uVar4 = 0;
        local_24 = pbVar9;
        do {
          if (uVar4 == 0) {
            if (bVar7 == 0x2d) {
              bVar1 = local_24[1];
              if (bVar1 <= local_24[-1]) goto LAB_0008ed46;
              bVar2 = (bool)(bVar3 ^ 1);
              if (bVar1 == 0x5d) {
                bVar2 = false;
              }
              if (!bVar2) goto LAB_0008ed46;
              if ((local_24[-1] <= *local_28) && (*local_28 <= bVar1)) {
                uVar4 = 1;
                local_24 = local_24 + 1;
              }
            }
            else {
LAB_0008ed46:
              if (*local_28 == bVar7) goto LAB_0008ed70;
            }
          }
          else {
LAB_0008ed70:
            uVar4 = 1;
          }
          pbVar9 = local_24 + 1;
          bVar7 = local_24[1];
          bVar3 = 0;
          local_24 = pbVar9;
        } while (bVar7 != 0x5d);
        if (bVar11) {
          uVar4 = 1 - uVar4;
        }
        if (uVar4 == 1) {
          local_28 = local_28 + 1;
        }
      }
      else if (uVar8 == 0x2a) {
        uVar4 = FUN_0008edc4(&local_24,&local_28);
        pbVar9 = local_24 + -1;
      }
      else {
        iVar6 = **(int **)(iVar10 + iVar5);
        uVar4 = (uint)(*(short *)(iVar6 + (uVar8 + 1) * 2) ==
                      *(short *)(iVar6 + (*local_28 + 1) * 2));
        local_28 = local_28 + 1;
      }
      param_1 = pbVar9 + 1;
      uVar8 = (uint)pbVar9[1];
      bVar11 = uVar4 == 1;
      if (uVar8 == 0 || !bVar11) goto LAB_0008ec7a;
      local_24 = param_1;
    } while (*local_28 != 0);
  }
  bVar11 = true;
  uVar4 = 1;
LAB_0008ec7a:
  while( true ) {
    bVar2 = bVar11;
    if (uVar8 != 0x2a) {
      bVar2 = false;
    }
    if (!bVar2) break;
    param_1 = param_1 + 1;
    uVar8 = (uint)*param_1;
  }
  if ((uVar4 == 1) && (*local_28 == 0)) {
    iVar5 = 1 - uVar8;
    if (1 < uVar8) {
      iVar5 = 0;
    }
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}



