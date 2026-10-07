/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008ae78 FUN_0008ae78 */

void FUN_0008ae78(int param_1)

{
  char cVar1;
  void **ppvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  void **ppvVar11;
  void **ppvVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  float fVar16;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar5 = DAT_0008b268;
  iVar14 = DAT_0008b264 + 0x8ae8a;
  iVar8 = *(int *)(iVar14 + DAT_0008b268);
  FUN_0002f618(*(undefined4 *)(*(int *)(iVar8 + 0x50) + 0x48),0);
  FUN_0002f630(*(undefined4 *)(*(int *)(iVar8 + 0x50) + 0x4c),0);
  iVar6 = *(int *)(iVar8 + 0x50);
  **(undefined4 **)(iVar14 + DAT_0008b26c) = *(undefined4 *)(iVar6 + 0x58);
  **(undefined4 **)(iVar14 + DAT_0008b270) = *(undefined4 *)(iVar6 + 0x5c);
  *(undefined *)(iVar8 + 0x20) = *(undefined *)(iVar6 + 0x54);
  iVar8 = param_1 + *(int *)(iVar8 + 4) * 0x10;
  iVar6 = *(int *)(iVar8 + 0x210);
  if (iVar6 != *(int *)(iVar8 + 0x214)) {
    do {
      iVar8 = iVar6 + 0x7c;
      FUN_00085b7c(iVar6);
      iVar6 = iVar8;
    } while (iVar8 != *(int *)(param_1 + *(int *)(*(int *)(iVar14 + iVar5) + 4) * 0x10 + 0x214));
  }
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  *(undefined4 *)(param_1 + 0x2e8) = 1;
  do {
    iVar8 = param_1 + iVar6;
    iVar6 = iVar6 + 4;
    *(undefined4 *)(iVar8 + 0x264) = 0xffffffff;
    iVar13 = DAT_0008b278;
    iVar8 = DAT_0008b274;
  } while (iVar6 != 0x80);
  iVar6 = *(int *)(*(int *)(iVar14 + iVar5) + 0x50);
  iVar9 = *(int *)(iVar6 + 0x2c);
  if (iVar9 != 0) {
    piVar7 = *(int **)(iVar6 + 0x28);
    piVar10 = (int *)*piVar7;
    if (piVar7 != piVar10) {
      puVar15 = (undefined4 *)(DAT_0008b274 + 0x8af2c);
      do {
        uVar3 = FUN_0001c940();
        if (piVar10[0xc] < **(int **)(iVar14 + iVar13)) {
          if (piVar10[0xc] < 0) {
            uVar4 = 4;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 1;
        }
        piVar7 = (int *)FUN_0001ca28(uVar3,uVar4,1);
        local_34 = *puVar15;
        local_30 = *(undefined4 *)(iVar8 + 0x8af30);
        local_2c = *(undefined4 *)(iVar8 + 0x8af34);
        (**(code **)(*piVar7 + 8))(piVar7,0,piVar10[0xc],&local_34);
        iVar6 = piVar10[6];
        iVar9 = piVar10[7];
        piVar7[4] = piVar10[5];
        piVar7[5] = iVar6;
        piVar7[6] = iVar9;
        iVar6 = piVar10[3];
        iVar9 = piVar10[4];
        piVar7[7] = piVar10[2];
        piVar7[8] = iVar6;
        piVar7[9] = iVar9;
        if (*(char *)((int)piVar7 + 0x35) == '\x01') {
          iVar6 = piVar10[9];
          iVar9 = piVar10[10];
          piVar7[0x23] = piVar10[8];
          piVar7[0x24] = iVar6;
          piVar7[0x25] = iVar9;
          if (*(int *)(*(int *)(iVar14 + iVar5) + 4) == 2) {
            piVar7[0x19] = 1;
          }
        }
        else if (*(char *)((int)piVar7 + 0x35) == '\0') {
          iVar6 = piVar10[9];
          iVar9 = piVar10[10];
          piVar7[0x27] = piVar10[8];
          piVar7[0x28] = iVar6;
          piVar7[0x29] = iVar9;
        }
        fVar16 = (float)piVar10[0xd];
        if (fVar16 != 0.0 && fVar16 < 0.0 == NAN(fVar16)) {
          cVar1 = *(char *)((int)piVar7 + 0x35);
          if (cVar1 == '\0') {
            FUN_000225d0(piVar7,fVar16);
          }
          else if (cVar1 == '\x01') {
            if (*(char *)(piVar10 + 0xb) == '\0') {
              FUN_0001ccac(piVar7,fVar16);
            }
            else {
              *(undefined *)(piVar7 + 0x1a) = 1;
              piVar7[0xf] = (int)fVar16;
            }
          }
          else if (cVar1 == '\x04') {
            (**(code **)(*piVar7 + 0x10))(piVar7,fVar16);
          }
        }
        piVar10 = (int *)*piVar10;
      } while (piVar10 != (int *)*(int *)(*(int *)(*(int *)(iVar14 + iVar5) + 0x50) + 0x28));
    }
    iVar9 = 1;
  }
  uVar3 = FUN_0001c940();
  FUN_0001bfac(uVar3,0,0,0);
  iVar8 = *(int *)(iVar14 + iVar5);
  iVar6 = *(int *)(iVar8 + 0x50);
  iVar13 = *(int *)(iVar6 + 0x4c);
  if (*(int *)(iVar8 + 4) == 2) {
    FUN_0007b72c();
    FUN_0007a4e8();
    iVar6 = *(int *)(iVar8 + 0x50);
  }
  fVar16 = *(float *)(iVar6 + 0x114);
  if ((fVar16 == 0.0 || fVar16 < 0.0 != NAN(fVar16)) ||
     (*(int *)(*(int *)(iVar14 + iVar5) + 4) == 2)) {
    iVar8 = *(int *)(iVar6 + 0xf8);
    if (iVar8 < 0) {
      if (((iVar9 != 0) || (*(int *)(iVar6 + 0x13c) != 0)) && (iVar13 < 3)) {
        FUN_00031650(1);
        iVar13 = *(int *)(iVar14 + iVar5);
        *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(*(int *)(iVar13 + 0x50) + 0x60);
        iVar8 = 0;
        iVar6 = param_1;
        do {
          iVar9 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          *(undefined4 *)(iVar6 + 0x264) = *(undefined4 *)(*(int *)(iVar13 + 0x50) + iVar9 + 100);
          iVar6 = iVar6 + 4;
        } while (iVar8 != 0x20);
        *(undefined *)(param_1 + 0x25c) = 1;
        iVar6 = DAT_0008b27c + 0x8b0b8;
        *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(*(int *)(iVar13 + 0x50) + 0x124);
        *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(*(int *)(iVar13 + 0x50) + 0x128);
        *(undefined4 *)(param_1 + 600) = *(undefined4 *)(*(int *)(iVar13 + 0x50) + 300);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(int *)(iVar13 + 0x50) + 0x130);
        *(char *)(param_1 + 0x25d) = (char)*(undefined4 *)(*(int *)(iVar13 + 0x50) + 0x160);
        *(char *)(param_1 + 0x25e) = (char)*(undefined4 *)(*(int *)(iVar13 + 0x50) + 0x164);
        *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(*(int *)(iVar13 + 0x50) + 0x168);
        *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(*(int *)(iVar13 + 0x50) + 0xe4);
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(*(int *)(iVar13 + 0x50) + 0xec);
        uVar4 = *(undefined4 *)(iVar13 + 0x50);
        uVar3 = FUN_0008f414(iVar6);
        uVar3 = FUN_0006fbdc(uVar4,uVar3);
        *(undefined4 *)(param_1 + 0x5c) = uVar3;
        uVar3 = *(undefined4 *)(*(int *)(iVar13 + 0x50) + 0xe8);
        *(undefined *)(param_1 + 0x37) = 0;
        *(undefined4 *)(param_1 + 0x58) = uVar3;
        *(undefined4 *)(param_1 + 0x54) = uVar3;
        *(undefined *)(param_1 + 0x36) = 0;
        *(undefined *)(param_1 + 0x35) = 1;
        FUN_0008abb0(param_1);
        iVar6 = *(int *)(iVar13 + 0x50);
        piVar7 = (int *)**(int **)(iVar6 + 0x138);
        if (*(int **)(iVar6 + 0x138) != piVar7) {
          do {
            iVar6 = *(int *)(*(int *)(param_1 + *(int *)(iVar13 + 4) * 0x10 + 0xb0) + piVar7[6] * 4)
            ;
            *(int *)(iVar6 + 0x34) = piVar7[5];
            if (piVar7[4] != 0) {
              *(int *)(param_1 + 0x24c) = iVar6;
              piVar10 = *(int **)(int *)piVar7[3];
              if ((int *)piVar7[3] != piVar10) {
                iVar8 = 0;
                while( true ) {
                  *(int *)(*(int *)(iVar6 + 8) + iVar8 + 0x54) = piVar10[2];
                  *(int *)(*(int *)(*(int *)(param_1 + 0x24c) + 8) + iVar8 + 0x58) = piVar10[2];
                  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24c) + 8) + iVar8 + 0x5c) = 0;
                  *(int *)(*(int *)(*(int *)(param_1 + 0x24c) + 8) + iVar8 + 0x60) = piVar10[3];
                  iVar6 = *(int *)(*(int *)(param_1 + 0x24c) + 8) + iVar8;
                  iVar8 = iVar8 + 0x68;
                  FUN_00085c80(iVar6);
                  piVar10 = (int *)*piVar10;
                  if (piVar10 == (int *)piVar7[3]) break;
                  iVar6 = *(int *)(param_1 + 0x24c);
                }
              }
            }
            piVar7 = (int *)*piVar7;
            iVar6 = *(int *)(*(int *)(iVar14 + iVar5) + 0x50);
          } while (piVar7 != (int *)*(int *)(iVar6 + 0x138));
        }
      }
      goto LAB_0008b036;
    }
  }
  else {
    iVar8 = *(int *)(iVar6 + 0xf8);
  }
  FUN_00031994(iVar8,*(undefined4 *)(iVar6 + 0xfc),*(undefined4 *)(iVar6 + 0x118),fVar16,0xffffffff)
  ;
  iVar6 = *(int *)(*(int *)(iVar14 + iVar5) + 0x50);
LAB_0008b036:
  iVar5 = *(int *)(iVar14 + iVar5);
  *(undefined4 *)(*(int *)(iVar5 + 0x4c) + 0x168) = *(undefined4 *)(iVar6 + 0x120);
  *(undefined4 *)(*(int *)(iVar5 + 0x4c) + 0x164) = *(undefined4 *)(*(int *)(iVar5 + 0x50) + 0x11c);
  iVar5 = *(int *)(iVar5 + 0x50);
  ppvVar12 = *(void ***)(iVar5 + 0x28);
  ppvVar2 = (void **)*ppvVar12;
  while( true ) {
    if (ppvVar12 == ppvVar2) {
      return;
    }
    if ((void **)*(void **)(iVar5 + 0x28) == ppvVar2) break;
    ppvVar11 = (void **)*ppvVar2;
    *(void ***)ppvVar2[1] = ppvVar11;
    *(void **)((int)*ppvVar2 + 4) = ppvVar2[1];
    operator_delete(ppvVar2);
    *(int *)(iVar5 + 0x2c) = *(int *)(iVar5 + 0x2c) + -1;
    ppvVar2 = ppvVar11;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



