/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000adda4 FUN_000adda4 */

undefined4 FUN_000adda4(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  *param_3 = 0;
  *param_4 = 0;
  iVar2 = param_1;
  while (param_2 != *(int *)(iVar2 + 0x14)) {
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x1c;
    if (iVar1 == 8) {
      return 0;
    }
  }
  iVar2 = param_1 + iVar1 * 0x1c;
  iVar3 = *(int *)(iVar2 + 0x18);
  if (-1 < iVar3) {
    *param_3 = *(int *)(iVar2 + 8) - *(int *)(param_1 + iVar1 * 0x1c);
    *param_4 = *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 4);
    iVar3 = *(int *)(iVar2 + 0x18);
  }
  if (iVar3 == 1) {
    return 0;
  }
  return 1;
}



