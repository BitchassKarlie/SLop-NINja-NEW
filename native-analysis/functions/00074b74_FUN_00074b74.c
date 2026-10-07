/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00074b74 FUN_00074b74 */

int FUN_00074b74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  if (*(undefined4 **)(param_1 + 4) == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    do {
      puVar7 = (undefined4 *)puVar4[3];
      puVar6 = puVar4;
      puVar4 = puVar7;
    } while (puVar7 != (undefined4 *)0x0);
    do {
      while( true ) {
        iVar2 = FUN_00074488(*puVar6);
        puVar6[1] = iVar2;
        puVar7 = (undefined4 *)((int)puVar7 + iVar2);
        puVar4 = (undefined4 *)puVar6[4];
        if ((undefined4 *)puVar6[4] != (undefined4 *)0x0) break;
        puVar4 = (undefined4 *)puVar6[5];
        if (puVar4 == (undefined4 *)0x0) goto LAB_00074ba6;
        bVar11 = puVar6 == (undefined4 *)puVar4[4];
        puVar6 = puVar4;
        if (bVar11) {
          do {
            puVar6 = (undefined4 *)puVar4[5];
            if (puVar6 == (undefined4 *)0x0) goto LAB_00074ba6;
            bVar11 = (undefined4 *)puVar6[4] == puVar4;
            puVar4 = puVar6;
          } while (bVar11);
        }
      }
      do {
        puVar6 = puVar4;
        puVar4 = (undefined4 *)puVar6[3];
      } while ((undefined4 *)puVar6[3] != (undefined4 *)0x0);
    } while (puVar6 != (undefined4 *)0x0);
  }
LAB_00074ba6:
  iVar3 = *(int *)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x18);
  if ((iVar2 - iVar3 >> 3) * -0x3d70a3d7 != 0) {
    uVar10 = 0xffffffff;
    uVar5 = 0;
    iVar9 = 0;
    do {
      while( true ) {
        iVar1 = uVar5 * 200 + iVar3;
        iVar8 = *(int *)(iVar1 + 0x2c);
        if (iVar8 <= iVar9) break;
        iVar2 = FUN_000749fc(iVar1,puVar7,param_1,iVar3,param_4);
        if (iVar2 != 0) {
          iVar9 = iVar8;
          uVar10 = uVar5;
        }
        iVar3 = *(int *)(param_1 + 0x14);
        uVar5 = uVar5 + 1;
        iVar2 = *(int *)(param_1 + 0x18);
        if ((uint)((iVar2 - iVar3 >> 3) * -0x3d70a3d7) <= uVar5) goto LAB_00074c0a;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((iVar2 - iVar3 >> 3) * -0x3d70a3d7));
LAB_00074c0a:
    if (uVar10 != 0xffffffff) {
      return uVar10 * 200 + iVar3;
    }
  }
  return 0;
}



