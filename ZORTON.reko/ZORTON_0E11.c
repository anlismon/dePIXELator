// ZORTON_0E11.c
// Generated by decompiling ZORTON.EXE
// using Reko decompiler version 0.9.2.3.

#include "ZORTON_0E11.h"

// 0E11:0004: Register word16 fn0E11_0004(Stack word16 wArg04, Stack cui16 wArg06, Stack Eq_2 ptrArg0C, Stack segptr32 ptrArg10)
// Called from:
//      fn1D10_1153
word16 fn0E11_0004(word16 wArg04, cui16 wArg06, Eq_2 ptrArg0C, segptr32 ptrArg10)
{
	struct Eq_11931 * wArg12 = SLICE(ptrArg10, word16, 16);
	word16 wArg10 = (word16) ptrArg10;
	byte bArg06_322 = (byte) wArg06;
	byte bArg07_439 = SLICE(wArg06, byte, 8);
	byte ch_26 = *((word32) ptrArg0C + 1);
	struct Eq_11943 * ds_22 = SLICE(ptrArg0C, selector, 16);
	word16 si_23 = (word16) ptrArg0C;
	(*ptrArg0C | ch_26) == 0x00;
	Eq_2 cl_64 = *((word32) ptrArg0C + 2);
	Eq_2 cl_243 = cl_64;
	word16 cx_482 = SEQ(ch_26, cl_64);
	if (cl_64 != 0x00)
	{
		struct Eq_11962 Eq_11943::* si_109 = si_23 + 0x04;
		do
		{
			byte v24_80 = bArg06_322 + (ds_22->*si_109).t0000;
			struct Eq_12078 Eq_11943::* si_75 = si_109 + 1;
			cui16 wArg06_326 = SEQ(bArg07_439, v24_80);
			byte dh_76 = (ds_22->*si_75).b0000;
			si_109 = (struct Eq_11962 Eq_11943::*) (si_75 + 1);
			union Eq_11999 Eq_11931::* di_102 = wArg10 + (((wArg06_326 << 0x08) + (wArg06_326 << 0x06)) + wArg04);
			dh_220 = dh_76;
			do
			{
				byte dh_220;
				si_109 = (struct Eq_11962 Eq_11943::*) &si_109->b0001;
				word16 cx_136 = SEQ((ds_22->*si_109).t0000, cl_243);
				di_128 = di_102;
				do
				{
					byte ch_203;
					union Eq_11999 Eq_11931::* di_128;
					struct Eq_11982 Eq_11943::* si_123 = &si_109->b0001;
					byte ch_177 = SLICE(cx_136, byte, 8);
					byte bh_124 = (ds_22->*si_123).b0000;
					si_109 = (struct Eq_11962 Eq_11943::*) &si_123->b0001;
					di_128 = (union Eq_11999 Eq_11931::*) ((char *) di_128 + (uint16) (ds_22->*si_109).t0000);
					if ((bh_124 & 0x80) != 0x00)
					{
						cu16 cx_180 = (SEQ(ch_177, bh_124) & 0x7F) + 0x01;
						byte al_182 = (ds_22->*si_123).b0001;
						si_109 = (struct Eq_11962 Eq_11943::*) (&si_123->b0001 + 1);
						uint16 cx_185 = cx_180 >> 0x01;
						word16 ax_299 = SEQ(al_182, al_182);
						if (cx_180 >> 0x01 < 0x00)
						{
							wArg12->*di_128 = al_182;
							di_128 = (union Eq_11999 Eq_11931::*) ((char *) di_128 + 1);
							ax_299 = SEQ(al_182, al_182);
						}
						if (cx_180 >> 0x01 != 0x00)
						{
							for (; cx_185 != 0x00; --cx_185)
							{
								wArg12->*di_128 = ax_299;
								di_128 = (union Eq_11999 Eq_11931::*) ((char *) di_128 + 2);
							}
						}
						ch_203 = SLICE(cx_136, byte, 8);
						cl_243 = (byte) cx_136;
					}
					else
					{
						uint16 cx_144 = (uint16) bh_124 + 0x01 >> 0x01;
						if (cx_144 < 0x00)
						{
							wArg12->*di_128 = (ds_22->*si_123).b0001;
							si_109 = (struct Eq_11962 Eq_11943::*) (&si_123->b0001 + 1);
							di_128 = (union Eq_11999 Eq_11931::*) ((char *) di_128 + 1);
						}
						if (cx_144 != 0x00)
						{
							for (; cx_144 != 0x00; --cx_144)
							{
								wArg12->*di_128 = (ds_22->*si_109).t0000;
								++si_109;
								di_128 = (union Eq_11999 Eq_11931::*) ((char *) di_128 + 2);
							}
						}
						ch_203 = SLICE(cx_136, byte, 8);
						cl_243 = (byte) cx_136;
					}
					byte ch_206 = ch_203 - 0x01;
					cx_136 = SEQ(ch_206, cl_243);
				} while (ch_206 != 0x00);
				di_102 = (union Eq_11999 Eq_11931::*) ((char *) di_102 + 320);
				--dh_220;
			} while (dh_220 != 0x00);
			--cl_243;
			bArg06_322 = v24_80 + dh_76;
			cx_482 = SEQ(ch_206, cl_243);
		} while (cl_243 != 0x00);
	}
	return cx_482;
}

