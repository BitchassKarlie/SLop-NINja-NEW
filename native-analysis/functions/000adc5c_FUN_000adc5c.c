/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000adc5c FUN_000adc5c */

void FUN_000adc5c(undefined4 *param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r5;
  undefined4 *puVar3;
  uint unaff_r6;
  undefined4 unaff_r7;
  bool bVar4;
  float fVar5;
  undefined4 unaff_s16;
  
  do {
    if (param_1[0x73] == param_1[0x71] + -1) {
      iVar1 = 0;
      if (param_1[0x72] == 0) goto LAB_000add0c;
    }
    else {
      iVar1 = param_1[0x73] + 1;
      if (param_1[0x72] == iVar1) {
LAB_000add0c:
        puVar3 = param_1 + 0x38;
        do {
          *param_1 = param_1[0x38];
          param_1[1] = param_1[0x39];
          param_1[2] = param_1[0x3a];
          param_1[3] = param_1[0x3b];
          param_1[4] = param_1[0x3c];
          param_1[5] = param_1[0x3d];
          param_1[6] = param_1[0x3e];
          bVar4 = param_1[0x3e] == 1;
          if (bVar4) {
            param_1[0x3c] = 0;
          }
          if (bVar4) {
            param_1[0x3d] = 0;
            uVar2 = 1;
          }
          else {
            uVar2 = param_1[0x3a];
          }
          if (!bVar4) {
            param_1[0x38] = uVar2;
            uVar2 = param_1[0x3b];
          }
          if (!bVar4) {
            param_1[0x39] = uVar2;
          }
          param_1 = param_1 + 7;
        } while (param_1 != puVar3);
        return;
      }
    }
    iVar1 = param_1[0x70] + iVar1 * 0x14;
    if ((iVar1 == 0) ||
       ((fVar5 = *(float *)(iVar1 + 0x10),
        fVar5 != param_2 && fVar5 < param_2 == (NAN(fVar5) || NAN(param_2)) && (param_2 != 0.0))))
    goto LAB_000add0c;
    if (param_1[0x71] + -1 == param_1[0x73]) {
      iVar1 = 0;
    }
    else {
      iVar1 = param_1[0x73] + 1;
    }
    if (param_1[0x72] != iVar1) {
      puVar3 = (undefined4 *)(param_1[0x70] + iVar1 * 0x14);
      unaff_r5 = *puVar3;
      unaff_r7 = puVar3[2];
      unaff_s16 = puVar3[3];
      unaff_r6 = puVar3[1] & 0xff;
      param_1[0x73] = iVar1;
    }
    FUN_000adad8(param_1,unaff_r5,unaff_r6,unaff_r7,unaff_s16);
  } while( true );
}



