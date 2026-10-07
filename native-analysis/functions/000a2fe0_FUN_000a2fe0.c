/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a2fe0 FUN_000a2fe0 */

undefined4 * FUN_000a2fe0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar3 = *(undefined4 *)(DAT_000a3050 + 0xa2fee + DAT_000a3054);
  FUN_000a7488(uVar3);
  uVar1 = FUN_000a05a8();
  local_1c = *(undefined4 *)(DAT_000a3058 + 0xa3006);
  piVar2 = (int *)FUN_000a223c(uVar1,&local_1c);
  iVar4 = *piVar2;
  FUN_000a748c(uVar3);
  if (iVar4 == 0) {
    FUN_000a0670(param_1,0);
  }
  else {
    FUN_000a0a84(&local_20,iVar4,param_2,param_3);
    *param_1 = 0;
    FUN_000a07d0(param_1,local_20);
    FUN_000a1438(&local_20);
  }
  return param_1;
}



