/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6350 FUN_000a6350 */

int FUN_000a6350(int *param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_4 != 0) {
    iVar5 = 0;
    do {
      uVar1 = (**(code **)(*param_1 + 0xc))(param_1);
      if (uVar1 < param_3) {
        return param_3 * iVar5;
      }
      if (param_3 != 0) {
        iVar4 = param_1[4];
        iVar2 = param_3 + iVar4;
        iVar3 = param_2 - iVar4;
        do {
          *(undefined *)(iVar3 + iVar4) = *(undefined *)(param_1[1] + iVar4);
          iVar4 = iVar4 + 1;
          param_1[4] = iVar4;
        } while (iVar4 != iVar2);
        param_2 = param_2 + param_3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_4);
  }
  return param_3 * param_4;
}



