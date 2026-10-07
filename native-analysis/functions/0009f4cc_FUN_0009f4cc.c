/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009f4cc FUN_0009f4cc */

void FUN_0009f4cc(int **param_1,int *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  FILE *pFVar6;
  void *pvVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int **ppiVar11;
  int *piVar12;
  undefined4 local_228;
  char acStack_224 [512];
  int local_24;
  
  iVar3 = DAT_0009f704;
  iVar10 = DAT_0009f700 + 0x9f4dc;
  ppiVar11 = param_1 + 2;
  local_24 = **(int **)(iVar10 + DAT_0009f704);
  iVar4 = FUN_0009e480(ppiVar11);
  iVar9 = 0;
  do {
    cVar1 = *(char *)(iVar4 + iVar9);
    cVar2 = *(char *)(DAT_0009f708 + 0x9f5f8 + iVar9);
    if (cVar1 != cVar2) {
      if (cVar2 == '\\') {
        if (cVar1 != '/') goto LAB_0009f5f8;
      }
      else if ((cVar2 != '/') || (cVar1 != '\\')) {
LAB_0009f5f8:
        if (**param_1 == 0) {
          uVar5 = 0;
        }
        else {
          local_228 = 0;
          piVar12 = (int *)FUN_000ac5c0(**param_1);
          param_1[0xe] = piVar12;
          iVar4 = FUN_000ac59c(&local_228,**param_1);
          if (iVar4 == 0) {
            uVar5 = 0;
          }
          else {
            if (param_2 == (int *)0x0) {
              *(undefined *)((int)param_1 + 0x37) = 1;
              piVar12 = (int *)operator_new__((uint)param_1[0xe]);
              param_1[0xc] = piVar12;
            }
            else {
              if (param_3 != (int *)0x0) {
                piVar12 = param_1[0xe];
                if (piVar12 <= param_3) {
                  param_1[0xe] = piVar12;
                }
                if (param_3 < piVar12) {
                  param_1[0xe] = param_3;
                }
              }
              param_1[0xc] = param_2;
              *(undefined *)((int)param_1 + 0x37) = 0;
            }
            iVar4 = DAT_0009f714;
            pcVar8 = (char *)FUN_0009e480(ppiVar11);
            pcVar8 = strstr(pcVar8,(char *)(iVar4 + 0x9f77c));
            if (pcVar8 == (char *)0x0) {
              FUN_000ac57c(&local_228,param_1[0xc],param_1[0xe]);
            }
            else {
              pvVar7 = operator_new__((uint)param_1[0xe]);
              FUN_000ac57c(&local_228,pvVar7,param_1[0xe]);
              if (param_1[0xe] != (int *)0x0) {
                piVar12 = (int *)0x0;
                do {
                  *(byte *)((int)param_1[0xc] + (int)piVar12) =
                       *(byte *)(iVar4 + 0x9f678 + (uint)piVar12 % 0xff) ^
                       *(byte *)((int)pvVar7 + (int)piVar12);
                  piVar12 = (int *)((int)piVar12 + 1);
                } while (piVar12 < param_1[0xe]);
              }
              if (pvVar7 != (void *)0x0) {
                operator_delete__(pvVar7);
              }
            }
            (*param_1)[1] = (int)param_1[0xc];
            *(undefined *)((int)param_1 + 0x36) = 1;
            uVar5 = 1;
          }
          FUN_000ac588(&local_228);
        }
        goto LAB_0009f5de;
      }
    }
    iVar9 = iVar9 + 1;
    if (iVar9 == 3) {
      uVar5 = FUN_0009e480(ppiVar11);
      FUN_0009f3c4(uVar5,acStack_224);
      piVar12 = *param_1;
      pFVar6 = fopen(acStack_224,(char *)(DAT_0009f70c + 0x9f532));
      piVar12[2] = (int)pFVar6;
      if ((FILE *)(*param_1)[2] == (FILE *)0x0) {
        param_1[0xe] = (int *)0x0;
        *(undefined *)(param_1 + 0xd) = 0;
        uVar5 = 0;
      }
      else {
        fseek((FILE *)(*param_1)[2],0,2);
        piVar12 = (int *)ftell((FILE *)(*param_1)[2]);
        param_1[0xe] = piVar12;
        fseek((FILE *)(*param_1)[2],0,0);
        if (param_2 == (int *)0x0) {
          *(undefined *)((int)param_1 + 0x37) = 1;
          piVar12 = (int *)operator_new__((uint)param_1[0xe]);
          param_1[0xc] = piVar12;
          piVar12 = param_1[0xe];
        }
        else {
          if (param_3 == (int *)0x0) {
            piVar12 = param_1[0xe];
          }
          else {
            piVar12 = param_1[0xe];
            if (param_3 <= param_1[0xe]) {
              piVar12 = param_3;
            }
            param_1[0xe] = piVar12;
          }
          param_1[0xc] = param_2;
          *(undefined *)((int)param_1 + 0x37) = 0;
        }
        pvVar7 = operator_new__((uint)piVar12);
        fread(pvVar7,1,(size_t)param_1[0xe],(FILE *)(*param_1)[2]);
        if (param_1[0xe] != (int *)0x0) {
          piVar12 = (int *)0x0;
          iVar4 = DAT_0009f710 + 0x9f59a;
          do {
            *(byte *)((int)param_1[0xc] + (int)piVar12) =
                 *(byte *)(iVar4 + (uint)piVar12 % 0xff) ^ *(byte *)((int)pvVar7 + (int)piVar12);
            piVar12 = (int *)((int)piVar12 + 1);
          } while (piVar12 < param_1[0xe]);
        }
        if (pvVar7 != (void *)0x0) {
          operator_delete__(pvVar7);
        }
        (*param_1)[1] = (int)param_1[0xc];
        fclose((FILE *)(*param_1)[2]);
        (*param_1)[2] = 0;
        *(undefined *)((int)param_1 + 0x36) = 1;
        uVar5 = 1;
      }
LAB_0009f5de:
      if (local_24 == **(int **)(iVar10 + iVar3)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
  } while( true );
}



