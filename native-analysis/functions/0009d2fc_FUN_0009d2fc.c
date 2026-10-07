/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009d2fc FUN_0009d2fc */

byte * FUN_0009d2fc(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = DAT_0009d37c + 0x9d310;
  FUN_00099d70(param_2,DAT_0009d378 + 0x9d30c,0);
  pbVar3 = param_1;
  if (param_1 != (byte *)0x0) {
    uVar1 = (uint)*param_1;
    if ((uVar1 == 0) ||
       (((uVar1 < 0x7f && ((*(byte *)(**(int **)(iVar2 + DAT_0009d380) + uVar1 + 1) & 3) == 0)) &&
        (uVar1 != 0x5f)))) {
      pbVar3 = (byte *)0x0;
    }
    else {
      while ((((0x7e < uVar1 || ((*(byte *)(**(int **)(iVar2 + DAT_0009d380) + uVar1 + 1) & 7) != 0)
               ) || ((uVar1 == 0x5f || ((uVar1 == 0x2d || (uVar1 == 0x2e)))))) || (uVar1 == 0x3a)))
      {
        pbVar3 = pbVar3 + 1;
        if ((pbVar3 == (byte *)0x0) || (uVar1 = (uint)*pbVar3, uVar1 == 0)) break;
      }
      if (0 < (int)pbVar3 - (int)param_1) {
        FUN_00099d70(param_2,param_1);
      }
    }
  }
  return pbVar3;
}



