/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00073a7c FUN_00073a7c */

float FUN_00073a7c(float *param_1,undefined4 param_2,float param_3,int **param_4)

{
  undefined4 uVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  
  iVar4 = 0;
  pfVar3 = param_1;
  do {
    if (*(char *)(pfVar3 + 3) != '\0') {
      uVar1 = FUN_000a5f28();
      FUN_00098cd4(uVar1,param_2,0,param_1[iVar4 * 0xd + 1],0x40,0xffffffff);
      *(undefined *)(param_1 + iVar4 * 0xd + 3) = 0;
      fVar2 = (float)FUN_0008f414(param_2);
      param_1[iVar4 * 0xd + 2] = fVar2;
      if (*(char *)(param_4 + 8) != '\0') {
        param_4 = (int **)*param_4;
      }
      if (param_4 != (int **)0x0) {
        (**(code **)((int)*param_4 + 8))(param_4,param_1 + iVar4 * 0xd + 5);
      }
      fVar2 = DAT_00073b1c;
      param_1[iVar4 * 0xd + 4] = param_3;
      FUN_000a5ce0(param_1[iVar4 * 0xd + 1],fVar2 - (fVar2 - *param_1) * param_3);
      return param_1[iVar4 * 0xd + 1];
    }
    iVar4 = iVar4 + 1;
    pfVar3 = pfVar3 + 0xd;
  } while (iVar4 != 0x20);
  return 0.0;
}



