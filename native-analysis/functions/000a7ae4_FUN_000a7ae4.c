/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a7ae4 FUN_000a7ae4 */

undefined FUN_000a7ae4(char **param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  do {
    pcVar2 = *param_1;
    if (*pcVar2 == '\0') {
      return 0;
    }
    iVar1 = FUN_000b6ab4(param_1,*(undefined4 *)(pcVar2 + 4),pcVar2);
  } while (iVar1 == 0);
  FUN_000a7a38(param_2,*(undefined4 *)(pcVar2 + 8));
  if (pcVar2 != (char *)0x0) {
    FUN_000a7a20(pcVar2 + 8);
    operator_delete(pcVar2);
  }
  return 1;
}



