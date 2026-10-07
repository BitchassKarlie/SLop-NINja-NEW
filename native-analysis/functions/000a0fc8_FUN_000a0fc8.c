/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0fc8 FUN_000a0fc8 */

void FUN_000a0fc8(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_000a92dc();
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) == 5) {
      puVar2 = (undefined4 *)
               FUN_000a0608(*(int *)(iVar1 + 0xc) + 0x28,*(undefined4 *)(iVar1 + 0x10));
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      *puVar2 = *param_3;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
    }
  }
  return;
}



