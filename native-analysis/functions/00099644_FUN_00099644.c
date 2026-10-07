/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099644 FUN_00099644 */

undefined4 FUN_00099644(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    piVar1 = (int *)operator_new(0x10);
    iVar2 = DAT_0009968c + 0x99664;
    piVar1[1] = 0;
    piVar1[2] = 0;
    *piVar1 = iVar2;
    piVar1[3] = 0;
    FUN_000a751c(piVar1 + 1);
    FUN_000a751c(piVar1 + 3);
    iVar2 = FUN_000a7648(param_1 + 8,piVar1,0);
    if (iVar2 != 0) {
      FUN_00017d24(piVar1);
    }
  }
  return *(undefined4 *)(param_1 + 8);
}



