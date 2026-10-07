/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099454 FUN_00099454 */

undefined4 FUN_00099454(int *param_1,void *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*param_1 == 1) {
    iVar2 = memcmp(param_1 + 1,param_2,0x40);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = 0;
      do {
        if (*(char *)((int)param_2 + iVar2) != '\0') goto LAB_0009945e;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0x40);
      memcpy(param_2,param_1 + 1,0x40);
      uVar1 = 1;
    }
  }
  else {
LAB_0009945e:
    uVar1 = 0;
  }
  return uVar1;
}



