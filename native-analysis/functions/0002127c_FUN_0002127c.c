/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002127c FUN_0002127c */

int * FUN_0002127c(int *param_1,int param_2,undefined4 param_3,ushort *param_4,ushort *param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort *puVar6;
  
  puVar6 = param_4;
  puVar1 = (ushort *)operator_new(0x18);
  uVar5 = *param_5;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_5 + 2);
  *puVar1 = uVar5;
  *(undefined4 *)(puVar1 + 4) = 1;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  puVar4 = *(ushort **)(param_2 + 4);
  if (puVar4 == (ushort *)0x0) {
    *(ushort **)(param_2 + 4) = puVar1;
    *(ushort **)(param_2 + 8) = puVar1;
    goto LAB_00021302;
  }
  puVar3 = puVar4;
  if (param_4 == (ushort *)0x0) {
    do {
      puVar2 = puVar3;
      puVar3 = *(ushort **)(puVar2 + 8);
    } while (puVar3 != (ushort *)0x0);
    uVar5 = *param_5;
    if (uVar5 <= *puVar2) goto LAB_000212c8;
LAB_00021310:
    do {
      puVar3 = puVar4;
      puVar4 = *(ushort **)(puVar3 + 8);
    } while (*(ushort **)(puVar3 + 8) != (ushort *)0x0);
    *(ushort **)(puVar1 + 10) = puVar3;
    *(ushort **)(puVar3 + 8) = puVar1;
    *(ushort **)(param_2 + 8) = puVar1;
    puVar3 = (ushort *)0x0;
  }
  else {
    uVar5 = *param_5;
    if (uVar5 < *param_4) {
      puVar3 = *(ushort **)(param_4 + 6);
      if (puVar3 == (ushort *)0x0) {
        puVar3 = (ushort *)0x0;
LAB_0002134a:
        *(ushort **)(puVar1 + 10) = param_4;
        *(ushort **)(param_4 + 6) = puVar1;
        goto LAB_000212f6;
      }
      if (uVar5 <= *puVar3) goto LAB_000212c8;
    }
    else {
LAB_000212c8:
      param_4 = (ushort *)0x0;
      puVar3 = puVar4;
      do {
        if (*puVar3 < uVar5) {
          puVar2 = *(ushort **)(puVar3 + 8);
        }
        else {
          puVar2 = *(ushort **)(puVar3 + 6);
          param_4 = puVar3;
        }
        puVar3 = puVar2;
      } while (puVar3 != (ushort *)0x0);
      if (param_4 == (ushort *)0x0) goto LAB_00021310;
      puVar3 = *(ushort **)(param_4 + 6);
      if (puVar3 == (ushort *)0x0) goto LAB_0002134a;
    }
    do {
      puVar4 = puVar3;
      puVar3 = *(ushort **)(puVar4 + 8);
    } while (*(ushort **)(puVar4 + 8) != (ushort *)0x0);
    *(ushort **)(puVar1 + 10) = puVar4;
    *(ushort **)(puVar4 + 8) = puVar1;
    puVar3 = (ushort *)0x0;
  }
LAB_000212f6:
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_00021200(param_2,puVar1,puVar3,0,param_3,puVar6);
LAB_00021302:
  *param_1 = param_2;
  param_1[1] = (int)puVar1;
  return param_1;
}



