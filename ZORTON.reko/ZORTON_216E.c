// ZORTON_216E.c
// Generated by decompiling ZORTON.EXE
// using Reko decompiler version 0.9.2.3.

#include "ZORTON_216E.h"

// 216E:0000: Register word16 fn216E_0000(Stack Eq_10469 wArg04, Stack Eq_2 wArg06, Stack Eq_11681 wArg08, Stack (ptr16 Eq_11682) wArg0A, Stack Eq_11683 wArg0C, Stack (ptr16 Eq_11684) wArg0E, Register out (ptr16 Eq_11684) esOut)
// Called from:
//      fn0CE0_08FC
//      fn226D_057F
//      fn2425_01E8
//      fn2476_000A
//      fn2504_094D
word16 fn216E_0000(Eq_10469 wArg04, Eq_2 wArg06, Eq_11681 wArg08, struct Eq_11682 * wArg0A, Eq_11683 wArg0C, struct Eq_11684 * wArg0E, struct Eq_11684 & esOut)
{
	Eq_22429 di_100 = (word16) wArg0C.u0 + ((word32) wArg04 + ((wArg06 << 0x06) + SEQ((byte) wArg06, 0x00)));
	cu16 ax_43 = wArg0A->*wArg08;
	struct Eq_22442 Eq_11682::* si_112 = (word32) wArg08 + 4;
	word16 cx_119 = wArg0A->*((word32) wArg08 + 2);
	if (ax_43 == 0x01)
	{
		do
		{
			wArg0E->*di_100 = (wArg0A->*si_112).t0000;
			++si_112;
			di_100 = (word16) di_100 + 320;
			--cx_119;
		} while (cx_119 != 0x00);
	}
	else
	{
		Eq_22451 ax_52 = 0x0140 - ax_43;
		if ((di_100 & 0x01) == 0x00)
		{
			if (ax_43 >> 0x01 >= 0x00)
			{
				do
				{
					uint16 cx_156;
					for (cx_156 = ax_43 >> 0x01; cx_156 != 0x00; --cx_156)
					{
						wArg0E->*di_100 = (wArg0A->*si_112).t0000;
						si_112 += 2;
						di_100 = (word16) di_100 + 2;
					}
					di_100 += ax_52;
					--cx_119;
				} while (cx_119 != 0x00);
			}
			else
			{
				do
				{
					uint16 cx_131;
					for (cx_131 = ax_43 >> 0x01; cx_131 != 0x00; --cx_131)
					{
						wArg0E->*di_100 = (wArg0A->*si_112).t0000;
						si_112 += 2;
						di_100 = (word16) di_100 + 2;
					}
					wArg0E->*di_100 = (wArg0A->*si_112).t0000;
					++si_112;
					di_100 = (word16) ax_52 + ((word16) di_100 + 1);
					--cx_119;
				} while (cx_119 != 0x00);
			}
		}
		else if (ax_43 >> 0x01 >= 0x00)
		{
			uint16 bx_89 = (ax_43 >> 0x01) - 0x01;
			do
			{
				wArg0E->*di_100 = (wArg0A->*si_112).t0000;
				uint16 cx_104;
				struct Eq_22520 Eq_11682::* si_102 = si_112 + 1;
				Eq_22524 di_103 = (word16) di_100 + 1;
				for (cx_104 = bx_89; cx_104 != 0x00; --cx_104)
				{
					wArg0E->*di_103 = (wArg0A->*si_102).t0000;
					si_102 += 2;
					di_103 = (word16) di_103 + 2;
				}
				wArg0E->*di_103 = (wArg0A->*si_102).t0000;
				si_112 = (struct Eq_22442 Eq_11682::*) (si_102 + 1);
				di_100 = (word16) ax_52 + ((word16) di_103 + 1);
				--cx_119;
			} while (cx_119 != 0x00);
		}
		else
		{
			do
			{
				wArg0E->*di_100 = (wArg0A->*si_112).t0000;
				uint16 cx_62;
				++si_112;
				Eq_22513 di_71 = (word16) di_100 + 1;
				for (cx_62 = ax_43 >> 0x01; cx_62 != 0x00; --cx_62)
				{
					wArg0E->*di_71 = (wArg0A->*si_112).t0000;
					si_112 += 2;
					di_71 = (word16) di_71 + 2;
				}
				di_100 = di_71 + ax_52;
				--cx_119;
			} while (cx_119 != 0x00);
		}
	}
	esOut = wArg0E;
	return cx_119;
}

