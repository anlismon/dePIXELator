// ZORTON_27FB.c
// Generated by decompiling ZORTON.EXE
// using Reko decompiler version 0.9.2.3.

#include "ZORTON_27FB.h"

// 27FB:000A: Register Eq_32034 fn27FB_000A(Register Eq_32034 ax, Register selector dx, Register out Eq_2 dlOut)
// Called from:
//      fn27FB_039A
Eq_32034 fn27FB_000A(Eq_32034 ax, selector dx, union Eq_2 & dlOut)
{
	Eq_32034 ax_19 = (word16) ax + (__rol(dx, 0x04) & ~0x0F);
	dlOut.u0 = <invalid>;
	return ax_19;
}

// 27FB:0020: FlagGroup bool fn27FB_0020(Register out Eq_2 alOut)
// Called from:
//      fn27FB_00AC
//      fn27FB_00DC
bool fn27FB_0020(union Eq_2 & alOut)
{
	word16 dx_21 = seg28BA->t96CE;
	byte dl_22 = (byte) dx_21;
	byte dh_54 = SLICE(dx_21, byte, 8);
	word16 cx_25;
	Eq_9040 dx_55 = SEQ(dh_54, dl_22 + 0x0E);
	for (cx_25 = 0x0200; cx_25 != 0x00; --cx_25)
	{
		bool C_38;
		if (__inb(dx_55) < 0x00)
		{
			__inb(SEQ(dh_54, dl_22 + 0x0A));
			C_38 = false;
			goto l27FB_0043;
		}
	}
	C_38 = true;
l27FB_0043:
	alOut.u0 = <invalid>;
	return C_38;
}

// 27FB:0047: FlagGroup bool fn27FB_0047(Register Eq_32081 al, Register out Eq_2 ahOut)
// Called from:
//      fn27FB_00DC
bool fn27FB_0047(Eq_32081 al, union Eq_2 & ahOut)
{
	word16 dx_21 = seg28BA->t96CE;
	Eq_947 al_26 = (byte) ax;
	word16 cx_25;
	Eq_9040 dx_53 = SEQ(SLICE(dx_21, byte, 8), (byte) dx_21 + 0x0C);
	for (cx_25 = 0x0200; cx_25 != 0x00; --cx_25)
	{
		bool C_36;
		if (__inb(dx_53) >= 0x00)
		{
			__outb(dx_53, al_26);
			C_36 = false;
			goto l27FB_006B;
		}
	}
	C_36 = true;
l27FB_006B:
	ahOut.u0 = <invalid>;
	return C_36;
}

// 27FB:008D: Register Eq_947 fn27FB_008D(Register Eq_32111 al)
// Called from:
//      fn27FB_02C4
//      fn27FB_039A
Eq_947 fn27FB_008D(Eq_32111 al)
{
	Eq_947 al_21 = (byte) ax;
	word16 dx_18 = seg28BA->t96CE;
	do
		;
	while (__inb(dx_18 + 0x0C) < 0x00);
	__outb(dx_18 + 0x0C, al_21);
	return al_21;
}

// 27FB:00AC: FlagGroup bool fn27FB_00AC(Register out Eq_2 ahOut, Register out ptr16 cxOut, Register out Eq_9040 dxOut)
// Called from:
//      fn27FB_00DC
//      fn27FB_039A
bool fn27FB_00AC(union Eq_2 & ahOut, ptr16 & cxOut, union Eq_9040 & dxOut)
{
	word16 dx_10 = seg28BA->t96CE;
	Eq_9040 dx_15 = SEQ(SLICE(dx_10, byte, 8), (byte) dx_10 + 0x06);
	__outb(dx_15, 0x01);
	Eq_947 al_16 = 0x00;
	do
		--al_16;
	while (al_16 != 0x00);
	__outb(dx_15, al_16);
	ptr16 cx_23;
	for (cx_23 = 0x20; cx_23 != 0x00; --cx_23)
	{
		bool C_35;
		Eq_2 ax_24 = <invalid>;
		byte al_29 = (byte) ax_24;
		byte al_83;
		if (!fn27FB_0020(out al_83) && al_29 == 0xAA)
		{
			C_35 = SLICE(cond(0x00), bool, 1);
			goto l27FB_00D9;
		}
	}
	C_35 = true;
l27FB_00D9:
	ahOut.u0 = <invalid>;
	cxOut = cx_23;
	dxOut = dx_15;
	return C_35;
}

