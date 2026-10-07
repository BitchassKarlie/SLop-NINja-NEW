/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a7034 FUN_000a7034 */

void FUN_000a7034(int param_1,int param_2)

{
  undefined uVar1;
  int unaff_r6;
  bool bVar2;
  
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  FUN_000a6f34(param_2,(undefined4 *)(param_1 + 0x48));
  switch(*(uint *)(param_2 + 4) & 0xf) {
  case 1:
  case 5:
    unaff_r6 = 0x1907;
    break;
  case 2:
  case 3:
  case 4:
    unaff_r6 = 0x1908;
  }
  bVar2 = unaff_r6 != 0x1908;
  if (bVar2) {
    unaff_r6 = 0;
  }
  uVar1 = (undefined)unaff_r6;
  if (!bVar2) {
    uVar1 = 1;
  }
  *(undefined *)(param_1 + 0x45) = uVar1;
  *(undefined *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(uint *)(param_1 + 0x14) = (uint)*(ushort *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x18) = (uint)*(ushort *)(param_2 + 0xe);
  return;
}



