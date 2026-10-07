/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9af0 FUN_000b9af0 */

undefined8 FUN_000b9af0(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if ((0 < (int)param_4) || ((param_4 == 0 && (param_3 != 0)))) {
    bVar7 = CARRY4(param_3,param_1[2]);
    param_3 = param_3 + param_1[2];
    param_4 = param_4 + param_1[3] + (uint)bVar7;
  }
  piVar4 = param_1 + 6;
LAB_000b9b14:
  do {
    if ((((0 < (int)param_4) || ((param_4 == 0 && (param_3 != 0)))) && ((int)param_4 <= param_1[3]))
       && ((param_1[3] != param_4 || (param_3 <= (uint)param_1[2])))) {
LAB_000b9b22:
      uVar5 = 0xffffffff;
      iVar6 = -1;
      goto LAB_000b9b2a;
    }
    uVar1 = FUN_000c39b4(piVar4,param_2);
    if ((int)uVar1 < 0) {
      uVar5 = param_1[2];
      param_1[2] = uVar5 - uVar1;
      param_1[3] = (param_1[3] - ((int)uVar1 >> 0x1f)) - (uint)(uVar5 < uVar1);
      goto LAB_000b9b14;
    }
    if (uVar1 != 0) {
      uVar5 = param_1[2];
      iVar6 = param_1[3];
      param_1[2] = uVar5 + uVar1;
      param_1[3] = iVar6 + ((int)uVar1 >> 0x1f) + (uint)CARRY4(uVar5,uVar1);
      goto LAB_000b9b2a;
    }
    if ((param_3 | param_4) == 0) goto LAB_000b9b22;
    puVar2 = (undefined4 *)__errno();
    *puVar2 = 0;
    if (param_1[0xa2] == 0) goto LAB_000b9b9c;
    if (*param_1 == 0) {
LAB_000b9bd0:
      uVar5 = 0xfffffffe;
      iVar6 = -1;
      goto LAB_000b9b2a;
    }
    uVar3 = FUN_000c3af4(piVar4,0x400);
    iVar6 = (*(code *)param_1[0xa2])(uVar3,1,0x400,*param_1);
    if (iVar6 < 1) {
      if (iVar6 == 0) {
        piVar4 = (int *)__errno(0,0);
        if (*piVar4 == 0) goto LAB_000b9bd0;
        goto LAB_000b9b9c;
      }
      if (iVar6 < 0) {
LAB_000b9b9c:
        uVar5 = 0xffffff80;
        iVar6 = -1;
LAB_000b9b2a:
        return CONCAT44(iVar6,uVar5);
      }
    }
    else {
      FUN_000c2fd0(piVar4);
    }
  } while( true );
}



