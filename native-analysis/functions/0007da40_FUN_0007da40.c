/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007da40 FUN_0007da40 */

undefined4 * FUN_0007da40(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(param_1 + 0x20);
  iVar8 = *(int *)(iVar7 + 0xc);
  if ((*(int *)(iVar7 + 0x10) + 1) - iVar8 < *(int *)(iVar7 + 0x10)) {
    iVar4 = *(int *)(param_1 + 0x1c);
    if (0 < *(int *)(param_1 + 0x18)) {
      if (*(int *)(iVar4 + 0x40) != param_2) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          if (iVar3 == *(int *)(param_1 + 0x18)) goto LAB_0007da88;
          iVar5 = iVar4 + (uint)*(byte *)(iVar4 + 0x4b) * 0x24;
          iVar4 = iVar5 + 0x4c;
        } while (*(int *)(iVar5 + 0x8c) != param_2);
      }
      if (iVar8 < 1) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *(int *)(iVar7 + 0xc) = iVar8 + -1;
        puVar6 = *(undefined4 **)(*(int *)(iVar7 + 8) + (iVar8 + -1) * 4);
      }
      uVar2 = DAT_0007db14;
      uVar1 = DAT_0007db10;
      puVar6[2] = DAT_0007db10;
      *(undefined *)(puVar6 + 0x11) = 0;
      puVar6[3] = uVar1;
      puVar6[4] = uVar1;
      puVar6[0xe] = iVar4;
      *puVar6 = uVar1;
      puVar6[5] = uVar1;
      *(undefined2 *)(puVar6 + 1) = 1;
      puVar6[6] = uVar1;
      puVar6[7] = uVar1;
      puVar6[0x10] = param_3;
      puVar6[0xc] = uVar1;
      puVar6[0xb] = uVar2;
      FUN_0002f5ec();
      puVar6[0xd] = uVar2;
      puVar6[8] = uVar2;
      puVar6[9] = uVar2;
      FUN_0002f5ec();
      puVar6[10] = uVar2;
      puVar6[0xf] = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 **)(param_1 + 0xc) = puVar6;
      return puVar6;
    }
LAB_0007da88:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
      return (undefined4 *)0x0;
    }
  }
  return (undefined4 *)0x0;
}



