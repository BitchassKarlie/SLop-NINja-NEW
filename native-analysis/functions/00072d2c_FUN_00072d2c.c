/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00072d2c FUN_00072d2c */

void FUN_00072d2c(int param_1,char *param_2,uint param_3,uint param_4,char param_5,char param_6)

{
  int iVar1;
  void *__dest;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint local_6c [2];
  char acStack_64 [64];
  uint local_24;
  uint local_20;
  int local_1c;
  
  iVar1 = DAT_00072de0;
  iVar5 = DAT_00072ddc + 0x72d3a;
  local_1c = **(int **)(iVar5 + DAT_00072de0);
  iVar7 = param_1 + 0x10;
  if (param_5 == '\0') {
    iVar7 = param_1;
  }
  local_6c[0] = param_3;
  if (*(uint **)(iVar7 + 4) != (uint *)0x0) {
    puVar3 = (uint *)0x0;
    puVar6 = *(uint **)(iVar7 + 4);
    do {
      if (*puVar6 < param_3) {
        puVar4 = (uint *)puVar6[0x15];
      }
      else {
        puVar4 = (uint *)puVar6[0x14];
        puVar3 = puVar6;
      }
      puVar6 = puVar4;
    } while (puVar4 != (uint *)0x0);
    if ((puVar3 != (uint *)0x0) && (*puVar3 <= param_3)) {
      param_4 = puVar3[0x12] + param_4;
      puVar3[0x12] = param_4;
      if (param_6 != '\0') {
        uVar2 = FUN_00017e38();
        FUN_000190e8(uVar2,puVar3[0x12],local_6c[0]);
        param_4 = puVar3[0x12];
      }
      goto LAB_00072da6;
    }
  }
  local_24 = param_3;
  strcpy(acStack_64,param_2);
  local_20 = param_4;
  __dest = (void *)FUN_00072c98(iVar7,local_6c);
  memcpy(__dest,acStack_64,0x48);
  uVar2 = FUN_00017e38();
  FUN_000190e8(uVar2,local_20,local_6c[0]);
  param_4 = local_20;
LAB_00072da6:
  if (local_1c == **(int **)(iVar5 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_4);
}



