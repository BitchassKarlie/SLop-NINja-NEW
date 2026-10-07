/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c3070 FUN_000c3070 */

undefined4 FUN_000c3070(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  
  iVar8 = param_1[9];
  if (iVar8 < param_1[8]) {
    uVar9 = *(uint *)(param_1[4] + iVar8 * 4);
    if ((uVar9 & 0x400) == 0) {
      uVar4 = 1 - (int)param_2;
      if ((int *)0x1 < param_2) {
        uVar4 = 0;
      }
      if (param_3 == 0) {
        uVar4 = uVar4 & 1;
      }
      else {
        uVar4 = 0;
      }
      if (uVar4 == 0) {
        uVar4 = uVar9 & 0xff;
        uVar7 = uVar9 & 0x200;
        if (uVar4 == 0xff) {
          iVar8 = iVar8 + 1;
          uVar4 = 0xff;
          puVar10 = (uint *)(param_1[4] + iVar8 * 4);
          while( true ) {
            uVar2 = *puVar10 & 0xff;
            if ((*puVar10 & 0x200) != 0) {
              uVar7 = 0x200;
            }
            uVar4 = uVar4 + uVar2;
            if (uVar2 != 0xff) break;
            iVar8 = iVar8 + 1;
            puVar10 = puVar10 + 1;
          }
        }
        if (param_2 != (int *)0x0) {
          param_2[3] = uVar7;
          param_2[2] = uVar9 & 0x100;
          *param_2 = *param_1 + param_1[3];
          iVar5 = param_1[0x57];
          param_2[6] = param_1[0x56];
          param_2[7] = iVar5;
          piVar3 = (int *)(param_1[5] + iVar8 * 8);
          iVar5 = *piVar3;
          iVar6 = piVar3[1];
          param_2[1] = uVar4;
          param_2[4] = iVar5;
          param_2[5] = iVar6;
        }
        if (param_3 != 0) {
          param_1[3] = param_1[3] + uVar4;
          param_1[9] = iVar8 + 1;
          uVar9 = param_1[0x56];
          param_1[0x56] = uVar9 + 1;
          param_1[0x57] = param_1[0x57] + (uint)(0xfffffffe < uVar9);
          return 1;
        }
      }
      uVar1 = 1;
    }
    else {
      param_1[9] = iVar8 + 1;
      uVar9 = param_1[0x56];
      param_1[0x56] = uVar9 + 1;
      param_1[0x57] = param_1[0x57] + (uint)(0xfffffffe < uVar9);
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



