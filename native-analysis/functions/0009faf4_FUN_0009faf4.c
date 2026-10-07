/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009faf4 FUN_0009faf4 */

undefined4 * FUN_0009faf4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  FUN_0009e838(param_1 + 2);
  param_1[0xf] = param_3;
  FUN_000ab3b0(param_1,param_2);
  puVar3 = (undefined4 *)operator_new(0xc);
  iVar7 = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *param_1 = puVar3;
  iVar4 = FUN_0009e480(param_1 + 2);
  do {
    cVar1 = *(char *)(iVar4 + iVar7);
    cVar2 = (&UNK_0009fc2e)[iVar7 + DAT_0009fb70];
    if (cVar1 != cVar2) {
      if (cVar2 == '\\') {
        if (cVar1 != '/') goto LAB_0009fb54;
      }
      else if ((cVar2 != '/') || (cVar1 != '\\')) {
LAB_0009fb54:
        puVar3 = (undefined4 *)*param_1;
        uVar5 = FUN_0009f800();
        uVar6 = FUN_0008f414(param_2);
        uVar5 = FUN_000ac4cc(uVar5,uVar6);
        *puVar3 = uVar5;
        return param_1;
      }
    }
    iVar7 = iVar7 + 1;
    if (iVar7 == 3) {
      return param_1;
    }
  } while( true );
}



