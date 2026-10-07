/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b49b4 FUN_000b49b4 */

uint FUN_000b49b4(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = DAT_000b4b98;
  iVar3 = DAT_000b4b94 + 0xb49c2;
  if ((*param_1 == 0) || (param_1[4] == 0)) {
    piVar4 = (int *)(uint)*(byte *)(*(int *)(iVar3 + DAT_000b4b98) + 3);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)0x0;
      *(undefined *)(*(int *)(iVar3 + DAT_000b4b98) + 3) = 0;
      glDisableClientState(0x8074);
    }
    uVar6 = 0xffffffff;
    uVar1 = 0xffffffff;
    if (param_1[5] != 0) goto LAB_000b4a72;
LAB_000b4a0a:
    uVar6 = uVar1;
    if (*(char *)(*(int *)(iVar3 + iVar5) + 5) != '\0') {
      *(undefined *)(*(int *)(iVar3 + iVar5) + 5) = 0;
      glDisableClientState(0x8075);
    }
    if (param_1[10] == 0) goto LAB_000b4aaa;
LAB_000b4a1a:
    if (param_1[0xe] == 0) goto LAB_000b4aaa;
    if (piVar4 != (int *)param_1[0xe]) {
      piVar4 = (int *)param_1[0xe];
      FUN_000b6848(piVar4);
      uVar1 = (**(code **)(*piVar4 + 0xc))(piVar4);
      if (uVar1 <= uVar6) {
        uVar6 = (**(code **)(*piVar4 + 0xc))(piVar4);
      }
    }
    if (*(char *)(*(int *)(iVar3 + iVar5) + 2) == '\0') {
      *(undefined *)(*(int *)(iVar3 + iVar5) + 2) = 1;
      glEnableClientState(0x8076);
    }
    glColorPointer(param_1[10],param_1[0xb],param_1[0xc],param_1[0xd]);
  }
  else {
    piVar4 = (int *)param_1[4];
    uVar6 = 0xffffffff;
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)param_1[4];
      FUN_000b6848(piVar4);
      (**(code **)(*piVar4 + 0xc))(piVar4);
      uVar6 = (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    iVar5 = DAT_000b4b98;
    if (*(char *)(*(int *)(iVar3 + DAT_000b4b98) + 3) == '\0') {
      *(undefined *)(*(int *)(iVar3 + DAT_000b4b98) + 3) = 1;
      glEnableClientState(0x8074);
    }
    glVertexPointer(*param_1,param_1[1],param_1[2],param_1[3]);
    uVar1 = uVar6;
    if (param_1[5] == 0) goto LAB_000b4a0a;
LAB_000b4a72:
    uVar1 = uVar6;
    if (param_1[9] == 0) goto LAB_000b4a0a;
    if (piVar4 != (int *)param_1[9]) {
      piVar4 = (int *)param_1[9];
      FUN_000b6848(piVar4);
      uVar1 = (**(code **)(*piVar4 + 0xc))(piVar4);
      if (uVar1 <= uVar6) {
        uVar6 = (**(code **)(*piVar4 + 0xc))(piVar4);
      }
    }
    if (*(char *)(*(int *)(iVar3 + iVar5) + 5) == '\0') {
      *(undefined *)(*(int *)(iVar3 + iVar5) + 5) = 1;
      glEnableClientState(0x8075);
    }
    glNormalPointer(param_1[6],param_1[7],param_1[8]);
    if (param_1[10] != 0) goto LAB_000b4a1a;
LAB_000b4aaa:
    if (*(char *)(*(int *)(iVar3 + iVar5) + 2) != '\0') {
      *(undefined *)(*(int *)(iVar3 + iVar5) + 2) = 0;
      glDisableClientState(0x8076);
      iVar2 = param_1[0xf];
      goto joined_r0x000b4ac2;
    }
  }
  iVar2 = param_1[0xf];
joined_r0x000b4ac2:
  if (iVar2 != 0) {
    glClientActiveTexture(0x84c0);
    if ((param_1[0xf] == 0) || (param_1[0x13] == 0)) {
      if (*(char *)(*(int *)(iVar3 + iVar5) + 1) != '\0') {
        *(undefined *)(*(int *)(iVar3 + iVar5) + 1) = 0;
        glDisableClientState(0x8078);
      }
    }
    else {
      if ((int *)param_1[0x13] != piVar4) {
        piVar4 = (int *)param_1[0x13];
        FUN_000b6848(piVar4);
        uVar1 = (**(code **)(*piVar4 + 0xc))(piVar4);
        if (uVar1 <= uVar6) {
          uVar6 = (**(code **)(*piVar4 + 0xc))(piVar4);
        }
      }
      if (*(char *)(*(int *)(iVar3 + iVar5) + 1) == '\0') {
        *(undefined *)(*(int *)(iVar3 + iVar5) + 1) = 1;
        glEnableClientState(0x8078);
      }
      glTexCoordPointer(param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12]);
    }
  }
  return uVar6;
}



