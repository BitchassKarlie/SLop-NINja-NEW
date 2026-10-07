/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a4500 FUN_000a4500 */

int ** FUN_000a4500(int **param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = **(int ***)(DAT_000a458c + 0xa4508 + DAT_000a4590);
  uVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,DAT_000a4594 + 0xa4512);
  iVar2 = (**(code **)(*piVar4 + 0x1c4))(piVar4,uVar1,DAT_000a4598 + 0xa452a,DAT_000a459c + 0xa452c)
  ;
  uVar5 = 1 - uVar1;
  if (1 < uVar1) {
    uVar5 = 0;
  }
  if (iVar2 == 0) {
    uVar5 = uVar5 | 1;
  }
  if (uVar5 == 0) {
    (**(code **)(*piVar4 + 0x44))(piVar4);
    piVar3 = (int *)FUN_000a38bc(piVar4,uVar1,iVar2);
    iVar2 = (**(code **)(*piVar4 + 0x3c))(piVar4);
    if (iVar2 == 0) {
      *param_1 = piVar4;
      param_1[1] = piVar3;
    }
    else {
      (**(code **)(*piVar4 + 0x40))(piVar4);
      (**(code **)(*piVar4 + 0x44))(piVar4);
      *param_1 = (int *)0x0;
      param_1[1] = (int *)0x0;
    }
  }
  else {
    *param_1 = (int *)0x0;
    param_1[1] = (int *)0x0;
  }
  return param_1;
}



