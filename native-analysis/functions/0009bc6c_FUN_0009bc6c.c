/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009bc6c FUN_0009bc6c */

int * FUN_0009bc6c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0009bcc4;
  piVar2 = (int *)operator_new(0x30);
  iVar4 = *(int *)(iVar1 + 0x9bc80 + DAT_0009bcc8);
  iVar3 = DAT_0009bccc + 0x9bc8c;
  piVar2[2] = -1;
  piVar2[1] = -1;
  iVar1 = DAT_0009bcd0;
  piVar2[3] = 0;
  piVar2[8] = iVar4;
  piVar2[4] = 0;
  piVar2[6] = 0;
  piVar2[5] = 4;
  piVar2[7] = 0;
  piVar2[9] = 0;
  piVar2[10] = 0;
  *piVar2 = iVar1 + 0x9bd78;
  FUN_00099d70(piVar2 + 8,iVar3,0);
  *(undefined *)(piVar2 + 0xb) = 0;
  FUN_0009ba50(param_1,piVar2);
  return piVar2;
}



