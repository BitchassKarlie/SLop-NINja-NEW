/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00083698 FUN_00083698 */

int * FUN_00083698(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)operator_new(0x3c);
  iVar3 = DAT_00083710;
  iVar2 = DAT_0008370c;
  iVar4 = DAT_0008371c + 0x836bc;
  *(undefined *)(piVar1 + 4) = 0;
  piVar1[1] = iVar2;
  piVar1[3] = iVar2;
  piVar1[5] = iVar3;
  *(undefined *)(piVar1 + 6) = 0;
  iVar3 = DAT_00083714;
  piVar1[7] = 0;
  piVar1[0xd] = iVar2;
  piVar1[0xe] = 0;
  piVar1[8] = iVar3;
  *piVar1 = iVar4;
  *(undefined *)(piVar1 + 0xb) = 0;
  piVar1[10] = iVar3;
  piVar1[9] = iVar2;
  piVar1[0xc] = iVar3;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  *piVar1 = *param_1;
  piVar1[1] = iVar2;
  piVar1[2] = iVar3;
  piVar1[3] = iVar4;
  iVar2 = param_1[5];
  iVar3 = param_1[6];
  iVar4 = param_1[7];
  piVar1[4] = param_1[4];
  piVar1[5] = iVar2;
  piVar1[6] = iVar3;
  piVar1[7] = iVar4;
  iVar2 = param_1[9];
  iVar3 = param_1[10];
  iVar4 = param_1[0xb];
  piVar1[8] = param_1[8];
  piVar1[9] = iVar2;
  piVar1[10] = iVar3;
  piVar1[0xb] = iVar4;
  iVar2 = param_1[0xd];
  iVar3 = param_1[0xe];
  piVar1[0xc] = param_1[0xc];
  piVar1[0xd] = iVar2;
  piVar1[0xe] = iVar3;
  *(undefined *)(piVar1 + 4) = 0;
  return piVar1;
}



