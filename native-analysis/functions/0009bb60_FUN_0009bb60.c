/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009bb60 FUN_0009bb60 */

void FUN_0009bb60(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  FUN_0009b82c();
  *(undefined *)(param_2 + 0x2c) = *(undefined *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  FUN_00099d70(param_2 + 0x34,*(undefined4 **)(param_1 + 0x34) + 2,**(undefined4 **)(param_1 + 0x34)
              );
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_2 + 0x40) = uVar1;
  *(undefined *)(param_2 + 0x44) = *(undefined *)(param_1 + 0x44);
  for (piVar2 = *(int **)(param_1 + 0x18); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[10]) {
    uVar1 = (**(code **)(*piVar2 + 0x40))(piVar2);
    FUN_0009a9fc(param_2,uVar1);
  }
  return;
}



