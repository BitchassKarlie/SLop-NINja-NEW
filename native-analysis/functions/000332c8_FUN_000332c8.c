/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000332c8 FUN_000332c8 */

void FUN_000332c8(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  int local_48;
  undefined4 local_44;
  undefined4 local_40 [8];
  undefined local_20;
  int local_1c;
  
  iVar3 = DAT_000333b8;
  iVar2 = DAT_000333b4;
  iVar8 = DAT_000333b0 + 0x332da;
  piVar6 = *(int **)(iVar8 + DAT_000333b4);
  iVar9 = *(int *)(iVar8 + DAT_000333b8);
  *(undefined4 *)(iVar9 + 0xc) = DAT_000333a4;
  local_1c = *piVar6;
  *(undefined *)(iVar9 + 9) = 1;
  uVar4 = FUN_00086780();
  FUN_00087e10(uVar4,0x3f800000);
  iVar5 = DAT_000333c0;
  iVar7 = DAT_000333bc;
  *(undefined *)(iVar9 + 8) = 1;
  uVar4 = DAT_000333ac;
  fVar1 = DAT_000333a8;
  piVar6 = *(int **)(iVar8 + iVar7);
  iVar7 = **(int **)(iVar8 + iVar5);
  if (0 < *piVar6) {
    iVar5 = 0;
    while( true ) {
      fVar10 = *(float *)(iVar7 + 0x68);
      *(undefined4 *)(iVar7 + 0x6c) = uVar4;
      if (fVar10 != fVar1 && fVar10 < fVar1 == (NAN(fVar10) || NAN(fVar1))) {
        fVar10 = fVar1;
      }
      iVar5 = iVar5 + 1;
      *(float *)(iVar7 + 0x68) = fVar10;
      if (*piVar6 <= iVar5) break;
      iVar7 = iVar7 + 0x78;
    }
  }
  if (*(int *)(DAT_000333c4 + 0x3342c) != 0) {
    FUN_000a5ce0(*(int *)(DAT_000333c4 + 0x3342c),0);
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar8 + iVar3) + 0x18c);
  local_48 = DAT_000333c8 + 0x33368;
  local_44 = *(undefined4 *)(iVar8 + DAT_000333cc);
  local_20 = 1;
  local_40[0] = 0;
  (**(code **)(DAT_000333c8 + 0x33370))(&local_48,local_40);
  FUN_00073a7c(uVar4,DAT_000333d0 + 0x33384,0x3f800000,local_40);
  FUN_0001d388(local_40);
  if (local_1c == **(int **)(iVar8 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



