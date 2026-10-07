/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099e28 FUN_00099e28 */

uint ** FUN_00099e28(uint **param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = *param_1;
  uVar1 = *puVar2;
  uVar3 = param_3 + uVar1;
  if (puVar2[1] < uVar3) {
    FUN_00099ddc(param_1,uVar3 + puVar2[1]);
    puVar2 = *param_1;
    uVar1 = *puVar2;
  }
  memmove((void *)((int)puVar2 + uVar1 + 8),param_2,param_3);
  puVar2 = *param_1;
  *puVar2 = uVar3;
  *(undefined *)((int)puVar2 + uVar3 + 8) = 0;
  return param_1;
}



