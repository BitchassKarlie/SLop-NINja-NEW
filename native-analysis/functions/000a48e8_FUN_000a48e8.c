/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a48e8 FUN_000a48e8 */

int ** FUN_000a48e8(int **param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int **ppiVar4;
  int local_28;
  int iStack_24;
  
  ppiVar4 = *(int ***)(DAT_000a4958 + 0xa48f6 + DAT_000a495c);
  piVar1 = *ppiVar4;
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,DAT_000a4960 + 0xa4902);
  uVar3 = (**(code **)(*param_2 + 0x84))
                    (param_2,uVar2,DAT_000a4964 + 0xa4912,DAT_000a4968 + 0xa4918);
  piVar1 = (int *)FUN_000a38fc(param_2,uVar2,uVar3);
  *param_1 = *ppiVar4;
  param_1[1] = piVar1;
  if (piVar1 != (int *)0x0) {
    iStack_24 = param_3 >> 0x1f;
    local_28 = param_3;
    FUN_000a4808(param_1,&local_28);
  }
  (**(code **)(*param_2 + 0x5c))(param_2,uVar2);
  return param_1;
}



