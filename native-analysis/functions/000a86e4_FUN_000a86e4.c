/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a86e4 FUN_000a86e4 */

uint FUN_000a86e4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)(param_2 + 0xc) - (int)*(void **)(param_2 + 4);
  uVar3 = *(int *)(param_1 + 0xc) - (int)*(void **)(param_1 + 4);
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  uVar1 = memcmp(*(void **)(param_1 + 4),*(void **)(param_2 + 4),uVar1);
  if (uVar1 == 0) {
    if (uVar3 < uVar2) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (uint)(uVar3 != uVar2);
    }
  }
  return uVar1;
}



