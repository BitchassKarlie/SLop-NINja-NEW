/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9480 zip_get_archive_flag */

bool zip_get_archive_flag(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 << 0x1c < 0) {
    uVar1 = *(uint *)(param_1 + 0x14);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  return (uVar1 & param_2) != 0;
}



