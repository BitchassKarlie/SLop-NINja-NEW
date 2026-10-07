/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1f2c FUN_000b1f2c */

void FUN_000b1f2c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined4 local_30;
  int local_2c;
  
  iVar3 = DAT_000b20c4;
  iVar2 = DAT_000b20c0;
  iVar1 = DAT_000b20bc;
  iVar11 = DAT_000b20b4 + 0xb1f3a;
  iVar6 = *(int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x5c) != 0) {
    do {
      iVar10 = iVar6;
      iVar6 = *(int *)(iVar10 + 0x40);
    } while (iVar6 != 0);
    iVar7 = DAT_000b20b8 + 0xb1f88;
    iVar6 = DAT_000b20cc + 0xb1f6e;
    iVar8 = DAT_000b20c8 + 0xb1f6e;
LAB_000b1f72:
    do {
      piVar12 = (int *)(iVar2 + 0xb1f78);
      if ((-1 < *piVar12 << 0x1f) && (iVar5 = __cxa_guard_acquire(piVar12), iVar5 != 0)) {
        iVar5 = iVar2 + 0xb1f7c;
        FUN_0009e838(iVar5,iVar6);
        __cxa_guard_release(piVar12);
        __aeabi_atexit(iVar5,*(undefined4 *)(iVar11 + iVar1),*(undefined4 *)(iVar11 + DAT_000b20d0))
        ;
      }
      if (-1 < *(int *)(iVar3 + 0xb1fae) << 0x1f) {
        iVar5 = __cxa_guard_acquire(iVar3 + 0xb1fae);
        if (iVar5 != 0) {
          FUN_0009e838(iVar3 + 0xb1fb2,DAT_000b20d4 + 0xb2082);
          __cxa_guard_release(iVar3 + 0xb1fae);
          __aeabi_atexit(iVar3 + 0xb1fb2,*(undefined4 *)(iVar11 + iVar1),
                         *(undefined4 *)(iVar11 + DAT_000b20d0));
        }
      }
      iVar13 = 0;
      local_30 = 0;
      local_2c = 0;
      iVar4 = FUN_000b15c8(iVar10 + 0x2c,param_2,&local_30);
      iVar5 = local_2c;
      if ((iVar4 == 0) || (local_2c == 0)) {
        iVar5 = FUN_00093c34(iVar10,param_2);
        if (iVar5 != 0) {
          FUN_00093c34(param_3,iVar7);
        }
LAB_000b1fa8:
        iVar5 = *(int *)(iVar10 + 0x44);
      }
      else {
        iVar4 = FUN_00093c34(param_3,iVar8);
        if ((iVar4 == 0) || (iVar5 = *(int *)(iVar5 + 0x28), iVar5 == 0)) goto LAB_000b1fa8;
        uVar14 = *(undefined4 *)(iVar5 + 8);
        if (*(int *)(iVar5 + 4) == 5) {
          iVar13 = FUN_000a0608(*(int *)(iVar5 + 0xc) + 0x28,*(undefined4 *)(iVar5 + 0x10));
        }
        if (iVar13 == 0) goto LAB_000b1fa8;
        FUN_000b1a7c(param_4);
        puVar9 = *(undefined4 **)(param_4 + 8);
        *puVar9 = 0;
        puVar9[1] = iVar13;
        puVar9[2] = uVar14;
        *(int *)(param_4 + 8) = *(int *)(param_4 + 8) + 0xc;
        iVar5 = *(int *)(iVar10 + 0x44);
      }
      if (iVar5 == 0) {
        iVar5 = *(int *)(iVar10 + 0x48);
        if (iVar5 == 0) {
          return;
        }
        bVar15 = *(int *)(iVar5 + 0x44) == iVar10;
        iVar10 = iVar5;
        if (bVar15) {
          do {
            iVar10 = *(int *)(iVar5 + 0x48);
            if (iVar10 == 0) {
              return;
            }
            bVar15 = *(int *)(iVar10 + 0x44) == iVar5;
            iVar5 = iVar10;
          } while (bVar15);
        }
        goto LAB_000b1f72;
      }
      do {
        iVar10 = iVar5;
        iVar5 = *(int *)(iVar10 + 0x40);
      } while (*(int *)(iVar10 + 0x40) != 0);
    } while (iVar10 != 0);
  }
  return;
}



