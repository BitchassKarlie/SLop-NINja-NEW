/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c3050 FUN_000c3050 */

undefined4 FUN_000c3050(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_000c3008();
    uVar1 = 0;
    param_1[0x54] = param_2;
  }
  return uVar1;
}



