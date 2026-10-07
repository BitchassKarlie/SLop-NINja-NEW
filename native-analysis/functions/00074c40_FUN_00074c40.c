/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00074c40 FUN_00074c40 */

undefined4 FUN_00074c40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  bool bVar10;
  
  if (*(char *)(param_1 + 0x20) != '\0') {
    puVar5 = *(undefined4 **)(param_1 + 4);
    if (*(undefined4 **)(param_1 + 4) == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      do {
        puVar7 = (undefined4 *)puVar5[3];
        puVar6 = puVar5;
        puVar5 = puVar7;
      } while (puVar7 != (undefined4 *)0x0);
      do {
        while( true ) {
          iVar3 = FUN_00074488(*puVar6);
          puVar6[1] = iVar3;
          puVar7 = (undefined4 *)((int)puVar7 + iVar3);
          puVar5 = (undefined4 *)puVar6[4];
          if ((undefined4 *)puVar6[4] != (undefined4 *)0x0) break;
          puVar5 = (undefined4 *)puVar6[5];
          if (puVar5 == (undefined4 *)0x0) goto LAB_00074c7a;
          bVar10 = puVar6 == (undefined4 *)puVar5[4];
          puVar6 = puVar5;
          if (bVar10) {
            do {
              puVar6 = (undefined4 *)puVar5[5];
              if (puVar6 == (undefined4 *)0x0) goto LAB_00074c7a;
              bVar10 = (undefined4 *)puVar6[4] == puVar5;
              puVar5 = puVar6;
            } while (bVar10);
          }
        }
        do {
          puVar6 = puVar5;
          puVar5 = (undefined4 *)puVar6[3];
        } while ((undefined4 *)puVar6[3] != (undefined4 *)0x0);
      } while (puVar6 != (undefined4 *)0x0);
    }
LAB_00074c7a:
    iVar4 = *(int *)(param_1 + 0x14);
    iVar3 = *(int *)(param_1 + 0x18);
    if ((iVar3 - iVar4 >> 3) * -0x3d70a3d7 != 0) {
      uVar8 = 0;
      uVar9 = 0;
      do {
        while( true ) {
          iVar1 = iVar4 + uVar8 * 200;
          if (*(int *)(iVar1 + 0xc0) != 0) break;
          uVar8 = uVar8 + 1;
          if ((uint)((iVar3 - iVar4 >> 3) * -0x3d70a3d7) <= uVar8) {
            return uVar9;
          }
        }
        iVar3 = FUN_000749fc(iVar1,puVar7,param_1);
        if (iVar3 != 0) {
          uVar2 = FUN_00017e38();
          uVar9 = 1;
          FUN_00018e74(uVar2,*(undefined4 *)(*(int *)(param_1 + 0x14) + uVar8 * 200 + 0xc0));
        }
        iVar4 = *(int *)(param_1 + 0x14);
        uVar8 = uVar8 + 1;
        iVar3 = *(int *)(param_1 + 0x18);
      } while (uVar8 < (uint)((iVar3 - iVar4 >> 3) * -0x3d70a3d7));
      return uVar9;
    }
  }
  return 0;
}



