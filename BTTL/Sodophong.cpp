// Sodophong.cpp : implementation file
//

#include "pch.h"
#include "BTTL.h"
#include "afxdialogex.h"
#include "Sodophong.h"
#include "Thongtinkhachhang.h"
#include<string>


// Sodophong dialog

IMPLEMENT_DYNAMIC(Sodophong, CDialogEx)

Sodophong::Sodophong(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SODOPHONG, pParent)
{

}

Sodophong::~Sodophong()
{
}

void Sodophong::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Sodophong, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_PHONG1, &Sodophong::OnBnClickedBtnPhong1)
	ON_BN_CLICKED(IDC_BTN_PHONG2, &Sodophong::OnBnClickedBtnPhong2)
	ON_BN_CLICKED(IDC_BTN_PHONG3, &Sodophong::OnBnClickedBtnPhong3)
	ON_BN_CLICKED(IDC_BTN_PHONG4, &Sodophong::OnBnClickedBtnPhong4)
	ON_BN_CLICKED(IDC_BTN_PHONG5, &Sodophong::OnBnClickedBtnPhong5)
	ON_BN_CLICKED(IDC_BTN_PHONG6, &Sodophong::OnBnClickedBtnPhong6)
	ON_BN_CLICKED(IDC_BTN_PHONG7, &Sodophong::OnBnClickedBtnPhong7)
	ON_BN_CLICKED(IDC_BTN_PHONG8, &Sodophong::OnBnClickedBtnPhong8)
	ON_BN_CLICKED(IDC_BTN_PHONG9, &Sodophong::OnBnClickedBtnPhong9)
	ON_BN_CLICKED(IDC_BTN_PHONG10, &Sodophong::OnBnClickedBtnPhong10)
END_MESSAGE_MAP()


// Sodophong message handlers


void Sodophong::OnBnClickedBtnPhong1()
{
	Thongtinkhachhang thongtinkhachhang_dlg;
	thongtinkhachhang_dlg.DoModal();
}


void Sodophong::OnBnClickedBtnPhong2()
{
	Thongtinkhachhang thongtinkhachhang_dlg;
	thongtinkhachhang_dlg.DoModal();
}


void Sodophong::OnBnClickedBtnPhong3()
{
	Thongtinkhachhang thongtinkhachhang_dlg;
	thongtinkhachhang_dlg.DoModal();
}


void Sodophong::OnBnClickedBtnPhong4()
{
	Thongtinkhachhang thongtinkhachhang_dlg;
	thongtinkhachhang_dlg.DoModal();
}


void Sodophong::OnBnClickedBtnPhong5()
{
	Thongtinkhachhang thongtinkhachhang_dlg;
	thongtinkhachhang_dlg.DoModal();
}

void Sodophong::OnBnClickedBtnPhong6()
{
	Thongtinkhachhang thongtinkhachhang_dlg;
	thongtinkhachhang_dlg.DoModal();
}


void Sodophong::OnBnClickedBtnPhong7()
{
	Thongtinkhachhang thongtinkhachhang_dlg;
	thongtinkhachhang_dlg.DoModal();
}


void Sodophong::OnBnClickedBtnPhong8()
{
	Thongtinkhachhang thongtinkhachhang_dlg;
	thongtinkhachhang_dlg.DoModal();
}


void Sodophong::OnBnClickedBtnPhong9()
{
	Thongtinkhachhang thongtinkhachhang_dlg;
	thongtinkhachhang_dlg.DoModal();
}


void Sodophong::OnBnClickedBtnPhong10()
{
	Thongtinkhachhang thongtinkhachhang_dlg;
	thongtinkhachhang_dlg.DoModal();
}
