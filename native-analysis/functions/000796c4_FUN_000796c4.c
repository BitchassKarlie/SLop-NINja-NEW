/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000796c4 FUN_000796c4 */

void FUN_000796c4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int **ppiVar11;
  int local_84;
  int *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c [8];
  undefined local_4c;
  undefined4 local_48 [8];
  undefined local_28;
  int local_24;
  
  iVar1 = DAT_00079798;
  iVar6 = DAT_00079794 + 0x796d2;
  local_24 = **(int **)(iVar6 + DAT_00079798);
  ppiVar4 = *(int ***)(param_1 + 0x14);
  ppiVar11 = (int **)*ppiVar4;
  if (ppiVar4 != ppiVar11) {
    do {
      piVar10 = ppiVar11[2];
      piVar3 = (int *)piVar10[2];
      piVar8 = (int *)*piVar3;
      if ((piVar3 != piVar8) && (piVar3 = (int *)piVar8[2], piVar3 != (int *)0x0)) {
        do {
          iVar2 = (**(code **)(*piVar3 + 0x1c))(piVar3);
          if ((iVar2 == 2) && (*(char *)(piVar3 + 0xd) != '\0')) {
            piVar8 = &local_84;
            uVar9 = 1;
            local_84 = DAT_0007979c + 0x7972e;
            puVar7 = local_48;
            local_7c = *(undefined4 *)(iVar6 + DAT_000797a0);
            pcVar5 = *(code **)(DAT_0007979c + 0x79736);
            local_78 = 0;
            local_28 = 1;
            local_48[0] = 0;
            local_80 = piVar3;
            goto LAB_0007973e;
          }
          piVar8 = (int *)*piVar8;
        } while ((piVar8 != (int *)piVar10[2]) && (piVar3 = (int *)piVar8[2], piVar3 != (int *)0x0))
        ;
        ppiVar4 = *(int ***)(param_1 + 0x14);
      }
      ppiVar11 = (int **)*ppiVar11;
    } while (ppiVar11 != ppiVar4);
  }
  uVar9 = 0;
  puVar7 = local_6c;
  local_6c[0] = 0;
  piVar8 = &local_74;
  local_74 = DAT_000797a4 + 0x79780;
  pcVar5 = *(code **)(DAT_000797a4 + 0x79788);
  local_70 = *(undefined4 *)(iVar6 + DAT_000797a8);
  local_4c = 1;
LAB_0007973e:
  (*pcVar5)(piVar8,puVar7);
  FUN_0002f56c(puVar7);
  FUN_0002f640(puVar7);
  if (local_24 != **(int **)(iVar6 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}



