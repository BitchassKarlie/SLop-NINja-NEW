/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00088040 FUN_00088040 */

undefined4 * FUN_00088040(void *param_1)

{
  undefined4 uVar1;
  undefined4 *__dest;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  
  uVar3 = DAT_000882b8;
  __dest = (undefined4 *)operator_new(0x7c);
  uVar1 = DAT_000882c0;
  uVar4 = DAT_000882bc;
  iVar6 = 0;
  __dest[0x1d] = 100;
  __dest[8] = uVar1;
  uVar1 = DAT_000882c4;
  __dest[0x13] = 0xffffffff;
  __dest[0xd] = uVar3;
  __dest[0x14] = 0xffffffff;
  __dest[4] = uVar4;
  __dest[1] = 0xffffffff;
  __dest[5] = uVar3;
  __dest[0x16] = 0;
  __dest[0xf] = 10;
  __dest[9] = uVar3;
  __dest[0x17] = 0;
  *(undefined *)(__dest + 0xe) = 1;
  __dest[10] = uVar3;
  *(undefined *)((int)__dest + 0x39) = 1;
  __dest[0xb] = uVar3;
  __dest[0x18] = 0;
  __dest[0xc] = uVar3;
  __dest[3] = 0;
  __dest[6] = uVar3;
  *__dest = 0;
  __dest[7] = uVar3;
  __dest[0x1e] = 0;
  __dest[0x11] = uVar1;
  __dest[0x12] = uVar1;
  __dest[2] = 0;
  __dest[0x1a] = uVar4;
  __dest[0x1c] = 0;
  __dest[0x1b] = 0;
  memcpy(__dest,param_1,0x7c);
  if ((*(int *)((int)param_1 + 8) != 0) && (iVar8 = *(int *)((int)param_1 + 0xc), 0 < iVar8)) {
    puVar2 = (undefined4 *)operator_new__((iVar8 * 0xd + 1) * 8);
    uVar1 = DAT_000882c8;
    iVar9 = 0;
    *puVar2 = 0x68;
    puVar7 = puVar2 + 2;
    puVar2[1] = iVar8;
    do {
      puVar2[4] = 0;
      puVar2[8] = uVar4;
      puVar2[5] = 0;
      puVar2[0xe] = uVar1;
      puVar2[6] = 0;
      puVar2[0xf] = uVar4;
      *(undefined *)((int)puVar2 + 0x6d) = 0;
      iVar9 = iVar9 + 1;
      puVar2[9] = uVar3;
      puVar2[10] = uVar1;
      puVar2[0xb] = uVar3;
      puVar2[0x15] = uVar3;
      puVar2[0x10] = 0;
      puVar2[0x16] = uVar3;
      puVar2[7] = 0;
      puVar2[0x14] = uVar3;
      puVar2[0x13] = uVar3;
      puVar2[0x12] = uVar3;
      puVar2[0x11] = uVar3;
      puVar2[0x17] = 0;
      puVar2[0x1a] = uVar3;
      puVar2[2] = 0;
      puVar2[0xc] = uVar4;
      puVar2[0xd] = uVar4;
      *(undefined *)(puVar2 + 0x1b) = 0;
      puVar2 = puVar2 + 0x1a;
    } while (iVar8 != iVar9);
    __dest[2] = puVar7;
    if (0 < *(int *)((int)param_1 + 0xc)) {
      iVar8 = 0;
      while( true ) {
        *(undefined4 *)((int)puVar7 + iVar6 + 0x5c) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x5c);
        *(undefined4 *)(__dest[2] + iVar6 + 0x4c) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x4c);
        *(undefined4 *)(__dest[2] + iVar6 + 0x50) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x50);
        *(undefined4 *)(__dest[2] + iVar6 + 0x60) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x60);
        iVar9 = *(int *)((int)param_1 + 8) + iVar6;
        iVar5 = __dest[2] + iVar6;
        uVar3 = *(undefined4 *)(iVar9 + 0x20);
        uVar4 = *(undefined4 *)(iVar9 + 0x24);
        *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar9 + 0x1c);
        *(undefined4 *)(iVar5 + 0x20) = uVar3;
        *(undefined4 *)(iVar5 + 0x24) = uVar4;
        *(undefined4 *)(__dest[2] + iVar6 + 0x34) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x34);
        *(undefined4 *)(__dest[2] + iVar6 + 0x30) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x30);
        *(undefined4 *)(__dest[2] + iVar6 + 0x48) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x48);
        *(undefined4 *)(__dest[2] + iVar6 + 0x44) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x44);
        *(undefined4 *)(__dest[2] + iVar6 + 0x58) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x58);
        *(undefined4 *)(__dest[2] + iVar6 + 0x40) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x40);
        *(undefined4 *)(__dest[2] + iVar6 + 0x3c) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x3c);
        *(undefined4 *)(__dest[2] + iVar6 + 0x38) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x38);
        *(undefined4 *)(__dest[2] + iVar6) = *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6);
        *(undefined4 *)(__dest[2] + iVar6 + 0x54) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x54);
        *(undefined4 *)(__dest[2] + iVar6 + 0x14) =
             *(undefined4 *)(*(int *)((int)param_1 + 8) + iVar6 + 0x14);
        iVar9 = *(int *)((int)param_1 + 8) + iVar6;
        iVar8 = iVar8 + 1;
        FUN_000869b4(__dest[2] + iVar6 + 4,iVar9 + 4,*(undefined4 *)(iVar9 + 8),iVar9 + 4,
                     *(undefined4 *)(iVar9 + 0xc));
        iVar9 = __dest[2] + iVar6;
        iVar6 = iVar6 + 0x68;
        *(undefined *)(iVar9 + 0x65) = 1;
        if (*(int *)((int)param_1 + 0xc) <= iVar8) break;
        puVar7 = (undefined4 *)__dest[2];
      }
    }
  }
  return __dest;
}



