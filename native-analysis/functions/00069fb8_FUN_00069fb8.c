/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00069fb8 FUN_00069fb8 */

void FUN_00069fb8(int param_1,float param_2,float param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 in_stack_ffffff70;
  undefined4 in_stack_ffffff74;
  undefined4 in_stack_ffffff78;
  undefined4 in_stack_ffffff7c;
  undefined4 local_7c [8];
  undefined local_5c;
  undefined4 local_58 [8];
  undefined local_38;
  int local_34;
  
  iVar1 = DAT_0006a0e4;
  iVar5 = DAT_0006a0e0 + 0x69fce;
  local_34 = **(int **)(iVar5 + DAT_0006a0e4);
  fVar10 = *(float *)(param_1 + 0x10);
  if ((fVar10 <= param_2) && (iVar7 = *(int *)(param_1 + 4), *(int *)(param_1 + 0xc) != iVar7)) {
    if (fVar10 != param_3 && fVar10 < param_3 == (NAN(fVar10) || NAN(param_3))) {
      puVar6 = local_58;
      puVar2 = &stack0xffffff7c;
      local_38 = 1;
      uVar8 = *(undefined4 *)(*(int *)(iVar5 + DAT_0006a0e8) + 0x18c);
      pcVar4 = *(code **)(DAT_0006a0ec + 0x6a022);
      local_58[0] = 0;
LAB_0006a022:
      (*pcVar4)(puVar2,puVar6);
      FUN_00073a7c(uVar8,iVar7,0x3f800000,puVar6);
      FUN_0001d388(puVar6);
      uVar8 = 1;
      goto LAB_0006a04e;
    }
    fVar9 = *(float *)(param_1 + 0x14);
    if (fVar9 != 0.0 && fVar9 < 0.0 == NAN(fVar9)) {
      uVar8 = SUB84((double)(param_2 - fVar10),0);
      fmod((double)CONCAT44(in_stack_ffffff74,in_stack_ffffff70),
           (double)CONCAT44(in_stack_ffffff7c,in_stack_ffffff78));
      uVar3 = SUB84((double)(param_3 - *(float *)(param_1 + 0x10)),0);
      fmod((double)CONCAT44(in_stack_ffffff74,in_stack_ffffff70),
           (double)CONCAT44(in_stack_ffffff7c,in_stack_ffffff78));
      if ((int)((uint)((double)CONCAT44(extraout_r1,uVar8) < (double)CONCAT44(extraout_r1_00,uVar3))
               << 0x1f) < 0) {
        iVar7 = *(int *)(param_1 + 4);
        puVar2 = &stack0xffffff74;
        local_5c = 1;
        puVar6 = local_7c;
        uVar8 = *(undefined4 *)(*(int *)(iVar5 + DAT_0006a0e8) + 0x18c);
        pcVar4 = *(code **)(DAT_0006a0f4 + 0x6a0d8);
        local_7c[0] = 0;
        goto LAB_0006a022;
      }
    }
  }
  uVar8 = 0;
LAB_0006a04e:
  if (local_34 == **(int **)(iVar5 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}



