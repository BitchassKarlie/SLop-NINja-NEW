/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005f3e8 FUN_0005f3e8 */

void FUN_0005f3e8(int param_1,int param_2,undefined4 param_3,undefined *param_4,int **param_5)

{
  undefined uVar1;
  
  if (*(char *)(param_5 + 8) != '\0') {
    param_5 = (int **)*param_5;
  }
  if (param_5 != (int **)0x0) {
    (**(code **)((int)*param_5 + 8))(param_5,param_1 + 0x84);
  }
  *(undefined4 *)(param_1 + 0x78) = param_3;
  *(undefined4 *)(param_1 + 0x74) = DAT_0005f46c;
  *(undefined *)(param_1 + 0x7f) = param_4[3];
  *(undefined *)(param_1 + 0x7e) = param_4[2];
  *(undefined *)(param_1 + 0x7d) = param_4[1];
  *(undefined *)(param_1 + 0x7c) = *param_4;
  if (param_2 == 0) {
    *(undefined *)(param_1 + 0x80) = 0xff;
    *(undefined *)(param_1 + 0x81) = 0xff;
    uVar1 = 0xff;
    *(char *)(param_1 + 0x82) = (char)param_2;
  }
  else {
    uVar1 = 0;
    *(undefined *)(param_1 + 0x80) = 0;
    *(undefined *)(param_1 + 0x81) = 0;
    *(undefined *)(param_1 + 0x82) = 0xff;
  }
  *(undefined *)(param_1 + 0x7f) = uVar1;
  *(char *)(param_1 + 0x72) = (char)param_2;
  *(undefined *)(param_1 + 0x71) = 1;
  *(undefined *)(param_1 + 0x70) = 1;
  return;
}



