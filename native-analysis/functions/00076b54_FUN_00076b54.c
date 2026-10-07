/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00076b54 FUN_00076b54 */

char * FUN_00076b54(char *param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6,char *param_7)

{
  strncpy(param_1,param_2,0x1f);
  param_1[0x1f] = '\0';
  strncpy(param_1 + 0x20,param_7,0x1f);
  param_1[0x3f] = '\0';
  param_1[0x1f] = '\0';
  *(undefined4 *)(param_1 + 0x44) = param_5;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x48) = param_4;
  *(undefined4 *)(param_1 + 0x4c) = param_6;
  return param_1;
}



