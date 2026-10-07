/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a3e60 FUN_000a3e60 */

undefined4 FUN_000a3e60(int *param_1,int param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  if ((param_2 == 0) ||
     (pcVar1 = (char *)(**(code **)(*param_1 + 0x2a4))(param_1,param_2,0), pcVar1 == (char *)0x0)) {
    uVar2 = 0;
  }
  else {
    cVar3 = *pcVar1;
    if (cVar3 == '\0') {
      FUN_00017cb8(param_3);
    }
    else {
      iVar8 = 0;
      pcVar6 = pcVar1;
      do {
        pcVar6 = pcVar6 + 1;
        if (cVar3 == -0x40) {
          cVar3 = *pcVar6;
          if (cVar3 == -0x80) break;
        }
        else {
          cVar3 = *pcVar6;
        }
        iVar8 = iVar8 + 1;
      } while (cVar3 != '\0');
      FUN_00017cb8(param_3,iVar8);
      if (iVar8 != 0) {
        iVar5 = *(int *)(param_3 + 4);
        iVar4 = (*(int *)(param_3 + 8) + -1) - iVar5;
        if (iVar4 != 0) {
          iVar7 = 0;
          do {
            iVar4 = iVar4 + -1;
            *(char *)(iVar5 + iVar7) = pcVar1[iVar7];
            if (iVar4 == 0) break;
            iVar7 = iVar7 + 1;
          } while (iVar8 != iVar7);
          iVar5 = *(int *)(param_3 + 4);
        }
        *(int *)(param_3 + 0xc) = iVar5 + iVar8;
      }
    }
    (**(code **)(*param_1 + 0x2a8))(param_1,param_2,pcVar1);
    uVar2 = 1;
  }
  return uVar2;
}



