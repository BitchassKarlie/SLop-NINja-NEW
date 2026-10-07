/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009d648 FUN_0009d648 */

byte * FUN_0009d648(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  byte *pbVar6;
  int iVar7;
  undefined local_21 [5];
  
  pbVar1 = (byte *)FUN_0009a138();
  pcVar2 = (char *)FUN_0009cef0(param_2,param_4);
  if (param_3 != (undefined4 *)0x0) {
    FUN_0009ce2c(param_3,pcVar2,param_4);
    uVar3 = param_3[1];
    *(undefined4 *)(param_1 + 4) = *param_3;
    *(undefined4 *)(param_1 + 8) = uVar3;
  }
  if (((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) || (*pcVar2 != '<')) {
    pbVar6 = pbVar1;
    if (pbVar1 != (byte *)0x0) {
      FUN_0009d4f8(pbVar1,10,pcVar2,param_3,param_4);
      pbVar6 = (byte *)0x0;
    }
  }
  else {
    pbVar6 = (byte *)(pcVar2 + 1);
    FUN_00099d70(param_1 + 0x20,DAT_0009d728 + 0x9d696,0);
    if (pbVar6 == (byte *)0x0) {
LAB_0009d6de:
      pbVar6 = pbVar1;
      cVar5 = cRam00000000;
      if (pbVar1 != (byte *)0x0) {
        FUN_0009d4f8(pbVar1,10,0,0,param_4);
        pbVar6 = (byte *)0x0;
        cVar5 = cRam00000000;
      }
LAB_0009d6fa:
      if (cVar5 == '>') {
        pbVar6 = pbVar6 + 1;
      }
    }
    else {
      uVar4 = (uint)(byte)pcVar2[1];
      if (uVar4 != 0) {
        iVar7 = 0;
        do {
          if ((uVar4 == 0x3e) && (cVar5 = '>', iVar7 == 0)) goto LAB_0009d6fa;
          if (uVar4 == 0x5b) {
            iVar7 = 1;
          }
          else if ((iVar7 != 0) && (iVar7 = uVar4 - 0x5d, iVar7 != 0)) {
            iVar7 = 1;
          }
          local_21[0] = (undefined)uVar4;
          FUN_00099e28(param_1 + 0x20,local_21,1);
          pbVar6 = pbVar6 + 1;
          if (pbVar6 == (byte *)0x0) goto LAB_0009d6de;
          uVar4 = (uint)*pbVar6;
        } while (uVar4 != 0);
      }
    }
  }
  return pbVar6;
}



