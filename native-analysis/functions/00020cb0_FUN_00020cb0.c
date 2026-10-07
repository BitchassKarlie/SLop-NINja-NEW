/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00020cb0 FUN_00020cb0 */

void FUN_00020cb0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00020cf4;
  if (param_1 < 0) {
    iVar2 = DAT_00020cf4 + 0x20cd2;
    *(undefined2 *)(DAT_00020cf0 + 0x20cd0) = 1;
    FUN_00020c38(iVar2);
    FUN_00020c38(iVar1 + 0x20ce2);
    FUN_00020c38(iVar1 + 0x20cf2);
  }
  else {
    FUN_00020c38(DAT_00020cec + 0x20cbc + param_1 * 0x10);
  }
  return;
}



