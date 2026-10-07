/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a3d74 FUN_000a3d74 */

undefined4 FUN_000a3d74(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = **(int ***)(DAT_000a3dcc + 0xa3d82 + DAT_000a3dd0);
  uVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,DAT_000a3dd4 + 0xa3d90);
  uVar3 = (**(code **)(*param_1 + 0x84))
                    (param_1,uVar2,DAT_000a3dd8 + 0xa3da2,DAT_000a3ddc + 0xa3da4);
  uVar3 = FUN_000a38fc(param_1,uVar2,uVar3);
  (**(code **)(*param_1 + 0x5c))(param_1,uVar2);
  return uVar3;
}



