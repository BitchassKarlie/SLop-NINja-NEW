/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002157c FUN_0002157c */

void FUN_0002157c(int param_1,uint param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined auStack_18 [8];
  int local_10;
  ushort *local_c;
  
  puVar2 = *(ushort **)(DAT_000215c4 + param_1 * 0x10 + 0x2158a);
  if (puVar2 != (ushort *)0x0) {
    local_c = (ushort *)0x0;
    do {
      if (*puVar2 < param_2) {
        puVar1 = *(ushort **)(puVar2 + 8);
      }
      else {
        puVar1 = *(ushort **)(puVar2 + 6);
        local_c = puVar2;
      }
      puVar2 = puVar1;
    } while (puVar1 != (ushort *)0x0);
    if ((local_c != (ushort *)0x0) && (*local_c <= param_2)) {
      local_10 = DAT_000215c8 + 0x215b6 + param_1 * 0x10;
      FUN_0002148c(auStack_18,local_10,local_10,local_c);
    }
  }
  return;
}



