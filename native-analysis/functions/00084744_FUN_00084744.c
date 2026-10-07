/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084744 FUN_00084744 */

undefined4 FUN_00084744(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar1 = 0;
  }
  else {
    FUN_00084684(&local_1c,param_1);
    *param_2 = local_1c;
    param_2[1] = uStack_18;
    param_2[2] = uStack_14;
    uVar1 = 1;
  }
  return uVar1;
}



