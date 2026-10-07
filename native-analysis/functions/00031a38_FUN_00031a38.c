/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00031a38 FUN_00031a38 */

void FUN_00031a38(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar8 = 0;
  iVar9 = DAT_00031bdc + 0x31ae8;
  iVar10 = DAT_00031be0 + 0x31a52;
  do {
    puVar1 = (undefined4 *)(iVar9 + iVar8);
    iVar8 = iVar8 + 4;
    FUN_00029f40(*puVar1);
  } while (iVar8 != 0x40);
  local_40 = 0;
  local_3c = 0;
  uVar6 = FUN_0001c940();
  piVar7 = (int *)FUN_0001bd8c(uVar6,1,&local_40);
  iVar9 = DAT_00031bd0;
  iVar8 = DAT_00031bcc;
  while (piVar7 != (int *)0x0) {
    piVar7[5] = iVar8;
    piVar7[8] = iVar9;
    FUN_0001ccac(piVar7,0);
    (**(code **)(*piVar7 + 0x10))(piVar7,0);
    uVar6 = FUN_0001c940();
    piVar7 = (int *)FUN_0001bdb8(uVar6,1,&local_40);
  }
  uVar6 = FUN_0001c940();
  piVar7 = (int *)FUN_0001bd8c(uVar6,0,&local_40);
  iVar5 = DAT_00031be8;
  iVar4 = DAT_00031be4;
  fVar3 = DAT_00031bd8;
  fVar2 = DAT_00031bd4;
  iVar9 = DAT_00031bd0;
  iVar8 = DAT_00031bcc;
  if (piVar7 != (int *)0x0) {
    do {
      FUN_000225d0(piVar7,0);
      if ((*(char *)(*(int *)(iVar10 + iVar5) + 9) == '\0') && (param_1 == 0)) {
        if (*(char *)(piVar7 + 0x2d) == '\0') {
          local_4c = *(float *)(iVar4 + 0x31baa) - (float)piVar7[4];
          local_48 = *(float *)(iVar4 + 0x31bae) - (float)piVar7[5];
          local_44 = *(float *)(iVar4 + 0x31bb2) - (float)piVar7[6];
          fVar11 = local_48 * local_48 + local_4c * local_4c + local_44 * local_44;
          if (fVar11 != fVar2 && fVar11 < fVar2 == (NAN(fVar11) || NAN(fVar2))) {
            FUN_0001a178(&local_4c);
            local_4c = local_4c * fVar3;
            local_48 = local_48 * fVar3;
            local_44 = local_44 * fVar3;
          }
          (**(code **)(*piVar7 + 0x24))(piVar7,0,0,0,&local_4c);
          FUN_00026804(piVar7);
        }
      }
      else {
        *(undefined *)(piVar7 + 0x2d) = 1;
      }
      piVar7[5] = iVar8;
      piVar7[8] = iVar9;
      piVar7[0x2f] = iVar8;
      piVar7[0x32] = iVar9;
      (**(code **)(*piVar7 + 0x10))(piVar7,0);
      uVar6 = FUN_0001c940();
      piVar7 = (int *)FUN_0001bdb8(uVar6,0,&local_40);
    } while (piVar7 != (int *)0x0);
  }
  iVar8 = FUN_0002f5f4();
  if (iVar8 != 0) {
    FUN_0002c8a4();
  }
  return;
}



