/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a3de0 FUN_000a3de0 */

undefined4 FUN_000a3de0(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = **(int ***)(DAT_000a3e4c + 0xa3de8 + DAT_000a3e50);
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,DAT_000a3e54 + 0xa3df8);
  if (param_2 != 0) {
    param_2 = (**(code **)(*param_1 + 0x29c))(param_1,param_2);
  }
  uVar3 = (**(code **)(*param_1 + 0x84))
                    (param_1,uVar2,DAT_000a3e58 + 0xa3e20,DAT_000a3e5c + 0xa3e24);
  uVar3 = FUN_000a38fc(param_1,uVar2,uVar3,param_2);
  (**(code **)(*param_1 + 0x5c))(param_1,uVar2);
  (**(code **)(*param_1 + 0x5c))(param_1,param_2);
  return uVar3;
}



