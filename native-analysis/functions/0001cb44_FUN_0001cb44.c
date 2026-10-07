/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001cb44 FUN_0001cb44 */

undefined4 FUN_0001cb44(int param_1,int param_2,undefined4 *param_3,int param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined local_19;
  
  if (*(char *)(param_1 + 0x106c) == '\0') {
    piVar3 = (int *)(param_1 + 0x104c);
  }
  else {
    piVar3 = *(int **)(param_1 + 0x104c);
  }
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (**(code **)(*piVar3 + 0xc))(piVar3,*(undefined4 *)(param_2 + 0x48),&local_19);
    if (iVar4 == -1) {
      return 0;
    }
  }
  piVar3 = (int *)FUN_0001ca28(param_1,iVar4,local_19);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  piVar3[1] = *(int *)(param_2 + 0x24);
  fVar11 = (float)(longlong)(1 << (param_5 & 0xff));
  fVar8 = fVar11 * *(float *)(param_2 + 0x70);
  fVar5 = fVar11 * *(float *)(param_2 + 0x7c) - fVar8;
  fVar9 = fVar11 * *(float *)(param_2 + 0x74);
  fVar6 = fVar11 * *(float *)(param_2 + 0x80) - fVar9;
  fVar10 = fVar11 * *(float *)(param_2 + 0x78);
  fVar7 = fVar11 * *(float *)(param_2 + 0x84) - fVar10;
  fVar11 = fVar5 * DAT_0001cc60;
  fVar1 = fVar6 * DAT_0001cc60;
  fVar2 = fVar7 * DAT_0001cc60;
  *(ushort *)((int)piVar3 + 0x36) =
       (ushort)(0.0 < *(float *)(param_2 + 0x5c)) * (short)(int)*(float *)(param_2 + 0x5c);
  piVar3[4] = (int)(fVar8 + fVar11);
  piVar3[5] = (int)(fVar9 + fVar1);
  piVar3[6] = (int)(fVar10 + fVar2);
  piVar3[10] = (int)fVar5;
  piVar3[0xb] = (int)fVar6;
  piVar3[0xc] = (int)fVar7;
  *(byte *)(piVar3 + 3) = *(byte *)(piVar3 + 3) & 0xfe | (byte)*param_3 & 1;
  (**(code **)(*piVar3 + 8))(piVar3,param_3 + 1,param_4 + -4,param_2 + 0x4c);
  piVar3[1] = *(int *)(param_2 + 0x24);
  return 1;
}