// 0E11:00DB: Register wchar_t fn0E11_00DB(Stack word16 wArg04, Stack cui16 wArg06, Stack wchar_t wArg08, Stack wchar_t wArg0A, Stack Eq_2 ptrArg0C, Stack segptr32 ptrArg10)
// Called from:
//      fn1D10_1153
wchar_t fn0E11_00DB(word16 wArg04, cui16 wArg06, wchar_t wArg08, wchar_t wArg0A, Eq_2 ptrArg0C, segptr32 ptrArg10)
{
	uint16 ax_40 = (wArg06 << 0x08) + (wArg06 << 0x06) + wArg04;
	word16 si_44 = (word16) ptrArg0C;
	struct Eq_12127 * ds_43 = SLICE(ptrArg0C, selector, 16);
	struct Eq_12129 * es_352 = SLICE(ptrArg10, selector, 16);
	struct Eq_12131 Eq_12129::* di_260 = (word16) ptrArg10 + ax_40;
	Eq_2 bh_45 = *ptrArg0C;
	struct Eq_12138 Eq_12127::* si_128 = si_44 + 0x01;
	if ((bh_45 & 0x01) != 0x00)
	{
		uint16 ax_58 = (word16) ((wArg0A >> 0x01) * (wArg08 >> 0x02)) + 0x07 >> 0x01;
		si_128 = si_44 + 0x01 + (ax_58 >> 0x02);
		ax_40 = ax_58 >> 0x02;
	}
	wchar_t cx_266 = wArg0A;
	cu16 dx_107 = 0x00;
	uint16 ax_116 = ax_40;
	do
	{
		wchar_t cx_240 = wArg08;
		di_143 = di_260;
		do
		{
			struct Eq_12131 Eq_12129::* di_143;
			byte ah_117 = SLICE(ax_116, byte, 8);
			byte al_103 = (byte) ax_116;
			if ((bh_45 & 0x01) != 0x00)
			{
				if ((dx_107 & 0x07) == 0x00)
				{
					Eq_12200 ax_97 = (dx_107 >> 0x03) + 0x01;
					ah_117 = SLICE(ax_97, byte, 8);
					al_103 = Mem92[ptrArg0C + ax_97:byte];
				}
				uint8 al_110 = al_103 << 0x01;
				++dx_107;
				ax_116 = SEQ(ah_117, al_110);
				if (al_110 < 0x00)
					goto l0E11_0160;
				ax_116 = SEQ(ah_117, al_110);
			}
			else
			{
l0E11_0160:
				struct Eq_12165 Eq_12127::* si_130 = si_128 + 1;
				byte al_129 = (ds_43->*si_128).b0000;
				byte ah_131 = (ds_43->*si_130).b0000;
				bcu8 bl_133 = (ds_43->*si_130).b0001;
				si_128 = (struct Eq_12138 Eq_12127::*) (&si_130->b0001 + 1);
				if (bl_133 >> 0x01 < 0x00)
					(es_352->*di_143).b0000 = ah_131;
				else
					(es_352->*di_143).b0000 = al_129;
				if (bl_133 >> 0x02 < 0x00)
					(es_352->*di_143).b0001 = ah_131;
				else
					(es_352->*di_143).b0001 = al_129;
				if (bl_133 >> 0x03 < 0x00)
					(es_352->*di_143).b0002 = ah_131;
				else
					(es_352->*di_143).b0002 = al_129;
				if (bl_133 >> 0x04 < 0x00)
					(es_352->*di_143).b0003 = ah_131;
				else
					(es_352->*di_143).b0003 = al_129;
				if (bl_133 >> 0x05 < 0x00)
					di_143[80] = ah_131;
				else
					di_143[80] = al_129;
				if (bl_133 >> 0x06 < 0x00)
					(es_352->*di_143).b0141 = ah_131;
				else
					(es_352->*di_143).b0141 = al_129;
				if (bl_133 >> 0x07 < 0x00)
					(es_352->*di_143).b0142 = ah_131;
				else
					(es_352->*di_143).b0142 = al_129;
				if (bl_133 >> 0x08 < 0x00)
					(es_352->*di_143).b0143 = ah_131;
				else
					(es_352->*di_143).b0143 = al_129;
			}
			word16 cx_250 = cx_240 - 0x03;
			++di_143;
			cx_240 = cx_250 - 0x01;
		} while (cx_250 != 0x01);
		di_260 += 0x00A0;
		cx_266 -= 0x02;
	} while (cx_266 != 0x02);
	return cx_266;
}
