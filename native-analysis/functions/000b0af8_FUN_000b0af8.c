/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b0af8 FUN_000b0af8 */

void FUN_000b0af8(int *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined auStack_7c [48];
  undefined auStack_4c [32];
  int local_2c;
  
  iVar2 = DAT_000b0c2c;
  iVar7 = DAT_000b0c28 + 0xb0b0a;
  local_2c = **(int **)(iVar7 + DAT_000b0c2c);
  pvVar3 = operator_new(0x50);
  FUN_000afc54(auStack_7c,param_5);
  FUN_000afbec(pvVar3,auStack_7c);
  FUN_00093ad8(auStack_4c);
  FUN_0009e858(auStack_7c);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  if (*(int *)(param_2 + 4) == 0) {
    *(void **)(param_2 + 4) = pvVar3;
    *(void **)(param_2 + 8) = pvVar3;
    goto LAB_000b0bb2;
  }
  iVar4 = *(int *)(param_2 + 4);
  if (param_4 == 0) {
    do {
      iVar5 = iVar4;
      iVar4 = *(int *)(iVar5 + 0x48);
    } while (iVar4 != 0);
    iVar4 = FUN_0009e5e0(iVar5,param_5);
    if (-1 < iVar4) goto LAB_000b0b64;
LAB_000b0b8a:
    if (param_4 == 0) {
      iVar5 = *(int *)(param_2 + 4);
      iVar4 = *(int *)(param_2 + 4);
      while (iVar1 = iVar5, iVar1 != 0) {
        iVar4 = iVar1;
        iVar5 = *(int *)(iVar1 + 0x48);
      }
      goto LAB_000b0c0a;
    }
    iVar4 = *(int *)(param_4 + 0x44);
    if (*(int *)(param_4 + 0x44) == 0) {
      *(int *)((int)pvVar3 + 0x4c) = param_4;
      *(void **)(param_4 + 0x44) = pvVar3;
    }
    else {
      do {
        iVar5 = iVar4;
        iVar4 = *(int *)(iVar5 + 0x48);
      } while (*(int *)(iVar5 + 0x48) != 0);
      *(int *)((int)pvVar3 + 0x4c) = iVar5;
      *(void **)(iVar5 + 0x48) = pvVar3;
    }
  }
  else {
    iVar4 = FUN_0009e5e0(param_5,param_4);
    if ((iVar4 < 0) &&
       ((*(int *)(param_4 + 0x44) == 0 ||
        (iVar4 = FUN_0009e5e0(*(int *)(param_4 + 0x44),param_5), iVar4 < 0)))) goto LAB_000b0b8a;
LAB_000b0b64:
    iVar4 = *(int *)(param_2 + 4);
    if (iVar4 != 0) {
      param_4 = 0;
      do {
        iVar5 = FUN_0009e5e0(iVar4,param_5);
        if (iVar5 < 0) {
          iVar5 = *(int *)(iVar4 + 0x48);
        }
        else {
          iVar5 = *(int *)(iVar4 + 0x44);
          param_4 = iVar4;
        }
        iVar4 = iVar5;
      } while (iVar5 != 0);
      goto LAB_000b0b8a;
    }
LAB_000b0c0a:
    *(int *)((int)pvVar3 + 0x4c) = iVar4;
    *(void **)(iVar4 + 0x48) = pvVar3;
    *(void **)(param_2 + 8) = pvVar3;
  }
  *(undefined4 *)((int)pvVar3 + 0x40) = 0;
  FUN_000b0a7c(param_2,pvVar3);
LAB_000b0bb2:
  piVar6 = *(int **)(iVar7 + iVar2);
  *param_1 = param_2;
  param_1[1] = (int)pvVar3;
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}



