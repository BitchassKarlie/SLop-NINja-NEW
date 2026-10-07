/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a344c FUN_000a344c */

void FUN_000a344c(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  
  iVar4 = DAT_000a35ec;
  iVar5 = DAT_000a35e8 + 0xa345e;
  if (**(char **)(iVar5 + DAT_000a35ec) != '\0') {
    **(char **)(iVar5 + DAT_000a35ec) = '\0';
    glDisable(0xb44);
  }
  memset(&local_7c,0,0x50);
  local_7c = DAT_000a35e0;
  local_78 = DAT_000a35e4;
  local_68 = DAT_000a35e0;
  local_64 = DAT_000a35e0;
  local_54 = DAT_000a35e4;
  local_50 = DAT_000a35e4;
  local_40 = DAT_000a35e4;
  local_3c = DAT_000a35e0;
  local_58 = param_5;
  local_30 = param_5;
  local_70 = param_2;
  local_6c = param_4;
  local_5c = param_2;
  local_48 = param_3;
  local_44 = param_4;
  local_34 = param_3;
  if ((param_1[3] == -1) &&
     ((**(int ***)(iVar5 + DAT_000a35f0) == (int *)0x0 ||
      (iVar3 = (**(code **)(***(int ***)(iVar5 + DAT_000a35f0) + 0x10))(), iVar3 != 0x20)))) {
    if (*(char *)(*(int *)(iVar5 + iVar4) + 4) != '\0') {
      *(undefined *)(*(int *)(iVar5 + iVar4) + 4) = 0;
      glDisable(0xbe2);
    }
  }
  else if (*(char *)(*(int *)(iVar5 + iVar4) + 4) == '\0') {
    *(undefined *)(*(int *)(iVar5 + iVar4) + 4) = 1;
    glEnable(0xbe2);
  }
  glVertexPointer(3,0x1406,0x14,&local_7c);
  if (*(char *)(*(int *)(iVar5 + iVar4) + 3) == '\0') {
    *(undefined *)(*(int *)(iVar5 + iVar4) + 3) = 1;
    glEnableClientState(0x8074);
    iVar3 = *(int *)(iVar5 + iVar4);
    cVar1 = *(char *)(iVar3 + 2);
  }
  else {
    iVar3 = *(int *)(iVar5 + iVar4);
    cVar1 = *(char *)(iVar3 + 2);
  }
  if (cVar1 == '\0') {
    glTexCoordPointer(2,0x1406,0x14,&local_70);
    iVar4 = *(int *)(iVar5 + iVar4);
    cVar1 = *(char *)(iVar4 + 1);
  }
  else {
    *(undefined *)(iVar3 + 2) = 0;
    glDisableClientState(0x8076);
    glTexCoordPointer(2,0x1406,0x14,&local_70);
    iVar4 = *(int *)(iVar5 + iVar4);
    cVar1 = *(char *)(iVar4 + 1);
  }
  if (cVar1 == '\0') {
    *(undefined *)(iVar4 + 1) = 1;
    glEnableClientState(0x8078);
  }
  piVar2 = (int *)FUN_0008d120();
  local_2b = param_1[1];
  local_2c = *param_1;
  local_2a = param_1[2];
  local_29 = param_1[3];
  (**(code **)(*piVar2 + 0x18))(piVar2,&local_2c);
  glDrawArrays(5,0,4);
  iVar4 = FUN_000a6e14();
  if (iVar4 != 0) {
    FUN_000a6e28();
    glDrawArrays(5,0,4);
  }
  return;
}



