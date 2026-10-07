/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000adad8 FUN_000adad8 */

void FUN_000adad8(int param_1,int param_2,int param_3,float param_4,float param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = -1;
  iVar6 = *(int *)(DAT_000adba8 + 0xadaf0);
  iVar1 = iVar6;
  do {
    iVar3 = iVar1 % 8;
    iVar5 = param_1 + iVar3 * 0x1c;
    if (*(int *)(iVar5 + 0xf0) == param_2) {
      if (param_3 != 0) {
        *(undefined4 *)(iVar5 + 0xf8) = 0;
        *(int *)(iVar5 + 0xe8) = (int)param_4;
        *(int *)(iVar5 + 0xec) = (int)param_5;
        return;
      }
      *(undefined4 *)(iVar5 + 0xf8) = 1;
      return;
    }
    iVar1 = iVar1 + 1;
    if (*(int *)(iVar5 + 0xf0) == 0) {
      iVar4 = iVar3;
    }
  } while (iVar1 != iVar6 + 8);
  if ((param_3 != 0) && (iVar4 != -1)) {
    piVar2 = (int *)(DAT_000adbac + 0xadb34);
    *piVar2 = iVar6 + 1;
    if (7 < iVar6 + 1) {
      *piVar2 = 0;
    }
    iVar1 = *(int *)(param_1 + 0x1d0);
    *(int *)(param_1 + iVar4 * 0x1c + 0xf4) = iVar1;
    iVar1 = iVar1 + 1;
    *(int *)(param_1 + 0x1d0) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1d0) = 1;
    }
    param_1 = param_1 + iVar4 * 0x1c;
    *(int *)(param_1 + 0xf0) = param_2;
    *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
    *(int *)(param_1 + 0xe8) = (int)param_4;
    *(int *)(param_1 + 0xe0) = (int)param_4;
    *(int *)(param_1 + 0xec) = (int)param_5;
    *(int *)(param_1 + 0xe4) = (int)param_5;
  }
  return;
}



