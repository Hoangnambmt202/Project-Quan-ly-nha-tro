// Tienphong.cpp : implementation file
//

#include "pch.h"
#include "BTTL.h"
#include "afxdialogex.h"
#include "Tienphong.h"
#include "Tienichphong.h"
#include "BTTLDlg.h"
#include <math.h>
#include "MONEY.h"
#include "Khachhang.h"
#include "HOADON.h"
#include <stdlib.h>
#include "LUUFILE.h"
using namespace std;


// Tienphong dialog

IMPLEMENT_DYNAMIC(Tienphong, CDialogEx)

Tienphong::Tienphong(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_TINHTIEN, pParent)
	
{

}

Tienphong::~Tienphong()
{

}

void Tienphong::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_GIAPHONG, giaphong);
	DDX_Control(pDX, IDC_EDIT_TIENDIEN, tiendien);
	DDX_Control(pDX, IDC_EDIT_TIENNUOC, tiennuoc);
	DDX_Control(pDX, IDC_EDIT_TONG, tong);
	

}
BOOL Tienphong::OnInitDialog()
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
		// Set small icon

	// TODO: Add extra initialization here
	extern CString d;
	extern CString n;
	SetDlgItemText(IDC_EDIT_TIENDIEN, d);
	SetDlgItemText(IDC_EDIT_TIENNUOC, n);
	return TRUE;
}

BEGIN_MESSAGE_MAP(Tienphong, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_XACNHAN, &Tienphong::OnBnClickedBtnXacnhan)
	ON_BN_CLICKED(IDC_BTN_TONG, &Tienphong::OnBnClickedBtnTong)
	ON_BN_CLICKED(IDC_BTN_TROVE, &Tienphong::OnBnClickedBtnTrove)
END_MESSAGE_MAP()



CString tien;

void Tienphong::OnBnClickedBtnXacnhan()
{

	HOADON Hoadon_dlg;
	Hoadon_dlg.DoModal();
	
}
   
void Tienphong::OnBnClickedBtnTong()
{
	UpdateData(TRUE);
	// Tienphong message handlers
	
	CString tiendien;
	CString tiennuoc;
	CString tienphong;
	
	extern CString d;
	extern CString n;
	
	int dien = _tstoi(d);
	int nuoc = _tstoi(n);
	
	CString tt = _T("");
	giaphong.SetWindowText(_T("700,000/Thang"));
	MONEY tienbac; 
	int tienphong2 = 700000;
	int kq = 0;
	
	kq = tienbac.phiphong(dien,nuoc,tienphong2);
	tien.Format(_T("%d"), kq);
	SetDlgItemText(IDC_EDIT_TONG,tien);
	UpdateData(FALSE);
}


void Tienphong::OnBnClickedBtnTrove()
{
	Tienichphong dlg;
	dlg.DoModal();
}
