/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006e350 FUN_0006e350 */

void FUN_0006e350(int param_1,char *param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  if ((param_2 == (char *)0x0) ||
     (((iVar1 = strcmp((char *)(DAT_0006e3b8 + 0x6e360),param_2), iVar1 != 0 &&
       (iVar1 = strcmp((char *)(DAT_0006e3bc + 0x6e37e),param_2), iVar1 != 0)) &&
      (iVar1 = strcmp((char *)(DAT_0006e3c0 + 0x6e38c),param_2), iVar1 != 0)))) {
    iVar1 = strcmp((char *)(DAT_0006e3c4 + 0x6e39a),param_2);
    pbVar3 = param_3;
    if (param_3 != (byte *)0x0) {
      pbVar3 = (byte *)0x1;
    }
    if (iVar1 == 0) {
      uVar2 = (uint)pbVar3 & 1;
    }
    else {
      uVar2 = 0;
    }
    if ((uVar2 == 0) || (0x33 < *param_3)) goto LAB_0006e36a;
  }
  *(undefined *)(param_1 + 0xfc) = 1;
LAB_0006e36a:
  FUN_00098e58(param_1,param_2,param_3);
  return;
}



