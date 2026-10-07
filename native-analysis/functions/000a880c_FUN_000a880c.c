/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a880c FUN_000a880c */

undefined4 FUN_000a880c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined auStack_48 [8];
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int *local_2c;
  
  piVar5 = *(int **)(param_2 + 8);
  piVar3 = *(int **)(param_2 + 4);
  if (piVar5 != piVar3) {
    iVar4 = param_1 + 0xc;
    do {
      local_3c = *(undefined4 *)(param_1 + 0x14);
      local_34 = *(undefined4 *)(param_1 + 0x10);
      local_40 = iVar4;
      local_38 = iVar4;
      FUN_000a8790(&local_30,iVar4,local_34,iVar4,local_3c,piVar3,0);
      piVar1 = local_2c;
      if ((local_2c == *(int **)(param_1 + 0x14)) ||
         (iVar2 = FUN_000a86e4(*local_2c + 0xc,*piVar3 + 0xc), iVar2 != 0)) {
        FUN_000a8094(auStack_48,iVar4,local_30,local_2c,piVar3);
      }
      else {
        if ((piVar3[1] != piVar1[1]) || (piVar3[2] != piVar1[2])) {
          return 0;
        }
        iVar2 = FUN_000a86e4(*piVar3 + 0xc,*piVar1 + 0xc);
        if (iVar2 != 0) {
          return 0;
        }
      }
      piVar3 = piVar3 + 3;
    } while (piVar5 != piVar3);
  }
  return 1;
}



