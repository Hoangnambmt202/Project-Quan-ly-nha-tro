
// BTTLDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "BTTL.h"
#include "BTTLDlg.h"
#include "afxdialogex.h"
#include "Sodophong.h"



#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CBTTLDlg dialog



CBTTLDlg::CBTTLDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_BTTL_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CBTTLDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1_name, edit_user_name_);
	DDX_Control(pDX, IDC_EDIT2_pass, edit_password_);
	DDX_Control(pDX, IDC_BUTTON1_dn, edit_dn_);
	
}

BEGIN_MESSAGE_MAP(CBTTLDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1_dn, &CBTTLDlg::OnBnClickedButton1dn)
	
END_MESSAGE_MAP()


// CBTTLDlg message handlers

BOOL CBTTLDlg::OnInitDialog()
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
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	


	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CBTTLDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CBTTLDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CBTTLDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CBTTLDlg::OnBnClickedButton1dn()
{
	UpdateData(TRUE);
	// cài đặt tài khoản mật khẩu cho dialog đăng nhập
	CString user_str = _T("Admin");
	CString pass_str = _T("123456");


	CString input_name;
	CString input_pass;
	// nhập thông tin rồi lưu vào biến input
	edit_user_name_.GetWindowText(input_name);
	edit_password_.GetWindowText(input_pass);

		// khi ấn đăng nhập sẽ chạy qua dialog phụ
		bool is_login = false;

		if (input_name.Compare(user_str) == 0)
		{
			if (input_pass.Compare(pass_str) == 0)
			{
				is_login = true;
			}
		}
		if (is_login)
		{

			// tạo 1 class cho dialog phụ rồi gọi class trong (cần include class phụ) đây để chạy
			Sodophong sodophong_dlg;
			sodophong_dlg.DoModal();
		}
		else
		{
			// khi ghi sai mật khẩu chạy 1 thông báo lỗi
			MessageBox(_T("Lỗi đăng nhập ! Vui lòng nhập lại !"), _T("ERROR"), MB_OK | MB_ICONERROR);
			if (input_pass == "")
			{
				CWnd* pWnd;
				pWnd = GetDlgItem(IDC_EDIT2_pass);
				pWnd->SetFocus();
				return;
			}
			
		}
		
		UpdateData(FALSE);
	
}
