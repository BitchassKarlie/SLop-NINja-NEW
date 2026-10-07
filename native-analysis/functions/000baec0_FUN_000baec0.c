/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000baec0 FUN_000baec0 */

undefined4 FUN_000baec0(int *param_1)

{
  int iVar1;
  void *__ptr;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    FUN_000bc1c0(param_1 + 0x8c);
    FUN_000bbefc(param_1 + 0x78);
    FUN_000c3210(param_1 + 0x1e);
    __ptr = (void *)param_1[0x12];
    if ((__ptr != (void *)0x0) && (param_1[0xd] != 0)) {
      if (0 < param_1[0xd]) {
        iVar2 = 0;
        while( true ) {
          FUN_000bc308((void *)((int)__ptr + iVar2 * 0x20));
          iVar1 = iVar2 * 0x10;
          iVar2 = iVar2 + 1;
          FUN_000bc2b4(param_1[0x13] + iVar1);
          if (param_1[0xd] <= iVar2) break;
          __ptr = (void *)param_1[0x12];
        }
        __ptr = (void *)param_1[0x12];
      }
      free(__ptr);
      free((void *)param_1[0x13]);
    }
    if ((void *)param_1[0xf] != (void *)0x0) {
      free((void *)param_1[0xf]);
    }
    if ((void *)param_1[0x11] != (void *)0x0) {
      free((void *)param_1[0x11]);
    }
    if ((void *)param_1[0x10] != (void *)0x0) {
      free((void *)param_1[0x10]);
    }
    if ((void *)param_1[0xe] != (void *)0x0) {
      free((void *)param_1[0xe]);
    }
    FUN_000c31a8(param_1 + 6);
    if ((*param_1 != 0) && ((code *)param_1[0xa4] != (code *)0x0)) {
      (*(code *)param_1[0xa4])();
    }
    memset(param_1,0,0x298);
  }
  return 0;
}



