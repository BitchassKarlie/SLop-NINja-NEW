/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009d4f8 FUN_0009d4f8 */

void FUN_0009d4f8(int param_1,int param_2,uint param_3,undefined4 *param_4,undefined4 param_5)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *__s;
  
  iVar5 = DAT_0009d564 + 0x9d508;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(undefined *)(param_1 + 0x2c) = 1;
    iVar1 = DAT_0009d568;
    *(int *)(param_1 + 0x30) = param_2;
    __s = *(char **)(*(int *)(iVar5 + iVar1) + param_2 * 4);
    sVar2 = strlen(__s);
    FUN_00099d70(param_1 + 0x34,__s,sVar2);
    *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    uVar4 = param_3;
    if (param_3 != 0) {
      uVar4 = 1;
    }
    if (param_4 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 & 1;
    }
    if (uVar4 != 0) {
      FUN_0009ce2c(param_4,param_3,param_5);
      uVar3 = param_4[1];
      *(undefined4 *)(param_1 + 0x3c) = *param_4;
      *(undefined4 *)(param_1 + 0x40) = uVar3;
    }
  }
  return;
}



