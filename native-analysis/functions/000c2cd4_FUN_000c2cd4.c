/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c2cd4 FUN_000c2cd4 */

void FUN_000c2cd4(int *param_1,void *param_2,uint param_3,code *param_4,int param_5)

{
  size_t __n;
  undefined *puVar1;
  void *pvVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  char in_CY;
  
  uVar5 = param_3 + 7 & (int)param_3 >> 0x20;
  if (in_CY == '\0') {
    uVar5 = param_3;
  }
  __n = (int)uVar5 >> 3;
  if (param_1[1] == 0) {
    if ((int)(*param_1 + __n + 1) < param_1[4]) {
      pvVar2 = (void *)param_1[3];
    }
    else {
      if (param_1[3] == 0) {
        return;
      }
      sVar4 = *param_1 + __n + 0x100;
      param_1[4] = sVar4;
      pvVar2 = realloc((void *)param_1[2],sVar4);
      if (pvVar2 == (void *)0x0) {
        FUN_000c2ae0(param_1);
        return;
      }
      param_1[2] = (int)pvVar2;
      pvVar2 = (void *)((int)pvVar2 + *param_1);
      param_1[3] = (int)pvVar2;
    }
    memmove(pvVar2,param_2,__n);
    iVar3 = param_1[3];
    param_1[3] = iVar3 + __n;
    *param_1 = *param_1 + __n;
    *(undefined *)(iVar3 + __n) = 0;
  }
  else if (0 < (int)__n) {
    sVar4 = 0;
    do {
      puVar1 = (undefined *)((int)param_2 + sVar4);
      sVar4 = sVar4 + 1;
      (*param_4)(param_1,*puVar1,8);
    } while (sVar4 != __n);
  }
  iVar3 = param_3 + __n * -8;
  if (iVar3 != 0) {
    if (param_5 == 0) {
      (*param_4)(param_1,*(undefined *)((int)param_2 + __n));
    }
    else {
      (*param_4)(param_1,(int)(uint)*(byte *)((int)param_2 + __n) >> (8U - iVar3 & 0xff));
    }
  }
  return;
}



