/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00094b24 FUN_00094b24 */

void FUN_00094b24(int param_1,uint param_2)

{
  int local_18;
  int local_14;
  
  if (param_2 < 3) {
    local_18 = DAT_00094b60 + 0x94b42;
    local_14 = DAT_00094b64 + 0x94b4c;
    (**(code **)(DAT_00094b60 + 0x94b4a))(&local_18,param_1 + param_2 * 100 + 0x164);
    *(undefined *)(param_1 + param_2 * 100 + 0x188) = 0;
  }
  return;
}



