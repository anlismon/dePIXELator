// ZORTON_268D.c
// Generated by decompiling ZORTON.EXE
// using Reko decompiler version 0.9.2.3.

#include "ZORTON_268D.h"

// 268D:000F: Register byte fn268D_000F(Register Eq_962 di, Register Eq_2 ds, Register out Eq_2 dsOut)
// Called from:
//      main
byte fn268D_000F(Eq_962 di, Eq_2 ds, union Eq_2 & dsOut)
{
	Eq_2 bx_20;
	Eq_2 cx_21;
	word16 dx_351;
	Eq_2 ds_22;
	fn0800_302B(ds, SEQ(ds, 0x914E), SEQ(ds, 0x9159), out cx_21, out dx_351, out bx_20, out ds_22);
	Eq_2 dx_ax_347 = <invalid>;
	Eq_2 dx_23 = SLICE(dx_ax_347, word16, 16);
	word16 ax_19 = (word16) dx_ax_347;
	if (dx_ax_347 == 0x00)
	{
		word16 dx_355;
		word16 bx_356;
		fn263F_03F3(cx_21, dx_23, bx_20, ds_22, out dx_355, out bx_356, out di, out ds_22);
		word16 bx_357;
		struct Eq_30975 * es_358;
		fn268D_03E2(ds_22, 0x01, out bx_357, out es_358);
	}
	word16 di_91 = fn0800_3060(di, ds_22, ax_19, dx_23, 37222, ds_22);
	Eq_2 ds_110;
	word16 bx_352;
	fn0800_2B50(ds_22, dx_ax_347, out bx_352, out ds_110);
	word16 dx_353;
	word16 bx_354;
	uint16 cx_127;
	Eq_2 ds_128;
	fn0800_302B(ds_110, SEQ(ds_110, 0x9169), SEQ(ds_110, 0x9159), out cx_127, out dx_353, out bx_354, out ds_128);
	Eq_2 dx_ax_348 = <invalid>;
	Eq_2 dx_129 = SLICE(dx_ax_348, word16, 16);
	word16 ax_125 = (word16) dx_ax_348;
	if (dx_ax_348 != 0x00)
	{
		fn0800_3060(di_91, ds_128, ax_125, dx_129, 37236, ds_128);
		word16 dx_359;
		fn0800_29F0(ds_128, fp - 0x1A, out dx_359);
		Eq_2 dx_ax_349 = <invalid>;
		seg28BA->t7F3C = dx_ax_349;
		seg28BA->t7F40 = fn268D_0974(ds_128, fp - 0x2E);
		seg28BA->t7F42 = fn268D_0974(ds_128, fp - 66);
		word16 bx_360;
		cx_127 = (uint16) fn0800_2B50(ds_128, dx_ax_348, out bx_360, out ds_128);
	}
	dsOut = ds_128;
	return SLICE(cx_127, byte, 8);
}

