/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099150 FUN_00099150 */

undefined FUN_00099150(int param_1,float *param_2)

{
  int iVar1;
  clock_t cVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  
  cVar2 = clock();
  iVar1 = DAT_000991b8;
  piVar4 = (int *)(DAT_000991b8 + 0x99162);
  if ((-1 < *piVar4 << 0x1f) && (iVar3 = __cxa_guard_acquire(piVar4), iVar3 != 0)) {
    *(clock_t *)(iVar1 + 0x99166) = cVar2 + -0x411a;
    __cxa_guard_release(piVar4);
  }
  iVar1 = DAT_000991bc;
  fVar5 = (float)(longlong)(cVar2 - *(int *)(DAT_000991bc + 0x99176));
  fVar6 = DAT_000991b4 / fVar5;
  *param_2 = fVar5 / DAT_000991b4;
  *(short *)(param_1 + 6) = (short)(int)fVar6;
  *(clock_t *)(iVar1 + 0x99176) = cVar2;
  return *(undefined *)(param_1 + 4);
}



