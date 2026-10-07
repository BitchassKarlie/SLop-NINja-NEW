/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a379c FUN_000a379c */

undefined4 FUN_000a379c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))();
  if (iVar1 == 0) {
    __android_log_print(6,DAT_000a37f8 + 0xa37d6,DAT_000a37fc + 0xa37d8,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x35c))(param_1,iVar1,param_3,param_4);
    if (iVar1 < 0) {
      __android_log_print(6,DAT_000a3800 + 0xa37ec,DAT_000a3804 + 0xa37ee,param_2);
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



