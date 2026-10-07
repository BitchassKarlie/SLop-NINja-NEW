/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000adeb4 FUN_000adeb4 */

void FUN_000adeb4(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0x89;
  do {
    while (param_1[6] < 1) {
      iVar2 = param_1[3];
      iVar3 = param_1[1];
      FUN_000ad504(param_2,iVar1 + 0x10,0x20,(float)(longlong)param_1[2],
                   (float)(longlong)(param_1[2] - *param_1),0);
      FUN_000ad504(param_2,iVar1 + 0x20,0x20,(float)(longlong)iVar2,(float)(longlong)(iVar2 - iVar3)
                   ,0);
      if (param_1[6] == -1) {
        FUN_000ad52c(param_2,iVar1,1,0x3f800000,0);
      }
      iVar2 = iVar1 + 1;
      param_1 = param_1 + 7;
      FUN_000ad52c(param_2,iVar1,2,0x3f800000,0);
      iVar1 = iVar2;
      if (iVar2 == 0x91) {
        return;
      }
    }
    if ((param_1[4] != 0) && (param_1[5] != 0)) {
      FUN_000ad52c(param_2,iVar1,4,0x3f800000,0);
    }
    iVar2 = iVar1 + 1;
    param_1 = param_1 + 7;
    FUN_000ad52c(param_2,iVar1,8,0x3f800000,0);
    iVar1 = iVar2;
  } while (iVar2 != 0x91);
  return;
}



