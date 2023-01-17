// Thongtinkhachhang.cpp : implementation file
//

#include "pch.h"
#include "BTTL.h"
#include "afxdialogex.h"
#include "Thongtinkhachhang.h"
#include "BTTLDlg.h"
#include "Thanhviennhom.h"
#include"Tienphong.h"
#include <stdlib.h>
#include <math.h>
#include<string>
#include <cstring>
#include <iostream>
using namespace std;


// Thongtinkhachhang dialog

IMPLEMENT_DYNAMIC(Thongtinkhachhang, CDialogEx)
Thongtinkhachhang::Thongtinkhachhang(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_THONGTINKHACH, pParent)
	, ht(_T(""))
	, sdt(_T(""))
	, cccd(_T(""))
{
}

Thongtinkhachhang::~Thongtinkhachhang()
{
}


void Thongtinkhachhang::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_TEN, edit_ten);
	DDX_Control(pDX, IDC_EDIT_SDT, edit_sdt);
	DDX_Control(pDX, IDC_EDIT_CCCD, edit_cccd);
	DDX_Control(pDX, IDC_LIST_THONGTIN, list_thongtin);
	DDX_Text(pDX, IDC_EDIT_TEN, ht);
	DDX_Text(pDX, IDC_EDIT_SDT, sdt);
	DDX_Text(pDX, IDC_EDIT_CCCD, cccd);
}

BOOL Thongtinkhachhang::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	//SetIcon(m_hIcon, TRUE);			// Set big icon
	//SetIcon(m_hIcon, FALSE);		// Set small icon


	// xet thong so hang va cot cho list control
	list_thongtin.SetExtendedStyle(LVS_EX_FULLROWSELECT | LVS_EX_GRIDLINES); // tạo hàng, cột | tạo dòng kẻ cho hàng và cột
	list_thongtin.InsertColumn(0, _T("HO VA TEN"), LVCFMT_CENTER, 100);
	list_thongtin.InsertColumn(1, _T("SỐ ĐT"), LVCFMT_CENTER, 100);
	list_thongtin.InsertColumn(2, _T("CMND / CCCD"), LVCFMT_CENTER, 100);
	
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

BEGIN_MESSAGE_MAP(Thongtinkhachhang, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_DANGKY, &Thongtinkhachhang::OnBnClickedBtnDangky)
	ON_BN_CLICKED(IDC_BTN_XOA, &Thongtinkhachhang::OnBnClickedBtnXoa)
	ON_BN_CLICKED(IDC_XEMTHANHVIEN, &Thongtinkhachhang::OnBnClickedXemthanhvien)
	ON_BN_CLICKED(IDC_BTN_TINHTIEN, &Thongtinkhachhang::OnBnClickedBtnTinhtien)
	
END_MESSAGE_MAP()


//nut dang ky
void Thongtinkhachhang::OnBnClickedBtnDangky()
{
	UpdateData(TRUE);
	CString str_ten;
	edit_ten.GetWindowText(str_ten);

	CString str_sdt;
	edit_sdt.GetWindowText(str_sdt);

	CString str_cccd;
	edit_cccd.GetWindowText(str_cccd);

	
	this->list_thongtin.InsertItem(0, str_ten);
	this->list_thongtin.SetItemText(0, 1, str_sdt);
	this->list_thongtin.SetItemText(0, 2, str_cccd);
	
	UpdateData(FALSE);
}


void Thongtinkhachhang::OnBnClickedBtnXoa()
{
	
		// xoa 1 thanh phan trong list control
		int nItem = -1; // biến dc gán 
		// vòng lặp những danh sách trong bảng 
		while ((nItem = list_thongtin.GetNextItem(nItem, LVNI_SELECTED)) != -1) // trừ từng cái 
		{
			if (list_thongtin.DeleteItem(nItem))
				nItem = nItem - 1;
		}
	
}

void Thongtinkhachhang::OnBnClickedXemthanhvien()
{
	Thanhviennhom TVN_Dlg;
	TVN_Dlg.DoModal();
}

CString H;
CString C;
CString S;
void Thongtinkhachhang::OnBnClickedBtnTinhtien()
{
	bool is_login = true;
	GetDlgItemText(IDC_EDIT_TEN, H);
	GetDlgItemText(IDC_EDIT_SDT, S);
	GetDlgItemText(IDC_EDIT_CCCD, C);
	Tienichphong tienich_dlg;
	tienich_dlg.DoModal();
}
