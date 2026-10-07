/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a80d0 FUN_000a80d0 */

void FUN_000a80d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = (int)param_7 - (int)param_5 >> 2;
  iVar2 = iVar4 * -0x55555555;
  if ((iVar2 != 0) &&
     (puVar3 = (undefined4 *)FUN_000a7fa8(param_1,param_3,iVar2,iVar4,param_2), param_7 != param_5))
  {
    while( true ) {
      *puVar3 = 0;
      FUN_000a07fc(puVar3,*param_5);
      puVar3[1] = param_5[1];
      puVar1 = param_5 + 2;
      param_5 = param_5 + 3;
      puVar3[2] = *puVar1;
      if (param_7 == param_5) break;
      puVar3 = puVar3 + 3;
    }
  }
  return;
}