// 268D:00F9: void main(Register Eq_962 di, Register Eq_2 ds)
void main(Eq_962 di, Eq_2 ds)
{
	Eq_2 dx_ax_476 = <invalid>;
	Eq_2 bx_12;
	word16 dx_477;
	Eq_2 cx_13 = fn0800_2056(ds, out dx_477, out bx_12);
	Eq_2 dx_14 = SLICE(dx_ax_476, word16, 16);
	if (dx_ax_476 < 0x0004C000)
	{
		fn0800_37D3(cx_13, dx_14, bx_12, ds, SEQ(ds, 37243));
		di = fn0800_37D3(cx_13, dx_14, bx_12, ds, SEQ(ds, 37263));
		fn0800_1A83(ds, 1000);
		fn0800_20A6(ds);
		fn0800_03B9(ds, 0x01);
	}
	fn0800_02EC(ds, 0xF5, 9869);
	fn268D_05D9();
	seg28BA->t83D4 = 0x00;
	*((word32) ds + 0x0000AA80) = 0xA0000000;
	Eq_2 ds_109;
	*((word32) ds_109 + 0x0000AA7E) = (word16) (uint32) fn16C6_0008(SLICE((uint16) fn268D_000F(di, ds, out ds_109), byte, 8));
	Eq_2 ds_137;
	struct Eq_31063 Eq_31071::* bp_133 = fn268D_034A(ds_109, out ds_137);
	Eq_2 sp_142 = <invalid>;
	ss->*((word32) sp_142 - 4) = (ss->*bp_133).t0008;
	ss->*((word32) sp_142 - 6) = (ss->*bp_133).t0006;
	fn268D_08C8(ds_137, ss->*((word32) sp_142 - 6), ss->*((word32) sp_142 - 4));
	Eq_2 ds_173 = fn2476_0104(ds_137);
	seg2862->t0000 = 0x01;
	Eq_2 sp_167 = sp_142;
	if (seg28B9->b0000 == 0x01)
	{
		Eq_2 ds_195;
		bp_133 = fn2425_000A(out ds_195);
		seg28BA->t302A = seg28BA->t302A | 0x02;
		word16 cx_478;
		word16 dx_479;
		word16 bx_480;
		fn2425_0286(0x28BA, ds_195, out cx_478, out dx_479, out bx_480, out ds_173);
		sp_167.u0 = <invalid>;
	}
	fn2057_005C(fn2141_020E(ds_173), ds_173);
	(ss->*bp_133).tFFFFFFFE.u0 = 0x01;
	while ((ss->*bp_133).tFFFFFFFE < 101)
	{
		word16 ax_258 = seg28BA->tA8AE;
		struct Eq_31162 Eq_31071::* sp_263 = sp_167 - 2;
		(ss->*sp_263).w0000 = seg28BA->tA8B0;
		(ss->*sp_263).tFFFFFFFE = ax_258 + 0x02;
		(ss->*sp_263).tFFFFFFFC = (ss->*bp_133).tFFFFFFFE;
		struct Eq_31181 * es_bx_272 = seg28BA->tA8AE;
		(ss->*sp_263).tFFFFFFFA = (uint16) es_bx_272->b0001;
		(ss->*sp_263).tFFFFFFF8.u2 = (uint16) (seg28BA->tA8B0->*(word16) es_bx_272);
		word16 bx_481;
		fn2476_0407((ss->*sp_263).tFFFFFFF8, (ss->*sp_263).tFFFFFFFA, (ss->*sp_263).tFFFFFFFC, (ss->*sp_263).tFFFFFFFE, out bx_481);
		(ss->*sp_263).w0000 = 0x14;
		fn0800_1A83(ds_173, (ss->*sp_263).w0000);
		(ss->*bp_133).tFFFFFFFE = (word32) (ss->*bp_133).tFFFFFFFE + 1;
	}
	struct Eq_31234 Eq_31071::* sp_316 = sp_167 - 4;
	(ss->*sp_316).t0000.u0 = 0x01008001;
	(ss->*sp_316).tFFFFFFFE = ds_173;
	(ss->*sp_316).tFFFFFFFC.u0 = 0xAA2E;
	word16 cx_482;
	word16 dx_483;
	word16 bx_484;
	Eq_2 ax_325 = fn0800_3615(ds_173, (ss->*sp_316).tFFFFFFFC, (ss->*sp_316).t0000, (ss->*sp_316).t0002, out cx_482, out dx_483, out bx_484);
	seg28BA->tA18A = ax_325;
	if (ax_325 == ~0x00)
	{
		(ss->*sp_316).t0002 = ds_173;
		(ss->*sp_316).t0000.u0 = 37342;
		word16 dx_491;
		struct Eq_31345 * es_492;
		fn263F_04B6(0x28BA, ds_173, out dx_491, out es_492, out ds_173);
		(ss->*sp_316).t0002.u0 = 0x01;
		word16 bx_493;
		struct Eq_31356 * es_494;
		fn268D_03E2(ds_173, (ss->*sp_316).t0002, out bx_493, out es_494);
	}
	seg28BA->t302A = seg28BA->t302A | 0x20;
	struct Eq_31276 Eq_31071::* sp_381 = sp_167 - 2;
	(ss->*sp_381).t0000.u1 = 0x00;
	(ss->*sp_381).tFFFFFFFC.u0 = 0x20;
	(ss->*sp_381).tFFFFFFFA = seg28BA->tA18A;
	word16 cx_485;
	word16 dx_486;
	word16 bx_487;
	fn0800_06AB(ds_173, (ss->*sp_381).tFFFFFFFA, (ss->*sp_381).tFFFFFFFC, (ss->*sp_381).t0000, out cx_485, out dx_486, out bx_487);
	Eq_2 ds_413;
	word16 bp_488;
	fn268D_0282(fn0F2B_153F(ds_173), ds_173, out bp_488, out ds_413);
	Eq_2 sp_419 = <invalid>;
	(ss->*((word32) sp_419 - 2)).u0 = 0x00;
	word16 bx_489;
	struct Eq_31329 * es_490;
	fn268D_03E2(ds_413, ss->*((word32) sp_419 - 2), out bx_489, out es_490);
}

