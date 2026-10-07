/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ad378 FUN_000ad378 */

undefined4 FUN_000ad378(int param_1,uint *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *param_2 & 0xffff0000;
  if (((uVar3 & *(uint *)(param_1 + 0xc)) != 0) &&
     ((*param_2 & *(uint *)(param_1 + 0xc) & 0xffff) != 0)) {
    if (uVar3 == 0x10000) {
      if (param_2[1] == *(uint *)(param_1 + 0x10)) {
        FUN_000ad364(param_1 + 0x20);
        return 0;
      }
    }
    else if (uVar3 == 0x20000) {
      bVar1 = *(byte *)(param_1 + 0x10);
      if (bVar1 < 0x89) {
        if ((bVar1 & *(byte *)(param_2 + 1)) != 0) goto LAB_000ad3aa;
      }
      else if (*(byte *)(param_2 + 1) == bVar1) {
LAB_000ad3aa:
        uVar2 = FUN_000ad364(param_1 + 0x20);
        return uVar2;
      }
    }
  }
  return 0;
}