// 27FB:00DC: Register word16 fn27FB_00DC()
// Called from:
//      fn209F_00DD
word16 fn27FB_00DC()
{
	Eq_2 ax_17 = <invalid>;
	word16 bx_100 = 0x00;
	byte ah_25 = SLICE(ax_17, byte, 8);
	word16 dx_132;
	byte ah_130;
	word16 cx_131;
	if (!fn27FB_00AC(out ah_130, out cx_131, out dx_132))
	{
		Eq_2 ax_27 = <invalid>;
		byte ah_33 = SLICE(ax_27, byte, 8);
		byte ah_133;
		if (!fn27FB_0047(SEQ(ah_25, 0xE0), out ah_133))
		{
			byte ah_134;
			if (!fn27FB_0047(SEQ(ah_33, 0xC6), out ah_134))
			{
				Eq_2 ax_40 = <invalid>;
				byte al_45 = (byte) ax_40;
				byte al_135;
				if (!fn27FB_0020(out al_135) && al_45 == 0x39)
					bx_100 = 0x04;
			}
		}
	}
	fn27FB_0167(0x0100, 0x28BA);
	fn27FB_0167(0x0460, 0x28BA);
	fn27FB_0167(0x0480, 0x28BA);
	if (!fn27FB_0146(0x00, 0x28BA))
	{
		fn27FB_0167(0x02FF, 0x28BA);
		fn27FB_0167(0x0421, 0x28BA);
		if (!fn27FB_0146(0xC0, 0x28BA))
		{
			fn27FB_0167(0x0460, 0x28BA);
			fn27FB_0167(0x0480, 0x28BA);
			bx_100 += 0x02;
		}
	}
	return bx_100;
}

// 27FB:0146: FlagGroup bool fn27FB_0146(Register byte al, Register Eq_2 ds)
// Called from:
//      fn27FB_00DC
bool fn27FB_0146(byte al, Eq_2 ds)
{
	word16 dx_16 = *((word32) ds + 38606);
	word16 cx_11;
	Eq_9040 dx_41 = SEQ(SLICE(dx_16, byte, 8), (byte) dx_16 + 0x08);
	for (cx_11 = 0x40; cx_11 != 0x00; --cx_11)
	{
		bool C_26;
		if ((al & 0xE0) == (__inb(dx_41) & 0xE0))
		{
			C_26 = false;
			return C_26;
		}
	}
	C_26 = true;
	return C_26;
}

// 27FB:0167: void fn27FB_0167(Register word16 ax, Register Eq_2 ds)
// Called from:
//      fn27FB_00DC
void fn27FB_0167(word16 ax, Eq_2 ds)
{
	Eq_947 al_19 = (byte) ax;
	Eq_947 ah_21 = SLICE(ax, byte, 8);
	word16 dx_15 = *((word32) ds + 38606);
	Eq_9040 dx_25 = SEQ(SLICE(dx_15, byte, 8), (byte) dx_15 + 0x08);
	__outb(dx_25, ah_21);
	word16 cx_26 = *((word32) ds + 38600);
	do
	{
		word16 cx_28 = cx_26 - 0x01;
		cx_26 = cx_28;
	} while (cx_28 != 0x00);
	__outb((word16) dx_25 + 1, al_19);
	word16 cx_40 = *((word32) ds + 0x000096CA);
	do
	{
		word16 cx_42 = cx_40 - 0x01;
		cx_40 = cx_42;
	} while (cx_42 != 0x00);
}

