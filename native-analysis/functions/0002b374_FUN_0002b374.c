/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002b374 FUN_0002b374 */

void FUN_0002b374(int param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int local_98;
  undefined4 local_94;
  undefined auStack_90 [64];
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar2 = DAT_0002b478;
  iVar5 = DAT_0002b46c + 0x2b382;
  piVar6 = *(int **)(iVar5 + DAT_0002b470);
  local_2c = *piVar6;
  puVar4 = *(uint **)(iVar5 + DAT_0002b474);
  lVar1 = (ulonglong)*puVar4 * (ulonglong)puVar4[2] +
          CONCAT44(puVar4[2] * puVar4[1] + *puVar4 * puVar4[3],puVar4[4]);
  uVar3 = puVar4[5] + (int)((ulonglong)lVar1 >> 0x20);
  *puVar4 = (uint)lVar1;
  puVar4[1] = uVar3;
  FUN_0008f060(auStack_90,0x40,iVar2 + 0x2b3c2,(int)((ulonglong)uVar3 * 6 >> 0x20) + 1);
  local_30 = 1;
  local_50[0] = 0;
  uVar7 = *(undefined4 *)(*(int *)(iVar5 + DAT_0002b47c) + 0x18c);
  local_98 = DAT_0002b480 + 0x2b3ee;
  local_94 = *(undefined4 *)(iVar5 + DAT_0002b484);
  (**(code **)(DAT_0002b480 + 0x2b3f6))(&local_98,local_50);
  FUN_00073a7c(uVar7,auStack_90,0x3f800000,local_50);
  FUN_0001d388(local_50);
  local_98 = DAT_0002b488 + 0x2b41e;
  lVar1 = (ulonglong)*puVar4 * (ulonglong)puVar4[2] +
          CONCAT44(puVar4[2] * puVar4[1] + *puVar4 * puVar4[3],puVar4[4]);
  *puVar4 = (uint)lVar1;
  puVar4[1] = puVar4[5] + (int)((ulonglong)lVar1 >> 0x20);
  uVar7 = FUN_0001c940();
  FUN_0001bb84(uVar7,0);
  uVar7 = FUN_0001c940();
  FUN_0001bb84(uVar7,1);
  *(undefined4 *)(param_1 + 0x204) = DAT_0002b468;
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



