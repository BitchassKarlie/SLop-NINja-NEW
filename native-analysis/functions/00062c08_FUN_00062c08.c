/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00062c08 FUN_00062c08 */

void FUN_00062c08(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  iVar1 = DAT_00062d60;
  FUN_0002fa48(local_14,DAT_00062d5c + 0x62c16);
  FUN_00017d64(iVar1 + 0x62c20,local_14[0]);
  FUN_00017d90(local_14);
  FUN_0002fa48(&local_18,DAT_00062d64 + 0x62c36);
  FUN_00017d64(iVar1 + 0x62c2c,local_18);
  FUN_00017d90(&local_18);
  FUN_0002fa48(&local_1c,DAT_00062d68 + 0x62c52);
  FUN_00017d64(iVar1 + 0x62c24,local_1c);
  FUN_00017d90(&local_1c);
  FUN_0002fa48(&local_20,DAT_00062d6c + 0x62c6e);
  FUN_00017d64(iVar1 + 0x62c30,local_20);
  FUN_00017d90(&local_20);
  FUN_0002fa48(&local_24,DAT_00062d70 + 0x62c8a);
  FUN_00017d64(iVar1 + 0x62c34,local_24);
  FUN_00017d90(&local_24);
  FUN_0002fa48(&local_28,DAT_00062d74 + 0x62ca6);
  FUN_00017d64(iVar1 + 0x62c48,local_28);
  FUN_00017d90(&local_28);
  FUN_0002fa48(&local_2c,DAT_00062d78 + 0x62cc2);
  FUN_00017d64(iVar1 + 0x62c4c,local_2c);
  FUN_00017d90(&local_2c);
  FUN_0002fa48(&local_30,DAT_00062d7c + 0x62cde);
  FUN_00017d64(iVar1 + 0x62c50,local_30);
  FUN_00017d90(&local_30);
  FUN_0002fa48(&local_34,DAT_00062d80 + 0x62cf8);
  FUN_00017d64(iVar1 + 0x62c58,local_34);
  FUN_00017d90(&local_34);
  iVar2 = FUN_0006e144();
  if (iVar2 == 0) {
    FUN_0002fa48(&local_38,DAT_00062d8c + 0x62d46);
    FUN_00017d64(iVar1 + 0x62c28,local_38);
    FUN_00017d90(&local_38);
  }
  else {
    FUN_0002fa48(&local_3c,DAT_00062d84 + 0x62d1c);
    FUN_00017d64(iVar1 + 0x62c28,local_3c);
    FUN_00017d90(&local_3c);
  }
  *(undefined *)((int)&DAT_00062d7c + DAT_00062d88 + 2) = 1;
  return;
}