// 27FB:0190: void fn27FB_0190(Register word16 ax)
// Called from:
//      fn27FB_039A
void fn27FB_0190(word16 ax)
{
	seg28BA->t96D4 = ax;
	cui16 ax_19 = SEQ(SLICE(ax, byte, 8), (byte) ax & 0x03);
	seg28BA->t96DC = ax_19 << 0x01;
	cu8 al_23 = (byte) (word16) (word15) ax_19;
	cu8 al_24 = al_23 + 0x7F;
	if (al_23 < 0x02)
	{
		al_24 = al_23 + 0x82;
		if (al_23 < ~0x00)
			al_24 = al_23 + 0x87;
	}
	seg28BA->t96DF = al_24;
}

// 27FB:01B7: void fn27FB_01B7(Register word16 ax)
// Called from:
//      fn27FB_02C4
void fn27FB_01B7(word16 ax)
{
	seg28BA->t96D2 = ax;
	byte al_19 = (byte) ax;
	seg28BA->t96DE = 0x01 << ((al_19 & 0x0F) & 0x07);
	cu8 cl_30 = (al_19 & 0x0F) + 0x08;
	if (cl_30 >= 0x10)
		cl_30 += 0x60;
	seg28BA->t96DA = (uint16) cl_30;
	seg28BA->t96D8 = ((int16) (al_19 & 0x0F & 0x08) << 0x04) + 33;
}

// 27FB:01F6: Register (memptr (ptr16 Eq_32374) byte) fn27FB_01F6(Register (memptr (ptr16 Eq_32374) byte) ax, Register (ptr16 Eq_32374) dx, Register out (ptr16 Eq_32374) dxOut)
// Called from:
//      fn27FB_050A
byte Eq_32374::* fn27FB_01F6(byte Eq_32374::* ax, struct Eq_32374 * dx, struct Eq_32374 & dxOut)
{
	byte Eq_32374::* ax_156;
	struct Eq_32374 * dx_162;
	struct Eq_32378 * ax_21 = fn27FB_0247();
	if (ax_21 != 0x00)
	{
		struct Eq_32374 * ds_33 = ax_21->ptr002C;
		byte Eq_32374::* si_123 = &Eq_32374::b0000;
		do
		{
			byte Eq_32374::* di_38 = ax;
			byte ah_41 = dx->*ax;
			do
			{
				byte al_50;
				byte al_45 = ds_33->*si_123;
				++si_123;
				if (ah_41 != al_45)
				{
					al_50 = al_45;
					if (al_45 != 0x00)
						goto l27FB_0235;
					goto l27FB_023A;
				}
				++di_38;
				byte ah_57 = dx->*di_38;
				ah_41 = ah_57;
			} while (ah_57 != 0x00);
			do
			{
				byte al_65 = ds_33->*si_123;
				++si_123;
			} while (al_65 == 0x20);
			if (al_65 == 0x3D)
			{
				dx_162 = ds_33;
				ax_156 = si_123;
				goto l27FB_0242;
			}
l27FB_0235:
			do
			{
				byte al_74 = ds_33->*si_123;
				++si_123;
				al_50 = al_74;
			} while (al_74 != 0x00);
l27FB_023A:
		} while (al_50 != ds_33->*si_123);
	}
	dx_162 = 0x00;
	ax_156 = &Eq_32374::b0000;
l27FB_0242:
	dxOut = dx_162;
	return ax_156;
}

// 27FB:0247: Register ptr16 fn27FB_0247()
// Called from:
//      fn27FB_01F6
ptr16 fn27FB_0247()
{
	ptr16 ax_11;
	byte ah_5;
	if (msdos_get_dos_version(out ah_5) < 0x08)
	{
		struct Eq_32450 Eq_32451::* bx_20;
		struct Eq_32451 * es_21 = msdos_get_list_of_lists(out bx_20);
		struct Eq_32457 * es_22 = (es_21->*bx_20).ptrFFFFFFFE;
		ptr16 di_24 = 0x00;
		struct Eq_32457 * ax_26 = es_22;
		while (true)
		{
			ptr16 ax_28 = &ax_26->ptr0001;
			if (ax_28 == es_22->ptr0001)
				di_24 = ax_28;
			if (es_22->b0000 == 0x5A)
				break;
			ax_26 = ax_28 + es_22->w0003;
			es_22 = ax_26;
		}
		ax_11 = di_24;
	}
	else
	{
		__syscall(33);
		ax_11 = bx;
	}
	return ax_11;
}

