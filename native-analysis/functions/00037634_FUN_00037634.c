/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00037634 FUN_00037634 */

void FUN_00037634(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar2 = DAT_000376c4;
  uVar1 = DAT_000376bc;
  if (*(int *)(param_1 + 4) == param_2) {
    if ((*(char *)(param_1 + 0xc4) != '\0') && (iVar4 = *(int *)(param_2 + 0x120), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x14) = DAT_000376bc;
      *(undefined4 *)(iVar4 + 0xbc) = uVar1;
      uVar1 = DAT_000376c0;
      fVar5 = *(float *)(iVar2 + 0x37668);
      fVar6 = *(float *)(iVar2 + 0x3766c);
      *(float *)(iVar4 + 0x9c) = -*(float *)(iVar2 + 0x37664);
      *(float *)(iVar4 + 0xa0) = -fVar5;
      *(float *)(iVar4 + 0xa4) = -fVar6;
      *(undefined4 *)(iVar4 + 0x20) = uVar1;
      *(undefined4 *)(iVar4 + 200) = uVar1;
    }
    piVar3 = (int *)(param_1 + 0x78);
    if (*(char *)(param_1 + 0x98) != '\0') {
      piVar3 = *(int **)(param_1 + 0x78);
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0xc))(piVar3,param_2);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



