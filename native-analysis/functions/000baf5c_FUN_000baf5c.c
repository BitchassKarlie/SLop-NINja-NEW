/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000baf5c FUN_000baf5c */

int FUN_000baf5c(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_24;
  
  if (param_1[0x16] != 1) {
    return -0x83;
  }
  param_1[0x16] = 2;
  if (param_1[1] == 0) {
    param_1[0x16] = 3;
    return 0;
  }
  uVar5 = param_1[0x72];
  uVar6 = *(undefined4 *)param_1[0xf];
  uVar7 = ((undefined4 *)param_1[0xf])[1];
  local_30 = 0xffffffff;
  uStack_2c = 0xffffffff;
  local_24 = uVar5;
  uVar8 = FUN_000b9e04(param_1,param_1[0x12]);
  pcVar2 = (code *)param_1[0xa3];
  if ((pcVar2 == (code *)0x0) || (param_1[0xa5] == 0)) {
    iVar1 = -0x83;
    param_1[4] = 0xffffffff;
    param_1[5] = 0xffffffff;
    param_1[2] = 0xffffffff;
    param_1[3] = 0xffffffff;
  }
  else {
    (*pcVar2)(*param_1,pcVar2,0,0,2);
    iVar1 = (*(code *)param_1[0xa5])(*param_1);
    param_1[4] = iVar1;
    param_1[5] = iVar1 >> 0x1f;
    param_1[2] = iVar1;
    param_1[3] = iVar1 >> 0x1f;
    if (iVar1 == -1) {
      iVar1 = -0x83;
    }
    else {
      lVar9 = FUN_000b9f18(param_1,param_1[0x10] + 8,*(undefined4 *)(param_1[0x10] + 4),&local_24,
                           &local_30);
      iVar1 = (int)lVar9;
      if (-1 < lVar9) {
        iVar1 = FUN_000ba084(param_1,uStack_2c,0,0,uVar6,uVar7,param_1[2],param_1[3],local_30,
                             uStack_2c,local_24,param_1[0x10] + 8,*(undefined4 *)(param_1[0x10] + 4)
                             ,0);
        if (iVar1 < 0) {
          iVar1 = -0x80;
          goto LAB_000bb072;
        }
        puVar4 = (undefined4 *)param_1[0xe];
        *puVar4 = 0;
        puVar4[1] = 0;
        *(undefined4 *)param_1[0x10] = uVar5;
        puVar4 = (undefined4 *)param_1[0xf];
        *puVar4 = uVar6;
        puVar4[1] = uVar7;
        *(undefined8 *)param_1[0x11] = uVar8;
        iVar1 = param_1[0x11];
        uVar3 = *(uint *)(iVar1 + 8);
        *(uint *)(iVar1 + 8) = uVar3 - (uint)uVar8;
        *(uint *)(iVar1 + 0xc) =
             (*(int *)(iVar1 + 0xc) - (int)((ulonglong)uVar8 >> 0x20)) - (uint)(uVar3 < (uint)uVar8)
        ;
        iVar1 = FUN_000ba430(param_1,iVar1,uVar6,uVar7);
      }
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
LAB_000bb072:
  *param_1 = 0;
  FUN_000baec0(param_1);
  return iVar1;
}



