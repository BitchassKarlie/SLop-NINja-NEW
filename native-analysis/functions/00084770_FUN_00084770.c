/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084770 FUN_00084770 */

void FUN_00084770(byte *param_1,float *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 extraout_r1;
  byte bVar3;
  int iVar4;
  
  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    bVar3 = bVar1;
    if (bVar1 != 0) {
      bVar3 = 1;
    }
    if (param_2 == (float *)0x0) {
      bVar3 = 0;
    }
    else {
      bVar3 = bVar3 & 1;
    }
    if ((bVar3 != 0) && (0 < param_3)) {
      iVar4 = 0;
      if (bVar1 != 0) goto LAB_000847b2;
LAB_0008479c:
      *param_2 = param_2[-1];
      while (iVar4 = iVar4 + 1, iVar4 != param_3) {
        while( true ) {
          param_2 = param_2 + 1;
          if (*param_1 == 0) goto LAB_0008479c;
LAB_000847b2:
          pbVar2 = param_1;
          strtod((char *)param_1,(char **)0x0);
          *param_2 = (float)(double)CONCAT44(extraout_r1,pbVar2);
          bVar1 = *param_1;
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
          while (bVar3 != 0) {
            param_1 = param_1 + 1;
            bVar1 = *param_1;
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
          if (bVar1 == 0) break;
          iVar4 = iVar4 + 1;
          param_1 = param_1 + 1;
          if (iVar4 == param_3) {
            return;
          }
        }
      }
    }
  }
  return;
}



