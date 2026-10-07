/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c3810 FUN_000c3810 */

undefined4
FUN_000c3810(void **param_1,int param_2,int param_3,int param_4,void *param_5,void *param_6)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined4 extraout_r1;
  int iVar5;
  void *__n;
  void **ppvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((param_1 == (void **)0x0) || (pvVar1 = *param_1, pvVar1 == (void *)0x0)) {
LAB_000c3890:
    uVar2 = 0xffffffff;
  }
  else {
    if (param_2 != 0) {
      if (param_3 < 1) {
        iVar7 = 0;
        iVar9 = 1;
        iVar5 = iVar7;
      }
      else {
        iVar5 = 0;
        iVar7 = 0;
        do {
          iVar9 = iVar5 * 8;
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + *(int *)(param_2 + iVar9 + 4);
        } while (iVar5 != param_3);
        iVar5 = iVar7 / 0xff;
        iVar9 = iVar5 + 1;
      }
      pvVar4 = param_1[3];
      if (pvVar4 != (void *)0x0) {
        __n = (void *)((int)param_1[2] - (int)pvVar4);
        param_1[2] = __n;
        if (__n != (void *)0x0) {
          memmove(pvVar1,(void *)((int)pvVar1 + (int)pvVar4),(size_t)__n);
        }
        param_1[3] = (void *)0x0;
      }
      iVar3 = FUN_000c3558(param_1,iVar7);
      if ((iVar3 != 0) || (iVar3 = FUN_000c350c(param_1,iVar9), iVar3 != 0)) goto LAB_000c3890;
      if (0 < param_3) {
        pvVar1 = param_1[2];
        iVar3 = 0;
        iVar10 = 0;
        do {
          iVar8 = param_2 + iVar10;
          iVar3 = iVar3 + 1;
          memcpy((void *)((int)*param_1 + (int)pvVar1),*(void **)(param_2 + iVar10),
                 *(size_t *)(iVar8 + 4));
          iVar10 = iVar10 + 8;
          pvVar1 = (void *)(*(int *)(iVar8 + 4) + (int)param_1[2]);
          param_1[2] = pvVar1;
        } while (iVar3 != param_3);
      }
      if (iVar5 < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
        do {
          *(undefined4 *)((int)param_1[4] + (iVar3 + (int)param_1[7]) * 4) = 0xff;
          iVar10 = iVar3 + (int)param_1[7];
          iVar3 = iVar3 + 1;
          ppvVar6 = (void **)((int)param_1[5] + iVar10 * 8);
          pvVar1 = param_1[0x59];
          *ppvVar6 = param_1[0x58];
          ppvVar6[1] = pvVar1;
        } while (iVar3 != iVar5);
      }
      pvVar1 = param_1[7];
      __aeabi_idivmod(iVar7,0xff);
      *(undefined4 *)((int)param_1[4] + (iVar3 + (int)pvVar1) * 4) = extraout_r1;
      ppvVar6 = (void **)((int)param_1[5] + (iVar3 + (int)param_1[7]) * 8);
      *ppvVar6 = param_5;
      ppvVar6[1] = param_6;
      param_1[0x58] = param_5;
      param_1[0x59] = param_6;
      *(uint *)((int)param_1[4] + (int)param_1[7] * 4) =
           *(uint *)((int)param_1[4] + (int)param_1[7] * 4) | 0x100;
      param_1[7] = (void *)((int)param_1[7] + iVar9);
      pvVar1 = param_1[0x56];
      param_1[0x56] = (void *)((int)pvVar1 + 1);
      param_1[0x57] = (void *)((int)param_1[0x57] + (uint)((void *)0xfffffffe < pvVar1));
      if (param_4 != 0) {
        param_1[0x52] = (void *)0x1;
        return 0;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}



