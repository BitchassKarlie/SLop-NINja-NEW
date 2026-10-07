/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009f3c4 FUN_0009f3c4 */

void FUN_0009f3c4(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  byte abStack_99 [4];
  byte abStack_95 [65];
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined local_3a;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined local_1e;
  int local_1c;
  size_t sVar5;
  
  iVar2 = DAT_0009f4c0;
  iVar1 = DAT_0009f4bc;
  iVar8 = DAT_0009f4b8 + 0x9f3d2;
  local_1c = **(int **)(iVar8 + DAT_0009f4bc);
  memcpy(param_2,*(void **)(DAT_0009f4c0 + 0x9f3de),
         (*(int *)(DAT_0009f4c0 + 0x9f3e6) - (int)*(void **)(DAT_0009f4c0 + 0x9f3de)) + 1);
  sVar3 = strlen((char *)(param_1 + 3));
  memcpy(param_2 + (*(int *)(iVar2 + 0x9f3e6) - *(int *)(iVar2 + 0x9f3de)),(char *)(param_1 + 3),
         sVar3 + 1);
  local_38 = *(undefined4 *)(DAT_0009f4c4 + 0x9f412);
  uStack_34 = *(undefined4 *)(DAT_0009f4c4 + 0x9f416);
  uStack_30 = *(undefined4 *)(DAT_0009f4c4 + 0x9f41a);
  uStack_2c = *(undefined4 *)(DAT_0009f4c4 + 0x9f41e);
  local_28 = *(undefined4 *)(DAT_0009f4c4 + 0x9f422);
  uStack_24 = *(undefined4 *)(DAT_0009f4c4 + 0x9f426);
  uStack_20 = (undefined2)*(undefined4 *)(DAT_0009f4c4 + 0x9f42a);
  local_1e = (undefined)((uint)*(undefined4 *)(DAT_0009f4c4 + 0x9f42a) >> 0x10);
  local_54 = *(undefined4 *)(DAT_0009f4c8 + 0x9f422);
  uStack_50 = *(undefined4 *)(DAT_0009f4c8 + 0x9f426);
  uStack_4c = *(undefined4 *)(DAT_0009f4c8 + 0x9f42a);
  uStack_48 = *(undefined4 *)(DAT_0009f4c8 + 0x9f42e);
  local_44 = *(undefined4 *)(DAT_0009f4c8 + 0x9f432);
  uStack_40 = *(undefined4 *)(DAT_0009f4c8 + 0x9f436);
  uStack_3c = (undefined2)*(undefined4 *)(DAT_0009f4c8 + 0x9f43a);
  local_3a = (undefined)((uint)*(undefined4 *)(DAT_0009f4c8 + 0x9f43a) >> 0x10);
  sVar3 = strlen(param_2);
  uVar4 = sVar3;
  if (param_2[sVar3] != '.') {
    do {
      sVar5 = uVar4;
      uVar4 = sVar5 - 1;
    } while (param_2[uVar4] != '.');
    if (uVar4 < sVar3) {
      uVar6 = 0x2e;
      pbVar7 = (byte *)(param_2 + sVar5);
      while( true ) {
        if ((uVar6 - 0x61 & 0xff) < 0x1a) {
          pbVar7[-1] = abStack_99[uVar6];
        }
        else if ((uVar6 - 0x41 & 0xff) < 0x1a) {
          pbVar7[-1] = abStack_95[uVar6];
        }
        if (sVar3 <= uVar4 + 1) break;
        uVar4 = uVar4 + 1;
        uVar6 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      }
    }
  }
  if (local_1c != **(int **)(iVar8 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



