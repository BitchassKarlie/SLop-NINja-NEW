/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9054 zip_stat_index */

undefined4 zip_stat_index(int param_1,int param_2,uint param_3,int *param_4)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  code **ppcVar6;
  bool bVar7;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x28))) {
    iVar2 = zip_get_name();
    if (iVar2 == 0) {
      return 0xffffffff;
    }
    if (((param_3 & 8) == 0) && (*(int *)(*(int *)(param_1 + 0x30) + param_2 * 0x14) - 2U < 2)) {
      ppcVar6 = *(code ***)(*(int *)(param_1 + 0x30) + param_2 * 0x14 + 4);
      iVar5 = (**ppcVar6)(ppcVar6[1],param_4,0x1c,3);
      if (iVar5 < 0) {
        _zip_error_set(param_1 + 8,0xf,0);
        return 0xffffffff;
      }
    }
    else {
      piVar3 = *(int **)(param_1 + 0x1c);
      if ((piVar3 == (int *)0x0) || (piVar3[1] <= param_2)) goto LAB_000b906a;
      iVar5 = param_2 * 0x3c;
      param_4[2] = *(int *)(*piVar3 + iVar5 + 0xc);
      param_4[4] = *(int *)(**(int **)(param_1 + 0x1c) + iVar5 + 0x14);
      param_4[3] = *(int *)(**(int **)(param_1 + 0x1c) + iVar5 + 8);
      param_4[5] = *(int *)(**(int **)(param_1 + 0x1c) + iVar5 + 0x10);
      *(undefined2 *)(param_4 + 6) = *(undefined2 *)(**(int **)(param_1 + 0x1c) + iVar5 + 6);
      uVar1 = *(ushort *)(**(int **)(param_1 + 0x1c) + iVar5 + 4);
      if ((uVar1 & 1) == 0) {
        *(ushort *)((int)param_4 + 0x1a) = uVar1 & 1;
      }
      else {
        iVar5 = (uint)uVar1 << 0x19;
        bVar7 = iVar5 < 0;
        if (bVar7) {
          iVar5 = -1;
        }
        uVar4 = (undefined2)iVar5;
        if (!bVar7) {
          uVar4 = 1;
        }
        *(undefined2 *)((int)param_4 + 0x1a) = uVar4;
      }
    }
    param_4[1] = param_2;
    *param_4 = iVar2;
    return 0;
  }
LAB_000b906a:
  _zip_error_set(param_1 + 8,0x12,0);
  return 0xffffffff;
}



