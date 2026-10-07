/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000316e8 FUN_000316e8 */

void FUN_000316e8(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_38;
  undefined4 local_34;
  
  fVar7 = *(float *)(DAT_00031868 + 0x316fe);
  fVar6 = *(float *)(DAT_00031868 + 0x31702);
  fVar5 = *(float *)(DAT_00031868 + 0x31706);
  local_38 = 0;
  local_34 = 0;
  fVar4 = (DAT_00031860 - *(float *)(*(int *)(DAT_0003186c + 0x31712 + DAT_00031870) + 0xc)) /
          DAT_00031860;
  fVar4 = fVar4 * fVar4;
  uVar1 = FUN_0001c940();
  iVar2 = FUN_0001bd8c(uVar1,1,&local_38);
  uVar1 = DAT_00031864;
  while (iVar2 != 0) {
    *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x98) - fVar4 * (*(float *)(iVar2 + 0x98) - fVar7)
    ;
    *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0x9c) - fVar4 * (*(float *)(iVar2 + 0x9c) - fVar6)
    ;
    *(float *)(iVar2 + 0x30) = *(float *)(iVar2 + 0xa0) - fVar4 * (*(float *)(iVar2 + 0xa0) - fVar5)
    ;
    *(undefined4 *)(iVar2 + 0x1c) = uVar1;
    *(undefined4 *)(iVar2 + 0x20) = uVar1;
    *(undefined4 *)(iVar2 + 0x24) = uVar1;
    uVar3 = FUN_0001c940();
    iVar2 = FUN_0001bdb8(uVar3,1,&local_38);
  }
  uVar1 = FUN_0001c940();
  iVar2 = FUN_0001bd8c(uVar1,0,&local_38);
  uVar1 = DAT_00031864;
  while (iVar2 != 0) {
    *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0xa8) - fVar4 * (*(float *)(iVar2 + 0xa8) - fVar7)
    ;
    *(float *)(iVar2 + 0x2c) = *(float *)(iVar2 + 0xac) - fVar4 * (*(float *)(iVar2 + 0xac) - fVar6)
    ;
    *(float *)(iVar2 + 0x30) = *(float *)(iVar2 + 0xb0) - fVar4 * (*(float *)(iVar2 + 0xb0) - fVar5)
    ;
    *(undefined4 *)(iVar2 + 0x1c) = uVar1;
    *(undefined4 *)(iVar2 + 0x20) = uVar1;
    *(undefined4 *)(iVar2 + 0x24) = uVar1;
    *(undefined4 *)(iVar2 + 0xc4) = uVar1;
    *(undefined4 *)(iVar2 + 200) = uVar1;
    *(undefined4 *)(iVar2 + 0xcc) = uVar1;
    uVar3 = FUN_0001c940();
    iVar2 = FUN_0001bdb8(uVar3,0,&local_38);
  }
  return;
}



