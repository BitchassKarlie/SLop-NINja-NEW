/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006ec28 FUN_0006ec28 */

undefined4 * FUN_0006ec28(int param_1)

{
  undefined4 *puVar1;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 100:
    puVar1 = (undefined4 *)operator_new(0x24);
    FUN_0006f038();
    break;
  case 0x65:
    puVar1 = (undefined4 *)operator_new(0x24);
    FUN_0006e908();
    break;
  case 0x66:
    puVar1 = (undefined4 *)operator_new(0x28);
    FUN_0006f840();
    break;
  case 0x67:
    puVar1 = (undefined4 *)operator_new(0x1c);
    FUN_0006f414();
    break;
  default:
    return (undefined4 *)0x0;
  }
  (**(code **)*puVar1)(puVar1,param_1);
  return puVar1;
}



