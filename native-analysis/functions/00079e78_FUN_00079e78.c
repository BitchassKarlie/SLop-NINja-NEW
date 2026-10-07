/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00079e78 FUN_00079e78 */

void FUN_00079e78(int *param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  double local_18;
  
  iVar1 = DAT_00079ee4 + 0x79e88;
  *(undefined *)(param_1 + 4) = 1;
  iVar1 = FUN_0009a884(param_2,iVar1,&local_18);
  if (iVar1 == 0) {
    param_1[1] = (int)(float)local_18;
  }
  iVar1 = FUN_0009a884(param_2,DAT_00079ee8 + 0x79eaa,&local_18);
  if (iVar1 == 0) {
    fVar2 = (float)local_18;
    param_1[5] = (int)fVar2;
  }
  else {
    fVar2 = (float)param_1[5];
  }
  if (fVar2 != DAT_00079ee0 && fVar2 < DAT_00079ee0 == (NAN(fVar2) || NAN(DAT_00079ee0))) {
    *(undefined *)(param_1 + 6) = 1;
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  return;
}



