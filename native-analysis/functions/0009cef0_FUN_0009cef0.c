/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009cef0 FUN_0009cef0 */

byte * FUN_0009cef0(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 != (byte *)0x0) {
    uVar1 = (uint)*param_1;
    if (uVar1 == 0) {
      param_1 = (byte *)0x0;
    }
    else {
      if (param_2 == 1) {
        if (uVar1 == 0xef) goto LAB_0009cf4e;
        do {
          uVar2 = ((uint)*(byte *)(**(int **)(DAT_0009cf80 + 0x9cef6 + DAT_0009cf84) + uVar1 + 1) <<
                  0x1c) >> 0x1f;
          if (uVar1 == 10) {
            uVar2 = 1;
          }
          if ((uVar2 == 0) && (uVar1 != 0xd)) {
            return param_1;
          }
          param_1 = param_1 + 1;
          while( true ) {
            uVar1 = (uint)*param_1;
            if (uVar1 == 0) {
              return param_1;
            }
            if (uVar1 != 0xef) break;
LAB_0009cf4e:
            if (param_1[1] == 0xbb) {
              if (param_1[2] != 0xbf) break;
              param_1 = param_1 + 3;
            }
            else {
              if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf)))) break;
              param_1 = param_1 + 3;
            }
          }
        } while( true );
      }
      do {
        uVar2 = ((uint)*(byte *)(**(int **)(DAT_0009cf80 + 0x9cef6 + DAT_0009cf84) + uVar1 + 1) <<
                0x1c) >> 0x1f;
        if (uVar1 == 10) {
          uVar2 = 1;
        }
        if ((uVar2 == 0) && (uVar1 != 0xd)) {
          return param_1;
        }
        param_1 = param_1 + 1;
        uVar1 = (uint)*param_1;
      } while (uVar1 != 0);
    }
  }
  return param_1;
}



