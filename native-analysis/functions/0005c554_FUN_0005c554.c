/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005c554 FUN_0005c554 */

void FUN_0005c554(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined auStack_4c [28];
  undefined auStack_30 [4];
  undefined local_2c;
  undefined local_2b;
  undefined local_2a;
  undefined local_29;
  
  fVar2 = DAT_0005c614;
  fVar4 = *(float *)(param_1 + 0x78);
  if (fVar4 != DAT_0005c614 && fVar4 < DAT_0005c614 == (NAN(fVar4) || NAN(DAT_0005c614))) {
    fVar4 = DAT_0005c618 - fVar4;
    uVar3 = *(undefined4 *)(*(int *)(DAT_0005c628 + 0x5c570 + DAT_0005c62c) + 0x5c);
    FUN_00036320(auStack_4c,param_1 + 0x7c);
    fVar5 = *(float *)(param_1 + 8);
    local_2c = *(undefined *)(param_1 + 0x50);
    fVar1 = *(float *)(param_1 + 0x14) * DAT_0005c61c;
    fVar6 = *(float *)(param_1 + 0xc);
    local_2b = *(undefined *)(param_1 + 0x51);
    local_2a = *(undefined *)(param_1 + 0x52);
    local_29 = *(undefined *)(param_1 + 0x53);
    fVar4 = fVar4 * fVar4 * DAT_0005c620;
    FUN_0002c714(auStack_30,&local_2c,param_2);
    FUN_00091528(uVar3,auStack_4c,fVar5 + fVar1,fVar6 + fVar4,fVar2,auStack_30,DAT_0005c624,fVar2,
                 fVar2,0xd,0);
  }
  return;
}



