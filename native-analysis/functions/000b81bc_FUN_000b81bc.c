/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b81bc FUN_000b81bc */

void FUN_000b81bc(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = param_2[2] + -1;
  param_2[2] = iVar2;
  if ((iVar2 < 0) && ((iVar2 < (int)param_2[6] || ((param_1 & 0xff) == 10)))) {
    __swbuf(param_1 & 0xff,param_2);
    iVar2 = param_2[2] + -1;
    param_2[2] = iVar2;
  }
  else {
    puVar3 = (undefined *)*param_2;
    *puVar3 = (char)param_1;
    *param_2 = puVar3 + 1;
    iVar2 = param_2[2] + -1;
    param_2[2] = iVar2;
  }
  if ((iVar2 < 0) && ((uVar1 = (param_1 << 0x10) >> 0x18, iVar2 < (int)param_2[6] || (uVar1 == 10)))
     ) {
    __swbuf(uVar1,param_2);
    iVar2 = param_2[2] + -1;
    param_2[2] = iVar2;
  }
  else {
    puVar3 = (undefined *)*param_2;
    *puVar3 = (char)(param_1 >> 8);
    *param_2 = puVar3 + 1;
    iVar2 = param_2[2] + -1;
    param_2[2] = iVar2;
  }
  if ((iVar2 < 0) && ((uVar1 = (param_1 << 8) >> 0x18, iVar2 < (int)param_2[6] || (uVar1 == 10)))) {
    __swbuf(uVar1,param_2);
    iVar2 = param_2[2] + -1;
    param_2[2] = iVar2;
  }
  else {
    puVar3 = (undefined *)*param_2;
    *puVar3 = (char)(param_1 >> 0x10);
    *param_2 = puVar3 + 1;
    iVar2 = param_2[2] + -1;
    param_2[2] = iVar2;
  }
  if ((iVar2 < 0) && ((iVar2 < (int)param_2[6] || (param_1 >> 0x18 == 10)))) {
    __swbuf(param_1 >> 0x18,param_2);
  }
  else {
    puVar3 = (undefined *)*param_2;
    *puVar3 = (char)(param_1 >> 0x18);
    *param_2 = puVar3 + 1;
  }
  return;
}



