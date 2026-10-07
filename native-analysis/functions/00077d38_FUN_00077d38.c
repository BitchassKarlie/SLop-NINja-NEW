/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077d38 FUN_00077d38 */

void FUN_00077d38(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int local_1c;
  
  if (param_2 == 1) {
    if (0 < *(int *)(DAT_00077dd8 + 0x77d90)) {
      FUN_00032d94(&local_1c);
      FUN_00017d90(&local_1c);
      if (local_1c != 0) goto LAB_00077d4e;
    }
    piVar1 = param_3;
    if (param_3 != (int *)0x0) {
      piVar1 = (int *)param_3[10];
    }
    FUN_00032dc8(piVar1);
  }
  else {
    if (param_2 == 2) {
      iVar2 = *(int *)(DAT_00077dd4 + 0x77d80);
      if (iVar2 < 1) {
        return;
      }
      *(int *)(DAT_00077dd4 + 0x77d80) = iVar2 + -1;
      return;
    }
    if (param_2 == 0) {
      if (param_3 == (int *)0x0) {
        FUN_0002b06c();
        FUN_000288e0(0x3f800000,0x3f800000,0,0x3f800000,0);
      }
      else {
        (**(code **)(*param_3 + 8))(param_3);
      }
    }
  }
LAB_00077d4e:
  iVar2 = *(int *)(DAT_00077dd0 + 0x77d54);
  if (0 < iVar2) {
    *(int *)(DAT_00077dd0 + 0x77d54) = iVar2 + -1;
  }
  *(int **)(param_1 + param_2 * 4) = param_3;
  if (param_3 != (int *)0x0) {
    *(undefined *)(param_3 + 0xd) = 1;
  }
  return;
}



