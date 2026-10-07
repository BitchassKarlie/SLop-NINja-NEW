/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a496c FUN_000a496c */

longlong FUN_000a496c(void)

{
  int iVar1;
  int iVar2;
  time_t tVar3;
  int *piVar4;
  longlong lVar5;
  
  piVar4 = **(int ***)(DAT_000a49e4 + 0xa4974 + DAT_000a49e8);
  iVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,DAT_000a49ec + 0xa497c);
  if ((iVar1 != 0) &&
     (iVar2 = (**(code **)(*piVar4 + 0x1c4))
                        (piVar4,iVar1,DAT_000a49f0 + 0xa4994,DAT_000a49f4 + 0xa499a), iVar2 != 0)) {
    lVar5 = FUN_000a397c(piVar4,iVar1,iVar2);
    iVar1 = (**(code **)(*piVar4 + 0x390))(piVar4);
    if (iVar1 == 0) {
      return lVar5;
    }
  }
  iVar1 = (**(code **)(*piVar4 + 0x390))(piVar4);
  if (iVar1 != 0) {
    (**(code **)(*piVar4 + 0x44))(piVar4);
  }
  tVar3 = time((time_t *)0x0);
  return (longlong)tVar3;
}



