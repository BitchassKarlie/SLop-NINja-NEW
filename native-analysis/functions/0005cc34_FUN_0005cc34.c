/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005cc34 FUN_0005cc34 */

void FUN_0005cc34(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = DAT_0005ccb0 + 0x5cc42;
  if ((*(int *)(param_1 + 0xf0) != 0) || (iVar1 = FUN_0002f5ec(), iVar1 == 0)) {
    iVar3 = *(int *)(iVar3 + DAT_0005ccb4);
    fVar4 = *(float *)(iVar3 + 0x10);
    if (fVar4 != DAT_0005cca8 && fVar4 < DAT_0005cca8 == (NAN(fVar4) || NAN(DAT_0005cca8))) {
      fVar4 = *(float *)(*(int *)(iVar3 + 0x40) + 0x24) * DAT_0005ccac;
      if (0.0 < fVar4) {
        if (fVar4 < DAT_0005ccac == (NAN(fVar4) || NAN(DAT_0005ccac))) {
          cVar2 = -1;
        }
        else {
          cVar2 = (0.0 < fVar4) * (char)(int)fVar4;
        }
      }
      else {
        cVar2 = '\0';
      }
      *(char *)(param_1 + 0x53) = cVar2;
      FUN_0004a638(param_1,param_2);
    }
  }
  return;
}



