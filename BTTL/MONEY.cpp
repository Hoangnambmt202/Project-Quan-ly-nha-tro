#include "pch.h"
#include "MONEY.h"
#include "Khachhang.h"
MONEY::MONEY()
{
	hoten = 0;
	sdt = 0;
	CCCD = _T("");
	tuoi = _T("");
	tiendien = 0;
	tiennuoc = 0;
	tienphong = 0;
}
MONEY::~MONEY()
{
	hoten = 0;
	sdt = 0;
	CCCD = _T("");
	tuoi = _T("");
	tiendien = 0;
	tiennuoc = 0;
	tienphong = 0;
}
MONEY::MONEY(const MONEY& MONEY)
{
	hoten = MONEY.hoten;
	sdt = MONEY.sdt;
	CCCD = MONEY.CCCD;
	tuoi = MONEY.tuoi;
	tiendien = MONEY.tiendien;
	tiennuoc = MONEY.tiennuoc;
	tienphong = MONEY.tienphong;
	
}
int MONEY::phiphong(int td, int tn,int tp)
{

	return td + tn + tp;
}