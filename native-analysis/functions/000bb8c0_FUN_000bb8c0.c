/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bb8c0 FUN_000bb8c0 */

uint FUN_000bb8c0(int param_1,undefined2 *param_2,undefined4 param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  int local_2c [2];
  
  iVar5 = *(int *)(param_1 + 0x58);
  if (iVar5 < 2) {
    uVar1 = 0xffffff7d;
  }
  else {
    while ((iVar5 != 4 || (uVar1 = FUN_000bbe98(param_1 + 0x1e0,local_2c), uVar1 == 0))) {
      uVar1 = FUN_000bb2d4(param_1);
      if (uVar1 == 0xfffffffe) {
        return 0;
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      iVar5 = *(int *)(param_1 + 0x58);
    }
    if (0 < (int)uVar1) {
      if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 0x58) < 3)) {
        iVar5 = *(int *)(param_1 + 0x48);
      }
      else {
        iVar5 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x60) * 0x20;
      }
      iVar5 = *(int *)(iVar5 + 4);
      uVar2 = __aeabi_idiv(param_3,iVar5 * 2);
      if ((int)uVar2 <= (int)uVar1) {
        uVar1 = uVar2;
      }
      if (0 < iVar5) {
        puVar9 = param_2 + iVar5;
        iVar8 = 0;
        do {
          iVar7 = *(int *)(local_2c[0] + iVar8);
          if (0 < (int)uVar1) {
            iVar4 = 0;
            puVar3 = param_2;
            do {
              iVar6 = *(int *)(iVar7 + iVar4 * 4) >> 9;
              if (iVar6 < 0x8000) {
                if (iVar6 + 0x8000 < 0 == SCARRY4(iVar6,0x8000)) goto LAB_000bb98a;
                *puVar3 = 0x8000;
              }
              else {
                iVar6 = 0x7fff;
LAB_000bb98a:
                *puVar3 = (short)iVar6;
              }
              if (iVar4 + 1U == uVar1) break;
              iVar4 = iVar4 + 1;
              puVar3 = puVar3 + iVar5;
            } while( true );
          }
          param_2 = param_2 + 1;
          iVar8 = iVar8 + 4;
        } while (param_2 != puVar9);
      }
      FUN_000bbee0(param_1 + 0x1e0,uVar1);
      uVar2 = *(uint *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = uVar2 + uVar1;
      *(uint *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar2,uVar1);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = *(undefined4 *)(param_1 + 0x60);
      }
      uVar1 = iVar5 * 2 * uVar1;
    }
  }
  return uVar1;
}



