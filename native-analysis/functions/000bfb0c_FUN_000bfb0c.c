/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bfb0c FUN_000bfb0c */

int * FUN_000bfb0c(int param_1,undefined4 param_2)

{
  int *__s;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  
  __s = (int *)calloc(1,0xc90);
  iVar6 = *(int *)(param_1 + 0x1c);
  memset(__s,0,0xc90);
  iVar1 = FUN_000c28b4(param_2,1);
  if (iVar1 == 0) {
    *__s = 1;
  }
  else {
    iVar1 = FUN_000c28b4(param_2,4);
    *__s = iVar1 + 1;
  }
  iVar1 = FUN_000c28b4(param_2,1);
  if (iVar1 != 0) {
    iVar1 = FUN_000c28b4(param_2,8);
    __s[0x123] = iVar1 + 1;
    if (0 < iVar1 + 1) {
      iVar1 = *(int *)(param_1 + 4);
      puVar7 = (uint *)(__s + 0x124);
      iVar8 = 0;
      do {
        if ((iVar1 == 0) || (uVar3 = iVar1 - 1, uVar3 == 0)) {
          uVar3 = FUN_000c28b4(param_2,0);
          *puVar7 = uVar3;
          iVar1 = *(int *)(param_1 + 4);
          if (iVar1 != 0) goto LAB_000bfb8a;
LAB_000bfc24:
          iVar1 = 0;
        }
        else {
          iVar1 = 0;
          do {
            iVar1 = iVar1 + 1;
            uVar3 = uVar3 >> 1;
          } while (uVar3 != 0);
          uVar3 = FUN_000c28b4(param_2,iVar1);
          *puVar7 = uVar3;
          iVar1 = *(int *)(param_1 + 4);
          if (iVar1 == 0) goto LAB_000bfc24;
LAB_000bfb8a:
          uVar4 = iVar1 - 1;
          if (uVar4 == 0) goto LAB_000bfc24;
          iVar1 = 0;
          do {
            iVar1 = iVar1 + 1;
            uVar4 = uVar4 >> 1;
          } while (uVar4 != 0);
        }
        uVar4 = FUN_000c28b4(param_2,iVar1);
        puVar7[0x100] = uVar4;
        if (((((int)(uVar4 | uVar3) < 0) || (uVar3 == uVar4)) ||
            (iVar1 = *(int *)(param_1 + 4), iVar1 <= (int)uVar3)) || (iVar1 <= (int)uVar4))
        goto LAB_000bfc04;
        iVar8 = iVar8 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar8 < __s[0x123]);
    }
  }
  iVar1 = FUN_000c28b4(param_2,2);
  if (0 < iVar1) goto LAB_000bfc04;
  iVar1 = *__s;
  if (iVar1 < 2) {
LAB_000bfc28:
    if (iVar1 < 1) {
      return __s;
    }
  }
  else if (0 < *(int *)(param_1 + 4)) {
    iVar8 = 0;
    do {
      iVar2 = FUN_000c28b4(param_2,4);
      __s[iVar8 + 1] = iVar2;
      iVar1 = *__s;
      if (iVar1 <= iVar2) goto LAB_000bfc04;
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 4));
    goto LAB_000bfc28;
  }
  iVar1 = 0;
  piVar5 = __s;
  while (iVar8 = FUN_000c28b4(param_2,8), iVar8 < *(int *)(iVar6 + 0x10)) {
    iVar8 = FUN_000c28b4(param_2,8);
    piVar5[0x101] = iVar8;
    if (*(int *)(iVar6 + 0x14) <= iVar8) break;
    iVar8 = FUN_000c28b4(param_2,8);
    piVar5[0x111] = iVar8;
    if (*(int *)(iVar6 + 0x18) <= iVar8) break;
    iVar1 = iVar1 + 1;
    piVar5 = piVar5 + 1;
    if (*__s <= iVar1) {
      return __s;
    }
  }
LAB_000bfc04:
  FUN_000bf9e8(__s);
  return (int *)0x0;
}



