/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bc228 FUN_000bc228 */

int FUN_000bc228(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined auStack_2c [20];
  undefined4 local_18;
  undefined2 local_14;
  
  if (param_1 != (undefined4 *)0x0) {
    FUN_000c2ab8(auStack_2c,*param_1,param_1[1]);
    if ((param_1[2] != 0) && (iVar1 = FUN_000c28b4(auStack_2c,8), iVar1 == 1)) {
      local_18 = 0;
      local_14 = 0;
      FUN_000bc1f0(auStack_2c,&local_18,6);
      uVar2 = memcmp(&local_18,(void *)(DAT_000bc27c + 0xbc270),6);
      if (uVar2 < 2) {
        return 1 - uVar2;
      }
      return 0;
    }
  }
  return 0;
}



