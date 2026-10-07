/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000334a0 FUN_000334a0 */

void FUN_000334a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar3 = DAT_00033518 + 0x334b0;
  if (*(int *)(DAT_00033514 + 0x334ac) != 0) {
    *(undefined4 *)(*(int *)(DAT_00033514 + 0x334ac) + 200) = 0;
  }
  iVar1 = FUN_0002f5c0();
  if (iVar1 != 0) {
    uVar2 = FUN_0007b72c();
    FUN_0007cff8(uVar2,0);
  }
  iVar3 = *(int *)(iVar3 + DAT_0003351c);
  *(undefined *)(iVar3 + 0x19e) = 0;
  FUN_00031cec();
  iVar3 = *(int *)(iVar3 + 0x168);
  if ((iVar3 == 0) || ((iVar3 = *(int *)(iVar3 + 0x74), iVar3 != 0 && (iVar3 != 6)))) {
    FUN_00031874();
    local_14 = *(undefined4 *)(DAT_00033520 + 0x334e4);
    local_10 = *(undefined4 *)(DAT_00033520 + 0x334e8);
    local_c = *(undefined4 *)(DAT_00033520 + 0x334ec);
    FUN_000333d4(&local_14);
  }
  else {
    FUN_00046494();
  }
  return;
}



