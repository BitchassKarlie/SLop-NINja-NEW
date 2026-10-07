/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bf968 FUN_000bf968 */

void FUN_000bf968(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    if (0 < *(int *)param_1[1]) {
      iVar3 = 0;
      do {
        (**(code **)(*(int *)(param_1[4] + iVar3 * 4) + 0xc))
                  (*(undefined4 *)(param_1[2] + iVar3 * 4));
        iVar1 = iVar3 * 4;
        iVar2 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        (**(code **)(*(int *)(param_1[5] + iVar1) + 0xc))(*(undefined4 *)(param_1[3] + iVar2));
      } while (iVar3 < *(int *)param_1[1]);
    }
    free((void *)param_1[4]);
    free((void *)param_1[5]);
    free((void *)param_1[2]);
    free((void *)param_1[3]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    free(param_1);
  }
  return;
}



