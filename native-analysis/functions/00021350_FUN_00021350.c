/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00021350 FUN_00021350 */

uint FUN_00021350(int param_1,int param_2,uint param_3)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  undefined auStack_28 [4];
  ushort *local_24;
  undefined2 local_20 [2];
  undefined4 local_1c;
  int local_18;
  ushort *local_14;
  
  if (param_3 == 0) {
    puVar5 = (ushort *)(DAT_00021434 + 0x213bc);
    param_3 = (uint)(ushort)(*puVar5 + 1);
    *puVar5 = *puVar5 + 1;
    if (param_3 == 0) {
      *puVar5 = 1;
      param_3 = 1;
    }
    puVar5 = *(ushort **)(DAT_00021438 + param_2 * 0x10 + 0x213d8);
    if (puVar5 != (ushort *)0x0) {
      puVar3 = (ushort *)0x0;
      puVar6 = puVar5;
      do {
        if (*puVar6 < param_3) {
          puVar2 = *(ushort **)(puVar6 + 8);
        }
        else {
          puVar2 = *(ushort **)(puVar6 + 6);
          puVar3 = puVar6;
        }
        puVar6 = puVar2;
      } while (puVar6 != (ushort *)0x0);
      if ((puVar3 != (ushort *)0x0) && (*puVar3 <= param_3)) {
        uVar4 = param_3 + 1;
        puVar7 = (undefined2 *)(DAT_0002143c + 0x21404);
        param_3 = uVar4 & 0xffff;
        *puVar7 = (short)uVar4;
        if (param_3 == 0) {
          *puVar7 = 1;
          param_3 = 1;
        }
        do {
          if (*puVar5 < param_3) {
            puVar5 = *(ushort **)(puVar5 + 8);
          }
          else {
            puVar5 = *(ushort **)(puVar5 + 6);
          }
        } while (puVar5 != (ushort *)0x0);
      }
    }
  }
  iVar1 = DAT_0002142c;
  local_20[0] = (undefined2)param_3;
  *(undefined2 *)(param_1 + 8) = local_20[0];
  local_14 = *(ushort **)(iVar1 + param_2 * 0x10 + 0x2136a);
  if (local_14 != (ushort *)0x0) {
    puVar5 = local_14;
    local_14 = (ushort *)0x0;
    do {
      if (*puVar5 < param_3) {
        puVar3 = *(ushort **)(puVar5 + 8);
      }
      else {
        puVar3 = *(ushort **)(puVar5 + 6);
        local_14 = puVar5;
      }
      puVar5 = puVar3;
    } while (puVar3 != (ushort *)0x0);
    if ((local_14 != (ushort *)0x0) && (*local_14 <= param_3)) goto LAB_000213ae;
  }
  local_1c = 0;
  local_18 = DAT_00021430 + 0x213a2 + param_2 * 0x10;
  FUN_0002127c(auStack_28,local_18,local_18,local_14,local_20);
  local_14 = local_24;
LAB_000213ae:
  *(int *)(local_14 + 2) = param_1;
  return param_3;
}



