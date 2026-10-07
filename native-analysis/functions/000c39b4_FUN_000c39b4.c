/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c39b4 FUN_000c39b4 */

int FUN_000c39b4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *__s1;
  int iVar4;
  int iVar5;
  void *pvVar6;
  void *local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined auStack_24 [8];
  
  iVar4 = *param_1;
  if (-1 < param_1[1]) {
    __s1 = (void *)(iVar4 + param_1[3]);
    iVar5 = param_1[2] - param_1[3];
    iVar3 = param_1[5];
    if (iVar3 == 0) {
      if (iVar5 < 0x1b) {
        return 0;
      }
      iVar3 = memcmp(__s1,(void *)(DAT_000c3abc + 0xc39e0),4);
      if (iVar3 != 0) goto LAB_000c3a9a;
      iVar3 = *(byte *)((int)__s1 + 0x1a) + 0x1b;
      if (iVar5 < iVar3) {
        return 0;
      }
      if (*(byte *)((int)__s1 + 0x1a) != 0) {
        iVar2 = param_1[6];
        iVar4 = 0;
        do {
          iVar1 = iVar4 + 1;
          iVar2 = iVar2 + (uint)*(byte *)((int)__s1 + iVar4 + 0x1b);
          param_1[6] = iVar2;
          iVar4 = iVar1;
        } while (iVar1 < (int)(uint)*(byte *)((int)__s1 + 0x1a));
      }
      param_1[5] = iVar3;
    }
    if (iVar3 + param_1[6] <= iVar5) {
      pvVar6 = (void *)((int)__s1 + 0x16);
      memcpy(auStack_24,pvVar6,4);
      *(undefined *)((int)__s1 + 0x16) = 0;
      *(undefined *)((int)__s1 + 0x17) = 0;
      *(undefined *)((int)__s1 + 0x18) = 0;
      *(undefined *)((int)__s1 + 0x19) = 0;
      local_30 = param_1[5];
      local_2c = (int)__s1 + local_30;
      local_28 = param_1[6];
      local_34 = __s1;
      FUN_000c2f2c(&local_34);
      iVar4 = memcmp(auStack_24,pvVar6,4);
      if (iVar4 == 0) {
        iVar3 = *param_1;
        iVar4 = param_1[3];
        if (param_2 != (int *)0x0) {
          *param_2 = iVar3 + iVar4;
          param_2[1] = param_1[5];
          param_2[2] = iVar3 + iVar4 + param_1[5];
          param_2[3] = param_1[6];
          iVar4 = param_1[3];
        }
        iVar3 = param_1[6];
        iVar5 = param_1[5];
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[3] = iVar4 + iVar3 + iVar5;
        return iVar3 + iVar5;
      }
      memcpy(pvVar6,auStack_24,4);
      iVar4 = *param_1;
LAB_000c3a9a:
      param_1[5] = 0;
      param_1[6] = 0;
      pvVar6 = memchr((void *)((int)__s1 + 1),0x4f,iVar5 - 1);
      if (pvVar6 == (void *)0x0) {
        pvVar6 = (void *)(iVar4 + param_1[2]);
      }
      param_1[3] = (int)pvVar6 - iVar4;
      return (int)__s1 - (int)pvVar6;
    }
  }
  return 0;
}



