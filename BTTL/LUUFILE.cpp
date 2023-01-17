#include "pch.h"
#include "LUUFILE.h"
#include<fstream>
LUUFILE::LUUFILE(void)
{

}
LUUFILE::~LUUFILE(void)
{

}
void LUUFILE::luuf(string save, string save1, string save2, string save3)
{
	ofstream outFile;
	outFile.open("HD.txt", ios::app);
	outFile << "\n HOA DON \n";
	outFile << "HOTEN : " << save << "\n";
	outFile << "SDT : " << save1 << "\n";
	outFile << "CCCD : " << save2 << "\n";
	outFile << "TONGTIEN : " << save3 << "\n";
	outFile.close();

}