// 268D:0282: Register word16 fn268D_0282(Register uint16 ax, Register Eq_2 ds, Register out ptr16 bpOut, Register out Eq_2 dsOut)
// Called from:
//      main
word16 fn268D_0282(uint16 ax, Eq_2 ds, ptr16 & bpOut, union Eq_2 & dsOut)
{
	fn1197_09AC(ax, ds);
	mp16 sp_112 = fp - 24;
	Eq_31371 wLoc04_161 = 0x00;
	while (wLoc04_161 < 0x11)
	{
		Mem31[ss:wLoc04_161 + (fp - 0x18):byte] = 0x00;
		wLoc04_161 = (word16) wLoc04_161 + 1;
	}
	int16 wLoc04_164;
	for (wLoc04_164 = 0x00; wLoc04_164 < 0x11; ++wLoc04_164)
	{
		do
		{
			Eq_31387 dx_55 = (int16) ((int32) fn0800_083F(ds) % 0x11);
		} while (Mem59[ss:dx_55 + (fp - 0x18):byte] != 0x00);
		Mem67[ss:dx_55 + (fp - 0x18):byte] = 0x01;
		word16 dx_73 = SEQ(0x28BA, 0x7FA6)[dx_55 * 0x04];
		SEQ(0x28BA, 0xA390)[wLoc04_164 * 0x04] = SEQ(0x28BA, 0x7FA8)[dx_55 * 0x04];
		SEQ(0x28BA, 0xA38E)[wLoc04_164 * 0x04] = dx_73;
	}
	while (true)
	{
		struct Eq_31400 Eq_31376::* bp_86;
		word16 cx_87;
		Eq_2 ds_89;
		(ss->*bp_86).wFFFFFFFE = (word16) (uint32) fn1ED7_000E(ds, out cx_87, out bp_86, out ds_89);
		if ((ss->*bp_86).wFFFFFFFE < 0x00)
			break;
		__cli();
		seg28BA->t302C = 0x00;
		ci16 Eq_31376::* sp_113 = sp_112 - 2;
		ss->*sp_113 = (ss->*bp_86).wFFFFFFFE;
		ds = fn1F0F_000F(ds_89, ss->*sp_113);
		__cli();
		Eq_2 sp_124 = <invalid>;
		sp_112 = (mp16) ((word32) sp_124 + 2);
		do
		{
			Eq_2 edx_137 = <invalid>;
			word32 ebx_181;
			word16 dx_180;
		} while (((word16) (uint32) fn2331_0167(ds, out dx_180, out ebx_181) | (word16) edx_137) != 0x00);
		seg28BA->t302C = 0x00;
	}
	bpOut = (ss->*bp_86).ptr0000;
	dsOut = ds_89;
	return cx_87;
}