// 27FB:0284: Register Eq_947 fn27FB_0284(Register word16 ax, Register Eq_947 cl, Register Eq_947 ch, Register byte dh, Register Eq_947 dl)
// Called from:
//      fn27FB_039A
Eq_947 fn27FB_0284(word16 ax, Eq_947 cl, Eq_947 ch, byte dh, Eq_947 dl)
{
	byte ah_17 = seg28BA->t96D4;
	__outb(0x0A, ah_17 + 0x04);
	__outb(0x0C, 0x00);
	__outb(11, dh & 252 | ah_17);
	__outb((uint16) seg28BA->t96DF, dl);
	Eq_9040 dx_33 = seg28BA->t96DC;
	__outb(dx_33, (byte) ax);
	Eq_947 ah_35 = SLICE(ax, byte, 8);
	__outb(dx_33, ah_35);
	__outb((word16) dx_33 + 1, cl);
	__outb((word16) dx_33 + 1, ch);
	byte al_43 = seg28BA->t96D4;
	__outb(0x0A, al_43);
	return ah_35;
}

// 27FB:02C4: Register word16 fn27FB_02C4()
// Called from:
//      fn209F_00DD
word16 fn27FB_02C4()
{
	fn27FB_01B7(seg28BA->t96D2);
	seg28BA->t96D2 = -seg28BA->t96D2;
	Eq_32540 dx_38;
	word16 ax_36 = fn27FB_0497(seg28BA->t96DA, out dx_38);
	__cli();
	word16 dx_47 = seg28BA->t96CE;
	__inb(SEQ(SLICE(dx_47, byte, 8), (byte) dx_47 + 0x0E));
	fn27FB_0482(0x0359, cs, seg28BA->t96DA);
	Eq_9040 dx_65 = seg28BA->t96D8;
	Eq_947 al_66 = __inb(dx_65);
	seg28BA->t96CC = al_66;
	__outb(dx_65, al_66 & ~seg28BA->t96DE);
	__sti();
	byte ah_85 = SLICE((uint16) fn27FB_037E(), byte, 8);
	if ((seg28BA->t96D2 & 0x8000) != 0x00)
	{
		fn27FB_008D(SEQ(ah_85, 242));
		fn27FB_037E();
		if ((seg28BA->t96D2 & 0x8000) == 0x00)
		{
l27FB_033A:
			__outb(seg28BA->t96D8, seg28BA->t96CC);
			fn27FB_0482(ax_36, dx_38, seg28BA->t96DA);
			return seg28BA->t96D2;
		}
		word16 dx_103 = seg28BA->t96CE;
		__inb(SEQ(SLICE(dx_103, byte, 8), (byte) dx_103 + 0x0E));
	}
	seg28BA->t96D2 = 0x00;
	goto l27FB_033A;
}

// 27FB:037E: Register byte fn27FB_037E()
// Called from:
//      fn27FB_02C4
byte fn27FB_037E()
{
	word16 cx_11 = 0040:006C;
	do
	{
		int32 dx_ax_18 = (int32) (0040:006C - cx_11);
		ui16 dx_20 = SLICE(dx_ax_18, word16, 16);
		uint16 ax_22 = ((word16) dx_ax_18 ^ dx_20) - dx_20;
	} while (ax_22 < 0x03);
	return SLICE(ax_22, byte, 8);
}

