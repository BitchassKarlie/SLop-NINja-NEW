/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00070020 FUN_00070020 */

char * FUN_00070020(char *param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0008e988();
  iVar2 = FUN_0008e838(uVar1,param_1,DAT_00070058 + 0x70036,1);
  if (iVar2 == 0) {
    FUN_0008f060(param_1,param_3,DAT_0007005c + 0x70046,param_2);
  }
  else {
    strcat(param_1,param_2);
  }
  return param_1;
}



