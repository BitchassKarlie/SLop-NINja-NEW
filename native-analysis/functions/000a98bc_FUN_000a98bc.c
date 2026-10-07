/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a98bc FUN_000a98bc */

void FUN_000a98bc(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if ((param_4 != param_2) && (puVar3 = param_2 + 5, param_4 != puVar3)) {
    puVar2 = param_2 + 10;
    do {
      while( true ) {
        local_3c = 0;
        FUN_000a07fc(&local_3c,*puVar3);
        local_38 = puVar2[-4];
        local_34 = puVar2[-3];
        local_30 = puVar2[-2];
        local_2c = puVar2[-1];
        iVar1 = FUN_000a988c(&local_3c,param_2);
        puVar4 = puVar3;
        if (iVar1 == 0) break;
        for (; puVar4 != param_2; puVar4 = puVar4 + -5) {
          FUN_000a07fc(puVar4,puVar4[-5]);
          puVar4[1] = puVar4[-4];
          puVar4[2] = puVar4[-3];
          puVar4[3] = puVar4[-2];
          puVar4[4] = puVar4[-1];
        }
        FUN_000a07fc(param_2,local_3c);
        puVar3 = puVar3 + 5;
        param_2[1] = local_38;
        param_2[2] = local_34;
        param_2[3] = local_30;
        param_2[4] = local_2c;
        FUN_000a08c8(&local_3c);
        bVar5 = puVar2 == param_4;
        puVar2 = puVar2 + 5;
        if (bVar5) {
          return;
        }
      }
      while( true ) {
        iVar1 = FUN_000a988c(&local_3c,puVar4 + -5);
        if (iVar1 == 0) break;
        FUN_000a07fc(puVar4,puVar4[-5]);
        puVar4[1] = puVar4[-4];
        puVar4[2] = puVar4[-3];
        puVar4[3] = puVar4[-2];
        puVar4[4] = puVar4[-1];
        puVar4 = puVar4 + -5;
      }
      FUN_000a07fc(puVar4,local_3c);
      puVar3 = puVar3 + 5;
      puVar4[1] = local_38;
      puVar4[2] = local_34;
      puVar4[3] = local_30;
      puVar4[4] = local_2c;
      FUN_000a08c8(&local_3c);
      bVar5 = puVar2 != param_4;
      puVar2 = puVar2 + 5;
    } while (bVar5);
  }
  return;
}



