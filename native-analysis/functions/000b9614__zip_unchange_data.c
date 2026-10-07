/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9614 _zip_unchange_data */

void _zip_unchange_data(int *param_1)

{
  code **ppcVar1;
  int iVar2;
  
  ppcVar1 = (code **)param_1[1];
  if (ppcVar1 != (code **)0x0) {
    (**ppcVar1)(ppcVar1[1],0,0,5);
    free((void *)param_1[1]);
    param_1[1] = 0;
  }
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    iVar2 = 4;
  }
  *param_1 = iVar2;
  return;
}



