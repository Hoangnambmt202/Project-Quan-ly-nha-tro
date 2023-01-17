#include "pch.h"
#include "Khachhang.h"
Khachhang::Khachhang()
{
	hoten = 0;
	sdt = 0;
	CCCD = _T("");
	tuoi = _T("");
}
Khachhang::~Khachhang()
{
	hoten = 0;
	sdt = 0;
	CCCD = _T("");
	tuoi = _T("");
}
Khachhang::Khachhang(const Khachhang& khachhang)
{
	hoten = khachhang.hoten;
	sdt = khachhang.sdt;
	CCCD = khachhang.CCCD;
	tuoi = khachhang.tuoi;
}

