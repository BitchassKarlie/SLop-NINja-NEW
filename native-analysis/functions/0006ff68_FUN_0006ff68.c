/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006ff68 FUN_0006ff68 */

void FUN_0006ff68(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  puVar3 = *(undefined4 **)(param_1 + 0x14);
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    do {
      puVar4 = puVar3;
      puVar3 = (undefined4 *)puVar4[0x14];
    } while ((undefined4 *)puVar4[0x14] != (undefined4 *)0x0);
    uVar1 = FUN_00017e38();
    FUN_000190e8(uVar1,puVar4[0x12],*puVar4);
    puVar3 = (undefined4 *)puVar4[0x15];
    if ((undefined4 *)puVar4[0x15] == (undefined4 *)0x0) goto LAB_0006ffaa;
    while( true ) {
      do {
        puVar2 = puVar3;
        puVar3 = (undefined4 *)puVar2[0x14];
      } while ((undefined4 *)puVar2[0x14] != (undefined4 *)0x0);
      if (puVar2 == (undefined4 *)0x0) break;
      while( true ) {
        uVar1 = FUN_00017e38();
        FUN_000190e8(uVar1,puVar2[0x12],*puVar2);
        puVar3 = (undefined4 *)puVar2[0x15];
        puVar4 = puVar2;
        if ((undefined4 *)puVar2[0x15] != (undefined4 *)0x0) break;
LAB_0006ffaa:
        puVar2 = (undefined4 *)puVar4[0x16];
        if (puVar2 == (undefined4 *)0x0) goto LAB_0006ffc4;
        puVar3 = puVar2;
        if ((undefined4 *)puVar2[0x15] == puVar4) {
          do {
            puVar2 = (undefined4 *)puVar3[0x16];
            if (puVar2 == (undefined4 *)0x0) goto LAB_0006ffc4;
            bVar5 = (undefined4 *)puVar2[0x15] == puVar3;
            puVar3 = puVar2;
          } while (bVar5);
        }
      }
    }
  }
LAB_0006ffc4:
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    do {
      puVar4 = puVar3;
      puVar3 = (undefined4 *)puVar4[0x14];
    } while ((undefined4 *)puVar4[0x14] != (undefined4 *)0x0);
    uVar1 = FUN_00017e38();
    FUN_000190e8(uVar1,puVar4[0x12],*puVar4);
    puVar3 = (undefined4 *)puVar4[0x15];
    if ((undefined4 *)puVar4[0x15] == (undefined4 *)0x0) goto LAB_00070002;
    while( true ) {
      do {
        puVar2 = puVar3;
        puVar3 = (undefined4 *)puVar2[0x14];
      } while ((undefined4 *)puVar2[0x14] != (undefined4 *)0x0);
      if (puVar2 == (undefined4 *)0x0) break;
      while( true ) {
        uVar1 = FUN_00017e38();
        FUN_000190e8(uVar1,puVar2[0x12],*puVar2);
        puVar3 = (undefined4 *)puVar2[0x15];
        puVar4 = puVar2;
        if ((undefined4 *)puVar2[0x15] != (undefined4 *)0x0) break;
LAB_00070002:
        puVar2 = (undefined4 *)puVar4[0x16];
        if (puVar2 == (undefined4 *)0x0) {
          return;
        }
        puVar3 = puVar2;
        if ((undefined4 *)puVar2[0x15] == puVar4) {
          do {
            puVar2 = (undefined4 *)puVar3[0x16];
            if (puVar2 == (undefined4 *)0x0) {
              return;
            }
            bVar5 = puVar3 == (undefined4 *)puVar2[0x15];
            puVar3 = puVar2;
          } while (bVar5);
        }
      }
    }
  }
  return;
}



