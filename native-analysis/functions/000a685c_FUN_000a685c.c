/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a685c FUN_000a685c */

undefined4 FUN_000a685c(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  float local_1c;
  
  iVar1 = DAT_000a690c;
  iVar6 = DAT_000a6910 + 0xa686c;
  if (*(int *)(DAT_000a690c + 0xa6876) == 0) {
    uVar4 = 1;
  }
  else {
    piVar2 = (int *)FUN_0008d120();
    local_1c = 0.0;
    iVar3 = FUN_00099150(*(undefined4 *)(iVar6 + DAT_000a6914),&local_1c);
    if (iVar3 == 0) {
      (**(code **)(**(int **)(iVar1 + 0xa6876) + 0x34))();
      if (*(void **)(iVar1 + 0xa6876) != (void *)0x0) {
        operator_delete(*(void **)(iVar1 + 0xa6876));
      }
      uVar4 = 0;
      *(undefined4 *)(DAT_000a6918 + 0xa68ac) = 0;
    }
    else {
      uVar4 = FUN_000ae1f4();
      FUN_000adc5c(uVar4,0);
      uVar4 = 1;
      *(float *)(iVar1 + 0xa6882) = *(float *)(iVar1 + 0xa6882) + local_1c;
      (**(code **)(**(int **)(iVar1 + 0xa6876) + 0x28))(*(int **)(iVar1 + 0xa6876),local_1c);
      puVar7 = *(undefined **)(iVar6 + DAT_000a691c);
      *puVar7 = 1;
      (**(code **)(*piVar2 + 0xc))(piVar2);
      piVar5 = *(int **)(iVar1 + 0xa6876);
      *puVar7 = 0;
      (**(code **)(*piVar5 + 0x2c))(piVar5,local_1c);
      *puVar7 = 1;
      (**(code **)(*piVar2 + 0x10))(piVar2);
      (**(code **)(*piVar2 + 0x14))(piVar2);
      *puVar7 = 0;
    }
  }
  return uVar4;
}



