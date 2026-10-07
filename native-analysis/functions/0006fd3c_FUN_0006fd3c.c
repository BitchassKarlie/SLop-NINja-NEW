/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006fd3c FUN_0006fd3c */

undefined4 FUN_0006fd3c(char *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(int *)(DAT_0006fd84 + 0x6fd48 + DAT_0006fd88) + 0x50);
  uVar2 = uVar1;
  if (uVar1 != 0) {
    uVar2 = 1;
  }
  if (param_1 == (char *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar2 & 1;
  }
  if ((((uVar2 != 0) && (0 < param_3)) && (*param_1 == 'F')) &&
     ((param_1[1] == 'N' && (param_1[2] == 'T')))) {
    FUN_0006fd08(uVar1,param_1,param_2);
  }
  return 1;
}