// 216E:009C: void fn216E_009C(Stack word16 wArg04, Stack cui16 wArg06, Stack (memptr (ptr16 Eq_22613) Eq_22612) wArg08, Stack (ptr16 Eq_22613) wArg0A, Stack Eq_22614 wArg0C, Stack (ptr16 Eq_22615) wArg0E)
// Called from:
//      fn2425_0360
void fn216E_009C(word16 wArg04, cui16 wArg06, struct Eq_22612 Eq_22613::* wArg08, struct Eq_22613 * wArg0A, Eq_22614 wArg0C, struct Eq_22615 * wArg0E)
{
	Eq_22616 di_100 = (word16) wArg0C.u0 + (((wArg06 << 0x06) + SEQ((byte) wArg06, 0x00)) + wArg04);
	cu16 ax_43 = (wArg0A->*wArg08).w0000;
	struct Eq_22629 Eq_22613::* si_112 = &wArg08->w0002 + 1;
	word16 cx_119 = (wArg0A->*wArg08).w0002;
	if (ax_43 == 0x01)
	{
		do
		{
			wArg0E->*di_100 = (wArg0A->*si_112).t0000;
			++si_112;
			di_100 = (word16) di_100 + 320;
			--cx_119;
		} while (cx_119 != 0x00);
	}
	else
	{
		Eq_22638 ax_52 = 0x0140 - ax_43;
		if ((di_100 & 0x01) == 0x00)
		{
			if (ax_43 >> 0x01 >= 0x00)
			{
				do
				{
					uint16 cx_156;
					for (cx_156 = ax_43 >> 0x01; cx_156 != 0x00; --cx_156)
					{
						wArg0E->*di_100 = (wArg0A->*si_112).t0000;
						si_112 += 2;
						di_100 = (word16) di_100 + 2;
					}
					di_100 += ax_52;
					--cx_119;
				} while (cx_119 != 0x00);
			}
			else
			{
				do
				{
					uint16 cx_131;
					for (cx_131 = ax_43 >> 0x01; cx_131 != 0x00; --cx_131)
					{
						wArg0E->*di_100 = (wArg0A->*si_112).t0000;
						si_112 += 2;
						di_100 = (word16) di_100 + 2;
					}
					wArg0E->*di_100 = (wArg0A->*si_112).t0000;
					++si_112;
					di_100 = (word16) ax_52 + ((word16) di_100 + 1);
					--cx_119;
				} while (cx_119 != 0x00);
			}
		}
		else if (ax_43 >> 0x01 >= 0x00)
		{
			uint16 bx_89 = (ax_43 >> 0x01) - 0x01;
			do
			{
				wArg0E->*di_100 = (wArg0A->*si_112).t0000;
				uint16 cx_104;
				struct Eq_22707 Eq_22613::* si_102 = si_112 + 1;
				Eq_22711 di_103 = (word16) di_100 + 1;
				for (cx_104 = bx_89; cx_104 != 0x00; --cx_104)
				{
					wArg0E->*di_103 = (wArg0A->*si_102).t0000;
					si_102 += 2;
					di_103 = (word16) di_103 + 2;
				}
				wArg0E->*di_103 = (wArg0A->*si_102).t0000;
				si_112 = (struct Eq_22629 Eq_22613::*) (si_102 + 1);
				di_100 = (word16) ax_52 + ((word16) di_103 + 1);
				--cx_119;
			} while (cx_119 != 0x00);
		}
		else
		{
			do
			{
				wArg0E->*di_100 = (wArg0A->*si_112).t0000;
				uint16 cx_62;
				++si_112;
				Eq_22700 di_71 = (word16) di_100 + 1;
				for (cx_62 = ax_43 >> 0x01; cx_62 != 0x00; --cx_62)
				{
					wArg0E->*di_71 = (wArg0A->*si_112).t0000;
					si_112 += 2;
					di_71 = (word16) di_71 + 2;
				}
				di_100 = di_71 + ax_52;
				--cx_119;
			} while (cx_119 != 0x00);
		}
	}
}

