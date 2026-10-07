/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009f2b4 FUN_0009f2b4 */

undefined4 FUN_0009f2b4(int *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  long lVar2;
  size_t __n;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  
  if (param_3 != 0) {
    if (*(int *)(*param_1 + 8) != 0) {
      pvVar1 = operator_new__(param_3);
      lVar2 = ftell(*(FILE **)(*param_1 + 8));
      __n = fread(pvVar1,1,param_3,*(FILE **)(*param_1 + 8));
      if (__n != 0) {
        sVar3 = 0;
        iVar5 = DAT_0009f374 + 0x9f304;
        do {
          *(byte *)((int)pvVar1 + sVar3) =
               *(byte *)(iVar5 + (sVar3 + lVar2) % 0xff) ^ *(byte *)((int)pvVar1 + sVar3);
          sVar3 = sVar3 + 1;
        } while (sVar3 != __n);
      }
      memcpy(param_2,pvVar1,__n);
      if (pvVar1 != (void *)0x0) {
        operator_delete__(pvVar1);
      }
      if (__n == 0) {
        return 0;
      }
      return 1;
    }
    pvVar1 = *(void **)(*param_1 + 4);
    uVar4 = (param_1[0xc] - (int)pvVar1) + param_1[0xe];
    if ((uVar4 < param_3) && (param_3 = uVar4, uVar4 == 0)) {
      return 0;
    }
    memcpy(param_2,pvVar1,param_3);
    *(size_t *)(*param_1 + 4) = *(int *)(*param_1 + 4) + param_3;
  }
  return 1;
}