// 268D:034A: Register word16 fn268D_034A(Register Eq_2 ds, Register out (ptr16 Eq_31067) dsOut)
// Called from:
//      main
word16 fn268D_034A(Eq_2 ds, struct Eq_31067 & dsOut)
{
	uint16 ax_14 = (uint16) seg28BA->t007D;
	uint16 ax_20 = (uint16) seg28BA->t007E;
	Eq_2 ds_51;
	Eq_2 bx_122;
	Eq_2 dx_126;
	Eq_2 cx_101 = fn0800_21F9(fn209F_00DD(ds), ds, 0x33, fp - 22, fp - 22, out dx_126, out bx_122, out ds_51);
	seg28B9->b0000 = (byte *) 0x01;
	if (*((word32) ds_51 + 0x0000AA7E) < 0x03)
	{
		fn0800_37D3(cx_101, dx_126, bx_122, ds_51, SEQ(ds_51, ~0x6E06));
		fn0800_20A6(ds_51);
		struct Eq_31534 * es_206;
		dx_126 = fn268D_03E2(ds_51, 0x01, out bx_122, out es_206);
		cx_101.u0 = 0x01;
	}
	if (ax_14 < 0x03 || ax_14 == 0x03 && ax_20 < 0x1E)
	{
		fn0800_37D3(cx_101, dx_126, bx_122, ds_51, SEQ(ds_51, 0x9226));
		fn0800_20A6(ds_51);
		word16 bx_207;
		struct Eq_31548 * es_208;
		fn268D_03E2(ds_51, 0x01, out bx_207, out es_208);
	}
	struct Eq_31067 * ds_165;
	word16 bp_179 = ss->*fn263F_00A6(ds_51, out ds_165);
	dsOut = ds_165;
	return bp_179;
}