// 216E:0138: Register Eq_2 fn216E_0138(Stack Eq_10469 wArg04, Stack Eq_2 wArg06, Stack Eq_2 dwArg08, Stack Eq_2 wArg0C, Stack (ptr16 Eq_22802) wArg0E, Stack Eq_22803 wArg10, Stack (ptr16 Eq_22804) wArg12)
// Called from:
//      fn2425_0360
//      fn2476_0282
//      fn2504_094D
Eq_2 fn216E_0138(Eq_10469 wArg04, Eq_2 wArg06, Eq_2 dwArg08, Eq_2 wArg0C, struct Eq_22802 * wArg0E, Eq_22803 wArg10, struct Eq_22804 * wArg12)
{
	Eq_915 bx_28 = *dwArg08;
	wArg0E->*wArg0C = *dwArg08;
	Eq_2 cx_125 = *((word32) dwArg08 + 2);
	wArg0E->*((word32) wArg0C + 2) = *((word32) dwArg08 + 2);
	struct Eq_22824 Eq_22802::* di_106 = (word32) wArg0C + 4;
	Eq_22827 si_102 = (word16) wArg10.u0 + ((word32) wArg04 + ((wArg06 << 0x06) + SEQ((byte) wArg06, 0x00)));
	if (bx_28 == 0x01)
	{
		do
		{
			(wArg0E->*di_106).t0000 = wArg12->*si_102;
			++di_106;
			si_102 = (word16) si_102 + 320;
			--cx_125;
		} while (cx_125 != 0x00);
	}
	else
	{
		Eq_22838 ax_58 = 0x0140 - bx_28;
		if ((si_102 & 0x01) == 0x00)
		{
			if (bx_28 >> 0x01 >= 0x00)
			{
				do
				{
					uint16 cx_162;
					for (cx_162 = bx_28 >> 0x01; cx_162 != 0x00; --cx_162)
					{
						(wArg0E->*di_106).t0000 = wArg12->*si_102;
						si_102 = (word16) si_102 + 2;
						di_106 += 2;
					}
					si_102 += ax_58;
					--cx_125;
				} while (cx_125 != 0x00);
			}
			else
			{
				do
				{
					uint16 cx_137;
					for (cx_137 = bx_28 >> 0x01; cx_137 != 0x00; --cx_137)
					{
						(wArg0E->*di_106).t0000 = wArg12->*si_102;
						si_102 = (word16) si_102 + 2;
						di_106 += 2;
					}
					(wArg0E->*di_106).t0000 = wArg12->*si_102;
					++di_106;
					si_102 = (word16) ax_58 + ((word16) si_102 + 1);
					--cx_125;
				} while (cx_125 != 0x00);
			}
		}
		else if (bx_28 >> 0x01 >= 0x00)
		{
			uint16 bx_95 = (bx_28 >> 0x01) - 0x01;
			do
			{
				(wArg0E->*di_106).t0000 = wArg12->*si_102;
				uint16 cx_100;
				Eq_22907 si_108 = (word16) si_102 + 1;
				struct Eq_22911 Eq_22802::* di_109 = di_106 + 1;
				for (cx_100 = bx_95; cx_100 != 0x00; --cx_100)
				{
					(wArg0E->*di_109).t0000 = wArg12->*si_108;
					si_108 = (word16) si_108 + 2;
					di_109 += 2;
				}
				(wArg0E->*di_109).t0000 = wArg12->*si_108;
				di_106 = (struct Eq_22824 Eq_22802::*) (di_109 + 1);
				si_102 = (word16) ax_58 + ((word16) si_108 + 1);
				--cx_125;
			} while (cx_125 != 0x00);
		}
		else
		{
			do
			{
				(wArg0E->*di_106).t0000 = wArg12->*si_102;
				uint16 cx_68;
				Eq_22898 si_76 = (word16) si_102 + 1;
				++di_106;
				for (cx_68 = bx_28 >> 0x01; cx_68 != 0x00; --cx_68)
				{
					(wArg0E->*di_106).t0000 = wArg12->*si_76;
					si_76 = (word16) si_76 + 2;
					di_106 += 2;
				}
				si_102 = si_76 + ax_58;
				--cx_125;
			} while (cx_125 != 0x00);
		}
	}
	return cx_125;
}

