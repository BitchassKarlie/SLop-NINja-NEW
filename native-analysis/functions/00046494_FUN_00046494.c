/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00046494 FUN_00046494 */

void FUN_00046494(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar2 = *(uint *)(param_1 + 0x74);
  uVar1 = 1 - uVar2;
  if (1 < uVar2) {
    uVar1 = 0;
  }
  if (uVar2 == 6) {
    uVar1 = uVar1 | 1;
  }
  if (((uVar1 != 0) || (uVar2 == 0xe)) || (uVar2 == 10)) {
    FUN_0006fc8c(*(undefined4 *)(*(int *)(DAT_000464f8 + 0x464b2 + DAT_000464fc) + 0x50));
    *(undefined4 *)(param_1 + 0x74) = 9;
    local_14 = DAT_000464ec;
    local_10 = DAT_000464f0;
    local_c = DAT_000464f4;
    FUN_000333d4(&local_14);
  }
  return;
}