// 268D:03E2: Register Eq_2 fn268D_03E2(Register Eq_2 ds, Stack Eq_2 wArg04, Register out ptr16 bxOut, Register out Eq_2 esOut)
// Called from:
//      fn263F_03F3
//      fn263F_043F
//      fn263F_04B6
//      fn268D_000F
//      main
//      fn268D_034A
Eq_2 fn268D_03E2(Eq_2 ds, Eq_2 wArg04, ptr16 & bxOut, union Eq_2 & esOut)
{
	if (wArg04 == 0x00)
	{
		word16 cx_745;
		word16 dx_746;
		word16 bx_747;
		Eq_2 ax_22 = fn0800_3615(ds, SEQ(ds, 37470), 0x8001, wLoc1E, out cx_745, out dx_746, out bx_747);
		if (ax_22 == ~0x00)
		{
			Eq_2 bx_40;
			word16 dx_763;
			word16 di_764;
			struct Eq_31656 * ds_765;
			fn263F_03F3(cx, dx, bx_40, ds, out dx_763, out bx_40, out di_764, out ds_765);
		}
		Eq_915 ax_52 = fn0800_2DD1(ds, ax_22);
		word16 bx_750;
		word16 cx_748;
		word16 dx_749;
		fn0800_3C87(ds, ax_22, fp - 0x0A, 0x01, out cx_748, out dx_749, out bx_750);
		word16 bx_753;
		word16 dx_752;
		word16 cx_751;
		fn0800_3C87(ds, ax_22, fp - 0x0C, 0x01, out cx_751, out dx_752, out bx_753);
		word16 bx_758;
		word16 bx_756;
		word16 dx_757;
		word16 dx_755;
		word16 cx_754;
		fn0800_2A93((byte) fn0800_3C87(ds, ax_22, seg28BA->tA558, (word32) ax_52 + 0x0000FFFE, out cx_754, out dx_755, out bx_756), ds, ax_22, out dx_757, out bx_758);
		fn2476_081F();
		// Failed to bind call argument.
		// Please report this issue at https://github.com/uxmal/reko
		Eq_2 stackArg6 = <invalid>;
		word16 cx_760;
		Eq_947 al_214 = (byte) (uint16) fn2476_0630(ds, 0x00, stackArg6, wArg04, out cx_760, out bx);
		Eq_2 wLoc06_538 = 0x00;
		while (wLoc06_538 <= 100)
		{
			fn2476_0407(0x00, 0x00, wLoc06_538, seg28BA->tA558, out bx);
			do
				;
			while (((uint16) __inb(0x03DA) & 0x08) != 0x00);
			do
				al_214 = __inb(0x03DA);
			while (((uint16) al_214 & 0x08) == 0x00);
			wLoc06_538 = (word16) wLoc06_538.u1 + 1;
		}
		do
		{
			word16 ax_228 = fn0800_2390(al_214, ds);
			al_214 = (byte) ax_228;
		} while (ax_228 == 0x00);
		fn0800_20A6(ds);
		Eq_2 wLoc06_547;
		for (wLoc06_547 = 100; wLoc06_547 >= 0x00; --wLoc06_547)
		{
			fn2476_0407(0x00, 0x00, wLoc06_547, seg28BA->tA558, out bx);
			do
				;
			while (((uint16) __inb(0x03DA) & 0x08) != 0x00);
			do
				;
			while (((uint16) __inb(0x03DA) & 0x08) == 0x00);
		}
	}
	if (seg28BA->tA882 != 0x00)
	{
		word16 cx_766;
		word16 dx_767;
		fn0800_1C24(ds, seg28BA->tA884, out cx_766, out dx_767, out bx, out ds);
	}
	if ((seg28BA->t302A & 0x01) != 0x00)
	{
		word16 dx_768;
		fn2476_03E6(0x28BA, ds, out dx_768, out bx, out ds);
	}
	if ((seg28BA->t302A & 0x02) != 0x00)
	{
		word16 dx_769;
		fn0800_21F9(0x28BA, ds, 0x33, fp - 0x1E, fp - 0x1E, out dx_769, out bx, out ds);
	}
	byte bh_613 = SLICE(bx, byte, 8);
	if ((seg28BA->t302A & 0x04) != 0x00)
		bx = SEQ(bh_613, fn2141_0271(ds));
	if ((seg28BA->t302A & 0x10) != 0x00)
		bx = fn2057_011E(ds);
	if ((seg28BA->t302A & 0x20) != 0x00)
	{
		word16 dx_770;
		fn0800_2A93(~0x45, ds, seg28BA->tA18A, out dx_770, out bx);
	}
	if (wArg04 == 0x00)
		fn268D_05D9();
	Eq_2 dx_497 = fn0800_03B9(ds, 0x00);
	bxOut = bx;
	esOut.u0 = 0x28BA;
	return dx_497;
}

// 268D:05D9: void fn268D_05D9()
// Called from:
//      main
//      fn268D_03E2
void fn268D_05D9()
{
}

// 268D:05DA: void fn268D_05DA(Stack word32 dwArg04)
// Called from:
//      fn268D_06AA
void fn268D_05DA(word32 dwArg04)
{
	do
	{
		do
			;
		while (((uint16) __inb(0x03DA) & 0x08) == 0x00);
		do
			;
		while (((uint16) __inb(0x03DA) & 0x08) != 0x00);
		word32 v12_29 = dwArg04 - 0x01;
		dwArg04 = v12_29;
	} while (v12_29 != 0x00);
}

// 268D:05FB: Register word16 fn268D_05FB(Register Eq_2 ds)
// Called from:
//      fn268D_06AA
word16 fn268D_05FB(Eq_2 ds)
{
	Eq_4586 wLoc04_57 = 900;
	while (wLoc04_57 < 1000)
	{
		fn0800_295A(wLoc04_57);
		bx = fn0800_1A83(ds, 0x01);
		wLoc04_57 = (word16) wLoc04_57.u0 + 1;
	}
	fn0800_2986();
	return bx;
}

