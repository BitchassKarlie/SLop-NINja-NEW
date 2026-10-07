/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b37d8 FUN_000b37d8 */

int FUN_000b37d8(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined *)operator_new(0xc);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *puVar1 = 0;
  do {
    iVar3 = *(int *)(param_1 + 4);
    iVar2 = FUN_000b6ab4(iVar3 + 4,puVar1,0);
    if (*(int *)(*(int *)(param_1 + 4) + 4) != 0) {
      FUN_000b6ac8(param_1 + 4,*(undefined4 *)(*(int *)(param_1 + 4) + 4));
    }
  } while (iVar2 == 0);
  return iVar3;
}



