/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084550 FUN_00084550 */

uint FUN_00084550(char *param_1,int *param_2,uint param_3)

{
  size_t sVar1;
  byte *__dest;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    uVar8 = 0;
  }
  else {
    sVar1 = strlen(param_1);
    __dest = (byte *)operator_new__(sVar1 + 1);
    strcpy((char *)__dest,param_1);
    uVar6 = (uint)*__dest;
    uVar8 = uVar6;
    if (uVar6 != 0) {
      pbVar2 = (byte *)0x0;
      uVar8 = 0;
      pbVar7 = __dest;
      do {
        while( true ) {
          uVar4 = uVar6 - 0x20;
          if (uVar4 != 0) {
            uVar4 = 1;
          }
          if (pbVar2 == (byte *)0x0) {
            uVar4 = uVar4 & 1;
          }
          else {
            uVar4 = 0;
          }
          if (uVar4 != 0) {
            pbVar2 = pbVar7;
          }
          if (pbVar2 == (byte *)0x0 || uVar6 != 0x2c) break;
          *pbVar7 = 0;
          iVar3 = FUN_0008f414();
          if (param_3 == 0) {
LAB_000845ea:
            *pbVar7 = 0x2c;
          }
          else {
            if (iVar3 == *param_2) {
              uVar6 = 1;
            }
            else {
              uVar6 = 0;
              do {
                uVar6 = uVar6 + 1;
                if (uVar6 == param_3) goto LAB_000845ea;
              } while (iVar3 != param_2[uVar6]);
              uVar6 = 1 << (uVar6 & 0xff);
            }
            uVar8 = uVar8 | uVar6;
            *pbVar7 = 0x2c;
          }
          pbVar2 = (byte *)0x0;
          pbVar7 = pbVar7 + 1;
          uVar6 = (uint)*pbVar7;
          if (uVar6 == 0) goto LAB_000845f8;
        }
        pbVar7 = pbVar7 + 1;
        uVar6 = (uint)*pbVar7;
      } while (uVar6 != 0);
LAB_000845f8:
      if ((pbVar2 != (byte *)0x0) && (iVar3 = FUN_0008f414(), param_3 != 0)) {
        iVar5 = *param_2;
        while( true ) {
          if (iVar3 == iVar5) {
            operator_delete__(__dest);
            return 1 << (uVar6 & 0xff) | uVar8;
          }
          uVar6 = uVar6 + 1;
          if (uVar6 == param_3) break;
          iVar5 = param_2[uVar6];
        }
      }
    }
    operator_delete__(__dest);
  }
  return uVar8;
}