// 27FB:039A: Register word16 fn27FB_039A(Register out ptr16 cxOut, Register out ptr16 dxOut, Register out ptr16 bxOut)
// Called from:
//      fn209F_00DD
word16 fn27FB_039A(ptr16 & cxOut, ptr16 & dxOut, ptr16 & bxOut)
{
	fn27FB_0190(seg28BA->t96D4);
	Eq_32540 dx_25;
	word16 ax_23 = fn27FB_0497(seg28BA->t96DA, out dx_25);
	fn27FB_0482(1080, cs, seg28BA->t96DA);
	fn27FB_04AA();
	Eq_2 dx_56 = <invalid>;
	byte dl_203;
	byte ah_79 = SLICE((uint16) fn27FB_0284(fn27FB_000A(fp - 0x04, ss, out dl_203), 0x00, 0x00, 0x45, (byte) dx_56), byte, 8);
	seg28BA->t96D5 = seg28BA->t96D5 & 0x7F;
	fn27FB_008D(SEQ(SLICE((uint16) fn27FB_008D(SEQ(SLICE((uint16) fn27FB_008D(SEQ(SLICE((uint16) fn27FB_008D(SEQ(SLICE((uint16) fn27FB_008D(SEQ(ah_79, 0x40)), byte, 8), 166)), byte, 8), 0x24)), byte, 8), 0x00)), byte, 8), 0x00));
	fn27FB_045E();
	fn27FB_04D7();
	ptr16 bx_134 = fn27FB_0482(ax_23, dx_25, seg28BA->t96DA);
	int32 dx_ax_142 = (int32) seg28BA->t96D4;
	int16 ax_144 = (int16) (byte) dx_ax_142;
	seg28BA->t96D4 = ax_144;
	__outb(0x0A, (byte) ax_144 + 0x04);
	ptr16 dx_148 = SLICE(dx_ax_142, word16, 16);
	ptr16 cx_158 = 0x00;
	ptr16 dx_149 = dx_148;
	if (dx_148 == 0x00 || true)
	{
		seg28BA->t96D4 = ~0x00;
		byte ah_204;
		fn27FB_00AC(out ah_204, out cx_158, out dx_149);
	}
	word16 ax_166 = seg28BA->t96D4;
	cxOut = cx_158;
	dxOut = dx_149;
	bxOut = bx_134;
	return ax_166;
}

// 27FB:045E: void fn27FB_045E()
// Called from:
//      fn27FB_039A
void fn27FB_045E()
{
	word16 cx_20 = 0040:006C;
	do
	{
		int32 dx_ax_27 = (int32) (0040:006C - cx_20);
		uint16 dx_29 = SLICE(dx_ax_27, word16, 16);
	} while (((word16) dx_ax_27 ^ dx_29) - dx_29 < 0x04);
}

// 27FB:0482: Register ui16 fn27FB_0482(Register word16 ax, Register Eq_32540 dx, Register ui16 bx)
// Called from:
//      fn27FB_02C4
//      fn27FB_039A
ui16 fn27FB_0482(word16 ax, Eq_32540 dx, ui16 bx)
{
	__cli();
	(&0x00->a0000->w0000)[bx * 0x04] = ax;
	(&0x00->t0002)[bx] = (struct Eq_33306) dx;
	return bx << 0x02;
}

// 27FB:0497: Register word16 fn27FB_0497(Register ui16 bx, Register out Eq_32540 dxOut)
// Called from:
//      fn27FB_02C4
//      fn27FB_039A
word16 fn27FB_0497(ui16 bx, union Eq_32540 & dxOut)
{
	__cli();
	word16 ax_16 = (&0x00->a0000->w0000)[bx * 0x04];
	dxOut = (&0x00->t0002)[bx];
	return ax_16;
}

// 27FB:04AA: void fn27FB_04AA()
// Called from:
//      fn27FB_039A
void fn27FB_04AA()
{
	word16 ax_19 = seg28BA->t96D2;
	ui8 ah_34 = __rol(~0x01, (byte) ax_19 & 0x07);
	__cli();
	word16 dx_26 = SEQ(SLICE(ax_19, byte, 8), ((byte) ax_19 & 0x08) << 0x04);
	__outb(dx_26 + 33, __inb(dx_26 + 33) & ah_34);
}

