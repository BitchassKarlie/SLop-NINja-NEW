/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009d384 FUN_0009d384 */

byte * FUN_0009d384(byte *param_1,undefined4 param_2,int param_3,char *param_4,undefined param_5,
                   undefined4 param_6)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined local_34;
  undefined local_33;
  undefined local_32;
  undefined local_31;
  int local_30;
  undefined4 local_2c;
  
  iVar7 = DAT_0009d4ec + 0x9d39e;
  FUN_00099d70(param_2,DAT_0009d4e8 + 0x9d398,0);
  if ((param_3 == 0) || (**(char **)(iVar7 + DAT_0009d4f0) == '\0')) {
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (*param_1 != 0) {
      do {
        iVar7 = FUN_0009cf88(param_1,param_4,param_5,param_6);
        if (iVar7 != 0) break;
        local_34 = 0;
        local_33 = 0;
        local_32 = 0;
        local_31 = 0;
        param_1 = (byte *)FUN_0009d260(param_1,&local_34,&local_2c,param_6);
        FUN_00099e28(param_2,&local_34,local_2c);
        if (param_1 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while (*param_1 != 0);
    }
  }
  else {
    param_1 = (byte *)FUN_0009cef0(param_1,param_6);
    iVar3 = DAT_0009d4f4;
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (*param_1 != 0) {
      bVar1 = false;
      do {
        iVar5 = FUN_0009cf88(param_1,param_4,param_5);
        if (iVar5 != 0) break;
        uVar6 = (uint)*param_1;
        if ((uVar6 == 10 || uVar6 == 0xd) ||
           ((int)((uint)*(byte *)(**(int **)(iVar7 + iVar3) + uVar6 + 1) << 0x1c) < 0)) {
          param_1 = param_1 + 1;
          bVar1 = true;
        }
        else {
          if (bVar1) {
            local_2c = CONCAT31(local_2c._1_3_,0x20);
            FUN_00099e28(param_2,&local_2c,1);
          }
          local_34 = 0;
          local_33 = 0;
          local_32 = 0;
          local_31 = 0;
          param_1 = (byte *)FUN_0009d260(param_1,&local_34,&local_30);
          puVar2 = (undefined4 *)&local_34;
          if (local_30 == 1) {
            local_2c = CONCAT31(local_2c._1_3_,local_34);
            puVar2 = &local_2c;
          }
          FUN_00099e28(param_2,puVar2);
          bVar1 = false;
        }
        if (param_1 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while (*param_1 != 0);
    }
  }
  if (param_1 != (byte *)0x0) {
    sVar4 = strlen(param_4);
    param_1 = param_1 + sVar4;
  }
  return param_1;
}



