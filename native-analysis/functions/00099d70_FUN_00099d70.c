/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099d70 FUN_00099d70 */

size_t ** FUN_00099d70(size_t **param_1,void *param_2,size_t param_3)

{
  size_t *psVar1;
  uint uVar2;
  size_t *psVar3;
  size_t *local_1c [2];
  
  uVar2 = (*param_1)[1];
  if ((uVar2 < param_3) || (param_3 * 3 + 0x18 < uVar2)) {
    psVar3 = (size_t *)(DAT_00099dd8 + 0x99d98);
    local_1c[0] = psVar3;
    FUN_00099d3c(local_1c,param_3,param_3);
    memcpy(local_1c[0] + 2,param_2,param_3);
    psVar1 = *param_1;
    *param_1 = local_1c[0];
    if ((psVar1 != psVar3) && (psVar1 != (size_t *)0x0)) {
      local_1c[0] = psVar1;
      operator_delete__(psVar1);
    }
  }
  else {
    memmove(*param_1 + 2,param_2,param_3);
    psVar1 = *param_1;
    *psVar1 = param_3;
    *(undefined *)((int)psVar1 + param_3 + 8) = 0;
  }
  return param_1;
}



