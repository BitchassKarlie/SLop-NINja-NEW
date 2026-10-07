/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bd070 FUN_000bd070 */

undefined4 * FUN_000bd070(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  puVar2 = (undefined4 *)calloc(1,0x514);
  iVar10 = *(int *)(param_1 + 0x1c);
  uVar3 = FUN_000c28b4(param_2,0x18);
  *puVar2 = uVar3;
  uVar3 = FUN_000c28b4(param_2,0x18);
  puVar2[1] = uVar3;
  iVar4 = FUN_000c28b4(param_2,0x18);
  puVar2[2] = iVar4 + 1;
  iVar4 = FUN_000c28b4(param_2,6);
  puVar2[3] = iVar4 + 1;
  uVar3 = FUN_000c28b4(param_2,8);
  puVar2[4] = uVar3;
  if ((int)puVar2[3] < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    iVar9 = 0;
    puVar7 = puVar2;
    do {
      uVar5 = FUN_000c28b4(param_2,3);
      iVar6 = FUN_000c28b4(param_2,1);
      if (iVar6 != 0) {
        iVar6 = FUN_000c28b4(param_2,5);
        uVar5 = uVar5 | iVar6 << 3;
      }
      puVar7[5] = uVar5;
      uVar8 = uVar5;
      if (uVar5 != 0) {
        uVar8 = 0;
        do {
          uVar8 = uVar8 + (uVar5 & 1);
          uVar5 = uVar5 >> 1;
        } while (uVar5 != 0);
      }
      iVar9 = iVar9 + 1;
      iVar4 = iVar4 + uVar8;
      puVar7 = puVar7 + 1;
    } while (iVar9 < (int)puVar2[3]);
    if (0 < iVar4) {
      iVar9 = 0;
      puVar7 = puVar2;
      do {
        uVar3 = FUN_000c28b4(param_2,8);
        iVar9 = iVar9 + 1;
        puVar7[0x45] = uVar3;
        puVar7 = puVar7 + 1;
      } while (iVar9 != iVar4);
    }
  }
  iVar10 = *(int *)(iVar10 + 0x1c);
  if ((int)puVar2[4] < iVar10) {
    if (iVar4 < 1) {
      return puVar2;
    }
    if ((int)puVar2[0x45] < iVar10) {
      iVar9 = 0;
      puVar7 = puVar2;
      do {
        iVar9 = iVar9 + 1;
        if (iVar9 == iVar4) {
          return puVar2;
        }
        piVar1 = puVar7 + 0x46;
        puVar7 = puVar7 + 1;
      } while (*piVar1 < iVar10);
    }
  }
  FUN_000bd058(puVar2);
  return (undefined4 *)0x0;
}