// 216E:01DC: FlagGroup bool fn216E_01DC(Stack Eq_10469 wArg04, Stack Eq_2 wArg06, Stack Eq_2 wArg08, Stack Eq_2 wArg0A, Stack Eq_2 wArg0C, Stack Eq_2 wArg0E, Register out Eq_2 alOut, Register out Eq_11245 bxOut)
// Called from:
//      fn0CE0_08FC
//      fn0F2B_130A
//      fn1F0F_0BF7
//      fn226D_00F9
//      fn226D_057F
//      fn226D_0656
//      fn23F8_00A0
//      fn2425_0360
//      fn2476_000A
//      fn2476_0104
//      fn2504_094D
bool fn216E_01DC(Eq_10469 wArg04, Eq_2 wArg06, Eq_2 wArg08, Eq_2 wArg0A, Eq_2 wArg0C, Eq_2 wArg0E, union Eq_2 & alOut, union Eq_11245 & bxOut)
{
	Eq_11245 ax_52 = wArg0A->*wArg08;
	Eq_23002 di_103 = (word32) wArg0C + ((word32) wArg04 + ((wArg06 << 0x06) + SEQ((byte) wArg06, 0x00)));
	Eq_11245 bx_218 = ax_52;
	struct Eq_23012 Eq_2::* si_113 = (word32) wArg08 + 4;
	word16 cx_108 = wArg0A->*((word32) wArg08 + 2);
	if (ax_52 == 0x01)
	{
		do
		{
			byte al_405 = (wArg0A->*si_113).t0000;
			++si_113;
			if (al_405 != 0x00)
				wArg0E->*di_103 = al_405;
			di_103 = (word16) di_103 + 320;
			--cx_108;
		} while (cx_108 != 0x00);
	}
	else
	{
		Eq_23021 bp_61 = 0x0140 - ax_52;
		if ((di_103 & 0x01) != 0x00)
		{
			bx_218 = ax_52 >> 0x01;
			if (ax_52 >> 0x01 >= 0x00)
			{
				bx_218 = (ax_52 >> 0x01) - 0x01;
				do
				{
l216E_0306:
					Eq_11245 cx_296 = bx_218;
					byte al_300 = (wArg0A->*si_113).t0000;
					struct Eq_23198 Eq_2::* si_301 = si_113 + 1;
					if (al_300 != 0x00)
						wArg0E->*di_103 = al_300;
					Eq_23094 di_310 = (word16) di_103 + 1;
					do
					{
						word16 ax_315 = (wArg0A->*si_301).t0000;
						byte ah_317 = SLICE(ax_315, byte, 8);
						byte al_321 = (byte) ax_315;
						si_301 += 2;
						if (ah_317 == 0x00)
						{
							if (ah_317 != al_321)
							{
								wArg0E->*di_310 = al_321;
								di_310 = (word16) di_310 + 2;
								--cx_296;
								if (cx_296 != 0x00)
									continue;
								byte al_331 = (wArg0A->*si_301).t0000;
								si_113 = (struct Eq_23012 Eq_2::*) (si_301 + 1);
								if (al_331 != 0x00)
									wArg0E->*di_310 = al_331;
								di_103 = (word16) di_310 + ((word16) bp_61 + 1);
								--cx_108;
								if (cx_108 == 0x00)
									goto l216E_028A;
								goto l216E_0306;
							}
							else
							{
								di_310 = (word16) di_310 + 2;
								--cx_296;
								if (cx_296 != 0x00)
									continue;
								byte al_350 = (wArg0A->*si_301).t0000;
								si_113 = (struct Eq_23012 Eq_2::*) (si_301 + 1);
								if (al_350 != 0x00)
									wArg0E->*di_310 = al_350;
								di_103 = (word16) di_310 + ((word16) bp_61 + 1);
								--cx_108;
								if (cx_108 == 0x00)
									goto l216E_028A;
								goto l216E_0306;
							}
						}
						if (al_321 == 0x00)
						{
							wArg0E->*((word16) di_310 + 1) = ah_317;
							di_310 = (word16) di_310 + 2;
							--cx_296;
							if (cx_296 != 0x00)
								continue;
							byte al_388 = (wArg0A->*si_301).t0000;
							si_113 = (struct Eq_23012 Eq_2::*) (si_301 + 1);
							if (al_388 != 0x00)
								wArg0E->*di_310 = al_388;
							di_103 = (word16) di_310 + ((word16) bp_61 + 1);
							--cx_108;
							if (cx_108 == 0x00)
								goto l216E_028A;
							goto l216E_0306;
						}
						wArg0E->*di_310 = ax_315;
						di_310 = (word16) di_310 + 2;
						--cx_296;
					} while (cx_296 != 0x00);
					byte al_370 = (wArg0A->*si_301).t0000;
					si_113 = (struct Eq_23012 Eq_2::*) (si_301 + 1);
					if (al_370 != 0x00)
						wArg0E->*di_310 = al_370;
					di_103 = (word16) di_310 + ((word16) bp_61 + 1);
					--cx_108;
				} while (cx_108 != 0x00);
			}
			else
			{
				do
				{
l216E_037F:
					uint16 cx_224 = ax_52 >> 0x01;
					byte al_228 = (wArg0A->*si_113).t0000;
					++si_113;
					if (al_228 != 0x00)
						wArg0E->*di_103 = al_228;
					Eq_23366 di_238 = (word16) di_103 + 1;
					do
					{
						word16 ax_243 = (wArg0A->*si_113).t0000;
						byte ah_245 = SLICE(ax_243, byte, 8);
						byte al_249 = (byte) ax_243;
						si_113 += 2;
						if (ah_245 == 0x00)
						{
							if (ah_245 != al_249)
							{
								wArg0E->*di_238 = al_249;
								di_238 = (word16) di_238 + 2;
								--cx_224;
								if (cx_224 != 0x00)
									continue;
								di_103 = di_238 + bp_61;
								--cx_108;
								if (cx_108 == 0x00)
									goto l216E_028A;
								goto l216E_037F;
							}
							else
							{
								di_238 = (word16) di_238 + 2;
								--cx_224;
								if (cx_224 != 0x00)
									continue;
								di_103 = di_238 + bp_61;
								--cx_108;
								if (cx_108 == 0x00)
									goto l216E_028A;
								goto l216E_037F;
							}
						}
						if (al_249 == 0x00)
						{
							wArg0E->*((word16) di_238 + 1) = ah_245;
							di_238 = (word16) di_238 + 2;
							--cx_224;
							if (cx_224 != 0x00)
								continue;
							di_103 = di_238 + bp_61;
							--cx_108;
							if (cx_108 == 0x00)
								goto l216E_028A;
							goto l216E_037F;
						}
						wArg0E->*di_238 = ax_243;
						di_238 = (word16) di_238 + 2;
						--cx_224;
					} while (cx_224 != 0x00);
					di_103 = di_238 + bp_61;
					--cx_108;
				} while (cx_108 != 0x00);
			}
		}
		else
		{
			bx_218 = ax_52 >> 0x01;
			if (ax_52 >> 0x01 >= 0x00)
			{
				do
				{
l216E_0240:
					uint16 cx_167 = ax_52 >> 0x01;
					do
					{
						word16 ax_171 = (wArg0A->*si_113).t0000;
						byte ah_173 = SLICE(ax_171, byte, 8);
						byte al_177 = (byte) ax_171;
						si_113 += 2;
						if (ah_173 == 0x00)
						{
							if (ah_173 != al_177)
							{
								wArg0E->*di_103 = al_177;
								di_103 = (word16) di_103 + 2;
								--cx_167;
								if (cx_167 != 0x00)
									continue;
								di_103 += bp_61;
								--cx_108;
								if (cx_108 == 0x00)
									goto l216E_028A;
								goto l216E_0240;
							}
							else
							{
								di_103 = (word16) di_103 + 2;
								--cx_167;
								if (cx_167 != 0x00)
									continue;
								di_103 += bp_61;
								--cx_108;
								if (cx_108 == 0x00)
									goto l216E_028A;
								goto l216E_0240;
							}
						}
						if (al_177 == 0x00)
						{
							wArg0E->*((word16) di_103 + 1) = ah_173;
							di_103 = (word16) di_103 + 2;
							--cx_167;
							if (cx_167 != 0x00)
								continue;
							di_103 += bp_61;
							--cx_108;
							if (cx_108 == 0x00)
								goto l216E_028A;
							goto l216E_0240;
						}
						wArg0E->*di_103 = ax_171;
						di_103 = (word16) di_103 + 2;
						--cx_167;
					} while (cx_167 != 0x00);
					di_103 += bp_61;
					--cx_108;
				} while (cx_108 != 0x00);
			}
			else
			{
				do
				{
l216E_0294:
					uint16 cx_111 = ax_52 >> 0x01;
					do
					{
						word16 ax_77 = (wArg0A->*si_113).t0000;
						byte ah_79 = SLICE(ax_77, byte, 8);
						byte al_83 = (byte) ax_77;
						si_113 += 2;
						if (ah_79 == 0x00)
						{
							if (ah_79 != al_83)
							{
								wArg0E->*di_103 = al_83;
								di_103 = (word16) di_103 + 2;
								--cx_111;
								if (cx_111 != 0x00)
									continue;
								byte al_93 = (wArg0A->*si_113).t0000;
								++si_113;
								if (al_93 != 0x00)
									wArg0E->*di_103 = al_93;
								di_103 = (word16) di_103 + ((word16) bp_61 + 1);
								--cx_108;
								if (cx_108 == 0x00)
									goto l216E_028A;
								goto l216E_0294;
							}
							else
							{
								di_103 = (word16) di_103 + 2;
								--cx_111;
								if (cx_111 != 0x00)
									continue;
								byte al_112 = (wArg0A->*si_113).t0000;
								++si_113;
								if (al_112 != 0x00)
									wArg0E->*di_103 = al_112;
								di_103 = (word16) di_103 + ((word16) bp_61 + 1);
								--cx_108;
								if (cx_108 == 0x00)
									goto l216E_028A;
								goto l216E_0294;
							}
						}
						if (al_83 == 0x00)
						{
							wArg0E->*((word16) di_103 + 1) = ah_79;
							di_103 = (word16) di_103 + 2;
							--cx_111;
							if (cx_111 != 0x00)
								continue;
							byte al_150 = (wArg0A->*si_113).t0000;
							++si_113;
							if (al_150 != 0x00)
								wArg0E->*di_103 = al_150;
							di_103 = (word16) di_103 + ((word16) bp_61 + 1);
							--cx_108;
							if (cx_108 == 0x00)
								goto l216E_028A;
							goto l216E_0294;
						}
						wArg0E->*di_103 = ax_77;
						di_103 = (word16) di_103 + 2;
						--cx_111;
					} while (cx_111 != 0x00);
					byte al_132 = (wArg0A->*si_113).t0000;
					++si_113;
					if (al_132 != 0x00)
						wArg0E->*di_103 = al_132;
					di_103 = (word16) di_103 + ((word16) bp_61 + 1);
					--cx_108;
				} while (cx_108 != 0x00);
			}
		}
	}
l216E_028A:
	alOut.u0 = <invalid>;
	bxOut = bx_218;
	return false;
}

