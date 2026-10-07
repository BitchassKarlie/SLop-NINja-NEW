/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000be488 FUN_000be488 */

undefined4 FUN_000be488(undefined4 param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  iVar1 = FUN_000c28b4(param_1,0x18);
  if (iVar1 == 0x564342) {
    iVar1 = FUN_000c28b4(param_1,0x10);
    *param_2 = iVar1;
    iVar1 = FUN_000c28b4(param_1,0x18);
    param_2[1] = iVar1;
    if (iVar1 != -1) {
      iVar1 = FUN_000c28b4(param_1,1);
      if (iVar1 == 0) {
        pvVar2 = malloc(param_2[1] << 2);
        param_2[2] = (int)pvVar2;
        iVar1 = FUN_000c28b4(param_1,1);
        if (iVar1 == 0) {
          if (0 < param_2[1]) {
            iVar1 = 0;
            do {
              iVar6 = FUN_000c28b4(param_1,5);
              if (iVar6 == -1) goto LAB_000be5ae;
              *(int *)(param_2[2] + iVar1 * 4) = iVar6 + 1;
              iVar1 = iVar1 + 1;
            } while (iVar1 < param_2[1]);
          }
        }
        else if (0 < param_2[1]) {
          iVar1 = 0;
          iVar6 = 0;
          do {
            iVar3 = FUN_000c28b4(param_1,1);
            if (iVar3 == 0) {
              *(undefined4 *)(param_2[2] + iVar1) = 0;
            }
            else {
              iVar3 = FUN_000c28b4(param_1,5);
              if (iVar3 == -1) goto LAB_000be5ae;
              *(int *)(param_2[2] + iVar1) = iVar3 + 1;
            }
            iVar6 = iVar6 + 1;
            iVar1 = iVar1 + 4;
          } while (iVar6 < param_2[1]);
        }
      }
      else {
        if (iVar1 != 1) {
          return 0xffffffff;
        }
        iVar1 = FUN_000c28b4(param_1,5);
        pvVar2 = malloc(param_2[1] << 2);
        param_2[2] = (int)pvVar2;
        iVar3 = param_2[1];
        if (0 < iVar3) {
          do {
            iVar1 = iVar1 + 1;
            uVar4 = FUN_000bd1fc(iVar3 - iVar6);
            iVar3 = FUN_000c28b4(param_1,uVar4);
            if (iVar3 == -1) goto LAB_000be5ae;
            if (0 < iVar3) {
              if (param_2[1] <= iVar6) break;
              iVar5 = iVar6 << 2;
              iVar3 = iVar6 + iVar3;
              while( true ) {
                iVar6 = iVar6 + 1;
                *(int *)(param_2[2] + iVar5) = iVar1;
                if (iVar6 == iVar3) break;
                iVar5 = iVar5 + 4;
                if (param_2[1] <= iVar6) goto LAB_000be59a;
              }
            }
            iVar3 = param_2[1];
          } while (iVar6 < iVar3);
        }
      }
LAB_000be59a:
      iVar1 = FUN_000c28b4(param_1,4);
      param_2[3] = iVar1;
      if (iVar1 == 0) {
        return 0;
      }
      if ((-1 < iVar1) && (iVar1 < 3)) {
        iVar1 = FUN_000c28b4(param_1,0x20);
        param_2[4] = iVar1;
        iVar1 = FUN_000c28b4(param_1,0x20);
        param_2[5] = iVar1;
        iVar1 = FUN_000c28b4(param_1,4);
        param_2[6] = iVar1 + 1;
        iVar1 = FUN_000c28b4(param_1,1);
        param_2[7] = iVar1;
        if (param_2[3] == 1) {
          iVar1 = FUN_000bd20c(param_2);
        }
        else {
          if (param_2[3] != 2) {
            pvVar2 = malloc(0);
            param_2[8] = (int)pvVar2;
            return 0;
          }
          iVar1 = param_2[1] * *param_2;
        }
        pvVar2 = malloc(iVar1 << 2);
        param_2[8] = (int)pvVar2;
        if (iVar1 < 1) {
          if (iVar1 == 0) {
            return 0;
          }
        }
        else {
          iVar6 = 0;
          while( true ) {
            uVar4 = FUN_000c28b4(param_1,param_2[6]);
            *(undefined4 *)((int)pvVar2 + iVar6 * 4) = uVar4;
            iVar6 = iVar6 + 1;
            if (iVar6 == iVar1) break;
            pvVar2 = (void *)param_2[8];
          }
        }
        if (*(int *)(param_2[8] + (iVar1 + -1) * 4) != -1) {
          return 0;
        }
      }
    }
  }
LAB_000be5ae:
  FUN_000bd324(param_2);
  return 0xffffffff;
}



