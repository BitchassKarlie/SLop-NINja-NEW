/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000906c0 FUN_000906c0 */

float FUN_000906c0(undefined4 param_1,int param_2,float param_3,float param_4)

{
  float fVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  int local_54 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar4 = DAT_000907e8;
  fVar1 = DAT_000907e0;
  iVar5 = DAT_000907e4 + 0x906dc;
  fVar8 = param_3;
  if (param_4 <= 0.0) {
    iVar4 = *(int *)(param_2 + 0x18);
    while (iVar4 != 0) {
      if (iVar4 == 10) {
        fVar8 = fVar8 + param_3;
      }
      FUN_0008f638(param_1,iVar4,0);
      FUN_0009eaf4(param_2,1);
      iVar4 = *(int *)(param_2 + 0x18);
    }
  }
  else {
    pcVar2 = *(char **)(param_2 + 0x10);
    pcVar6 = (char *)0x0;
    fVar7 = DAT_000907e0;
    while ((pcVar2 != (char *)0x0 && (iVar3 = *(int *)(param_2 + 0x18), iVar3 != 0))) {
      if (iVar3 != 10) {
        if (pcVar6 == pcVar2) goto LAB_0009074a;
        iVar3 = FUN_0008f638(param_1,iVar3,0);
        if (pcVar6 == (char *)0x0) goto LAB_00090764;
        goto LAB_0009072a;
      }
      if (pcVar6 != (char *)0x0) {
LAB_0009074a:
        if (*pcVar6 == ' ') {
          FUN_0009eaf4(param_2,1);
          iVar3 = *(int *)(param_2 + 0x18);
        }
      }
      iVar3 = FUN_0008f638(param_1,iVar3,0);
      fVar8 = fVar8 + param_3;
      fVar7 = DAT_000907e0;
LAB_00090764:
      FUN_0009eabc(local_54,param_2);
      local_44 = *(undefined4 *)(param_2 + 0x10);
      local_40 = *(undefined4 *)(param_2 + 0x14);
      local_3c = *(undefined4 *)(param_2 + 0x18);
      pcVar2 = (char *)FUN_0009046c(param_1,local_54,fVar7,param_4,param_3,fVar1);
      local_54[0] = *(int *)(iVar5 + iVar4) + 8;
      pcVar6 = pcVar2;
      if (pcVar2 != *(char **)(param_2 + 0x10)) {
LAB_0009072a:
        FUN_0009eaf4(param_2,1);
        if (iVar3 != 0) {
          fVar7 = fVar7 + (*(float *)(iVar3 + 0x1c) + fVar1) * param_3;
        }
        pcVar2 = *(char **)(param_2 + 0x10);
      }
    }
  }
  return fVar8;
}



