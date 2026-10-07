/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00022784 FUN_00022784 */

bool FUN_00022784(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_c;
  
  if (param_2 == 7) {
    puVar1 = (undefined4 *)FUN_00022718(param_1 + 0x38,param_3);
    local_c = 0;
    FUN_00022208(&local_c,*puVar1);
    FUN_00022208(param_4,local_c);
    FUN_000221ac(&local_c);
  }
  return param_2 == 7;
}



