/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a4744 FUN_000a4744 */

int ** FUN_000a4744(int **param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int **ppiVar5;
  int *local_28;
  int iStack_24;
  
  ppiVar5 = *(int ***)(DAT_000a47f0 + 0xa4752 + DAT_000a47f4);
  piVar1 = *ppiVar5;
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,DAT_000a47f8 + 0xa475e);
  uVar3 = (**(code **)(*param_2 + 0x84))
                    (param_2,uVar2,DAT_000a47fc + 0xa476e,DAT_000a4800 + 0xa4774);
  piVar1 = (int *)FUN_000a38fc(param_2,uVar2,uVar3);
  *param_1 = *ppiVar5;
  param_1[1] = piVar1;
  if (piVar1 != (int *)0x0) {
    local_28 = (int *)operator_new(0x50);
    iVar4 = DAT_000a4804 + 0xa47a2;
    *(undefined *)(local_28 + 9) = 1;
    *local_28 = iVar4;
    *(undefined *)(local_28 + 0x12) = 1;
    local_28[1] = 0;
    local_28[10] = 0;
    if (*(char *)(param_3 + 8) != '\0') {
      param_3 = (int *)*param_3;
    }
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 8))(param_3,local_28 + 10);
    }
    iStack_24 = (int)local_28 >> 0x1f;
    *(undefined *)(local_28 + 0x13) = 0;
    FUN_000a45a0(param_1,&local_28);
  }
  (**(code **)(*param_2 + 0x5c))(param_2,uVar2);
  return param_1;
}



