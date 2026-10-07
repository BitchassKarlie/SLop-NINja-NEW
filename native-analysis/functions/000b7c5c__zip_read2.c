/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b7c5c _zip_read2 */

short _zip_read2(byte **param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = *param_1;
  bVar1 = pbVar3[1];
  bVar2 = *pbVar3;
  *param_1 = pbVar3 + 2;
  return (ushort)bVar2 + (ushort)bVar1 * 0x100;
}



