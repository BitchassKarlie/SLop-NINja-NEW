/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ba764 FUN_000ba764 */

/* WARNING: Removing unreachable block (ram,0x000bab5a) */
/* WARNING: Removing unreachable block (ram,0x000baa28) */
/* WARNING: Removing unreachable block (ram,0x000baaea) */
/* WARNING: Removing unreachable block (ram,0x000ba9a6) */
/* WARNING: Removing unreachable block (ram,0x000baa48) */
/* WARNING: Removing unreachable block (ram,0x000badd2) */
/* WARNING: Removing unreachable block (ram,0x000bab14) */
/* WARNING: Removing unreachable block (ram,0x000baa52) */

uint FUN_000ba764(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 uVar25;
  uint local_b8;
  uint local_b4;
  uint local_a8;
  int iStack_a4;
  int local_94;
  undefined4 local_90;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined auStack_68 [16];
  uint local_58;
  int iStack_54;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined auStack_38 [20];
  
  lVar20 = FUN_000b9750(param_1,0xffffffff);
  uVar16 = (uint)((ulonglong)lVar20 >> 0x20);
  if (1 < *(int *)(param_1 + 0x58)) {
    if (*(int *)(param_1 + 4) == 0) {
      return 0xffffff76;
    }
    uVar13 = 0;
    if ((param_4 != uVar16 && (int)uVar16 <= (int)param_4) ||
       ((param_4 == uVar16 && ((uint)lVar20 < param_3)))) {
      uVar13 = 1;
    }
    if ((uVar13 | param_4 >> 0x1f) == 0) {
      local_94 = *(int *)(param_1 + 0x34) + -1;
      if (local_94 < 0) {
        iVar7 = *(int *)(param_1 + 0x44);
        iVar14 = iVar7 + local_94 * 0x10;
        local_a8 = *(uint *)(iVar14 + 8);
        iStack_a4 = *(int *)(iVar14 + 0xc);
      }
      else {
        iVar7 = *(int *)(param_1 + 0x44);
        iVar14 = iVar7 + local_94 * 0x10;
        plVar8 = (longlong *)(iVar14 + 8);
        local_a8 = *(uint *)plVar8;
        iStack_a4 = *(int *)(iVar14 + 0xc);
        lVar20 = lVar20 - *plVar8;
        uVar16 = (uint)((ulonglong)lVar20 >> 0x20);
        if ((uVar16 != param_4 && (int)param_4 <= (int)uVar16) ||
           ((uVar16 == param_4 && (param_3 < (uint)lVar20)))) {
          plVar8 = (longlong *)(iVar7 + *(int *)(param_1 + 0x34) * 0x10 + -0x18);
          while (bVar19 = local_94 != 0, local_94 = local_94 + -1, bVar19) {
            plVar15 = plVar8 + -2;
            local_a8 = *(uint *)plVar8;
            iStack_a4 = *(int *)((int)plVar8 + 4);
            lVar2 = lVar20 - *plVar8;
            uVar16 = (uint)((ulonglong)lVar2 >> 0x20);
            lVar1 = lVar20 - *plVar8;
            lVar24 = lVar20 - *plVar8;
            plVar8 = plVar15;
            lVar20 = lVar1;
            if ((uVar16 == param_4 || (int)uVar16 < (int)param_4) &&
               ((lVar20 = lVar24, uVar16 != param_4 || (lVar20 = lVar1, (uint)lVar2 <= param_3))))
            goto LAB_000ba7e0;
          }
          local_a8 = *(uint *)(iVar7 + -8);
          iStack_a4 = *(int *)(iVar7 + -4);
        }
      }
LAB_000ba7e0:
      plVar15 = (longlong *)(*(int *)(param_1 + 0x38) + local_94 * 8);
      uVar18 = *(uint *)((int)plVar15 + 0xc);
      lVar2 = plVar15[1];
      local_b8 = *(uint *)plVar15;
      local_b4 = *(uint *)((int)plVar15 + 4);
      lVar24 = *plVar15;
      plVar8 = (longlong *)(iVar7 + local_94 * 0x10);
      uVar17 = *(uint *)plVar8;
      lVar1 = *plVar8;
      uVar16 = param_3 - (uint)lVar20;
      uVar13 = uVar16 + uVar17;
      uVar16 = ((param_4 - (int)((ulonglong)lVar20 >> 0x20)) - (uint)(param_3 < (uint)lVar20)) +
               *(int *)((int)plVar8 + 4) + (uint)CARRY4(uVar16,uVar17);
      if ((uVar18 != local_b4 && (int)local_b4 <= (int)uVar18) ||
         ((uVar10 = uVar16, lVar3 = *plVar15, uVar18 == local_b4 &&
          (uVar10 = local_b8, lVar3 = *plVar15, local_b8 < *(uint *)(plVar15 + 1))))) {
        lVar4 = CONCAT44(*(int *)((int)plVar8 + 4) + iStack_a4 + (uint)CARRY4(uVar17,local_a8),
                         uVar17 + local_a8);
        do {
          iStack_7c = (int)((ulonglong)lVar1 >> 0x20);
          local_80 = (uint)lVar1;
          lVar3 = lVar2 - CONCAT44(local_b4,local_b8);
          if (lVar3 < 0x400) {
LAB_000ba92c:
            lVar21 = CONCAT44(local_b4,local_b8);
          }
          else {
            lVar3 = lVar3 * CONCAT44((uVar16 - iStack_7c) - (uint)(uVar13 < local_80),
                                     uVar13 - local_80);
            local_90 = (undefined4)lVar3;
            lVar21 = __aeabi_ldivmod(local_90,(int)((ulonglong)lVar3 >> 0x20),(int)(lVar4 - lVar1),
                                     (int)((ulonglong)(lVar4 - lVar1) >> 0x20));
            lVar21 = lVar21 + CONCAT44(local_b4 + ((0x3ff < local_b8) - 1),local_b8 - 0x400);
            if (lVar21 <= CONCAT44(local_b4 + (0xfffffc00 < local_b8),local_b8 + 0x3ff))
            goto LAB_000ba92c;
          }
          uVar9 = *(undefined4 *)(longlong *)(param_1 + 8);
          uVar11 = *(undefined4 *)(param_1 + 0xc);
          if (lVar21 == *(longlong *)(param_1 + 8)) goto LAB_000ba950;
          uVar17 = FUN_000b9ed8(param_1,uVar11,(int)lVar21,(int)((ulonglong)lVar21 >> 0x20));
          if ((uVar17 | (int)uVar17 >> 0x1f) != 0) goto LAB_000ba852;
LAB_000ba94c:
          uVar9 = *(undefined4 *)(param_1 + 8);
          uVar11 = *(undefined4 *)(param_1 + 0xc);
LAB_000ba950:
          uVar6 = (ulonglong)lVar2 >> 0x20;
          iVar7 = (int)lVar2;
          lVar3 = lVar2 - CONCAT44(uVar11,uVar9);
          lVar22 = FUN_000b9af0(param_1,auStack_38,(int)lVar3,(int)((ulonglong)lVar3 >> 0x20));
          uVar17 = (uint)lVar22;
          if (lVar22 == -0x80) goto LAB_000ba852;
          lVar3 = lVar24;
          if (lVar22 < 0) {
            lVar22 = CONCAT44(local_b4 + (0xfffffffe < local_b8),local_b8 + 1);
            uVar10 = 0;
            if (lVar21 <= lVar22) break;
            if (lVar21 == 0) goto LAB_000ba852;
            lVar21 = lVar21 + -0x400;
            if (lVar21 + -0x400 <= CONCAT44(local_b4,local_b8)) {
              lVar21 = lVar22;
            }
            uVar17 = FUN_000b9ed8(param_1,local_b4,(int)lVar21,(int)((ulonglong)lVar21 >> 0x20));
            uVar18 = uVar17 | (int)uVar17 >> 0x1f;
joined_r0x000ba9e0:
            if (uVar18 != 0) goto LAB_000ba852;
LAB_000ba980:
            uVar17 = (uint)((ulonglong)lVar2 >> 0x20);
            if ((uVar17 == local_b4 || (int)uVar17 < (int)local_b4) &&
               ((uVar10 = local_b4, lVar3 = lVar24, uVar17 != local_b4 || ((uint)lVar2 <= local_b8))
               )) break;
            goto LAB_000ba94c;
          }
          iVar14 = FUN_000c2ec4(auStack_38);
          if (iVar14 != *(int *)(*(int *)(param_1 + 0x40) + local_94 * 4)) goto LAB_000ba980;
          lVar23 = FUN_000c2e1c(auStack_38);
          uVar18 = (uint)((ulonglong)lVar23 >> 0x20);
          uVar17 = (uint)lVar23;
          if (lVar23 == -1) goto LAB_000ba980;
          if ((uVar16 != uVar18 && (int)uVar18 <= (int)uVar16) ||
             ((uVar16 == uVar18 && (uVar17 < uVar13)))) {
            plVar8 = (longlong *)(param_1 + 8);
            local_b8 = *(uint *)plVar8;
            local_b4 = *(uint *)(param_1 + 0xc);
            lVar24 = lVar22;
            lVar1 = lVar23;
            lVar23 = lVar4;
            if ((0 < (int)((uVar16 - uVar18) - (uint)(uVar13 < uVar17))) ||
               ((lVar21 = *plVar8, uVar16 - uVar18 == (uint)(uVar13 < uVar17) &&
                (lVar21 = *plVar8, 0xac44 < uVar13 - uVar17)))) goto LAB_000baa3e;
            goto LAB_000ba980;
          }
          lVar5 = CONCAT44(local_b4 + (0xfffffffe < local_b8),local_b8 + 1);
          uVar10 = 0;
          if (lVar21 <= lVar5) break;
          lVar2 = lVar21;
          if ((*(int *)(param_1 + 8) == iVar7) && (*(int *)(param_1 + 0xc) == (int)uVar6)) {
            lVar21 = lVar21 + -0x400;
            if (lVar21 + -0x400 <= CONCAT44(local_b4,local_b8)) {
              lVar21 = lVar5;
            }
            uVar17 = FUN_000b9ed8(param_1,0,(int)lVar21,(int)((ulonglong)lVar21 >> 0x20));
            uVar18 = uVar17 | (int)uVar17 >> 0x1f;
            lVar2 = lVar22;
            goto joined_r0x000ba9e0;
          }
LAB_000baa3e:
          uVar10 = uVar18;
          lVar3 = lVar24;
          lVar4 = lVar23;
        } while (CONCAT44(local_b4,local_b8) < lVar2);
      }
      local_74 = (undefined4)((ulonglong)lVar3 >> 0x20);
      local_78 = (undefined4)lVar3;
      uVar17 = FUN_000b9ed8(param_1,uVar10,local_78,local_74);
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      if ((uVar17 | (int)uVar17 >> 0x1f) == 0) {
        lVar24 = FUN_000b9af0(param_1,&local_48,0xffffffff,0xffffffff);
        uVar17 = (uint)lVar24;
        if (-1 < lVar24) {
          if (*(int *)(param_1 + 0x60) == local_94) {
            FUN_000bb9dc(param_1 + 0x1e0);
          }
          else {
            FUN_000b9bdc(param_1);
            *(int *)(param_1 + 0x60) = local_94;
            *(undefined4 *)(param_1 + 0x5c) =
                 *(undefined4 *)(*(int *)(param_1 + 0x40) + local_94 * 4);
            *(undefined4 *)(param_1 + 0x58) = 3;
          }
          iVar7 = param_1 + 0x78;
          FUN_000c3050(iVar7,*(undefined4 *)(param_1 + 0x5c));
          FUN_000c3594(iVar7,&local_48);
          while( true ) {
            uVar16 = FUN_000c3164(iVar7,auStack_68);
            uVar13 = uVar16 | (int)uVar16 >> 0x1f;
            if (uVar13 == 0) break;
            if ((int)uVar16 >> 0x1f < 0) {
              uVar17 = 0xffffff78;
              goto LAB_000ba852;
            }
            if ((local_58 != 0xffffffff) || (iStack_54 != -1)) {
              puVar12 = (uint *)(*(int *)(param_1 + 0x44) + *(int *)(param_1 + 0x60) * 0x10);
              uVar16 = *puVar12;
              iVar7 = (iStack_54 - puVar12[1]) - (uint)(local_58 < uVar16);
              *(uint *)(param_1 + 0x50) = local_58 - uVar16;
              *(int *)(param_1 + 0x54) = iVar7;
              if (iVar7 < 0) {
                *(undefined4 *)(param_1 + 0x50) = 0;
                *(undefined4 *)(param_1 + 0x54) = 0;
              }
              lVar20 = lVar20 + *(longlong *)(param_1 + 0x50);
              *(longlong *)(param_1 + 0x50) = lVar20;
              if (lVar20 <= CONCAT44(param_4,param_3)) {
                uVar25 = FUN_000b9750(param_1,0xffffffff);
                uVar16 = (uint)((ulonglong)uVar25 >> 0x20);
                if ((param_4 == uVar16 || (int)param_4 < (int)uVar16) &&
                   ((param_4 != uVar16 || (param_3 <= (uint)uVar25)))) {
                  *(undefined4 *)(param_1 + 0x68) = 0;
                  *(undefined4 *)(param_1 + 0x6c) = 0;
                  *(undefined4 *)(param_1 + 0x70) = 0;
                  *(undefined4 *)(param_1 + 0x74) = 0;
                  return 0;
                }
              }
              uVar17 = 0xffffff7f;
              goto LAB_000ba852;
            }
            FUN_000c3150(iVar7,0);
          }
          uVar17 = FUN_000b9ed8(param_1,0,local_78,local_74);
          if (-1 < (int)uVar17 >> 0x1f) {
            do {
              uVar16 = *(uint *)(param_1 + 8);
              iVar7 = *(int *)(param_1 + 0xc);
              local_b8 = uVar16;
              local_b4 = iVar7;
              do {
                bVar19 = 0x3ff < local_b8;
                local_b8 = local_b8 - 0x400;
                local_b4 = local_b4 + (bVar19 - 1);
                if ((int)local_b4 < 0) {
                  local_b8 = 0;
                  local_b4 = 0;
                }
                uVar17 = FUN_000b9ed8(param_1,local_b4,local_b8,local_b4);
                lVar20 = (longlong)(int)uVar17;
                if ((uVar17 | (int)uVar17 >> 0x1f) != 0) goto LAB_000baca4;
                uVar9 = 0;
                lVar20 = -1;
                do {
                  lVar24 = lVar20;
                  if ((iVar7 <= *(int *)(param_1 + 0xc)) &&
                     ((*(int *)(param_1 + 0xc) != iVar7 || (uVar16 <= *(uint *)(param_1 + 8)))))
                  break;
                  local_48 = uVar13;
                  local_44 = uVar13;
                  local_40 = uVar13;
                  local_3c = uVar13;
                  lVar20 = FUN_000b9af0(param_1,&local_48,uVar16 - *(uint *)(param_1 + 8),
                                        (iVar7 - *(int *)(param_1 + 0xc)) -
                                        (uint)(uVar16 < *(uint *)(param_1 + 8)));
                  uVar9 = (undefined4)((ulonglong)lVar20 >> 0x20);
                  uVar17 = (uint)lVar20;
                  if (lVar20 == -0x80) goto LAB_000ba852;
                } while (-1 < lVar20);
              } while (lVar24 == -1);
              lVar20 = lVar24;
              if (local_44 == 0) {
                uVar16 = FUN_000b9ed8(param_1,uVar9,(int)lVar24,(int)((ulonglong)lVar24 >> 0x20));
                lVar20 = (longlong)(int)uVar16;
                if (((uVar16 | (int)uVar16 >> 0x1f) == 0) &&
                   (FUN_000b9af0(param_1,&local_48,0x400,0), lVar20 = lVar24, extraout_r1 < 0)) {
                  uVar17 = 0xffffff7f;
                  break;
                }
              }
LAB_000baca4:
              uVar17 = (uint)lVar20;
              if (lVar20 < 0) break;
              iVar7 = FUN_000c2ec4(&local_48);
              if (iVar7 == *(int *)(param_1 + 0x5c)) {
                FUN_000c2e1c(&local_48);
                iVar7 = extraout_r1_00;
                if (-1 < extraout_r1_00) {
LAB_000bada0:
                  uVar16 = FUN_000ba430(param_1,iVar7,uVar17,(int)((ulonglong)lVar20 >> 0x20));
                  return uVar16;
                }
                uVar25 = FUN_000c2df8(&local_48);
                iVar7 = (int)((ulonglong)uVar25 >> 0x20);
                if ((int)uVar25 == 0) goto LAB_000bada0;
              }
              *(longlong *)(param_1 + 8) = lVar20;
            } while( true );
          }
        }
      }
LAB_000ba852:
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      FUN_000b9bdc(param_1);
      return uVar17;
    }
  }
  return 0xffffff7d;
}



