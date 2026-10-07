/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009f224 FUN_0009f224 */

size_t FUN_0009f224(int *param_1,void *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  void *__dest;
  size_t sVar3;
  uint uVar4;
  
  iVar1 = FUN_000ab3f8();
  if ((iVar1 == 0) || (*(FILE **)(*param_1 + 8) == (FILE *)0x0)) {
    sVar3 = 0;
  }
  else {
    lVar2 = ftell(*(FILE **)(*param_1 + 8));
    __dest = operator_new__(param_3);
    memcpy(__dest,param_2,param_3);
    if (param_3 != 0) {
      uVar4 = 0;
      iVar1 = DAT_0009f2b0 + 0x9f268;
      do {
        *(byte *)((int)__dest + uVar4) =
             *(byte *)(iVar1 + (uVar4 + lVar2) % 0xff) ^ *(byte *)((int)__dest + uVar4);
        uVar4 = uVar4 + 1;
      } while (uVar4 != param_3);
    }
    sVar3 = fwrite(__dest,1,param_3,*(FILE **)(*param_1 + 8));
    if (__dest != (void *)0x0) {
      operator_delete__(__dest);
    }
    if (sVar3 != 0) {
      sVar3 = 1;
    }
  }
  return sVar3;
}



