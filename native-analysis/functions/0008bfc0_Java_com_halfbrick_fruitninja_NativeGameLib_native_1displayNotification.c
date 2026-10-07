/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008bfc0 Java_com_halfbrick_fruitninja_NativeGameLib_native_1displayNotification */

void Java_com_halfbrick_fruitninja_NativeGameLib_native_1displayNotification
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined auStack_1c [4];
  
  iVar1 = DAT_0008bff4;
  uVar2 = FUN_000a3a10();
  puVar3 = *(undefined4 **)(iVar1 + 0x8bfda + DAT_0008bff8);
  *puVar3 = param_1;
  FUN_000a3f18(uVar2,auStack_1c,param_2,param_3,param_4);
  *puVar3 = 0;
  return;
}



