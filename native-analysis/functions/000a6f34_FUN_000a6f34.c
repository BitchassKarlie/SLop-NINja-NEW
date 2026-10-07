/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6f34 FUN_000a6f34 */

void FUN_000a6f34(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int local_1c [2];
  
  if (*param_2 != -1) {
    FUN_000a6e68(param_2);
  }
  glGenTextures(1,local_1c);
  glBindTexture(0xde1,local_1c[0]);
  *param_2 = local_1c[0];
  piVar1 = (int *)FUN_0008d120();
  uVar2 = (**(code **)(*piVar1 + 0x4c))();
  glTexParameteri(0xde1,0x2800,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x50))(piVar1);
  glTexParameteri(0xde1,0x2801,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x54))(piVar1);
  glTexParameteri(0xde1,0x2802,uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x58))(piVar1);
  glTexParameteri(0xde1,0x2803,uVar2);
  switch(*(uint *)(param_1 + 4) & 0xf) {
  case 1:
    unaff_r6 = 0x1907;
    unaff_r7 = 0x1401;
    break;
  case 2:
    unaff_r6 = 0x1908;
    unaff_r7 = 0x1401;
    break;
  case 3:
    unaff_r6 = 0x1908;
    unaff_r7 = 0x8034;
    break;
  case 4:
    unaff_r6 = 0x1908;
    unaff_r7 = 0x8033;
    break;
  case 5:
    unaff_r6 = 0x1907;
    unaff_r7 = 0x8363;
  }
  glTexImage2D(0xde1,0,unaff_r6,1 << *(sbyte *)(param_1 + 8),1 << *(sbyte *)(param_1 + 9),0,unaff_r6
               ,unaff_r7,param_1 + 0x10);
  iVar3 = FUN_000a6e14();
  if (iVar3 != 0) {
    FUN_000a6e28();
  }
  return;
}



