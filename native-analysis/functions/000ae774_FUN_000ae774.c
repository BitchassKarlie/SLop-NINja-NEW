/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ae774 FUN_000ae774 */

void FUN_000ae774(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (param_3 < *(uint *)(*(int *)(param_2 + 0x30) + 0x18)) {
    iVar1 = *(int *)(param_2 + 0x30);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar2 == 0) {
      for (; iVar3 = iVar2, param_3 != 0; param_3 = param_3 - 1) {
LAB_000ae79e:
        if (iVar3 == 0) break;
        iVar4 = *(int *)(iVar3 + 0x48);
        if (*(int *)(iVar3 + 0x48) == 0) {
          iVar2 = *(int *)(iVar3 + 0x4c);
          if ((iVar2 != 0) && (iVar4 = iVar2, iVar3 == *(int *)(iVar2 + 0x48))) {
            do {
              iVar2 = *(int *)(iVar4 + 0x4c);
              if (iVar2 == 0) break;
              bVar5 = *(int *)(iVar2 + 0x48) == iVar4;
              iVar4 = iVar2;
            } while (bVar5);
          }
        }
        else {
          do {
            iVar2 = iVar4;
            iVar4 = *(int *)(iVar2 + 0x44);
          } while (*(int *)(iVar2 + 0x44) != 0);
        }
      }
    }
    else {
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 0x44);
      } while (*(int *)(iVar3 + 0x44) != 0);
      if (param_3 != 0) goto LAB_000ae79e;
    }
    param_1[1] = iVar3;
    *param_1 = iVar1 + 0xc;
  }
  else {
    *param_1 = *(int *)(param_2 + 0x30) + 0xc;
    param_1[1] = 0;
  }
  return;
}



