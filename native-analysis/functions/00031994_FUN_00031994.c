/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00031994 FUN_00031994 */

void FUN_00031994(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_00031a28 + 0x319aa;
  iVar3 = FUN_0002f5d4();
  iVar2 = DAT_00031a2c;
  uVar1 = DAT_00031a24;
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar4 + DAT_00031a2c);
    *(undefined4 *)(*(int *)(iVar3 + 0x50) + 0xf0) = DAT_00031a24;
    iVar3 = *(int *)(iVar3 + 0x184);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x70) = uVar1;
    }
  }
  FUN_0004f43c(*(undefined4 *)(DAT_00031a30 + 0x31a4c));
  iVar3 = *(int *)(iVar4 + iVar2);
  *(undefined4 *)(iVar3 + 0x14) = param_4;
  *(undefined4 *)(iVar3 + 0x10) = param_3;
  *(undefined *)(iVar3 + 8) = 0;
  if ((-1 < param_1) &&
     (param_2 != DAT_00031a20 && param_2 < DAT_00031a20 == (NAN(param_2) || NAN(DAT_00031a20)))) {
    FUN_000318fc(param_1,param_2,param_5);
  }
  *(undefined *)(DAT_00031a34 + 0x31a7c) = 0;
  FUN_00049ca8(*(undefined4 *)(*(int *)(iVar4 + iVar2) + 0x40));
  return;
}



