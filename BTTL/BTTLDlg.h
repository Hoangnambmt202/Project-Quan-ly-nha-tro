
// BTTLDlg.h : header file
//

#pragma once


// CBTTLDlg dialog
class CBTTLDlg : public CDialogEx
{
// Construction
public:
	CBTTLDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BTTL_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtn_picthanhvien();
	CEdit edit_user_name_;
	CEdit edit_password_;
	CButton edit_dn_;
	afx_msg void OnBnClickedButton1dn();
	


};