// 268D:06AA: void fn268D_06AA(Register Eq_2 ds, Stack Eq_31851 wArg04, Stack word16 wArg06)
// Called from:
//      fn268D_08C8
void fn268D_06AA(Eq_2 ds, Eq_31851 wArg04, word16 wArg06)
{
	seg28BA->t3096 = (int32) fn268D_0974(ds, SEQ(wArg06, (word32) wArg04 + 1));
	Eq_2 bx_34 = fn268D_05FB(ds);
	fn0800_16E9(ds, 11);
	fn0800_1867(11, bx_34, ds, SEQ(ds, 0x92F8));
	fn268D_05DA(0x32);
}

// 268D:086A: Register word16 fn268D_086A(Stack segptr32 dwArg04, Stack Eq_8209 dwArg08)
// Called from:
//      fn268D_08C8
word16 fn268D_086A(segptr32 dwArg04, Eq_8209 dwArg08)
{
	fn0800_47D7(fp - 44, dwArg04);
	ci8 bLoc03_93 = 0x00;
	while (bLoc03_93 < 0x27 && (int16) (ss->*((word16) (fp - 44) + (int16) bLoc03_93)) != 0x00)
	{
		Eq_31908 ax_49 = (word16) (fp - 44) + (int16) bLoc03_93;
		ss->*ax_49 = ss->*ax_49 ^ ~0x44;
		++bLoc03_93;
	}
	return fn0800_47A7(fp - 44, dwArg08);
}

// 268D:08C8: void fn268D_08C8(Register Eq_2 ds, Stack Eq_2 wArg04, Stack Eq_2 ptrArg06)
// Called from:
//      main
void fn268D_08C8(Eq_2 ds, Eq_2 wArg04, Eq_2 ptrArg06)
{
	fn0800_03F4(484, SEQ(ds, ~0x7095), SEQ(ss, fp - 488));
	struct Eq_31933 Eq_31851::* sp_100 = fp - 488;
	if (wArg04 >= 0x02)
	{
		while (true)
		{
			Eq_2 v10_34 = wArg04 - 0x01;
			wArg04 = v10_34;
			if (v10_34 <= 0x00)
				break;
			cu8 bLoc03_160;
			for (bLoc03_160 = 0x00; bLoc03_160 < 11; ++bLoc03_160)
			{
				if (*SEQ(ds, (word16) ptrArg06)[v10_34] == 0x24)
				{
					struct Eq_31994 Eq_31851::* sp_122 = sp_100 - 4;
					(ss->*sp_122).t0000 = *((char *) (word16) ptrArg06 + v10_34 * 0x04);
					fn268D_06AA(ds, (ss->*sp_122).t0000, (ss->*sp_122).w0002);
					sp_100 = (struct Eq_31933 Eq_31851::*) (&sp_122->w0002 + 1);
					break;
				}
				struct Eq_31957 Eq_31851::* sp_62 = sp_100 - 2;
				(ss->*sp_62).t0000 = ss;
				(ss->*sp_62).tFFFFFFFE = (uint16) bLoc03_160 *s 44 + (fp - 488);
				(ss->*sp_62).ptrFFFFFFFA = (&(SLICE(ptrArg06, selector, 16)->*(word16) ptrArg06))[v10_34 * 0x04];
				sp_100 = (struct Eq_31933 Eq_31851::*) ((char *) &sp_62->t0000 + 2);
				if (fn268D_086A((ss->*sp_62).ptrFFFFFFFA, (ss->*sp_62).tFFFFFFFE) == 0x00)
				{
					Eq_32019 ax_96 = (uint16) bLoc03_160 *s 44 + (fp - 448);
					(ss->*ax_96)();
				}
			}
		}
	}
}

// 268D:0974: Register uint16 fn268D_0974(Register Eq_2 ds, Stack Eq_4661 dwArg04)
// Called from:
//      fn268D_000F
//      fn268D_06AA
uint16 fn268D_0974(Eq_2 ds, Eq_4661 dwArg04)
{
	word16 dx_33;
	return fn0800_29F0(ds, dwArg04, out dx_33);
}

