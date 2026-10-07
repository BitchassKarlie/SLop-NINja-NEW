/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bb0b8 FUN_000bb0b8 */

int FUN_000bb0b8(int param_1,int *param_2,void *param_3,size_t param_4,int param_5,code *param_6,
                int param_7,int param_8)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_20;
  void *local_1c;
  
  if ((param_1 == 0) || (param_6 == (code *)0x0)) {
    iVar1 = -1;
  }
  else {
    iVar1 = (*param_6)(param_1,param_6,0,0,1);
  }
  local_1c = (void *)0x0;
  local_20 = 0;
  memset(param_2,0,0x298);
  *param_2 = param_1;
  piVar3 = param_2 + 6;
  param_2[0xa2] = param_5;
  param_2[0xa3] = (int)param_6;
  param_2[0xa4] = param_7;
  param_2[0xa5] = param_8;
  FUN_000c31ec(piVar3);
  if (param_3 != (void *)0x0) {
    pvVar2 = (void *)FUN_000c3af4(piVar3,param_4);
    memcpy(pvVar2,param_3,param_4);
    FUN_000c2fd0(piVar3,param_4);
  }
  if (iVar1 != -1) {
    param_2[1] = 1;
  }
  param_2[0xd] = 1;
  pvVar2 = calloc(1,0x20);
  param_2[0x12] = (int)pvVar2;
  pvVar2 = calloc(param_2[0xd],0x10);
  param_2[0x13] = (int)pvVar2;
  FUN_000c3b64(param_2 + 0x1e,0xffffffff);
  iVar1 = FUN_000b9bf8(param_2,param_2[0x12],param_2[0x13],&local_1c,&local_20,0);
  if (iVar1 < 0) {
    *param_2 = 0;
    FUN_000baec0(param_2);
  }
  else {
    piVar3 = (int *)calloc(local_20 + 2,4);
    param_2[0x10] = (int)piVar3;
    *piVar3 = param_2[0x17];
    piVar3[1] = local_20;
    memcpy(piVar3 + 2,local_1c,local_20 << 2);
    pvVar2 = calloc(1,8);
    param_2[0xe] = (int)pvVar2;
    pvVar2 = calloc(1,8);
    puVar5 = (undefined4 *)param_2[0xe];
    param_2[0xf] = (int)pvVar2;
    *puVar5 = 0;
    puVar5[1] = 0;
    piVar3 = (int *)param_2[0xf];
    iVar4 = param_2[3];
    *piVar3 = param_2[2];
    piVar3[1] = iVar4;
    param_2[0x16] = 1;
    param_2[0x17] = param_2[0x72];
  }
  if (local_1c != (void *)0x0) {
    free(local_1c);
  }
  return iVar1;
}



