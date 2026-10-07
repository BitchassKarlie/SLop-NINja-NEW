/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e59c FUN_0009e59c */

int FUN_0009e59c(uint *param_1,void *param_2,size_t param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  if ((param_3 == *param_1 - 1) && (iVar1 = FUN_0009e48c(param_1), iVar1 == param_4)) {
    if (*param_1 < 0x21) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (uint *)param_1[1];
    }
    uVar2 = memcmp(param_1,param_2,param_3);
    iVar1 = 1 - uVar2;
    if (1 < uVar2) {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



