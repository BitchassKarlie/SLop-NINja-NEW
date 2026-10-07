/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b6e00 zip_fopen_index */

int * zip_fopen_index(int param_1,int param_2,uint param_3,int *param_4)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  
  piVar5 = param_4;
  if ((-1 < param_2) && (piVar5 = *(int **)(param_1 + 0x28), param_2 < (int)piVar5)) {
    if (((param_3 & 8) == 0) &&
       (uVar7 = *(int *)(*(int *)(param_1 + 0x30) + param_2 * 0x14) - 2, uVar7 < 2)) {
      _zip_error_set(param_1 + 8,0xf,0,uVar7,param_4);
      return (int *)0x0;
    }
    piVar5 = *(int **)(param_1 + 0x1c);
    if (param_2 < piVar5[1]) {
      iVar3 = param_2 * 0x3c;
      sVar1 = *(short *)(*piVar5 + iVar3 + 6);
      if (sVar1 == 0) {
        iVar9 = 4;
      }
      else if (sVar1 == 8) {
        if ((int)(param_3 << 0x1d) < 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = 6;
        }
      }
      else {
        if ((param_3 & 4) == 0) {
          _zip_error_set(param_1 + 8,0x10,0,sVar1,param_4);
          return (int *)0x0;
        }
        iVar9 = 0;
      }
      piVar5 = (int *)malloc(0x34);
      if (piVar5 == (int *)0x0) {
        _zip_error_set(param_1 + 8,0xe,0);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x34);
        if (iVar6 < *(int *)(param_1 + 0x38) + -1) {
          pvVar8 = *(void **)(param_1 + 0x3c);
        }
        else {
          iVar10 = *(int *)(param_1 + 0x38) + 10;
          pvVar8 = realloc(*(void **)(param_1 + 0x3c),iVar10 * 4);
          if (pvVar8 == (void *)0x0) {
            _zip_error_set(param_1 + 8,0xe,0);
            free(piVar5);
            piVar5 = (int *)0x0;
            goto LAB_000b6eb0;
          }
          iVar6 = *(int *)(param_1 + 0x34);
          *(int *)(param_1 + 0x38) = iVar10;
          *(void **)(param_1 + 0x3c) = pvVar8;
        }
        *(int **)((int)pvVar8 + iVar6 * 4) = piVar5;
        *(int *)(param_1 + 0x34) = iVar6 + 1;
        *piVar5 = param_1;
        _zip_error_init(piVar5 + 1);
        piVar5[4] = 0;
        iVar6 = crc32(0,0,0);
        piVar5[10] = 0;
        piVar5[5] = -1;
        piVar5[8] = 0;
        piVar5[7] = 0;
        piVar5[6] = 0;
        piVar5[0xb] = 0;
        piVar5[0xc] = 0;
        piVar5[9] = iVar6;
      }
LAB_000b6eb0:
      piVar5[4] = iVar9;
      piVar5[5] = (uint)*(ushort *)(**(int **)(param_1 + 0x1c) + iVar3 + 6);
      piVar5[7] = *(int *)(**(int **)(param_1 + 0x1c) + iVar3 + 0x14);
      piVar5[8] = *(int *)(**(int **)(param_1 + 0x1c) + iVar3 + 0x10);
      piVar5[10] = *(int *)(iVar3 + **(int **)(param_1 + 0x1c) + 0xc);
      piVar2 = (int *)_zip_file_get_offset(param_1,param_2);
      piVar5[6] = (int)piVar2;
      if (piVar2 != (int *)0x0) {
        if (-1 < piVar5[4] << 0x1e) {
          piVar5[7] = piVar5[8];
          return piVar5;
        }
        pvVar8 = malloc(0x2000);
        piVar5[0xb] = (int)pvVar8;
        if (pvVar8 == (void *)0x0) {
          _zip_error_set(param_1 + 8,0xe,0);
          zip_fclose(piVar5);
          return (int *)0x0;
        }
        iVar3 = _zip_file_fillbuf(pvVar8,0x2000,piVar5);
        if (iVar3 < 1) {
          _zip_error_copy(param_1 + 8,piVar5 + 1);
          zip_fclose(piVar5);
          return (int *)0x0;
        }
        piVar4 = (int *)malloc(0x38);
        piVar5[0xc] = (int)piVar4;
        if (piVar4 == (int *)0x0) {
          _zip_error_set(param_1 + 8,0xe,0);
          zip_fclose(piVar5);
          return (int *)0x0;
        }
        piVar2 = (int *)0x0;
        piVar4[8] = 0;
        piVar4[9] = 0;
        piVar4[10] = 0;
        iVar9 = DAT_000b702c;
        *piVar4 = piVar5[0xb];
        *(int *)(piVar5[0xc] + 4) = iVar3;
        iVar3 = inflateInit2_(piVar5[0xc],0xfffffff1,iVar9 + 0xb6f72,0x38);
        if (iVar3 == 0) {
          return piVar5;
        }
        _zip_error_set(param_1 + 8,0xd,iVar3);
      }
      zip_fclose(piVar5);
      return piVar2;
    }
  }
  _zip_error_set(param_1 + 8,0x12,0,piVar5,param_4);
  return (int *)0x0;
}



