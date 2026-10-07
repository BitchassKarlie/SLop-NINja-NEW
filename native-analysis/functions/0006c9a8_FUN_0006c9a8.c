/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006c9a8 FUN_0006c9a8 */

void FUN_0006c9a8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  char acStack_ac [128];
  int local_2c;
  
  iVar6 = DAT_0006cafc;
  iVar2 = DAT_0006caf8;
  iVar8 = DAT_0006caf4 + 0x6c9b8;
  local_2c = **(int **)(iVar8 + DAT_0006caf8);
  puVar3 = (undefined4 *)FUN_000a5f28();
  (**(code **)*puVar3)(puVar3,DAT_0006cb00 + 0x6c9cc);
  (**(code **)*puVar3)(puVar3,DAT_0006cb04 + 0x6c9dc);
  (**(code **)*puVar3)(puVar3,DAT_0006cb08 + 0x6c9e8);
  (**(code **)*puVar3)(puVar3,DAT_0006cb0c + 0x6c9f4);
  (**(code **)*puVar3)(puVar3,DAT_0006cb10 + 0x6ca00);
  (**(code **)*puVar3)(puVar3,DAT_0006cb14 + 0x6ca0c);
  (**(code **)*puVar3)(puVar3,DAT_0006cb18 + 0x6ca18);
  (**(code **)*puVar3)(puVar3,DAT_0006cb1c + 0x6ca24);
  (**(code **)*puVar3)(puVar3,DAT_0006cb20 + 0x6ca30);
  (**(code **)*puVar3)(puVar3,DAT_0006cb24 + 0x6ca3e);
  if (0 < **(int **)(iVar8 + iVar6)) {
    iVar10 = 0;
    do {
      iVar4 = FUN_00021680(iVar10);
      if (0 < *(int *)(iVar4 + 0x2dc)) {
        iVar5 = 0;
        iVar7 = 0;
        do {
          iVar7 = iVar7 + 1;
          puVar1 = (undefined4 *)(*(int *)(iVar4 + 0x2d8) + iVar5);
          iVar5 = iVar5 + 0xc;
          (**(code **)*puVar3)(puVar3,*puVar1);
        } while (iVar7 < *(int *)(iVar4 + 0x2dc));
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < **(int **)(iVar8 + iVar6));
  }
  iVar6 = 1;
  pcVar9 = (char *)(DAT_0006cb28 + 0x6ca98);
  iVar10 = DAT_0006cb2c + 0x6ca9a;
  do {
    sprintf(acStack_ac,pcVar9,iVar10,iVar6);
    iVar6 = iVar6 + 1;
    (**(code **)*puVar3)(puVar3,acStack_ac);
  } while (iVar6 != 8);
  iVar6 = 1;
  pcVar9 = (char *)(DAT_0006cb30 + 0x6cac2);
  iVar10 = DAT_0006cb34 + 0x6cac4;
  do {
    sprintf(acStack_ac,pcVar9,iVar10,iVar6);
    iVar6 = iVar6 + 1;
    (**(code **)*puVar3)(puVar3,acStack_ac);
  } while (iVar6 != 4);
  if (local_2c == **(int **)(iVar8 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



