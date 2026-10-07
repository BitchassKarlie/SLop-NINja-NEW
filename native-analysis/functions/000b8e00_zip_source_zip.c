/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b8e00 zip_source_zip */

int zip_source_zip(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  int *__ptr;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined auStack_34 [16];
  
  if (param_1 != 0) {
    uVar3 = 1 - param_2;
    if (1 < param_2) {
      uVar3 = 0;
    }
    if ((((uVar3 | param_5 >> 0x1f) == 0) && (((uint)(param_6 < -1) | param_3 >> 0x1f) == 0)) &&
       ((int)param_3 < *(int *)(param_2 + 0x28))) {
      if (((param_4 & 8) == 0) && (*(int *)(*(int *)(param_2 + 0x30) + param_3 * 0x14) - 2U < 2)) {
        _zip_error_set(param_1 + 8,0xf,0);
      }
      else {
        if (param_6 == 0) {
          param_6 = -1;
          bVar5 = param_5 == 0;
        }
        else {
          bVar5 = param_5 != 0 || param_6 != -1;
        }
        if ((bVar5) && (-1 < (int)(param_4 << 0x1b))) {
          param_4 = param_4 | 4;
        }
        else {
          param_4 = param_4 & 0xfffffffb;
        }
        __ptr = (int *)malloc(0x28);
        if (__ptr == (int *)0x0) {
          _zip_error_set(param_1 + 8,0xe,0);
        }
        else {
          iVar4 = param_2 + 8;
          _zip_error_copy(auStack_34,iVar4);
          iVar1 = zip_stat_index(param_2,param_3,param_4,__ptr + 1);
          if (-1 < iVar1) {
            iVar2 = zip_fopen_index(param_2,param_3,param_4);
            *__ptr = iVar2;
            iVar1 = DAT_000b8f58;
            if (iVar2 != 0) {
              bVar5 = (param_4 & 4) == 0;
              __ptr[8] = param_5;
              __ptr[9] = param_6;
              if (bVar5) {
                __ptr[6] = param_6;
              }
              if (bVar5) {
                __ptr[5] = param_6;
              }
              if (bVar5) {
                *(undefined2 *)(__ptr + 7) = 0;
              }
              if (bVar5) {
                __ptr[3] = 0;
              }
              iVar1 = zip_source_function(param_1,iVar1 + 0xb8ec6,__ptr);
              if (iVar1 == 0) {
                free(__ptr);
                return 0;
              }
              return iVar1;
            }
          }
          free(__ptr);
          _zip_error_copy(param_1 + 8,iVar4);
          _zip_error_copy(iVar4,auStack_34);
        }
      }
    }
    else {
      _zip_error_set(param_1 + 8,0x12,0);
    }
  }
  return 0;
}



