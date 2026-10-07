/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00022444 FUN_00022444 */

int FUN_00022444(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = 0;
  local_20 = 0;
  local_1c = 0;
  uVar1 = FUN_0001c940();
  iVar2 = FUN_0001bd8c(uVar1,0,&local_20);
  if (param_2 == 0) {
    iVar3 = 0;
    if (iVar2 != 0) {
      do {
        if (0.0 < *(float *)(iVar2 + 0x80)) {
          iVar3 = iVar3 + 1;
        }
        uVar1 = FUN_0001c940();
        iVar2 = FUN_0001bdb8(uVar1,0,&local_20);
      } while (iVar2 != 0);
      return iVar3;
    }
  }
  else if (iVar2 != 0) {
    do {
      if (param_1 == *(int *)(iVar2 + 0x90)) {
        iVar3 = iVar3 + 1;
      }
      uVar1 = FUN_0001c940();
      iVar2 = FUN_0001bdb8(uVar1,0,&local_20);
      if (iVar2 == 0) {
        return iVar3;
      }
      if (param_1 == *(int *)(iVar2 + 0x90)) {
        iVar3 = iVar3 + 1;
      }
      uVar1 = FUN_0001c940();
      iVar2 = FUN_0001bdb8(uVar1,0,&local_20);
    } while (iVar2 != 0);
    return iVar3;
  }
  return 0;
}



