// Tienichphong.cpp : implementation file
//

#include "pch.h"
#include "BTTL.h"
#include "afxdialogex.h"
#include "Tienichphong.h"
#include "Tienphong.h"
#include "Khachhang.h"



// Tienichphong dialog

IMPLEMENT_DYNAMIC(Tienichphong, CDialogEx)

Tienichphong::Tienichphong(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG_TIENICH, pParent)
	, dien_(_T(""))
	, nuoc_(_T(""))
{

}

Tienichphong::~Tienichphong()
{
}

void Tienichphong::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT_DIEN, edit_dien);
	DDX_Control(pDX, IDC_EDIT_NUOC, edit_nuoc);
	DDX_Text(pDX, IDC_EDIT_DIEN, dien_);
	DDX_Text(pDX, IDC_EDIT_NUOC, nuoc_);

}


BEGIN_MESSAGE_MAP(Tienichphong, CDialogEx)
	ON_BN_CLICKED(IDC_BTN_THEMCHISO, &Tienichphong::OnBnClickedBtnThemchiso)
END_MESSAGE_MAP()


// Tienichphong message handlers
CString d;
CString n;


void Tienichphong::OnBnClickedBtnThemchiso()
{
	bool is_login = true;
	GetDlgItemText(IDC_EDIT_DIEN, d);
	GetDlgItemText(IDC_EDIT_NUOC, n);
	Tienphong dlg;
	dlg.DoModal();
}
