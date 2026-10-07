/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099ddc FUN_00099ddc */

void FUN_00099ddc(size_t **param_1,uint param_2)

{
  size_t *psVar1;
  size_t *psVar2;
  size_t *local_14 [2];
  
  if ((*param_1)[1] < param_2) {
    psVar2 = (size_t *)(DAT_00099e24 + 0x99df4);
    local_14[0] = psVar2;
    FUN_00099d3c(local_14,**param_1);
    memcpy(local_14[0] + 2,*param_1 + 2,**param_1);
    psVar1 = *param_1;
    *param_1 = local_14[0];
    if ((psVar1 != psVar2) && (psVar1 != (size_t *)0x0)) {
      local_14[0] = psVar1;
      operator_delete__(psVar1);
    }
  }
  return;
}



