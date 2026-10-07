/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a208 FUN_0009a208 */

void FUN_0009a208(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2,param_1);
  if (iVar1 != 0) {
    piVar2 = *(int **)(param_1 + 0x18);
    while ((piVar2 != (int *)0x0 &&
           (iVar1 = (**(code **)(*piVar2 + 0x44))(piVar2,param_2), iVar1 != 0))) {
      piVar2 = (int *)piVar2[10];
    }
  }
  (**(code **)(*param_2 + 0xc))(param_2,param_1);
  return;
}



