/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b873c FUN_000b873c */

int FUN_000b873c(FILE *param_1,int *param_2,undefined4 param_3)

{
  uint __off;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_6c;
  undefined auStack_64 [2];
  short local_62;
  ushort local_60;
  short local_5e;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  char *local_4c;
  short local_48;
  
  if (param_2[1] != 0) {
    iVar1 = *param_2;
    __off = *(uint *)(iVar1 + 0x38);
    if (0 < param_2[1]) {
      if (__off <= (uint)param_2[3]) {
        uVar4 = __off + *(int *)(iVar1 + 0x10) + 0x1e + (uint)*(ushort *)(iVar1 + 0x1c);
        if (uVar4 < __off) {
          uVar4 = __off;
        }
        if (uVar4 <= (uint)param_2[3]) {
          local_6c = 0;
          iVar1 = 0x3c;
          uVar5 = __off;
          iVar6 = 0;
          do {
            iVar3 = iVar1;
            iVar1 = fseek(param_1,__off,0);
            if (iVar1 != 0) {
              _zip_error_set(param_3,4,0);
              return -1;
            }
            iVar1 = _zip_dirent_read(auStack_64,param_1,0,0,1,param_3);
            if (iVar1 == -1) {
              return -1;
            }
            iVar6 = iVar6 + *param_2;
            if ((((*(short *)(iVar6 + 2) != local_62) || (*(short *)(iVar6 + 6) != local_5e)) ||
                (*(int *)(iVar6 + 8) != local_5c)) ||
               (((*(short *)(iVar6 + 0x1c) != local_48 || (*(char **)(iVar6 + 0x18) == (char *)0x0))
                || ((local_4c == (char *)0x0 ||
                    (iVar1 = strcmp(*(char **)(iVar6 + 0x18),local_4c), iVar1 != 0)))))) {
LAB_000b87b4:
              _zip_error_set(param_3,0x15,0);
              _zip_dirent_finalize(auStack_64);
              return -1;
            }
            if ((int)((uint)local_60 << 0x1c) < 0) {
              if (((local_58 != 0) || (local_54 != 0)) || (local_50 != 0)) goto LAB_000b87b4;
            }
            else if (((*(int *)(iVar6 + 0xc) != local_58) || (*(int *)(iVar6 + 0x10) != local_54))
                    || (*(int *)(iVar6 + 0x14) != local_50)) goto LAB_000b87b4;
            _zip_dirent_finalize(auStack_64);
            local_6c = local_6c + 1;
            if (param_2[1] <= local_6c) {
              return uVar4 - uVar5;
            }
            iVar1 = *param_2 + iVar3;
            __off = *(uint *)(iVar1 + 0x38);
            if (__off <= uVar5) {
              uVar5 = __off;
            }
            if ((uint)param_2[3] < uVar5) break;
            uVar2 = __off + *(int *)(iVar1 + 0x10) + 0x1e + (uint)*(ushort *)(iVar1 + 0x1c);
            if (uVar4 < uVar2) {
              uVar4 = uVar2;
            }
            iVar1 = iVar3 + 0x3c;
            iVar6 = iVar3;
          } while (uVar4 <= (uint)param_2[3]);
        }
      }
      _zip_error_set(param_3,0x13,0);
      return -1;
    }
  }
  return 0;
}



