/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006fea4 FUN_0006fea4 */

void FUN_0006fea4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  FUN_000a3a68();
  iVar2 = FUN_000a5318();
  if (((iVar2 != 0) || (iVar2 = FUN_0006e1b4(), iVar2 != 0)) &&
     (iVar2 = *(int *)(param_1 + 0x154), *(int *)(param_1 + 0x154) != 0)) {
    do {
      piVar1 = (int *)(iVar2 + 0x8c);
      iVar4 = iVar2;
      iVar2 = *piVar1;
    } while (*piVar1 != 0);
    do {
      while( true ) {
        if ((0x2f < *(byte *)(iVar4 + 4)) && (*(byte *)(iVar4 + 4) < 0x3a)) {
          uVar3 = FUN_000a3a68();
          FUN_000a5028(uVar3,iVar4 + 4);
        }
        iVar2 = *(int *)(iVar4 + 0x90);
        if (*(int *)(iVar4 + 0x90) != 0) break;
        iVar2 = *(int *)(iVar4 + 0x94);
        if (iVar2 == 0) {
          return;
        }
        bVar5 = *(int *)(iVar2 + 0x90) == iVar4;
        iVar4 = iVar2;
        if (bVar5) {
          do {
            iVar4 = *(int *)(iVar2 + 0x94);
            if (iVar4 == 0) {
              return;
            }
            bVar5 = iVar2 == *(int *)(iVar4 + 0x90);
            iVar2 = iVar4;
          } while (bVar5);
        }
      }
      do {
        iVar4 = iVar2;
        iVar2 = *(int *)(iVar4 + 0x8c);
      } while (*(int *)(iVar4 + 0x8c) != 0);
    } while (iVar4 != 0);
  }
  return;
}



