/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b3248 FUN_000b3248 */

int FUN_000b3248(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = DAT_000b32a0;
  puVar4 = (uint *)(DAT_000b32a0 + 0xb3254);
  iVar5 = DAT_000b32a4 + 0xb3256;
  if (((*puVar4 & 1) == 0) && (iVar2 = __cxa_guard_acquire(puVar4), iVar2 != 0)) {
    puVar3 = (undefined4 *)operator_new(0xc);
    *puVar3 = local_1c;
    puVar3[1] = uStack_18;
    puVar3[2] = uStack_14;
    *puVar3 = puVar3;
    puVar3[1] = puVar3;
    *(undefined4 **)(iVar1 + 0xb325c) = puVar3;
    *(undefined4 *)(iVar1 + 0xb3260) = 0;
    __cxa_guard_release(puVar4);
    __aeabi_atexit(iVar1 + 0xb3258,DAT_000b32b0 + 0xb3298,*(undefined4 *)(iVar5 + DAT_000b32ac));
  }
  return DAT_000b32a8 + 0xb3266;
}



