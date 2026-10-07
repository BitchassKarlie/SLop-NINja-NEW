/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009d260 FUN_0009d260 */

byte * FUN_0009d260(byte *param_1,byte *param_2,int *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  
  if (param_4 == 1) {
    iVar3 = *(int *)(DAT_0009d2bc + (uint)*param_1 * 4 + 0x9d29a);
    *param_3 = iVar3;
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        return (byte *)0x0;
      }
      bVar4 = *param_1;
      if ((bVar4 != 0) && (0 < iVar3)) {
        iVar3 = 0;
        while( true ) {
          iVar2 = iVar3 + 1;
          param_2[iVar3] = bVar4;
          bVar4 = param_1[iVar2];
          if (bVar4 == 0) break;
          iVar3 = iVar2;
          if (*param_3 <= iVar2) {
            return param_1 + *param_3;
          }
        }
        iVar3 = *param_3;
      }
      return param_1 + iVar3;
    }
  }
  else {
    *param_3 = 1;
  }
  if (*param_1 == 0x26) {
    pbVar1 = (byte *)FUN_0009d0f8();
  }
  else {
    pbVar1 = param_1 + 1;
    *param_2 = *param_1;
  }
  return pbVar1;
}



