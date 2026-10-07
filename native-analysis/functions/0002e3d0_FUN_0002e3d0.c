/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002e3d0 FUN_0002e3d0 */

void FUN_0002e3d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar2 = FUN_0002e348();
  iVar1 = DAT_0002e408;
  FUN_000918bc(uVar2,param_1);
  uVar2 = FUN_000a5f28();
  FUN_000a5e60(uVar2,param_1);
  puVar3 = *(undefined **)(iVar1 + 0x2e3f0 + DAT_0002e40c);
  FUN_00073b20(*(undefined4 *)(puVar3 + 0x18c));
  if (*(char *)(DAT_0002e410 + 0x2e403) != '\0') {
    *puVar3 = 2;
  }
  return;
}



