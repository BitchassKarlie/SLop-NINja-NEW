/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00071c04 FUN_00071c04 */

int * FUN_00071c04(int *param_1,int param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = param_4;
  piVar1 = (int *)operator_new(0x18);
  iVar3 = *param_5;
  piVar1[1] = param_5[1];
  *piVar1 = iVar3;
  piVar1[2] = 1;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  piVar5 = *(int **)(param_2 + 4);
  if (piVar5 == (int *)0x0) {
    *(int **)(param_2 + 4) = piVar1;
    *(int **)(param_2 + 8) = piVar1;
    goto LAB_00071c8a;
  }
  piVar4 = piVar5;
  if (param_4 == (int *)0x0) {
    do {
      piVar2 = piVar4;
      piVar4 = (int *)piVar2[4];
    } while (piVar4 != (int *)0x0);
    iVar3 = *param_5;
    if (iVar3 <= *piVar2) goto LAB_00071c50;
LAB_00071c98:
    do {
      piVar4 = piVar5;
      piVar5 = (int *)piVar4[4];
    } while ((int *)piVar4[4] != (int *)0x0);
    piVar1[5] = (int)piVar4;
    piVar4[4] = (int)piVar1;
    *(int **)(param_2 + 8) = piVar1;
    piVar4 = (int *)0x0;
  }
  else {
    iVar3 = *param_5;
    if (iVar3 < *param_4) {
      piVar4 = (int *)param_4[3];
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
LAB_00071cd2:
        piVar1[5] = (int)param_4;
        param_4[3] = (int)piVar1;
        goto LAB_00071c7e;
      }
      if (iVar3 <= *piVar4) goto LAB_00071c50;
    }
    else {
LAB_00071c50:
      param_4 = (int *)0x0;
      piVar4 = piVar5;
      do {
        if (*piVar4 < iVar3) {
          piVar2 = (int *)piVar4[4];
        }
        else {
          piVar2 = (int *)piVar4[3];
          param_4 = piVar4;
        }
        piVar4 = piVar2;
      } while (piVar4 != (int *)0x0);
      if (param_4 == (int *)0x0) goto LAB_00071c98;
      piVar4 = (int *)param_4[3];
      if (piVar4 == (int *)0x0) goto LAB_00071cd2;
    }
    do {
      piVar5 = piVar4;
      piVar4 = (int *)piVar5[4];
    } while ((int *)piVar5[4] != (int *)0x0);
    piVar1[5] = (int)piVar5;
    piVar5[4] = (int)piVar1;
    piVar4 = (int *)0x0;
  }
LAB_00071c7e:
  piVar1[2] = 0;
  FUN_00071b88(param_2,piVar1,piVar4,0,param_3,piVar6);
LAB_00071c8a:
  *param_1 = param_2;
  param_1[1] = (int)piVar1;
  return param_1;
}



