/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a75f4 FUN_000a75f4 */

undefined8
FUN_000a75f4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,int param_6)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_5 == *(int *)param_1) && (param_6 == *(int *)((int)param_1 + 4))) {
    *(undefined4 *)param_1 = param_3;
    *(undefined4 *)((int)param_1 + 4) = param_4;
  }
  return uVar1;
}



