/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009b614 FUN_0009b614 */

undefined4 * FUN_0009b614(undefined4 *param_1,char *param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(DAT_0009b690 + 0x9b622 + DAT_0009b694);
  puVar2 = &UNK_0009b7fe + DAT_0009b698;
  param_1[2] = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[8] = uVar3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[5] = 5;
  *param_1 = puVar2;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar3;
  sVar1 = strlen(param_2);
  FUN_00099d70(param_1 + 0xb,param_2,sVar1);
  sVar1 = strlen(param_3);
  FUN_00099d70(param_1 + 0xc,param_3,sVar1);
  sVar1 = strlen(param_4);
  FUN_00099d70(param_1 + 0xd,param_4,sVar1);
  return param_1;
}



