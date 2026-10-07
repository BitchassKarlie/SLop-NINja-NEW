/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b5508 FUN_000b5508 */

uint FUN_000b5508(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(int *)(param_2 + 0xc) - (int)*(void **)(param_2 + 4);
  uVar2 = *(int *)(param_3 + 0xc) - (int)*(void **)(param_3 + 4);
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  uVar1 = memcmp(*(void **)(param_2 + 4),*(void **)(param_3 + 4),uVar1);
  if (uVar1 == 0) {
    uVar1 = (uint)(uVar3 < uVar2);
  }
  else {
    uVar1 = uVar1 >> 0x1f;
  }
  return uVar1;
}



