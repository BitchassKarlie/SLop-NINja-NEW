/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000acb84 FUN_000acb84 */

void FUN_000acb84(undefined4 param_1,uint *param_2,undefined4 param_3,uint *param_4,
                 undefined4 param_5,uint *param_6)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *param_4;
  puVar2 = param_4;
  if (uVar1 < *param_2) {
    FUN_000acb24(param_4,param_2,*param_2,uVar1,param_3,param_4,param_1);
    uVar1 = *param_4;
  }
  if (*param_6 < uVar1) {
    FUN_000acb24(param_6,param_4,*param_6,uVar1,param_3,puVar2,param_1);
    uVar1 = *param_4;
  }
  if (uVar1 < *param_2) {
    FUN_000acb24(param_4,param_2,*param_2,uVar1,param_3,puVar2,param_1);
  }
  return;
}



