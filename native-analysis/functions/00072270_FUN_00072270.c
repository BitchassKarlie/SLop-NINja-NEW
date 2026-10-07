/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00072270 FUN_00072270 */

void FUN_00072270(undefined4 param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char *__src;
  int iVar4;
  void *__dest;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double local_c8;
  undefined4 local_bc;
  char acStack_b8 [128];
  float local_38;
  int local_34;
  
  iVar2 = DAT_00072364;
  iVar7 = DAT_00072360 + 0x72282;
  iVar6 = DAT_00072368 + 0x7228c;
  local_34 = **(int **)(iVar7 + DAT_00072364);
  iVar3 = FUN_0009a5d8(param_1,iVar6);
  fVar1 = DAT_0007235c;
  if (iVar3 != 0) {
    iVar5 = DAT_00072370 + 0x722bc;
    iVar8 = DAT_0007236c + 0x722c2;
    do {
      while( true ) {
        local_38 = fVar1;
        __src = (char *)FUN_0009a4a0(iVar3,iVar5);
        if ((__src == (char *)0x0) || (*__src == '\0')) break;
        local_bc = FUN_0008f414();
        strcpy(acStack_b8,__src);
        iVar4 = FUN_0009a884(iVar3,iVar8,&local_c8);
        if (iVar4 == 0) {
          local_38 = (float)local_c8;
        }
        iVar4 = param_2 + 0x150;
        if (param_3 != 0) {
          iVar4 = param_2 + 0x140;
        }
        __dest = (void *)FUN_000721d0(iVar4,&local_bc);
        memcpy(__dest,acStack_b8,0x84);
        iVar3 = FUN_0009a4f0(iVar3,iVar6);
        if (iVar3 == 0) goto LAB_0007233a;
      }
      iVar3 = FUN_0009a4f0(iVar3,iVar6);
    } while (iVar3 != 0);
  }
LAB_0007233a:
  if (local_34 != **(int **)(iVar7 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}



