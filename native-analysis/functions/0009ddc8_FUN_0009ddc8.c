/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ddc8 FUN_0009ddc8 */

char * FUN_0009ddc8(int param_1,char *param_2,undefined4 *param_3,int param_4)

{
  char *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  
  iVar6 = DAT_0009df40;
  *(undefined *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  FUN_00099d70(param_1 + 0x34,iVar6 + 0x9dde2,0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    pcVar1 = (char *)0x0;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    if (param_3 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      local_38 = 0;
      local_34 = 0;
    }
    else {
      local_38 = *param_3;
      *(undefined4 *)(param_1 + 4) = local_38;
      local_34 = param_3[1];
      *(undefined4 *)(param_1 + 8) = local_34;
    }
    local_2c = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 4) = local_38;
    *(undefined4 *)(param_1 + 8) = local_34;
    if (((((param_4 == 0) && (*param_2 == -0x11)) && (param_2[1] != '\0')) &&
        ((param_2[1] == -0x45 && (param_2[2] != '\0')))) && (param_2[2] == -0x41)) {
      param_4 = 1;
      *(undefined *)(param_1 + 0x44) = 1;
    }
    local_30 = param_2;
    pcVar1 = (char *)FUN_0009cef0(param_2,param_4);
    if (pcVar1 != (char *)0x0) {
      if (*pcVar1 != '\0') {
        iVar6 = DAT_0009df44 + 0x9de5c;
        iVar7 = DAT_0009df48 + 0x9de5e;
        while (piVar2 = (int *)FUN_0009d7f0(param_1,pcVar1,param_4), piVar2 != (int *)0x0) {
          uVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,pcVar1,&local_38,param_4);
          FUN_0009a9fc(param_1,piVar2);
          if ((param_4 == 0) && (iVar4 = (**(code **)(*piVar2 + 0x3c))(piVar2), iVar4 != 0)) {
            iVar4 = (**(code **)(*piVar2 + 0x3c))(piVar2);
            if (*(char *)(*(int *)(iVar4 + 0x30) + 8) != '\0') {
              iVar5 = *(int *)(iVar4 + 0x30) + 8;
              iVar4 = FUN_0009cf88(iVar5,iVar6,1,0);
              if ((iVar4 == 0) && (iVar4 = FUN_0009cf88(iVar5,iVar7,1,0), iVar4 == 0)) {
                param_4 = 2;
                goto LAB_0009de86;
              }
            }
            param_4 = 1;
          }
LAB_0009de86:
          pcVar1 = (char *)FUN_0009cef0(uVar3,param_4);
          if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) break;
        }
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        return pcVar1;
      }
      FUN_0009d4f8(param_1,0xd,0,0,param_4);
      return (char *)0x0;
    }
  }
  FUN_0009d4f8(param_1,0xd,pcVar1,pcVar1,pcVar1);
  return pcVar1;
}



