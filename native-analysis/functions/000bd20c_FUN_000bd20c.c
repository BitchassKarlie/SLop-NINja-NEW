/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bd20c FUN_000bd20c */

void FUN_000bd20c(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  uVar8 = param_1[1];
  uVar3 = uVar8;
  if (uVar8 != 0) {
    uVar3 = 0;
    uVar5 = uVar8;
    do {
      uVar3 = uVar3 + 1;
      uVar5 = uVar5 >> 1;
    } while (uVar5 != 0);
  }
  iVar7 = *param_1;
  uVar3 = __aeabi_idiv((iVar7 + -1) * (uVar3 - 1),iVar7);
  iVar1 = (int)uVar8 >> (uVar3 & 0xff);
  do {
    if (iVar7 < 1) goto LAB_000bd25a;
    while( true ) {
      iVar4 = 1;
      iVar6 = 0;
      iVar2 = 1;
      do {
        iVar6 = iVar6 + 1;
        iVar2 = iVar1 * iVar2;
        iVar4 = (iVar1 + 1) * iVar4;
      } while (iVar6 != iVar7);
      if ((int)uVar8 < iVar2) break;
      while( true ) {
        if ((int)uVar8 < iVar4) {
          return;
        }
        iVar1 = iVar1 + 1;
        if (0 < iVar7) break;
LAB_000bd25a:
        iVar4 = 1;
        if ((int)uVar8 < 1) goto LAB_000bd262;
      }
    }
LAB_000bd262:
    iVar1 = iVar1 + -1;
  } while( true );
}



