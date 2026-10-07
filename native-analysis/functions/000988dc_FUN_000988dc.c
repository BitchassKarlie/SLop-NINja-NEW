/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000988dc FUN_000988dc */

void FUN_000988dc(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_00098828(param_1 + 4,*(undefined4 *)(param_1 + 8),4);
  *puVar1 = (char)((uint)param_2 >> 0x18);
  puVar1[1] = (char)((uint)param_2 >> 0x10);
  puVar1[3] = (char)param_2;
  puVar1[2] = (char)((uint)param_2 >> 8);
  return;
}



