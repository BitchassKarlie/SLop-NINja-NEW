/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ad18c FUN_000ad18c */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_000ad18c(int param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  void *__s2;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  uint in_stack_ffffff68;
  int local_68;
  int local_64;
  int *local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined auStack_38 [4];
  int *local_34;
  undefined4 *local_30;
  undefined4 local_2c [2];
  
  local_2c[0] = 0;
  iVar7 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 4);
  puVar3 = (undefined4 *)zip_open(param_2,0,local_2c);
  local_30 = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    local_30 = (undefined4 *)operator_new(8);
    local_30[1] = puVar3;
    *local_30 = 1;
  }
  if ((local_30 == (undefined4 *)0x0) || (local_30[1] == 0)) {
    uVar9 = 0;
  }
  else {
    uVar4 = zip_get_num_files();
    if ((uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4) < uVar4) {
      FUN_000ac69c(param_1,uVar4);
    }
    if (0 < (int)uVar4) {
      bVar1 = false;
      uVar8 = 0;
      do {
        while( true ) {
          puVar3 = local_30;
          if (local_30 != (undefined4 *)0x0) {
            puVar3 = (undefined4 *)local_30[1];
          }
          __s2 = (void *)zip_get_name(puVar3,uVar8,8);
          iVar5 = memcmp(param_3,__s2,param_4);
          if (iVar5 != 0) break;
          FUN_000ac5ec(&local_68,&local_30,uVar8,(int)__s2 + param_4);
          local_4c = *(int *)(param_1 + 4);
          in_stack_ffffff68 = local_4c + (iVar7 - iVar6 >> 4) * 0x10;
          local_58 = param_1;
          local_54 = in_stack_ffffff68;
          local_50 = param_1;
          FUN_000ac510(auStack_38,param_1,local_4c,param_1,in_stack_ffffff68,&local_68,0);
          piVar2 = local_34;
          if ((*(int **)(param_1 + 8) == local_34) || (*local_34 != local_68)) {
            FUN_000ad160(param_1);
            FUN_000ac66c(*(undefined4 *)(param_1 + 8),&local_68);
            bVar1 = true;
            *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
          }
          else {
            local_34[1] = local_64;
            FUN_0009f860(local_34 + 2);
            piVar2[2] = (int)local_60;
            if (local_60 != (int *)0x0) {
              *local_60 = *local_60 + 1;
            }
            piVar2[3] = local_5c;
          }
          uVar8 = uVar8 + 1;
          FUN_0009f860(&local_60);
          if (uVar8 == uVar4) goto LAB_000ad2ae;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar4);
LAB_000ad2ae:
      if (bVar1) {
        local_3c = *(undefined4 *)(param_1 + 4);
        uVar9 = 1;
        local_44 = *(undefined4 *)(param_1 + 8);
        local_48 = param_1;
        local_40 = param_1;
        FUN_000ad12c(param_1,local_3c,param_1,local_44,in_stack_ffffff68 & 0xffffff00);
        goto LAB_000ad2b4;
      }
    }
    uVar9 = 1;
  }
LAB_000ad2b4:
  FUN_0009f860(&local_30);
  return uVar9;
}



