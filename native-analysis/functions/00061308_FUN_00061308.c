/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00061308 FUN_00061308 */

float FUN_00061308(void)

{
  longlong lVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = *(uint **)(DAT_00061370 + 0x61310 + DAT_00061374);
  lVar1 = (ulonglong)*puVar3 * (ulonglong)puVar3[2] +
          CONCAT44(puVar3[2] * puVar3[1] + *puVar3 * puVar3[3],puVar3[4]);
  uVar2 = puVar3[5] + (int)((ulonglong)lVar1 >> 0x20);
  *puVar3 = (uint)lVar1;
  puVar3[1] = uVar2;
  return ((float)(ulonglong)((uVar2 >> 0xd) - (uint)(uVar2 * 0x80000 < uVar2)) / DAT_00061368) *
         DAT_0006136c;
}



