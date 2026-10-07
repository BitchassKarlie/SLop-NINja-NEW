/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084804 FUN_00084804 */

void FUN_00084804(undefined *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int local_28 [5];
  
  if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
    iVar4 = 0;
    local_28[0] = *(int *)(DAT_00084878 + 0x84820);
    local_28[1] = *(undefined4 *)(DAT_00084878 + 0x84824);
    local_28[2] = *(undefined4 *)(DAT_00084878 + 0x84828);
    local_28[3] = *(undefined4 *)(DAT_00084878 + 0x8482c);
    while( true ) {
      iVar2 = atoi((char *)param_2);
      bVar1 = *param_2;
      bVar3 = bVar1;
      if (bVar1 != 0) {
        bVar3 = 1;
      }
      if (bVar1 == 0x2c) {
        bVar3 = 0;
      }
      else {
        bVar3 = bVar3 & 1;
      }
      *(int *)((int)local_28 + iVar4) = iVar2;
      while (bVar3 != 0) {
        param_2 = param_2 + 1;
        bVar1 = *param_2;
        bVar3 = bVar1;
        if (bVar1 != 0) {
          bVar3 = 1;
        }
        if (bVar1 == 0x2c) {
          bVar3 = 0;
        }
        else {
          bVar3 = bVar3 & 1;
        }
      }
      if ((bVar1 == 0) || (iVar4 = iVar4 + 4, iVar4 == 0x10)) break;
      param_2 = param_2 + 1;
    }
    param_1[2] = (char)local_28[0];
    param_1[1] = (char)local_28[1];
    *param_1 = (char)local_28[2];
    param_1[3] = (char)local_28[3];
  }
  return;
}



