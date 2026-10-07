/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8360 FUN_000a8360 */

void FUN_000a8360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = (int)param_7 - (int)param_5 >> 3;
  if ((iVar3 != 0) &&
     (puVar2 = (undefined4 *)FUN_000a82a0(param_1,param_3,iVar3,param_4,param_2), param_7 != param_5
     )) {
    while( true ) {
      *puVar2 = 0;
      FUN_000a07fc(puVar2,*param_5);
      puVar1 = param_5 + 1;
      param_5 = param_5 + 2;
      puVar2[1] = *puVar1;
      if (param_7 == param_5) break;
      puVar2 = puVar2 + 2;
    }
  }
  return;
}



