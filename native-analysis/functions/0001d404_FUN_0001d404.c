/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001d404 FUN_0001d404 */

int FUN_0001d404(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = 0;
  local_20 = 0;
  local_1c = 0;
  uVar1 = FUN_0001c940();
  iVar2 = FUN_0001bd8c(uVar1,1,&local_20);
  if (param_2 == 0) {
    iVar3 = 0;
    if (iVar2 != 0) {
      do {
        if (*(char *)(iVar2 + 0x68) == '\0') {
          fVar4 = *(float *)(iVar2 + 0xa4);
        }
        else {
          fVar4 = *(float *)(iVar2 + 0x3c);
        }
        if ((fVar4 != 0.0 && fVar4 < 0.0 == NAN(fVar4)) && (*(char *)(iVar2 + 0x68) == '\0')) {
          iVar3 = iVar3 + 1;
        }
        uVar1 = FUN_0001c940();
        iVar2 = FUN_0001bdb8(uVar1,1,&local_20);
      } while (iVar2 != 0);
      return iVar3;
    }
  }
  else if (iVar2 != 0) {
    if (param_1 == -1) goto LAB_0001d484;
    do {
      if (param_1 == *(int *)(iVar2 + 100)) goto LAB_0001d48a;
      while( true ) {
        uVar1 = FUN_0001c940();
        iVar2 = FUN_0001bdb8(uVar1,1,&local_20);
        if (iVar2 == 0) {
          return iVar3;
        }
        if (param_1 != -1) break;
LAB_0001d484:
        if (*(int *)(iVar2 + 100) < 1) {
LAB_0001d48a:
          iVar3 = iVar3 + 1;
        }
      }
    } while( true );
  }
  return 0;
}



