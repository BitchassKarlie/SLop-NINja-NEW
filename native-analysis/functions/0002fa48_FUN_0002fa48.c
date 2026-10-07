/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002fa48 FUN_0002fa48 */

void FUN_0002fa48(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char acStack_21c [512];
  int local_1c;
  
  iVar1 = DAT_0002fb0c;
  iVar5 = DAT_0002fb08 + 0x2fa58;
  local_1c = **(int **)(iVar5 + DAT_0002fb0c);
  uVar4 = (uint)*(byte *)(DAT_0002fb10 + 0x2fa6d);
  if ((uVar4 != 0) && (uVar4 - 2 < 0xc)) {
                    /* WARNING: Could not recover jumptable at 0x0002fa6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_0002fa6e::switchdataD_0002fa72 + (uint)*(byte *)(uVar4 + 0x2fa70) * 2))();
    return;
  }
  sprintf(acStack_21c,(char *)(DAT_0002fb14 + 0x2fa8a),param_2);
  iVar2 = FUN_0009fac8(acStack_21c);
  if (iVar2 == 0) {
    *param_1 = 0;
  }
  else {
    uVar3 = FUN_000996c4();
    FUN_00099cd0(param_1,uVar3,acStack_21c);
  }
  if (local_1c == **(int **)(iVar5 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



