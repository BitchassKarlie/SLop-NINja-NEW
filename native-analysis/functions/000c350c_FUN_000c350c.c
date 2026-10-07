/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c350c FUN_000c350c */

undefined4 FUN_000c350c(int param_1,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  
  if (param_2 + *(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18)) {
LAB_000c351c:
    uVar1 = 0;
  }
  else {
    pvVar2 = realloc(*(void **)(param_1 + 0x10),(*(int *)(param_1 + 0x18) + 0x20 + param_2) * 4);
    if (pvVar2 != (void *)0x0) {
      *(void **)(param_1 + 0x10) = pvVar2;
      pvVar2 = realloc(*(void **)(param_1 + 0x14),(*(int *)(param_1 + 0x18) + 0x20 + param_2) * 8);
      if (pvVar2 != (void *)0x0) {
        *(void **)(param_1 + 0x14) = pvVar2;
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x20 + param_2;
        goto LAB_000c351c;
      }
    }
    FUN_000c3210(param_1);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



