/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008f638 FUN_0008f638 */

ushort * FUN_0008f638(ushort **param_1,uint param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  if ((int)param_2 < 0) {
    param_2 = param_2 + 0x100;
  }
  else if (0xff < (int)param_2) goto LAB_0008f656;
  if (param_1[param_2 + 1] != (ushort *)0x0) {
    return param_1[param_2 + 1];
  }
LAB_0008f656:
  if ((int)param_1[0x101] < 1) {
LAB_0008f678:
    puVar1 = (ushort *)0x0;
  }
  else {
    puVar1 = *param_1;
    if (*puVar1 != param_2) {
      puVar2 = (ushort *)0x0;
      do {
        puVar2 = (ushort *)((int)puVar2 + 1);
        if (puVar2 == param_1[0x101]) goto LAB_0008f678;
        puVar1 = puVar1 + 0x12;
      } while (*puVar1 != param_2);
    }
  }
  return puVar1;
}



