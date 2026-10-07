/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000beed0 FUN_000beed0 */

bool FUN_000beed0(undefined4 param_1,int *param_2,int param_3,void *param_4)

{
  if (param_3 == 0) {
    memset(param_4,0,*param_2 << 2);
  }
  else {
    FUN_000bea2c(param_4,param_2[3],*param_2,param_2[1],param_3,param_2[2],
                 *(undefined4 *)(param_3 + param_2[2] * 4),*(undefined4 *)(param_2[4] + 0x10),
                 param_2[5]);
  }
  return param_3 != 0;
}



