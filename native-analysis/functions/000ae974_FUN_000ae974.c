/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ae974 FUN_000ae974 */

uint FUN_000ae974(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 == 0) {
    param_3[1] = 0;
    *param_3 = param_1;
  }
  else {
    uVar4 = uVar3;
    uVar3 = 0;
    do {
      iVar1 = FUN_0009e5e0(uVar4,param_2);
      if (iVar1 < 0) {
        uVar2 = *(uint *)(uVar4 + 0x48);
      }
      else {
        uVar2 = *(uint *)(uVar4 + 0x44);
        uVar3 = uVar4;
      }
      uVar4 = uVar2;
    } while (uVar2 != 0);
    param_3[1] = uVar3;
    *param_3 = param_1;
    if (uVar3 != 0) {
      uVar3 = FUN_0009e5e0(param_2,uVar3);
      uVar3 = ~uVar3 >> 0x1f;
    }
  }
  return uVar3;
}



