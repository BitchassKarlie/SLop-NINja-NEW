/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bf330 FUN_000bf330 */

int * FUN_000bf330(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int local_2c;
  
  iVar8 = *(int *)(param_1 + 0x1c);
  piVar1 = (int *)calloc(1,0x448);
  iVar2 = FUN_000c28b4(param_2,5);
  *piVar1 = iVar2;
  if (0 < iVar2) {
    iVar2 = -1;
    iVar4 = 0;
    do {
      iVar3 = FUN_000c28b4(param_2,4);
      iVar6 = iVar4 + 1;
      piVar1[iVar4 + 1] = iVar3;
      if (iVar2 < iVar3) {
        iVar2 = iVar3;
      }
      iVar4 = iVar6;
    } while (iVar6 < *piVar1);
    if (-1 < iVar2) {
      local_2c = 0;
      piVar7 = piVar1;
      piVar9 = piVar1;
      do {
        iVar4 = FUN_000c28b4(param_2,3);
        piVar7[0x20] = iVar4 + 1;
        iVar4 = FUN_000c28b4(param_2,2);
        piVar7[0x30] = iVar4;
        if (iVar4 < 0) {
LAB_000bf3f8:
          FUN_000bf318(piVar1);
          return (int *)0x0;
        }
        if (iVar4 == 0) {
          iVar4 = piVar7[0x40];
        }
        else {
          iVar4 = FUN_000c28b4(param_2,8);
          piVar7[0x40] = iVar4;
        }
        if ((iVar4 < 0) || (*(int *)(iVar8 + 0x1c) <= iVar4)) goto LAB_000bf3f8;
        if (0 < 1 << (piVar7[0x30] & 0xffU)) {
          iVar4 = 0;
          do {
            iVar3 = FUN_000c28b4(param_2,8);
            iVar3 = iVar3 + -1;
            piVar9[iVar4 + 0x50] = iVar3;
            if ((iVar3 < -1) || (*(int *)(iVar8 + 0x1c) <= iVar3)) goto LAB_000bf3f8;
            iVar4 = iVar4 + 1;
          } while (iVar4 < 1 << (piVar7[0x30] & 0xffU));
        }
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 8;
        local_2c = local_2c + 1;
      } while (local_2c <= iVar2);
    }
  }
  iVar2 = FUN_000c28b4(param_2,2);
  piVar1[0xd0] = iVar2 + 1;
  uVar5 = FUN_000c28b4(param_2,4);
  iVar2 = *piVar1;
  if (0 < iVar2) {
    iVar8 = 0;
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar4 = iVar4 + piVar1[piVar1[iVar3 + 1] + 0x20];
      if (iVar8 < iVar4) {
        piVar7 = piVar1 + iVar8 + 0xd1;
        do {
          iVar2 = FUN_000c28b4(param_2,uVar5);
          piVar7[2] = iVar2;
          if ((iVar2 < 0) || (1 << (uVar5 & 0xff) <= iVar2)) goto LAB_000bf3f8;
          iVar8 = iVar8 + 1;
          piVar7 = piVar7 + 1;
        } while (iVar8 != iVar4);
        iVar2 = *piVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  piVar1[0xd1] = 0;
  piVar1[0xd2] = 1 << (uVar5 & 0xff);
  return piVar1;
}



