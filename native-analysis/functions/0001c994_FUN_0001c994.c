/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001c994 FUN_0001c994 */

undefined4 * FUN_0001c994(undefined4 *param_1)

{
  void **ppvVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  void **ppvVar4;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar2 = (undefined4 *)operator_new(0xc);
  *puVar2 = local_24;
  puVar2[1] = uStack_20;
  puVar2[2] = uStack_1c;
  *puVar2 = puVar2;
  puVar2[1] = puVar2;
  param_1[0x406] = puVar2;
  param_1[0x407] = 0;
  *(undefined *)(param_1 + 0x412) = 1;
  param_1[0x40a] = 0;
  *(undefined *)(param_1 + 0x41b) = 1;
  param_1[0x413] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x404] = 0;
  param_1[0x202] = 0;
  *(undefined *)(param_1 + 0x409) = 0;
  param_1[0x403] = 0;
  param_1[0x408] = 0;
  FUN_0001c3e8(param_1 + 0x40a);
  FUN_0001c3f0(param_1 + 0x413);
  ppvVar4 = (void **)param_1[0x406];
  ppvVar1 = (void **)*ppvVar4;
  while( true ) {
    if (ppvVar4 == ppvVar1) {
      return param_1;
    }
    if ((void **)param_1[0x406] == ppvVar1) break;
    ppvVar3 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar3;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    param_1[0x407] = param_1[0x407] + -1;
    ppvVar1 = ppvVar3;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



