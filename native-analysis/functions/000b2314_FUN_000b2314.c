/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b2314 FUN_000b2314 */

void FUN_000b2314(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint unaff_r9;
  void *pvVar4;
  int local_5c [4];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined auStack_34 [20];
  
  FUN_000a1260(param_1,*param_4);
  local_5c[0] = 0;
  local_5c[1] = 0;
  if (param_2 == param_3) {
    unaff_r9 = 0;
  }
  local_5c[2] = 0;
  local_5c[3] = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  if (param_2 != param_3) {
    unaff_r9 = 0;
    iVar3 = param_2;
    do {
      if ((*param_1 == 0) || (iVar1 = FUN_000a9338(*param_1 + 0xc,iVar3), iVar1 == 0)) {
        unaff_r9 = unaff_r9 + 1;
        iVar1 = *(int *)(iVar3 + 8);
        if (iVar1 == 0) {
          iVar1 = 1;
        }
        local_5c[*(int *)(iVar3 + 4)] = iVar1 + local_5c[*(int *)(iVar3 + 4)];
      }
      iVar3 = iVar3 + 0xc;
    } while (param_3 != iVar3);
  }
  pvVar2 = operator_new(0x58);
  FUN_000a9830(pvVar2,local_5c);
  pvVar4 = (void *)param_1[1];
  if ((pvVar2 != pvVar4) && (pvVar4 != (void *)0x0)) {
    FUN_000a95e8(pvVar4);
    operator_delete(pvVar4);
  }
  param_1[1] = (int)pvVar2;
  local_5c[1] = 0;
  local_5c[0] = 0;
  local_5c[2] = 0;
  local_5c[3] = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  local_38 = 0;
  if ((uint)((param_1[5] - param_1[3] >> 2) * -0x33333333) < unaff_r9) {
    FUN_000b18f8(param_1 + 2,unaff_r9);
  }
  if (param_2 != param_3) {
    do {
      if ((*param_1 == 0) || (iVar3 = FUN_000a9338(*param_1 + 0xc,param_2), iVar3 == 0)) {
        iVar3 = *(int *)(param_2 + 4);
        FUN_000a934c(auStack_34,param_2,param_1[1],local_5c[iVar3]);
        FUN_000b22e0(param_1 + 2,auStack_34);
        FUN_000a08c8(auStack_34);
        local_5c[iVar3] = local_5c[iVar3] + *(int *)(param_2 + 8);
      }
      param_2 = param_2 + 0xc;
    } while (param_3 != param_2);
  }
  FUN_000aa248(param_1);
  return;
}



