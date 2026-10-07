/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007d860 FUN_0007d860 */

void FUN_0007d860(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[3];
  while (iVar3 != 0) {
    param_1[3] = *(int *)(iVar3 + 0x3c);
    if (*(undefined4 **)(iVar3 + 0x40) != (undefined4 *)0x0) {
      **(undefined4 **)(iVar3 + 0x40) = 0;
    }
    iVar2 = param_1[8];
    iVar1 = *(int *)(iVar2 + 0xc);
    if (iVar1 < *(int *)(iVar2 + 0x10)) {
      *(int *)(*(int *)(iVar2 + 8) + iVar1 * 4) = iVar3;
      *(int *)(iVar2 + 0xc) = iVar1 + 1;
    }
    iVar3 = param_1[3];
  }
  iVar3 = *param_1;
  param_1[3] = 0;
  if (iVar3 != 0) {
    iVar1 = 0x8c;
    iVar2 = 1;
    while( true ) {
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + iVar1;
      iVar1 = iVar1 + 0x8c;
      *(int *)(iVar3 + 0x40) = iVar2;
      if (iVar2 == 0x400) break;
      iVar3 = *param_1;
    }
    *(undefined4 *)(*param_1 + 0x22fb4) = 0;
  }
  iVar3 = param_1[5];
  *(undefined2 *)(param_1 + 1) = 1;
  if ((iVar3 != 0) && (0 < param_1[4])) {
    iVar2 = 0;
    iVar1 = 0;
    while( true ) {
      iVar3 = iVar3 + iVar2;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x88;
      *(undefined2 *)(iVar3 + 4) = 0;
      if (param_1[4] <= iVar1) break;
      iVar3 = param_1[5];
    }
  }
  return;
}



