/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b6d68 _zip_file_fillbuf */

size_t _zip_file_fillbuf(void *param_1,uint param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  size_t sVar4;
  
  if (param_3[1] == 0) {
    if (-1 < param_3[4] << 0x1f) {
      uVar3 = 1 - param_3[8];
      if (1 < (uint)param_3[8]) {
        uVar3 = 0;
      }
      if (param_2 == 0) {
        uVar3 = uVar3 | 1;
      }
      if (uVar3 == 0) {
        iVar1 = fseek(*(FILE **)(*param_3 + 4),param_3[6],0);
        if (iVar1 < 0) {
          puVar2 = (undefined4 *)__errno();
          _zip_error_set(param_3 + 1,4,*puVar2);
          return 0xffffffff;
        }
        uVar3 = param_3[8];
        if (param_2 < (uint)param_3[8]) {
          uVar3 = param_2;
        }
        sVar4 = fread(param_1,1,uVar3,*(FILE **)(*param_3 + 4));
        if (sVar4 != 0) {
          if (-1 < (int)sVar4) {
            param_3[6] = param_3[6] + sVar4;
            param_3[8] = param_3[8] - sVar4;
            return sVar4;
          }
          puVar2 = (undefined4 *)__errno();
          _zip_error_set(param_3 + 1,5,*puVar2);
          return sVar4;
        }
        _zip_error_set(param_3 + 1,0x11,0);
        goto LAB_000b6d9e;
      }
    }
    sVar4 = 0;
  }
  else {
LAB_000b6d9e:
    sVar4 = 0xffffffff;
  }
  return sVar4;
}



