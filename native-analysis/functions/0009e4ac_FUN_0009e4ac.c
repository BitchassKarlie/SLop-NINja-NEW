/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e4ac FUN_0009e4ac */

undefined4 FUN_0009e4ac(uint *param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  
  if ((param_3 == *param_1 - 1) && (iVar3 = FUN_0009e48c(param_1), iVar3 == param_4)) {
    if (*param_1 < 0x21) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (uint *)param_1[1];
    }
    if (param_3 != 0) {
      iVar3 = 0;
      do {
        bVar4 = *(byte *)((int)param_1 + iVar3);
        bVar1 = *(byte *)(param_2 + iVar3);
        if ((byte)(bVar4 + 0xbf) < 0x1a) {
          bVar4 = bVar4 | 0x20;
        }
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          bVar1 = bVar1 | 0x20;
        }
        if (bVar4 != bVar1) goto LAB_0009e4ba;
        iVar3 = iVar3 + 1;
      } while (iVar3 != param_3);
    }
    uVar2 = 1;
  }
  else {
LAB_0009e4ba:
    uVar2 = 0;
  }
  return uVar2;
}



