/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b2c2c FUN_000b2c2c */

int * FUN_000b2c2c(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_000b15a4();
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)FUN_000b2b88(param_1 + 0x58,param_2);
    piVar3 = (int *)operator_new(0x24);
    piVar1 = (int *)(param_1 + 0x54);
  }
  else {
    if (param_3 < param_4) {
      do {
        iVar4 = FUN_000a9338(*piVar1 + 0xc,param_3);
        if (iVar4 == 0) break;
        param_3 = param_3 + 0xc;
      } while (param_3 < param_4);
    }
    if (param_3 == param_4) {
      return piVar1;
    }
    piVar2 = (int *)FUN_000b2b88(param_1 + 0x58,param_2);
    piVar3 = (int *)operator_new(0x24);
  }
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = 0;
  FUN_000b2314(piVar3 + 3,param_3,param_4,piVar1);
  iVar4 = DAT_000b2cc8;
  piVar3[1] = 0;
  piVar3[2] = 0;
  *piVar3 = iVar4 + 0xb2c8a;
  FUN_000a1260(piVar2,piVar3);
  return piVar2;
}



