/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bdb94 FUN_000bdb94 */

undefined4 FUN_000bdb94(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined auStack_24 [24];
  
  iVar4 = *(int *)(param_1 + 0x1c);
  FUN_000c2ab8(auStack_24,*param_2,param_2[1]);
  iVar1 = FUN_000c28b4(auStack_24,1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar4 + 8);
    if (iVar1 < 2) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      do {
        iVar1 = iVar1 >> 1;
        iVar3 = iVar3 + 1;
      } while (1 < iVar1);
    }
    iVar1 = FUN_000c28b4(auStack_24,iVar3);
    if (iVar1 == -1) {
      uVar2 = 0xffffff78;
    }
    else {
      uVar2 = *(undefined4 *)(iVar4 + **(int **)(iVar4 + (iVar1 + 8) * 4) * 4);
    }
  }
  else {
    uVar2 = 0xffffff79;
  }
  return uVar2;
}



