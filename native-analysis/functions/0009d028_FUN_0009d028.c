/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009d028 FUN_0009d028 */

undefined4 FUN_0009d028(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = **(int **)(param_1 + 0x20);
  if (iVar4 != 0) {
    iVar2 = 0;
    do {
      uVar3 = (uint)*(byte *)((int)*(int **)(param_1 + 0x20) + iVar2 + 8);
      uVar1 = ((uint)*(byte *)(**(int **)(DAT_0009d064 + 0x9d034 + DAT_0009d068) + uVar3 + 1) <<
              0x1c) >> 0x1f;
      if (uVar3 == 10) {
        uVar1 = 1;
      }
      if ((uVar1 == 0) && (uVar3 != 0xd)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar4);
  }
  return 1;
}



