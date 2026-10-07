/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00076a80 FUN_00076a80 */

int FUN_00076a80(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = DAT_00076ad0;
  iVar4 = DAT_00076ad4 + 0x76a8c;
  if (((*(uint *)(DAT_00076ad0 + 0x76a8a) & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire((uint *)(DAT_00076ad0 + 0x76a8a)), iVar2 != 0)) {
    puVar3 = (undefined4 *)(iVar1 + 0x76a8e);
    do {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      iVar2 = DAT_00076adc;
      puVar3 = puVar3 + 4;
    } while (puVar3 != (undefined4 *)(iVar1 + 0x76ace));
    __cxa_guard_release(DAT_00076adc + 0x76abc);
    __aeabi_atexit(iVar2 + 0x76ac0,DAT_00076ae4 + 0x76aca,*(undefined4 *)(iVar4 + DAT_00076ae0));
  }
  return DAT_00076ad8 + 0x76a9c;
}



