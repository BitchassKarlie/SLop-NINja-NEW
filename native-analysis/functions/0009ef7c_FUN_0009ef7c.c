/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ef7c FUN_0009ef7c */

void FUN_0009ef7c(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = DAT_0009efd0;
  puVar2 = (undefined *)(DAT_0009efd0 + 0x9ef86);
  *(undefined *)(DAT_0009efd0 + 0x9ef87) = 0;
  *(undefined *)(iVar1 + 0x9ef88) = 0;
  *(undefined *)(iVar1 + 0x9ef89) = 0;
  *(undefined *)(iVar1 + 0x9ef8b) = 0;
  *(undefined *)(iVar1 + 0x9ef8a) = 0;
  *puVar2 = 0;
  glDisableClientState(0x8078);
  glDisableClientState(0x8076);
  glDisableClientState(0x8074);
  glDisableClientState(0x8075);
  glDisable(0xbe2);
  glDisable(0xb44);
  glBlendFunc(0x302,0x303);
  return;
}