// 216E:03D8: void fn216E_03D8(Stack Eq_2 wArg04, Stack Eq_19528 wArg06, Stack Eq_2 wArg08, Stack Eq_19524 wArg0A, Stack Eq_2 bArg0C, Stack Eq_2 wArg0E, Stack Eq_2 wArg10)
// Called from:
//      fn1F0F_0BF7
//      fn226D_00F9
//      fn2331_0167
//      fn2425_01E8
//      fn2476_0282
void fn216E_03D8(Eq_2 wArg04, Eq_19528 wArg06, Eq_2 wArg08, Eq_19524 wArg0A, Eq_2 bArg0C, Eq_2 wArg0E, Eq_2 wArg10)
{
	Eq_23465 di_119 = (word32) wArg0E + ((word32) wArg04 + ((wArg06 << 0x06) + SEQ((byte) wArg06, 0x00)));
	Eq_19524 cx_103 = wArg0A;
	if (wArg08 == 0x01)
	{
		do
		{
			wArg10->*di_119 = bArg0C;
			di_119 = (word16) di_119 + 320;
			--cx_103;
		} while (cx_103 != 0x00);
	}
	else
	{
		Eq_23477 si_52 = 0x0140 - wArg08;
		if ((di_119 & 0x01) == 0x00)
		{
			word16 ax_216 = SEQ(bArg0C, bArg0C);
			if (wArg08 >> 0x01 >= 0x00)
			{
				do
				{
					uint16 cx_136;
					for (cx_136 = wArg08 >> 0x01; cx_136 != 0x00; --cx_136)
					{
						wArg10->*di_119 = ax_216;
						di_119 = (word16) di_119 + 2;
					}
					di_119 += si_52;
					--cx_103;
				} while (cx_103 != 0x00);
			}
			else
			{
				do
				{
					uint16 cx_115 = wArg08 >> 0x01;
					while (true)
					{
						word16 ax_129 = SEQ(bArg0C, bArg0C);
						if (cx_115 == 0x00)
							break;
						wArg10->*di_119 = ax_129;
						di_119 = (word16) di_119 + 2;
						--cx_115;
					}
					wArg10->*di_119 = bArg0C;
					di_119 = (word16) si_52 + ((word16) di_119 + 1);
					--cx_103;
				} while (cx_103 != 0x00);
			}
		}
		else if (wArg08 >> 0x01 >= 0x00)
		{
			uint16 bx_81 = (wArg08 >> 0x01) - 0x01;
			do
			{
				wArg10->*di_119 = bArg0C;
				uint16 cx_108 = bx_81;
				Eq_23535 di_107 = (word16) di_119 + 1;
				while (true)
				{
					word16 ax_105 = SEQ(bArg0C, bArg0C);
					if (cx_108 == 0x00)
						break;
					wArg10->*di_107 = ax_105;
					di_107 = (word16) di_107 + 2;
					--cx_108;
				}
				wArg10->*di_107 = bArg0C;
				di_119 = (word16) si_52 + ((word16) di_107 + 1);
				--cx_103;
			} while (cx_103 != 0x00);
		}
		else
		{
			do
			{
				wArg10->*di_119 = bArg0C;
				uint16 cx_62;
				Eq_23526 di_67 = (word16) di_119 + 1;
				word16 ax_202 = SEQ(bArg0C, bArg0C);
				for (cx_62 = wArg08 >> 0x01; cx_62 != 0x00; --cx_62)
				{
					wArg10->*di_67 = ax_202;
					di_67 = (word16) di_67 + 2;
				}
				di_119 = di_67 + si_52;
				--cx_103;
			} while (cx_103 != 0x00);
		}
	}
}

