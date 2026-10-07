/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000806b0 FUN_000806b0 */

void FUN_000806b0(int param_1,undefined4 param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  float **ppfVar6;
  float fVar7;
  
  pfVar5 = *(float **)(param_1 + 0xc);
  if (pfVar5 != (float *)0x0) {
    ppfVar6 = (float **)(param_1 + 0xc);
    do {
      while( true ) {
        if (((*(short *)(pfVar5 + 1) != 0) && (pfVar5[8] != 0.0)) &&
           ((param_3 == 0 || (*(char *)(pfVar5 + 0x11) != '\0')))) {
          FUN_00080560(pfVar5,param_2);
        }
        fVar4 = pfVar5[0xe];
        fVar7 = *(float *)((int)fVar4 + 0x44);
        if (*pfVar5 < fVar7 == (NAN(*pfVar5) || NAN(fVar7))) break;
LAB_00080736:
        ppfVar6 = (float **)(pfVar5 + 0xf);
        pfVar5 = *ppfVar6;
        if (pfVar5 == (float *)0x0) {
          return;
        }
      }
      if ((fVar7 == 0.0 || fVar7 < 0.0 != NAN(fVar7)) &&
         (pbVar1 = (byte *)((int)fVar4 + 0x4b), *pbVar1 != 0)) {
        iVar2 = 0;
        do {
          if ((*(short *)((int)fVar4 + 0x52) == 0) && (*(char *)((int)fVar4 + 0x55) != '\0'))
          goto LAB_00080736;
          iVar2 = iVar2 + 1;
          fVar4 = (float)((int)fVar4 + 0x24);
        } while (iVar2 < (int)(uint)*pbVar1);
      }
      *ppfVar6 = (float *)pfVar5[0xf];
      if ((undefined4 *)pfVar5[0x10] != (undefined4 *)0x0) {
        *(undefined4 *)pfVar5[0x10] = 0;
      }
      iVar3 = *(int *)(param_1 + 0x20);
      iVar2 = *(int *)(iVar3 + 0xc);
      if (iVar2 < *(int *)(iVar3 + 0x10)) {
        *(float **)(*(int *)(iVar3 + 8) + iVar2 * 4) = pfVar5;
        *(int *)(iVar3 + 0xc) = iVar2 + 1;
      }
      pfVar5 = *ppfVar6;
    } while (pfVar5 != (float *)0x0);
  }
  return;
}



