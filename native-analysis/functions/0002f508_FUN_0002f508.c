/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002f508 FUN_0002f508 */

undefined4 FUN_0002f508(void)

{
  undefined4 uVar1;
  
  if ((*(uint *)(DAT_0002f524 + 0x2f516) < 4) && (*(int *)(DAT_0002f524 + 0x2f562) != 0)) {
    uVar1 = *(undefined4 *)
             (*(int *)(DAT_0002f524 + 0x2f562) + (*(uint *)(DAT_0002f524 + 0x2f516) + 0xe) * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



