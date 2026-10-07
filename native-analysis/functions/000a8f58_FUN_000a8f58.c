/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8f58 FUN_000a8f58 */

void FUN_000a8f58(int param_1,int *param_2)

{
  int *piVar1;
  void *__src;
  int iVar2;
  bool bVar3;
  undefined auStack_34 [16];
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  piVar1 = (int *)operator_new(0x4c);
  iVar2 = DAT_000a9008 + 0xa8f78;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  piVar1[8] = 0;
  piVar1[9] = 0;
  piVar1[10] = 0;
  *piVar1 = iVar2;
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  piVar1[0xe] = 0;
  piVar1[0x10] = 0;
  piVar1[0x11] = 0;
  piVar1[0x12] = 0;
  FUN_000a8490(param_2,piVar1);
  FUN_000ab254(param_1,*param_2 + 0x3c);
  FUN_000a8698(param_1,&local_1c);
  iVar2 = local_1c + -1;
  bVar3 = local_1c != 0;
  local_1c = iVar2;
  if (bVar3) {
    __src = *(void **)(param_1 + 4);
    do {
      memcpy(&local_20,__src,4);
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
      FUN_000a8698(param_1,&local_24);
      FUN_000ab244(auStack_34,param_1,local_24);
      FUN_000b4938(*param_2,local_20,auStack_34);
      __src = (void *)(*(int *)(param_1 + 4) + local_24);
      *(void **)(param_1 + 4) = __src;
      iVar2 = local_1c + -1;
      bVar3 = local_1c != 0;
      local_1c = iVar2;
    } while (bVar3);
  }
  FUN_000a8ebc(param_1,*param_2 + 0x2c);
  return;
}



