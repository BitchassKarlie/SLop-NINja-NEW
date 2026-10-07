/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b2f68 FUN_000b2f68 */

void FUN_000b2f68(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined auStack_68 [40];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  iVar2 = DAT_000b30c4;
  iVar7 = DAT_000b30c0 + 0xb2f7a;
  local_2c = **(int **)(iVar7 + DAT_000b30c4);
  pvVar3 = operator_new(0x3c);
  FUN_0009e7a4(auStack_68,param_5);
  local_40 = *(undefined4 *)(param_5 + 0x28);
  local_3c = 1;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  FUN_0009e7a4(pvVar3,auStack_68);
  *(undefined4 *)((int)pvVar3 + 0x28) = local_40;
  *(undefined4 *)((int)pvVar3 + 0x2c) = local_3c;
  *(undefined4 *)((int)pvVar3 + 0x30) = local_38;
  *(undefined4 *)((int)pvVar3 + 0x34) = local_34;
  *(undefined4 *)((int)pvVar3 + 0x38) = local_30;
  FUN_0009e858(auStack_68);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  if (*(int *)(param_2 + 4) == 0) {
    *(void **)(param_2 + 4) = pvVar3;
    *(void **)(param_2 + 8) = pvVar3;
    goto LAB_000b304a;
  }
  iVar4 = *(int *)(param_2 + 4);
  if (param_4 == 0) {
    do {
      iVar5 = iVar4;
      iVar4 = *(int *)(iVar5 + 0x34);
    } while (iVar4 != 0);
    iVar4 = FUN_0009e5e0(iVar5,param_5);
    if (-1 < iVar4) goto LAB_000b2ffc;
LAB_000b3022:
    if (param_4 == 0) {
      iVar5 = *(int *)(param_2 + 4);
      iVar4 = *(int *)(param_2 + 4);
      while (iVar1 = iVar5, iVar1 != 0) {
        iVar4 = iVar1;
        iVar5 = *(int *)(iVar1 + 0x34);
      }
      goto LAB_000b30a2;
    }
    iVar4 = *(int *)(param_4 + 0x30);
    if (*(int *)(param_4 + 0x30) == 0) {
      *(int *)((int)pvVar3 + 0x38) = param_4;
      *(void **)(param_4 + 0x30) = pvVar3;
    }
    else {
      do {
        iVar5 = iVar4;
        iVar4 = *(int *)(iVar5 + 0x34);
      } while (*(int *)(iVar5 + 0x34) != 0);
      *(int *)((int)pvVar3 + 0x38) = iVar5;
      *(void **)(iVar5 + 0x34) = pvVar3;
    }
  }
  else {
    iVar4 = FUN_0009e5e0(param_5,param_4);
    if ((iVar4 < 0) &&
       ((*(int *)(param_4 + 0x30) == 0 ||
        (iVar4 = FUN_0009e5e0(*(int *)(param_4 + 0x30),param_5), iVar4 < 0)))) goto LAB_000b3022;
LAB_000b2ffc:
    iVar4 = *(int *)(param_2 + 4);
    if (iVar4 != 0) {
      param_4 = 0;
      do {
        iVar5 = FUN_0009e5e0(iVar4,param_5);
        if (iVar5 < 0) {
          iVar5 = *(int *)(iVar4 + 0x34);
        }
        else {
          iVar5 = *(int *)(iVar4 + 0x30);
          param_4 = iVar4;
        }
        iVar4 = iVar5;
      } while (iVar5 != 0);
      goto LAB_000b3022;
    }
LAB_000b30a2:
    *(int *)((int)pvVar3 + 0x38) = iVar4;
    *(void **)(iVar4 + 0x34) = pvVar3;
    *(void **)(param_2 + 8) = pvVar3;
  }
  *(undefined4 *)((int)pvVar3 + 0x2c) = 0;
  FUN_000b2eec(param_2,pvVar3);
LAB_000b304a:
  piVar6 = *(int **)(iVar7 + iVar2);
  *param_1 = param_2;
  param_1[1] = (int)pvVar3;
  if (local_2c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}



