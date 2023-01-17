#pragma once
#include "Khachhang.h"
#include "Tienichphong.h"
#include <string>
using namespace std;
class MONEY: virtual public Khachhang,virtual public Tienichphong
{
public:
	

	MONEY();
	~MONEY();
	MONEY(const MONEY& MONEY);
	int tiendien;
	int tiennuoc;
	int tienphong;
	int phiphong(int td, int tn, int tp);

};

