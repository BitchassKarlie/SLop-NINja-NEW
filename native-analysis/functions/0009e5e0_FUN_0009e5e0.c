/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e5e0 FUN_0009e5e0 */

int FUN_0009e5e0(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *__s1;
  
  if (*param_1 - 1 < *param_2 - 1) {
LAB_0009e5fa:
    iVar1 = -1;
  }
  else {
    if (*param_1 - 1 <= *param_2 - 1) {
      uVar2 = FUN_0009e48c();
      uVar3 = FUN_0009e48c(param_2);
      if (uVar2 < uVar3) goto LAB_0009e5fa;
      if (uVar2 <= uVar3) {
        if (*param_1 < 0x21) {
          __s1 = param_1 + 1;
        }
        else {
          __s1 = (uint *)param_1[1];
        }
        if (*param_2 < 0x21) {
          param_2 = param_2 + 1;
        }
        else {
          param_2 = (uint *)param_2[1];
        }
        iVar1 = memcmp(__s1,param_2,*param_1 - 1);
        return iVar1;
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}