// 27FB:04D7: void fn27FB_04D7()
// Called from:
//      fn27FB_039A
void fn27FB_04D7()
{
	word16 ax_19 = seg28BA->t96D2;
	byte al_30 = (byte) ax_19;
	if (ax_19 != 0x02)
	{
		ui8 ah_36 = __rol(0x01, al_30 & 0x07);
		__cli();
		word16 dx_28 = SEQ(SLICE(ax_19, byte, 8), ((byte) ax_19 & 0x08) << 0x04);
		__outb(dx_28 + 33, __inb(dx_28 + 33) | ah_36);
	}
}

// 27FB:050A: Register word16 fn27FB_050A()
// Called from:
//      fn209F_00DD
word16 fn27FB_050A()
{
	struct Eq_32882 * dx_24;
	Eq_32883 ax_22 = fn27FB_01F6(&Eq_32374::b05C5, cs, out dx_24);
	word16 di_103 = 0x01;
	if (dx_24 == 0x00)
		return di_103;
	di_103 = 0x02;
	cu8 Eq_32882::* ax_38;
	if (fn27FB_05CD(0x41, ax_22, dx_24, out ax_38))
		return di_103;
	byte ah_52 = SLICE(ax_44, byte, 8);
	byte al_55 = (byte) ax_44;
	word16 ax_44;
	if (fn27FB_05EF(ax_38, dx_24, out ax_44) || (ah_52 != 0x02 || (al_55 & 0xF0) > 0x60))
		return di_103;
	word16 ax_61 = SEQ(ah_52, al_55 & 0xF0);
	if ((al_55 & 0xF0) < 0x10)
		return di_103;
	seg28BA->t96CE = ax_61;
	di_103 = 0x03;
	byte Eq_32882::* ax_65;
	if (fn27FB_05CD(0x49, ax_22, dx_24, out ax_65))
		return di_103;
	cup16 ax_71;
	if (fn27FB_0637(ax_65, dx_24, out ax_71) || (ax_71 < 0x02 || ax_71 > 0x0F))
		return di_103;
	seg28BA->t96D2 = ax_71;
	di_103 = 0x04;
	byte Eq_32882::* ax_86;
	if (fn27FB_05CD(0x44, ax_22, dx_24, out ax_86))
		return di_103;
	cup16 ax_92;
	if (fn27FB_0637(ax_86, dx_24, out ax_92) || ax_92 > 0x03)
		return di_103;
	word16 ax_131;
	seg28BA->t96D4 = ax_92;
	di_103 = 0x00;
	cu8 Eq_32882::* ax_106;
	if (!fn27FB_05CD(77, ax_22, dx_24, out ax_106))
	{
		byte ah_120 = SLICE(ax_112, byte, 8);
		byte al_123 = (byte) ax_112;
		word16 ax_112;
		if (!fn27FB_05EF(ax_106, dx_24, out ax_112) && (ah_120 == 0x02 && (al_123 & 0xF0) <= 0x60))
		{
			ax_131 = SEQ(ah_120, al_123 & 0xF0);
			if ((al_123 & 0xF0) >= 0x10)
			{
l27FB_05A6:
				seg28BA->t96D0 = ax_131;
				byte Eq_32882::* ax_141;
				if (!fn27FB_05CD(0x54, ax_22, dx_24, out ax_141))
				{
					word16 ax_147;
					if (!fn27FB_0637(ax_141, dx_24, out ax_147) && ax_147 != 0x00)
						seg28BA->t96D6 = ax_147;
				}
				return di_103;
			}
		}
	}
	ax_131 = seg28BA->t96CE;
	goto l27FB_05A6;
}

// 27FB:05CD: FlagGroup bool fn27FB_05CD(Register cu8 al, Register Eq_32883 si, Register (ptr16 Eq_32882) es, Register out Eq_32883 axOut)
// Called from:
//      fn27FB_050A
bool fn27FB_05CD(cu8 al, Eq_32883 si, struct Eq_32882 * es, union Eq_32883 & axOut)
{
	do
	{
		bool C_27;
		cu8 al_21 = es->*si;
		si = (word16) si + 1;
		cu8 al_23 = al_21;
		Eq_32883 ax_40 = SEQ(al, al_21);
		if (al_21 == 0x00)
		{
			C_27 = true;
			goto l27FB_05EC;
		}
		if (al_21 >= 0x61 && al_21 <= 122)
			al_23 = al_21 - 0x20;
	} while (al_23 != al);
	ax_40 = si;
	C_27 = false;
l27FB_05EC:
	axOut = ax_40;
	return C_27;
}

