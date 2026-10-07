/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008c084 Java_com_halfbrick_fruitninja_NativeGameLib_native_1saveOnExit */

void Java_com_halfbrick_fruitninja_NativeGameLib_native_1saveOnExit(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined auStack_c [4];
  
  puVar1 = *(undefined4 **)(DAT_0008c0a0 + 0x8c08c + DAT_0008c0a4);
  *puVar1 = param_1;
  FUN_000a63fc(auStack_c);
  *puVar1 = 0;
  return;
}



