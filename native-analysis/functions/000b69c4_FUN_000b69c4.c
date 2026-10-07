/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b69c4 FUN_000b69c4 */

uint FUN_000b69c4(int param_1,int param_2)

{
  uint uVar1;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 0x1400:
    uVar1 = (*(uint *)(param_2 + 0xc) & 0xfff) - 1;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    break;
  case 0x1401:
    uVar1 = *(uint *)(param_2 + 0xc) & 0xfff;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    break;
  case 0x1402:
    uVar1 = (*(uint *)(param_2 + 0xc) & 0xfff) - 3;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    break;
  case 0x1403:
    uVar1 = (*(uint *)(param_2 + 0xc) & 0xfff) - 2;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
    break;
  default:
    uVar1 = 1;
    break;
  case 0x1406:
    uVar1 = (*(uint *)(param_2 + 0xc) & 0xfff) - 5;
    if (uVar1 != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}



