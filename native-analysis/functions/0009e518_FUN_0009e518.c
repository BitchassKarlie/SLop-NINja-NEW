/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e518 FUN_0009e518 */

int FUN_0009e518(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*param_2 - 1 <= *param_1 - 1) {
    if (*param_2 - 1 < *param_1 - 1) {
      return 1;
    }
    uVar1 = FUN_0009e48c();
    uVar2 = FUN_0009e48c(param_2);
    if (uVar2 <= uVar1) {
      if (uVar2 < uVar1) {
        return 1;
      }
      if (*param_1 < 0x21) {
        param_1 = param_1 + 1;
      }
      else {
        param_1 = (uint *)param_1[1];
      }
      if (*param_2 < 0x21) {
        param_2 = param_2 + 1;
      }
      else {
        param_2 = (uint *)param_2[1];
      }
      iVar5 = 0;
      do {
        uVar2 = (uint)*(byte *)((int)param_1 + iVar5);
        uVar4 = (uint)*(byte *)((int)param_2 + iVar5);
        uVar1 = uVar2;
        if ((uVar2 - 0x41 & 0xff) < 0x1a) {
          uVar1 = uVar2 | 0x20;
        }
        if ((uVar4 - 0x41 & 0xff) < 0x1a) {
          uVar4 = uVar4 | 0x20;
        }
        iVar3 = uVar1 - uVar4;
        if (iVar3 == 0) goto LAB_0009e594;
        iVar5 = iVar5 + 1;
      } while (uVar2 != 0);
      if (-1 < iVar3) {
LAB_0009e594:
        if (0 < iVar3) {
          return 1;
        }
        return iVar3;
      }
    }
  }
  return -1;
}



