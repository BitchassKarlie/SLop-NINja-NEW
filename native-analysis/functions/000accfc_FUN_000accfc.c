/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000accfc FUN_000accfc */

undefined4 *
FUN_000accfc(undefined4 *param_1,undefined4 param_2,uint *param_3,undefined4 param_4,uint *param_5)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  
  iVar5 = ((int)param_5 - (int)param_3 >> 4) - ((int)param_5 - (int)param_3 >> 0x1f) >> 1;
  puVar2 = param_3 + iVar5 * 4;
  puVar7 = puVar2 + 4;
  FUN_000acbd4(param_2,param_3,param_2,puVar2,param_4,param_5 + -4,0);
  puVar3 = puVar2;
  if (param_3 < puVar2) {
    if ((param_3[iVar5 * 4] <= puVar2[-4]) && (puVar4 = puVar2, puVar2[-4] <= param_3[iVar5 * 4])) {
      while (puVar3 = puVar4 + -4, param_3 < puVar3) {
        puVar6 = puVar4 + -8;
        if ((*puVar6 < *puVar3) || (puVar4 = puVar3, *puVar3 < *puVar6)) break;
      }
    }
  }
  puVar4 = puVar3;
  puVar6 = puVar7;
  if (puVar7 < param_5) {
    uVar1 = *puVar3;
    if ((uVar1 <= puVar2[4]) && (puVar2[4] <= uVar1)) {
      puVar2 = puVar2 + 8;
      do {
        puVar7 = puVar2;
        puVar6 = puVar7;
        if ((param_5 <= puVar7) || (*puVar7 < uVar1)) break;
        puVar2 = puVar7 + 4;
      } while (*puVar7 <= uVar1);
    }
  }
LAB_000acd92:
  do {
    puVar2 = puVar4;
    if (puVar6 < param_5) {
      if (*puVar6 <= *puVar4) {
        if (*puVar6 < *puVar4) goto joined_r0x000acda8;
        FUN_000acb24(puVar7,puVar6);
        puVar7 = puVar7 + 4;
      }
      puVar6 = puVar6 + 4;
      goto LAB_000acd92;
    }
joined_r0x000acda8:
    while (puVar4 = puVar3, param_3 < puVar4) {
      puVar3 = puVar4 + -4;
      if (*puVar2 <= puVar4[-4]) {
        if (*puVar2 < puVar4[-4]) break;
        puVar2 = puVar2 + -4;
        FUN_000acb24(puVar2,puVar3);
      }
    }
    if (puVar4 == param_3) {
      if (puVar6 == param_5) {
        param_1[1] = puVar2;
        param_1[3] = puVar7;
        *param_1 = param_2;
        param_1[2] = param_2;
        return param_1;
      }
      if (puVar7 != puVar6) {
        FUN_000acb24(puVar2,puVar7);
      }
      puVar7 = puVar7 + 4;
      puVar4 = puVar2 + 4;
      FUN_000acb24(puVar2,puVar6);
      puVar3 = param_3;
      puVar6 = puVar6 + 4;
    }
    else if (puVar6 == param_5) {
      puVar3 = puVar4 + -4;
      puVar4 = puVar2 + -4;
      if (puVar3 != puVar4) {
        FUN_000acb24(puVar3,puVar4);
      }
      puVar7 = puVar7 + -4;
      FUN_000acb24(puVar4,puVar7);
      puVar6 = param_5;
    }
    else {
      FUN_000acb24(puVar6,puVar4 + -4);
      puVar3 = puVar4 + -4;
      puVar4 = puVar2;
      puVar6 = puVar6 + 4;
    }
  } while( true );
}



