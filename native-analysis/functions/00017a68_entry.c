/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00017a68 entry */

/* WARNING: Control flow encountered bad instruction data */

void processEntry entry(void)

{
  char in_NG;
  char in_OV;
  
  if (in_NG != in_OV) {
    software_interrupt(0x4770);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



