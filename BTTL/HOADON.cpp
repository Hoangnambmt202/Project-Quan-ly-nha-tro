// HOADON.cpp : implementation file
//

#include "pch.h"
#include "BTTL.h"
#include "afxdialogex.h"
#include "HOADON.h"
#include "Tienphong.h"
#include "Thongtinkhachhang.h"
#include "LUUFILE.h"
using namespace std;

// HOADON dialog

IMPLEMENT_DYNAMIC(HOADON, CDialogEx)

HOADON::HOADON(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_XACNHAN, pParent)
{

}

HOADON::~HOADON()
{
}

void HOADON::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_HOTEN, edit_xacnhan_hoten);
	DDX_Control(pDX, IDC_EDIT_SDT, edit_xacnhan_sdt);
	DDX_Control(pDX, IDC_EDIT_CCCD, edit_xacnhan_cccd);
	DDX_Control(pDX, IDC_EDIT_TONGHOADON, edit_tong_hoadon);
	
}
BOOL HOADON::OnInitDialog()
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
	
	extern CString H;
	extern CString C;
	extern CString S;
	extern CString tien;
	SetDlgItemText(IDC_EDIT_TONGHOADON, tien);
	SetDlgItemText(IDC_EDIT_HOTEN, H);
	SetDlgItemText(IDC_EDIT_SDT, S);
	SetDlgItemText(IDC_EDIT_CCCD, C);
	UpdateData(FALSE);
	return TRUE;
}



BEGIN_MESSAGE_MAP(HOADON, CDialogEx)
	ON_EN_CHANGE(IDC_EDIT_SDT, &HOADON::OnEnChangeEditSdt)
	ON_BN_CLICKED(IDC_BUTTON1, &HOADON::OnBnClickedButton1)
END_MESSAGE_MAP()


// HOADON message handlers
extern CString H;
extern CString C;
extern CString S;
extern CString tien;

void HOADON::OnEnChangeEditSdt()
{
	
}


void HOADON::OnBnClickedButton1()
{
	bool is_login = true;
	SetDlgItemText(IDC_EDIT_TONGHOADON, tien);
	SetDlgItemText(IDC_EDIT_HOTEN, H);
	SetDlgItemText(IDC_EDIT_SDT, S);
	SetDlgItemText(IDC_EDIT_CCCD, C);
	UpdateData();
	CString saveedit = H;
	CString saveedit1 = S;
	CString saveedit2 = C;
	CString saveedit3 = tien;

	CT2CA ht(saveedit);
	CT2CA sdt(saveedit1);
	CT2CA cccd(saveedit2);
	CT2CA tien(saveedit3);
	

	std::string strsaveedit(ht);
	std::string strsaveedit1(sdt);
	std::string strsaveedit2(cccd);
	std::string strsaveedit3(tien);
	

	LUUFILE svl;
	svl.luuf(strsaveedit, strsaveedit1, strsaveedit2, strsaveedit3);
}


