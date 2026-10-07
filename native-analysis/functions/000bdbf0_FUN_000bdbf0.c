/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bdbf0 FUN_000bdbf0 */

undefined4 FUN_000bdbf0(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar1 = DAT_000bdd14;
  piVar7 = param_1 + 1;
  iVar8 = *(int *)(param_1[0x10] + 4);
  iVar10 = *(int *)(param_1[0x10] + 0x48);
  iVar9 = *(int *)(iVar8 + 0x1c);
  FUN_000bc174();
  FUN_000c2ab8(piVar7,*param_2,param_2[1]);
  iVar2 = FUN_000c28b4(piVar7,1);
  if (iVar2 != 0) {
    return 0xffffff79;
  }
  iVar2 = FUN_000c28b4(piVar7,*(undefined4 *)(iVar10 + 8));
  if (iVar2 == -1) {
LAB_000bdd0e:
    uVar4 = 0xffffff78;
  }
  else {
    param_1[10] = iVar2;
    iVar5 = **(int **)(iVar9 + (iVar2 + 8) * 4);
    param_1[7] = iVar5;
    if (iVar5 == 0) {
      param_1[6] = 0;
      param_1[8] = 0;
    }
    else {
      iVar5 = FUN_000c28b4(piVar7,1);
      param_1[6] = iVar5;
      iVar5 = FUN_000c28b4(piVar7,1);
      param_1[8] = iVar5;
      if (iVar5 == -1) goto LAB_000bdd0e;
    }
    iVar5 = param_2[5];
    param_1[0xc] = param_2[4];
    param_1[0xd] = iVar5;
    uVar3 = param_2[6];
    iVar5 = param_2[7];
    param_1[0xe] = uVar3 - 3;
    param_1[0xf] = iVar5 + ((2 < uVar3) - 1);
    param_1[0xb] = param_2[3];
    if (param_3 == 0) {
      param_1[9] = 0;
      *param_1 = 0;
      uVar4 = 0;
    }
    else {
      param_1[9] = *(int *)(iVar9 + param_1[7] * 4);
      iVar5 = FUN_000bc128(param_1,*(int *)(iVar8 + 4) << 2);
      *param_1 = iVar5;
      if (0 < *(int *)(iVar8 + 4)) {
        iVar6 = 0;
        while( true ) {
          uVar4 = FUN_000bc128(param_1,param_1[9] << 2);
          *(undefined4 *)(iVar5 + iVar6 * 4) = uVar4;
          iVar6 = iVar6 + 1;
          if (*(int *)(iVar8 + 4) <= iVar6) break;
          iVar5 = *param_1;
        }
      }
      uVar4 = (**(code **)(*(int *)(*(int *)(iVar1 + 0xbdc1c + DAT_000bdd18) +
                                   *(int *)(iVar9 + (*(int *)(*(int *)(iVar9 + (iVar2 + 8) * 4) +
                                                             0xc) + 0x48) * 4) * 4) + 0x10))
                        (param_1,*(undefined4 *)(*(int *)(iVar10 + 0xc) + iVar2 * 4));
    }
  }
  return uVar4;
}



