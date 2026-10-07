/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a864 FUN_0009a864 */

undefined4 FUN_0009a864(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sscanf((char *)(*(int *)(param_1 + 0x18) + 8),(char *)(DAT_0009a880 + 0x9a872),param_2);
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}



