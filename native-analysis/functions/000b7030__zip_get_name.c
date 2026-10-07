/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b7030 _zip_get_name */

int _zip_get_name(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x28))) {
    if ((param_3 & 8) == 0) {
      if (*(int *)(*(int *)(param_1 + 0x30) + param_2 * 0x14) == 1) {
        _zip_error_set(param_4,0x17,0);
        return 0;
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x30) + param_2 * 0x14 + 8);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    piVar2 = *(int **)(param_1 + 0x1c);
    if ((piVar2 != (int *)0x0) && (param_2 < piVar2[1])) {
      return *(int *)(*piVar2 + param_2 * 0x3c + 0x18);
    }
  }
  _zip_error_set(param_4,0x12,0);
  return 0;
}



