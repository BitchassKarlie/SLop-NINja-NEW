/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000986bc FUN_000986bc */

uint FUN_000986bc(byte **param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  
  pbVar5 = *param_1;
  bVar1 = *pbVar5;
  bVar2 = pbVar5[3];
  bVar3 = pbVar5[1];
  bVar4 = pbVar5[2];
  *param_1 = pbVar5 + 4;
  return (uint)bVar2 | (uint)bVar1 << 0x18 | (uint)bVar3 << 0x10 | (uint)bVar4 << 8;
}



