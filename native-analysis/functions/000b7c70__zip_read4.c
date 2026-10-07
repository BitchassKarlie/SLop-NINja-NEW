/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b7c70 _zip_read4 */

int _zip_read4(byte **param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  
  pbVar5 = *param_1;
  bVar1 = pbVar5[3];
  bVar2 = pbVar5[2];
  bVar3 = pbVar5[1];
  bVar4 = *pbVar5;
  *param_1 = pbVar5 + 4;
  return (uint)bVar4 + ((uint)bVar3 + ((uint)bVar2 + (uint)bVar1 * 0x100) * 0x100) * 0x100;
}



