/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009efd4 FUN_0009efd4 */

void FUN_0009efd4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar2 = FUN_000a6398();
  iVar7 = DAT_0009f064 + 0x9efe4;
  uVar3 = FUN_000a63a4();
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  FUN_0009ef7c();
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(undefined *)(param_1 + 0x2c) = 1;
    iVar1 = DAT_0009f074;
    piVar4 = *(int **)(iVar7 + DAT_0009f068);
    if (*piVar4 == 8) {
      *piVar4 = 2;
      puts((char *)(iVar1 + 0x9f05e));
    }
    else {
      *piVar4 = 0;
    }
    glDepthMask(1);
    iVar7 = DAT_0009f06c;
    puVar6 = (undefined4 *)(DAT_0009f06c + 0x9f02a);
    glViewport(0,0,uVar2,uVar3);
    uVar2 = *(undefined4 *)(iVar7 + 0x9f02e);
    uVar3 = *(undefined4 *)(iVar7 + 0x9f032);
    uVar5 = *(undefined4 *)(iVar7 + 0x9f036);
    *(undefined4 *)(param_1 + 0x60) = *puVar6;
    *(undefined4 *)(param_1 + 100) = uVar2;
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    uVar2 = *(undefined4 *)(iVar7 + 0x9f03e);
    uVar3 = *(undefined4 *)(iVar7 + 0x9f042);
    uVar5 = *(undefined4 *)(iVar7 + 0x9f046);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar7 + 0x9f03a);
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    *(undefined4 *)(param_1 + 0x78) = uVar3;
    *(undefined4 *)(param_1 + 0x7c) = uVar5;
    uVar2 = *(undefined4 *)(iVar7 + 0x9f04e);
    uVar3 = *(undefined4 *)(iVar7 + 0x9f052);
    uVar5 = *(undefined4 *)(iVar7 + 0x9f056);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar7 + 0x9f04a);
    *(undefined4 *)(param_1 + 0x84) = uVar2;
    *(undefined4 *)(param_1 + 0x88) = uVar3;
    *(undefined4 *)(param_1 + 0x8c) = uVar5;
    uVar2 = *(undefined4 *)(iVar7 + 0x9f05e);
    uVar3 = *(undefined4 *)(&UNK_0009f062 + iVar7);
    uVar5 = *(undefined4 *)((int)&DAT_0009f064 + iVar7 + 2);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar7 + 0x9f05a);
    *(undefined4 *)(param_1 + 0x94) = uVar2;
    *(undefined4 *)(param_1 + 0x98) = uVar3;
    *(undefined4 *)(param_1 + 0x9c) = uVar5;
    glClear(0x4100);
    *(undefined *)(DAT_0009f070 + 0x9f056) = 1;
  }
  return;
}



