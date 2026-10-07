/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e634 FUN_0009e634 */

void FUN_0009e634(uint *param_1,uint param_2,int param_3)

{
  void *pvVar1;
  void *__src;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  if (uVar2 == param_2) {
    return;
  }
  if (uVar2 < 0x21) {
    if (0x20 < param_2) {
      pvVar1 = operator_new__(param_2);
      uVar2 = *param_1;
      uVar3 = uVar2;
      if (uVar2 != 0) {
        uVar3 = 1;
      }
      if (param_2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 & 1;
      }
      if (uVar3 != 0) {
        if (param_2 < uVar2) {
          uVar2 = param_2;
        }
        memcpy(pvVar1,param_1 + 1,uVar2);
      }
      param_1[2] = param_2;
      param_1[1] = (uint)pvVar1;
    }
  }
  else if (0x20 < param_2) {
    if ((param_1[2] <= param_2) || (param_3 + param_2 < param_1[2])) {
      pvVar1 = operator_new__(param_2);
      uVar2 = *param_1;
      __src = (void *)param_1[1];
      uVar3 = uVar2;
      if (uVar2 != 0) {
        uVar3 = 1;
      }
      if (param_2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = uVar3 & 1;
      }
      if (uVar3 != 0) {
        if (param_2 < uVar2) {
          uVar2 = param_2;
        }
        memcpy(pvVar1,__src,uVar2);
        __src = (void *)param_1[1];
      }
      if (__src != (void *)0x0) {
        operator_delete__(__src);
      }
      param_1[1] = (uint)pvVar1;
      param_1[2] = param_2;
      *param_1 = param_2;
      return;
    }
  }
  else {
    pvVar1 = (void *)param_1[1];
    if (param_2 != 0) {
      uVar3 = param_2;
      if (uVar2 <= param_2) {
        uVar3 = uVar2;
      }
      memcpy(param_1 + 1,pvVar1,uVar3);
    }
    if (pvVar1 != (void *)0x0) {
      operator_delete__(pvVar1);
      *param_1 = param_2;
      return;
    }
  }
  *param_1 = param_2;
  return;
}



