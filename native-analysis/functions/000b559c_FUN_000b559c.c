/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b559c FUN_000b559c */

uint FUN_000b559c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *__s2;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 == 0) {
    param_3[1] = 0;
    *param_3 = param_1;
  }
  else {
    __s2 = *(void **)(param_2 + 4);
    uVar6 = *(int *)(param_2 + 0xc) - (int)__s2;
    uVar2 = uVar3;
    uVar3 = 0;
    do {
      uVar4 = *(int *)(uVar2 + 0xc) - (int)*(void **)(uVar2 + 4);
      uVar5 = uVar6;
      if (uVar4 <= uVar6) {
        uVar5 = uVar4;
      }
      iVar1 = memcmp(*(void **)(uVar2 + 4),__s2,uVar5);
      if (iVar1 == 0) {
        if (uVar4 < uVar6) goto LAB_000b55de;
LAB_000b55d0:
        uVar5 = *(uint *)(uVar2 + 0x18);
        uVar3 = uVar2;
      }
      else {
        if (-1 < iVar1) goto LAB_000b55d0;
LAB_000b55de:
        uVar5 = *(uint *)(uVar2 + 0x1c);
      }
      uVar2 = uVar5;
    } while (uVar2 != 0);
    param_3[1] = uVar3;
    *param_3 = param_1;
    if (uVar3 != 0) {
      uVar5 = *(int *)(param_2 + 0xc) - (int)*(void **)(param_2 + 4);
      uVar6 = *(int *)(uVar3 + 0xc) - (int)*(void **)(uVar3 + 4);
      uVar2 = uVar6;
      if (uVar5 <= uVar6) {
        uVar2 = uVar5;
      }
      uVar3 = memcmp(*(void **)(param_2 + 4),*(void **)(uVar3 + 4),uVar2);
      if (uVar3 == 0) {
        uVar3 = (uint)(uVar6 <= uVar5);
      }
      else {
        uVar3 = ~uVar3 >> 0x1f;
      }
    }
  }
  return uVar3;
}



