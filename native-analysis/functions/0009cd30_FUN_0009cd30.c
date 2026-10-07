/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009cd30 FUN_0009cd30 */

void FUN_0009cd30(uint param_1,byte *param_2,int *param_3)

{
  uint uVar1;
  undefined4 local_2c [4];
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_2c[0] = *(undefined4 *)(DAT_0009cde0 + 0x9cd3c);
  local_2c[1] = *(undefined4 *)(DAT_0009cde0 + 0x9cd40);
  local_2c[2] = *(undefined4 *)(DAT_0009cde0 + 0x9cd44);
  local_2c[3] = *(undefined4 *)(DAT_0009cde0 + 0x9cd48);
  local_1c = *(undefined4 *)(DAT_0009cde0 + 0x9cd4c);
  uStack_18 = *(undefined4 *)(DAT_0009cde0 + 0x9cd50);
  uStack_14 = *(undefined4 *)(DAT_0009cde0 + 0x9cd54);
  if (param_1 < 0x80) {
    *param_3 = 1;
  }
  else {
    if (param_1 < 0x800) {
      *param_3 = 2;
    }
    else {
      if (param_1 < 0x10000) {
        *param_3 = 3;
      }
      else {
        if (0x1fffff < param_1) {
          *param_3 = 0;
          return;
        }
        *param_3 = 4;
        uVar1 = param_1 & 0x3f;
        param_1 = param_1 >> 6;
        param_2[3] = ~((byte)~(byte)((uVar1 << 0x19) >> 0x18) >> 1);
      }
      uVar1 = param_1 & 0x3f;
      param_1 = param_1 >> 6;
      param_2[2] = ~((byte)~(byte)((uVar1 << 0x19) >> 0x18) >> 1);
    }
    uVar1 = param_1 & 0x3f;
    param_1 = param_1 >> 6;
    param_2[1] = ~((byte)~(byte)((uVar1 << 0x19) >> 0x18) >> 1);
  }
  *param_2 = (byte)param_1 | (byte)local_2c[*param_3];
  return;
}



