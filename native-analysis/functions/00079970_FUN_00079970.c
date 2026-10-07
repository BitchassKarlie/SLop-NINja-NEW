/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00079970 FUN_00079970 */

void FUN_00079970(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = (int)param_7 - (int)param_5 >> 5;
  if ((iVar3 != 0) &&
     (puVar2 = (undefined4 *)FUN_00079858(param_1,param_3,iVar3,param_4,param_2), param_7 != param_5
     )) {
    while( true ) {
      *puVar2 = *param_5;
      puVar2[1] = param_5[1];
      puVar2[2] = param_5[2];
      puVar2[3] = param_5[3];
      puVar2[4] = param_5[4];
      puVar2[5] = param_5[5];
      puVar2[6] = param_5[6];
      puVar1 = param_5 + 7;
      param_5 = param_5 + 8;
      puVar2[7] = *puVar1;
      if (param_7 == param_5) break;
      puVar2 = puVar2 + 8;
    }
  }
  return;
}



