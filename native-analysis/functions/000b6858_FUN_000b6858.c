/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b6858 FUN_000b6858 */

void FUN_000b6858(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    glDeleteBuffers(1,param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 == 0) {
      glGenBuffers(1,param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x10) = 0;
      iVar1 = *(int *)(param_1 + 0x18);
    }
    *(uint *)(param_1 + 0x14) = param_3;
    glBindBuffer(0x8892,iVar1);
    if ((param_3 < *(uint *)(param_1 + 0x10) >> 1) || (*(uint *)(param_1 + 0x10) < param_3)) {
      *(uint *)(param_1 + 0x10) = param_3;
      glBufferData(0x8892,param_3,param_2,0x88e4);
    }
    else if (param_2 != 0) {
      glBufferSubData(0x8892,0,param_3,param_2);
    }
    glBindBuffer(0x8892,0);
  }
  return;
}