// 27FB:05EF: FlagGroup bool fn27FB_05EF(Register (memptr (ptr16 Eq_32882) cu8) bx, Register (ptr16 Eq_32882) es, Register out Eq_32914 axOut)
// Called from:
//      fn27FB_050A
bool fn27FB_05EF(cu8 Eq_32882::* bx, struct Eq_32882 * es, union Eq_32914 & axOut)
{
	bool C_34;
	cu8 al_17 = es->*bx;
	Eq_32914 dx_15 = 0x00;
	byte Eq_32882::* bx_51 = bx + 1;
	Eq_32914 ax_73 = SEQ(ah, al_17);
	if (al_17 != 0x20)
	{
		ax_73 = SEQ(ah, al_17);
		if (al_17 != 0x00)
		{
			do
			{
				ui16 dx_16 = dx_15 << 0x04;
				byte dl_38 = (byte) dx_16;
				byte dh_68 = SLICE(dx_16, byte, 8);
				if (al_17 >= 0x30 && al_17 <= 0x39)
					dx_15 = SEQ(dh_68, dl_38 | al_17 - 0x30);
				else
				{
					if (al_17 >= 0x61 && al_17 <= 122)
						al_17 -= 0x61;
					ax_73 = SEQ(ah, al_17);
					if (al_17 < 0x41)
						goto l27FB_0635;
					ax_73 = SEQ(ah, al_17);
					if (al_17 > 0x46)
						goto l27FB_0635;
					dx_15 = SEQ(dh_68, dl_38 | al_17 - 55);
				}
				cu8 al_58 = es->*bx_51;
				++bx_51;
				C_34 = SLICE(cond(al_58 - 0x20), bool, 1);
				if (al_58 == 0x20)
					break;
				al_17 = al_58;
				C_34 = false;
			} while (al_58 != 0x00);
			ax_73 = dx_15;
l27FB_0636:
			axOut = ax_73;
			return C_34;
		}
	}
l27FB_0635:
	C_34 = true;
	goto l27FB_0636;
}

// 27FB:0637: FlagGroup bool fn27FB_0637(Register (memptr (ptr16 Eq_32882) byte) bx, Register (ptr16 Eq_32882) es, Register out Eq_32942 axOut)
// Called from:
//      fn27FB_050A
bool fn27FB_0637(byte Eq_32882::* bx, struct Eq_32882 * es, union Eq_32942 & axOut)
{
	bool C_25;
	byte al_8 = es->*bx;
	Eq_32942 dx_14 = 0x00;
	byte Eq_32882::* bx_31 = bx + 1;
	Eq_32942 ax_42 = SEQ(ah, al_8);
	if (al_8 != 0x20)
	{
		ax_42 = SEQ(ah, al_8);
		Eq_32942 ax_94 = SEQ(ah, al_8);
		if (al_8 != 0x00)
		{
			do
			{
				cu8 al_20 = (byte) ax_94;
				ui16 dx_15 = dx_14 << 0x01;
				ax_42 = ax_94;
				if (al_20 < 0x30)
					goto l27FB_066D;
				ax_42 = ax_94;
				if (al_20 > 0x39)
					goto l27FB_066D;
				byte al_33 = es->*bx_31;
				dx_14 = dx_15 * 0x05 + (uint16) (al_20 - 0x30);
				++bx_31;
				C_25 = SLICE(cond(al_33 - 0x20), bool, 1);
				if (al_33 == 0x20)
					break;
				C_25 = false;
				ax_94.u0 = (uint16) al_33;
			} while (al_33 != 0x00);
			ax_42 = dx_14;
l27FB_066E:
			axOut = ax_42;
			return C_25;
		}
	}
l27FB_066D:
	C_25 = true;
	goto l27FB_066E;
}

