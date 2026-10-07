/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009c068 FUN_0009c068 */

void FUN_0009c068(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  FUN_0009b82c();
  iVar4 = *(int *)(param_1 + 0x4c);
  if ((iVar4 != param_1 + 0x2c) && (iVar4 != 0)) {
    piVar3 = *(int **)(iVar4 + 0x18);
    do {
      piVar2 = *(int **)(iVar4 + 0x14);
      while( true ) {
        FUN_0009bf5c(param_2,piVar2 + 2,piVar3 + 2);
        iVar4 = *(int *)(iVar4 + 0x20);
        piVar3 = *(int **)(iVar4 + 0x18);
        if (*piVar3 != 0) break;
        piVar2 = *(int **)(iVar4 + 0x14);
        if (*piVar2 == 0) goto LAB_0009c09e;
      }
    } while( true );
  }
LAB_0009c09e:
  for (piVar3 = *(int **)(param_1 + 0x18); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[10]) {
    uVar1 = (**(code **)(*piVar3 + 0x40))(piVar3);
    FUN_0009a9fc(param_2,uVar1);
  }
  return;
}



