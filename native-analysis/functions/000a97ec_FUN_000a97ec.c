/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a97ec FUN_000a97ec */

uint * FUN_000a97ec(uint *param_1,uint *param_2)

{
  uint uVar1;
  void *__s;
  uint uVar2;
  uint uVar3;
  
  uVar1 = FUN_000a9100(param_2);
  param_1[0x14] = uVar1;
  __s = operator_new__(uVar1);
  param_1[0x15] = (uint)__s;
  memset(__s,0,param_1[0x14]);
  uVar3 = *param_2;
  uVar2 = param_1[0x15] + 3 & 0xfffffffc;
  uVar1 = uVar2;
  if (uVar3 == 0) {
    uVar1 = 0;
  }
  param_1[1] = uVar3;
  *param_1 = uVar1;
  FUN_000a9230(uVar2 + uVar3 * 4,param_1,param_2);
  return param_1;
}



