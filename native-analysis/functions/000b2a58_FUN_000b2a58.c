/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b2a58 FUN_000b2a58 */

void FUN_000b2a58(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined auStack_78 [76];
  int local_2c;
  
  iVar2 = DAT_000b2b84;
  iVar7 = DAT_000b2b80 + 0xb2a6a;
  local_2c = **(int **)(iVar7 + DAT_000b2b84);
  pvVar3 = operator_new(0x4c);
  FUN_000b16a0(auStack_78,param_5);
  FUN_000b16c8(pvVar3,auStack_78);
  FUN_000b18ac(auStack_78);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  if (*(int *)(param_2 + 4) == 0) {
    *(void **)(param_2 + 4) = pvVar3;
    *(void **)(param_2 + 8) = pvVar3;
    goto LAB_000b2b0a;
  }
  iVar4 = *(int *)(param_2 + 4);
  if (param_4 == 0) {
    do {
      iVar5 = iVar4;
      iVar4 = *(int *)(iVar5 + 0x44);
    } while (iVar4 != 0);
    iVar4 = FUN_0009e5e0(iVar5,param_5);
    if (-1 < iVar4) goto LAB_000b2abc;
LAB_000b2ae2:
    if (param_4 == 0) {
      iVar5 = *(int *)(param_2 + 4);
      iVar4 = *(int *)(param_2 + 4);
      while (iVar1 = iVar5, iVar1 != 0) {
        iVar4 = iVar1;
        iVar5 = *(int *)(iVar1 + 0x44);
      }
      goto LAB_000b2b62;
    }
    iVar4 = *(int *)(param_4 + 0x40);
    if (*(int *)(param_4 + 0x40) == 0) {
      *(int *)((int)pvVar3 + 0x48) = param_4;
      *(void **)(param_4 + 0x40) = pvVar3;
    }
    else {
      do {
        iVar5 = iVar4;
        iVar4 = *(int *)(iVar5 + 0x44);
      } while (*(int *)(iVar5 + 0x44) != 0);
      *(int *)((int)pvVar3 + 0x48) = iVar5;
      *(void **)(iVar5 + 0x44) = pvVar3;
    }
  }
  else {
    iVar4 = FUN_0009e5e0(param_5,param_4);
    if ((iVar4 < 0) &&
       ((*(int *)(param_4 + 0x40) == 0 ||
        (iVar4 = FUN_0009e5e0(*(int *)(param_4 + 0x40),param_5), iVar4 < 0)))) goto LAB_000b2ae2;
LAB_000b2abc:
    iVar4 = *(int *)(param_2 + 4);
    if (iVar4 != 0) {
      param_4 = 0;
      do {
        iVar5 = FUN_0009e5e0(iVar4,param_5);
        if (iVar5 < 0) {
          iVar5 = *(int *)(iVar4 + 0x44);
        }
        else {
          iVar5 = *(int *)(iVar4 + 0x40);
          param_4 = iVar4;
        }
        iVar4 = iVar5;
      } while (iVar5 != 0);
      goto LAB_000b2ae2;
    }
LAB_000b2b62:
    *(int *)((int)pvVar3 + 0x48) = iVar4;
    *(void **)(iVar4 + 0x44) = pvVar3;
    *(void **)(param_2 + 8) = pvVar3;
  }
  *(undefined4 *)((int)pvVar3 + 0x3c) = 0;
  FUN_000b29dc(param_2,pvVar3);
LAB_000b2b0a:
  piVar6 = *(int **)(iVar7 + iVar2);
  *param_1 = param_2;
  param_1[1] = (int)pvVar3;
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}



