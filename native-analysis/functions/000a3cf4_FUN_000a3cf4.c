/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a3cf4 FUN_000a3cf4 */

undefined4 FUN_000a3cf4(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = DAT_000a3d60 + 0xa3d02;
  if (param_2 != 0) {
    param_2 = (**(code **)(*param_1 + 0x29c))();
  }
  piVar1 = **(int ***)(iVar4 + DAT_000a3d64);
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,DAT_000a3d68 + 0xa3d1a);
  uVar3 = (**(code **)(*param_1 + 0x84))
                    (param_1,uVar2,DAT_000a3d6c + 0xa3d2e,DAT_000a3d70 + 0xa3d30);
  uVar3 = FUN_000a38fc(param_1,uVar2,uVar3,param_2);
  (**(code **)(*param_1 + 0x5c))(param_1,param_2);
  (**(code **)(*param_1 + 0x5c))(param_1,uVar2);
  return uVar3;
}



