/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b6104 FUN_000b6104 */

void FUN_000b6104(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  uVar5 = *(undefined4 *)(iVar2 + 0x10);
  uVar4 = *(undefined4 *)(iVar2 + 0x14);
  puVar1 = (undefined4 *)operator_new(0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FUN_000b5fa8(puVar1,iVar2 + 0xc,uVar5,iVar2 + 0xc,uVar4,param_2);
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  if ((puVar1 != puVar3) && (puVar3 != (undefined4 *)0x0)) {
    FUN_000b5138(puVar3);
    operator_delete(puVar3);
  }
  *(undefined4 **)(param_1 + 0x14) = puVar1;
  return;
}



