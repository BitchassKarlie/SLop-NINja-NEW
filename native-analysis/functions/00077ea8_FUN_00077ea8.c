/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077ea8 FUN_00077ea8 */

void FUN_00077ea8(int param_1,int param_2)

{
  int iVar1;
  undefined uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *__s;
  int iVar7;
  char *__format;
  undefined4 *puVar8;
  double local_20;
  
  if (param_2 != 0) {
    iVar3 = FUN_0009a884(param_2,DAT_00078090 + 0x77ec0,&local_20);
    if (iVar3 == 0) {
      *(float *)(param_1 + 0x44) = (float)local_20;
    }
    iVar3 = DAT_00078098;
    FUN_0009a4a0(param_2,DAT_00078094 + 0x77ed2);
    uVar4 = FUN_00028b00();
    iVar7 = DAT_0007809c + 0x77ee0;
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    uVar4 = FUN_0009a4a0(param_2,iVar7);
    FUN_0003e474(param_1 + 0x4c,uVar4);
    uVar4 = FUN_0009a4a0(param_2,DAT_000780a0 + 0x77ef8);
    FUN_0003e474(param_1 + 0x58,uVar4);
    uVar4 = FUN_0009a4a0(param_2,DAT_000780a4 + 0x77f0c);
    FUN_0003e474(param_1 + 0x54,uVar4);
    uVar4 = FUN_0009a4a0(param_2,DAT_000780a8 + 0x77f20);
    uVar2 = FUN_00084524(iVar3 + 0x77ed8,uVar4);
    iVar7 = DAT_000780ac + 0x77f30;
    *(undefined *)(param_1 + 0x6c) = uVar2;
    uVar4 = FUN_0009a4a0(param_2,iVar7);
    uVar2 = FUN_00084524(iVar3 + 0x77ed8,uVar4);
    iVar3 = DAT_000780b0 + 0x77f46;
    *(undefined *)(param_1 + 0x48) = uVar2;
    pcVar5 = (char *)FUN_0009a4a0(param_2,iVar3);
    if ((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) {
      __s = (char *)operator_new__(0x40);
      __format = (char *)(DAT_000780d4 + 0x7808a);
      *(char **)(param_1 + 0x50) = __s;
      sprintf(__s,__format,pcVar5);
    }
    iVar3 = FUN_0009a5d8(param_2,DAT_000780b4 + 0x77f62);
    if (iVar3 != 0) {
      iVar7 = FUN_0009a884(iVar3,DAT_000780b8 + 0x77f70,&local_20);
      if (iVar7 == 0) {
        *(float *)(param_1 + 0x5c) = (float)local_20;
      }
      iVar7 = FUN_0009a884(iVar3,DAT_000780bc + 0x77f8a,&local_20);
      if (iVar7 == 0) {
        *(float *)(param_1 + 0x60) = (float)local_20;
      }
      iVar7 = FUN_0009a884(iVar3,DAT_000780c0 + 0x77fa4,&local_20);
      if (iVar7 == 0) {
        *(float *)(param_1 + 100) = (float)local_20;
      }
      iVar3 = FUN_0009a884(iVar3,DAT_000780c4 + 0x77fbe,&local_20);
      if (iVar3 == 0) {
        *(float *)(param_1 + 0x68) = (float)local_20;
      }
    }
    iVar7 = DAT_000780c8 + 0x77fcc;
    for (iVar3 = FUN_0009a5d8(param_2,iVar7); iVar3 != 0; iVar3 = FUN_0009a4f0(iVar3,iVar7)) {
    }
    iVar7 = DAT_000780cc + 0x77fe4;
    for (iVar3 = FUN_0009a5d8(param_2,iVar7); iVar3 != 0; iVar3 = FUN_0009a4f0(iVar3,iVar7)) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
    }
    iVar3 = *(int *)(param_1 + 0x3c);
    if (0 < iVar3) {
      puVar6 = (undefined4 *)operator_new__((iVar3 + 2) * 4);
      *puVar6 = 4;
      iVar7 = 0;
      puVar8 = puVar6 + 2;
      puVar6[1] = iVar3;
      do {
        iVar7 = iVar7 + 1;
        *(undefined *)(puVar6 + 2) = 0;
        *(undefined *)((int)puVar6 + 9) = 0;
        *(undefined *)((int)puVar6 + 10) = 0;
        *(undefined *)((int)puVar6 + 0xb) = 0xff;
        iVar1 = DAT_000780d0;
        puVar6 = puVar6 + 1;
      } while (iVar7 != iVar3);
      *(undefined4 **)(param_1 + 0x38) = puVar8;
      for (iVar3 = FUN_0009a5d8(param_2,iVar1 + 0x78034); iVar3 != 0;
          iVar3 = FUN_0009a4f0(iVar3,iVar1 + 0x78034)) {
        uVar4 = FUN_0009a1d4(iVar3);
        FUN_00084804(puVar8,uVar4);
        puVar8 = puVar8 + 1;
      }
    }
  }
  return;
}



