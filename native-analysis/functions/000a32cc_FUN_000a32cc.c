/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a32cc FUN_000a32cc */

void FUN_000a32cc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  
  iVar4 = DAT_000a342c;
  iVar5 = DAT_000a3428 + 0xa32da;
  if (**(char **)(iVar5 + DAT_000a342c) != '\0') {
    **(char **)(iVar5 + DAT_000a342c) = '\0';
    glDisable(0xb44);
  }
  glDisable(0xb50);
  if ((param_4 == 0) &&
     ((**(int ***)(iVar5 + DAT_000a3430) == (int *)0x0 ||
      (iVar3 = (**(code **)(***(int ***)(iVar5 + DAT_000a3430) + 0x10))(), iVar3 != 0x20)))) {
    if (*(char *)(*(int *)(iVar5 + iVar4) + 4) != '\0') {
      *(undefined *)(*(int *)(iVar5 + iVar4) + 4) = 0;
      glDisable(0xbe2);
      glVertexPointer(3,0x1406,0x24,param_1);
      iVar3 = *(int *)(iVar5 + iVar4);
      cVar1 = *(char *)(iVar3 + 3);
      goto joined_r0x000a3316;
    }
  }
  else if (*(char *)(*(int *)(iVar5 + iVar4) + 4) == '\0') {
    *(undefined *)(*(int *)(iVar5 + iVar4) + 4) = 1;
    glEnable(0xbe2);
  }
  glVertexPointer(3,0x1406,0x24,param_1);
  iVar3 = *(int *)(iVar5 + iVar4);
  cVar1 = *(char *)(iVar3 + 3);
joined_r0x000a3316:
  if (cVar1 == '\0') {
    *(undefined *)(iVar3 + 3) = 1;
    glEnableClientState(0x8074);
    glColorPointer(4,0x1401,0x24,param_1 + 0x18);
    iVar3 = *(int *)(iVar5 + iVar4);
    cVar1 = *(char *)(iVar3 + 2);
  }
  else {
    glColorPointer(4,0x1401,0x24,param_1 + 0x18);
    iVar3 = *(int *)(iVar5 + iVar4);
    cVar1 = *(char *)(iVar3 + 2);
  }
  if (cVar1 == '\0') {
    *(undefined *)(iVar3 + 2) = 1;
    glEnableClientState(0x8076);
    glTexCoordPointer(2,0x1406,0x24,param_1 + 0x1c);
    iVar4 = *(int *)(iVar5 + iVar4);
    cVar1 = *(char *)(iVar4 + 1);
  }
  else {
    glTexCoordPointer(2,0x1406,0x24,param_1 + 0x1c);
    iVar4 = *(int *)(iVar5 + iVar4);
    cVar1 = *(char *)(iVar4 + 1);
  }
  if (cVar1 == '\0') {
    *(undefined *)(iVar4 + 1) = 1;
    glEnableClientState(0x8078);
  }
  piVar2 = (int *)FUN_0008d120();
  local_21 = 0xff;
  local_22 = 0xff;
  local_23 = 0xff;
  local_24 = 0xff;
  (**(code **)(*piVar2 + 0x18))(piVar2,&local_24);
  glDrawArrays(param_3,0,param_2);
  return;
}



