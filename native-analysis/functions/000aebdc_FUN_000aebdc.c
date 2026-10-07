/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aebdc FUN_000aebdc */

void FUN_000aebdc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = param_7 - param_5 >> 2;
  iVar1 = iVar5 * -0x55555555;
  if ((iVar1 != 0) &&
     (iVar1 = FUN_000aeae4(param_1,param_3,iVar1,iVar5,param_2), param_7 != param_5)) {
    iVar5 = 0;
    do {
      puVar3 = (undefined4 *)(param_5 + iVar5);
      puVar6 = (undefined4 *)(iVar1 + iVar5);
      iVar5 = iVar5 + 0xc;
      uVar2 = puVar3[1];
      uVar4 = puVar3[2];
      *puVar6 = *puVar3;
      puVar6[1] = uVar2;
      puVar6[2] = uVar4;
    } while (iVar5 != ((((uint)(param_7 - (param_5 + 0xc)) >> 2) * 0x2aaaaaab & 0x3fffffff) + 1) *
                      0xc);
  }
  return;
}



