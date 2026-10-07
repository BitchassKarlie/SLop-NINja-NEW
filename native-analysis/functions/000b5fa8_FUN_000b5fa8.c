/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b5fa8 FUN_000b5fa8 */

void FUN_000b5fa8(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 *param_6)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint unaff_r9;
  void *pvVar4;
  int local_64 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined auStack_3c [20];
  
  FUN_000a1260(param_1,*param_6,param_3,param_6,param_2);
  local_64[0] = 0;
  if (param_5 == param_3) {
    unaff_r9 = 0;
  }
  local_64[1] = 0;
  local_64[2] = 0;
  local_64[3] = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  if (param_5 != param_3) {
    unaff_r9 = 0;
    iVar3 = param_3;
    do {
      if ((*param_1 == 0) || (iVar1 = FUN_000a9338(*param_1 + 0xc,iVar3), iVar1 == 0)) {
        unaff_r9 = unaff_r9 + 1;
        iVar1 = *(int *)(iVar3 + 8);
        if (iVar1 == 0) {
          iVar1 = 1;
        }
        local_64[*(int *)(iVar3 + 4)] = iVar1 + local_64[*(int *)(iVar3 + 4)];
      }
      iVar3 = iVar3 + 0xc;
    } while (iVar3 != param_5);
  }
  pvVar2 = operator_new(0x58);
  FUN_000a9830(pvVar2,local_64);
  pvVar4 = (void *)param_1[1];
  if ((pvVar2 != pvVar4) && (pvVar4 != (void *)0x0)) {
    FUN_000a95e8(pvVar4);
    operator_delete(pvVar4);
  }
  param_1[1] = (int)pvVar2;
  local_64[1] = 0;
  local_64[0] = 0;
  local_64[2] = 0;
  local_64[3] = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  if ((uint)((param_1[5] - param_1[3] >> 2) * -0x33333333) < unaff_r9) {
    FUN_000b18f8(param_1 + 2,unaff_r9);
  }
  if (param_5 != param_3) {
    do {
      if ((*param_1 == 0) || (iVar3 = FUN_000a9338(*param_1 + 0xc,param_3), iVar3 == 0)) {
        iVar3 = *(int *)(param_3 + 4);
        FUN_000a934c(auStack_3c,param_3,param_1[1],local_64[iVar3]);
        FUN_000b22e0(param_1 + 2,auStack_3c);
        FUN_000a08c8(auStack_3c);
        local_64[iVar3] = local_64[iVar3] + *(int *)(param_3 + 8);
      }
      param_3 = param_3 + 0xc;
    } while (param_5 != param_3);
  }
  FUN_000aa248(param_1);
  return;
}



