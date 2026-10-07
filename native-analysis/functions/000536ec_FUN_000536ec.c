/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000536ec FUN_000536ec */

void FUN_000536ec(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if ((*(int *)(param_1 + 0x120) != 0) ||
     (iVar1 = *(int *)(param_1 + 0x74), *(int *)(param_1 + 0x74) != 0)) {
    if (*(char *)(iVar1 + 0x35) == '\0') {
      FUN_00023b48();
    }
    else if (*(char *)(iVar1 + 0x35) == '\x01') {
      FUN_0001e0c0();
    }
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined *)(param_1 + 0x27) = 1;
  }
  return;
}



