/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009aef0 FUN_0009aef0 */

int FUN_0009aef0(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  size_t __n;
  char *__dest;
  int iVar2;
  void *__src;
  char *pcVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  void *local_30;
  undefined local_29 [5];
  
  iVar5 = DAT_0009b05c + 0x9aefe;
  if (param_2 == 0) {
    FUN_0009d4f8(param_1,2,0,0,0);
    iVar2 = 0;
  }
  else {
    FUN_0009a038();
    param_1[2] = -1;
    param_1[1] = -1;
    FUN_0009f718(param_2);
    __n = FUN_000ab3d4(param_2);
    FUN_0009f378(param_2);
    iVar1 = DAT_0009b060;
    if ((int)__n < 1) {
      iVar2 = 0;
      FUN_0009d4f8(param_1,0xd,0,0,0);
    }
    else {
      local_30 = *(void **)(iVar5 + DAT_0009b060);
      FUN_00099ddc(&local_30,__n);
      __dest = (char *)operator_new__(__n + 1);
      *__dest = '\0';
      iVar2 = FUN_0009f4cc(param_2,0,0);
      if (iVar2 == 0) {
        operator_delete__(__dest);
        FUN_0009d4f8(param_1,2,0,0,0);
        iVar2 = 0;
      }
      else {
        __src = (void *)FUN_000ab3d8(param_2);
        memcpy(__dest,__src,__n);
        __dest[__n] = '\0';
        cVar4 = *__dest;
        pcVar3 = __dest;
        pcVar6 = __dest;
LAB_0009afb4:
        if (cVar4 != '\0') {
          while (cVar4 != '\n') {
            if (cVar4 != '\r') {
              pcVar6 = pcVar6 + 1;
              cVar4 = *pcVar6;
              goto LAB_0009afb4;
            }
            if (0 < (int)pcVar6 - (int)pcVar3) {
              FUN_00099e28(&local_30);
            }
            local_29[0] = 10;
            FUN_00099e28(&local_30,local_29,1);
            cVar4 = pcVar6[1];
            pcVar3 = pcVar6 + 1;
            if (cVar4 == '\n') {
              pcVar3 = pcVar6 + 2;
              cVar4 = *pcVar3;
            }
            pcVar6 = pcVar3;
            if (cVar4 == '\0') goto LAB_0009aff2;
          }
          pcVar6 = pcVar6 + 1;
          FUN_00099e28(&local_30,pcVar3,(int)pcVar6 - (int)pcVar3);
          cVar4 = *pcVar6;
          pcVar3 = pcVar6;
          goto LAB_0009afb4;
        }
LAB_0009aff2:
        if (pcVar6 != pcVar3) {
          FUN_00099e28(&local_30,pcVar3,(int)pcVar6 - (int)pcVar3);
        }
        operator_delete__(__dest);
        (**(code **)(*param_1 + 0xc))(param_1,(int)local_30 + 8,0,param_3);
        FUN_000ab40c(param_2);
        iVar2 = 1 - (uint)*(byte *)(param_1 + 0xb);
        if (1 < *(byte *)(param_1 + 0xb)) {
          iVar2 = 0;
        }
      }
      if ((local_30 != *(void **)(iVar5 + iVar1)) && (local_30 != (void *)0x0)) {
        operator_delete__(local_30);
      }
    }
  }
  return iVar2;
}



