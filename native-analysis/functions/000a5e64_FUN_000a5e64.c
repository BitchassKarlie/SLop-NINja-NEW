/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5e64 FUN_000a5e64 */

undefined4 * FUN_000a5e64(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)operator_new(0x14);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  FUN_00098b18();
  iVar1 = DAT_000a5e8c;
  puVar2[4] = 0;
  *puVar2 = &UNK_000a5e90 + iVar1;
  return puVar2;
}