// 216E:04C9: void fn216E_04C9(Stack ci16 wArg04, Stack cui16 wArg06, Stack Eq_23600 wArg08, Stack word16 wArg0A, Stack word16 wArg0C, Stack uint16 wArg0E, Stack word16 wArg10, Stack Eq_2 wArg12, Stack Eq_23606 wArg14, Stack Eq_23607 wArg16, Stack (ptr16 Eq_23608) wArg18)
// Called from:
//      fn226D_00F9
//      fn226D_0656
//      fn2476_0282
//      fn2476_0362
void fn216E_04C9(ci16 wArg04, cui16 wArg06, Eq_23600 wArg08, word16 wArg0A, word16 wArg0C, uint16 wArg0E, word16 wArg10, Eq_2 wArg12, Eq_23606 wArg14, Eq_23607 wArg16, struct Eq_23608 * wArg18)
{
	Eq_23609 di_109 = (word16) wArg16.u0 + (((wArg06 << 0x06) + SEQ((byte) wArg06, 0x00)) + wArg04);
	struct Eq_23618 Eq_2::* si_105 = wArg10 + ((word16) (wArg14 * wArg0E) + wArg0C);
	word16 cx_100 = wArg0A;
	if (wArg08 == 0x01)
	{
		do
		{
			wArg18->*di_109 = (wArg12->*si_105).t0000;
			di_109 = (word16) di_109 + 320;
			si_105 = si_105 + 1 + (wArg14 - 0x01);
			--cx_100;
		} while (cx_100 != 0x00);
	}
	else
	{
		Eq_23626 ax_58 = 0x0140 - wArg08;
		Eq_23629 dx_59 = wArg14 - wArg08;
		if ((di_109 & 0x01) == 0x00)
		{
			if (wArg08 >> 0x01 >= 0x00)
			{
				do
				{
					uint16 cx_169;
					for (cx_169 = wArg08 >> 0x01; cx_169 != 0x00; --cx_169)
					{
						wArg18->*di_109 = (wArg12->*si_105).t0000;
						si_105 += 2;
						di_109 = (word16) di_109 + 2;
					}
					di_109 += ax_58;
					si_105 += dx_59;
					--cx_100;
				} while (cx_100 != 0x00);
			}
			else
			{
				do
				{
					uint16 cx_142;
					for (cx_142 = wArg08 >> 0x01; cx_142 != 0x00; --cx_142)
					{
						wArg18->*di_109 = (wArg12->*si_105).t0000;
						si_105 += 2;
						di_109 = (word16) di_109 + 2;
					}
					wArg18->*di_109 = (wArg12->*si_105).t0000;
					di_109 = (word16) ax_58 + ((word16) di_109 + 1);
					si_105 = si_105 + 1 + dx_59;
					--cx_100;
				} while (cx_100 != 0x00);
			}
		}
		else if (wArg08 >> 0x01 >= 0x00)
		{
			uint16 bx_98 = (wArg08 >> 0x01) - 0x01;
			do
			{
				wArg18->*di_109 = (wArg12->*si_105).t0000;
				uint16 cx_103;
				struct Eq_23732 Eq_2::* si_111 = si_105 + 1;
				Eq_23736 di_112 = (word16) di_109 + 1;
				for (cx_103 = bx_98; cx_103 != 0x00; --cx_103)
				{
					wArg18->*di_112 = (wArg12->*si_111).t0000;
					si_111 += 2;
					di_112 = (word16) di_112 + 2;
				}
				wArg18->*di_112 = (wArg12->*si_111).t0000;
				di_109 = (word16) ax_58 + ((word16) di_112 + 1);
				si_105 = si_111 + 1 + dx_59;
				--cx_100;
			} while (cx_100 != 0x00);
		}
		else
		{
			do
			{
				wArg18->*di_109 = (wArg12->*si_105).t0000;
				uint16 cx_69;
				union Eq_23722 Eq_2::* si_77 = si_105 + 1;
				Eq_23725 di_78 = (word16) di_109 + 1;
				for (cx_69 = wArg08 >> 0x01; cx_69 != 0x00; --cx_69)
				{
					wArg18->*di_78 = wArg12->*si_77;
					si_77 = (union Eq_23722 Eq_2::*) ((char *) si_77 + 2);
					di_78 = (word16) di_78 + 2;
				}
				di_109 = di_78 + ax_58;
				si_105 = si_77 + dx_59;
				--cx_100;
			} while (cx_100 != 0x00);
		}
	}
}

// 216E:0584: void fn216E_0584(Stack cui16 wArg04, Stack Eq_915 wArg06, Stack int16 wArg08, Stack ci16 wArg0A, Stack byte bArg0C)
// Called from:
//      fn226D_0BC6
void fn216E_0584(cui16 wArg04, Eq_915 wArg06, int16 wArg08, ci16 wArg0A, byte bArg0C)
{
	byte Eq_12853::* di_25 = (word16) (wArg06 * 0x0140) + wArg04;
	ci16 cx_27 = wArg0A;
	if (wArg0A > 0x01 && wArg08 > 0x01)
	{
		do
		{
			int16 cx_39 = wArg08;
			do
			{
				if (cx_27 == wArg0A || (cx_27 == 0x01 || (cx_39 == wArg08 || cx_39 == 0x01)))
					0xA000->*di_25 = bArg0C;
				++di_25;
				--cx_39;
			} while (cx_39 != 0x00);
			di_25 = di_25 - wArg08 + 320;
			--cx_27;
		} while (cx_27 != 0x01);
	}
}

