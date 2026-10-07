/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6678 FUN_000a6678 */

longlong FUN_000a6678(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  void *__dest;
  void *__src;
  int *piVar3;
  
  uVar2 = (**(code **)(*param_1 + 0x2ac))(param_1,param_3);
  __dest = operator_new__(uVar2);
  __src = (void *)(**(code **)(*param_1 + 0x378))(param_1,param_3,0);
  memcpy(__dest,__src,uVar2);
  iVar1 = DAT_000a6708;
  (**(code **)(*param_1 + 0x37c))(param_1,param_3,__src,0);
  piVar3 = (int *)operator_new(0x14);
  piVar3[1] = (int)__dest;
  piVar3[2] = uVar2;
  piVar3[4] = 0;
  *piVar3 = iVar1 + 0xa66d0;
  *(undefined *)(piVar3 + 3) = 1;
  uVar2 = FUN_000b32b4();
  if ((uVar2 | (int)uVar2 >> 0x1f) == 0) {
    *piVar3 = iVar1 + 0xa66d0;
    if ((*(char *)(piVar3 + 3) != '\0') && ((void *)piVar3[1] != (void *)0x0)) {
      operator_delete__((void *)piVar3[1]);
    }
    operator_delete(piVar3);
  }
  return (longlong)(int)uVar2;
}



