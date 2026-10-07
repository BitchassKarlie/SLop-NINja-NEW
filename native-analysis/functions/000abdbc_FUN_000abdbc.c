/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000abdbc FUN_000abdbc */

int FUN_000abdbc(int param_1,int param_2,uint param_3)

{
  uint __n;
  
  __n = (*(int *)(param_2 + 0xc) - *(int *)(param_2 + 8)) - *(int *)(param_2 + 0x14);
  if (param_3 <= __n) {
    __n = param_3;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_000abd88(param_1,__n);
  FUN_000abd88(param_1,__n);
  if (__n != 0) {
    memcpy(*(void **)(param_1 + 4),(void *)(*(int *)(param_2 + 8) + *(int *)(param_2 + 0x14)),__n);
  }
  *(uint *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + __n;
  return param_1;
}



