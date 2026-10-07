/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008d434 FUN_0008d434 */

void FUN_0008d434(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_2 == 0) {
    glMatrixMode(0x1701);
    iVar2 = FUN_0008d120();
    iVar1 = DAT_0008d510;
    puVar3 = (undefined4 *)(DAT_0008d510 + 0x8d4e8);
    FUN_0001d16c(param_1 + 0x804,iVar2 + 0x60,&local_58);
    *puVar3 = local_58;
    *(undefined4 *)(iVar1 + 0x8d4ec) = uStack_54;
    *(undefined4 *)(iVar1 + 0x8d4f0) = uStack_50;
    *(undefined4 *)(iVar1 + 0x8d4f4) = uStack_4c;
    *(undefined4 *)(iVar1 + 0x8d4f8) = local_48;
    *(undefined4 *)(iVar1 + 0x8d4fc) = uStack_44;
    *(undefined4 *)(iVar1 + 0x8d500) = uStack_40;
    *(undefined4 *)(iVar1 + 0x8d504) = uStack_3c;
    *(undefined4 *)(iVar1 + 0x8d508) = local_38;
    *(undefined4 *)(iVar1 + 0x8d50c) = uStack_34;
    *(undefined4 *)((int)&DAT_0008d510 + iVar1) = uStack_30;
    *(undefined4 *)(FUN_0008d514 + iVar1) = uStack_2c;
    *(undefined4 *)(iVar1 + 0x8d518) = local_28;
    *(undefined4 *)(iVar1 + 0x8d51c) = uStack_24;
    *(undefined4 *)(iVar1 + 0x8d520) = uStack_20;
    *(undefined4 *)(iVar1 + 0x8d524) = uStack_1c;
    glLoadMatrixf(puVar3);
  }
  if (*(int *)(param_1 + 0x2130) != *(int *)(param_1 + 0x2120)) {
    glMatrixMode(0x1702);
    glLoadMatrixf(param_1 + 0x20dc);
    *(undefined4 *)(param_1 + 0x2130) = *(undefined4 *)(param_1 + 0x2120);
  }
  if (*(int *)(param_1 + 0x2128) == *(int *)(param_1 + 0x1090)) {
    if (*(int *)(param_1 + 0x212c) != *(int *)(param_1 + 0x18d8)) {
      glMatrixMode(0x1700);
      glPopMatrix();
      glPushMatrix();
      glMultMatrixf(param_1 + 0x1894);
      *(undefined4 *)(param_1 + 0x212c) = *(undefined4 *)(param_1 + 0x18d8);
    }
  }
  else {
    glMatrixMode(0x1700);
    glPopMatrix();
    glLoadMatrixf(param_1 + 0x104c);
    glPushMatrix();
    glMultMatrixf(param_1 + 0x1894);
    *(undefined4 *)(param_1 + 0x212c) = *(undefined4 *)(param_1 + 0x18d8);
    *(undefined4 *)(param_1 + 0x2128) = *(undefined4 *)(param_1 + 0x1090);
  }
  return;
}



