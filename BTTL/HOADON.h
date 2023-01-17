#pragma once
#include "afxdialogex.h"
#include<cstring>



// HOADON dialog

class HOADON : public CDialogEx
{
	DECLARE_DYNAMIC(HOADON)

public:
	HOADON(CWnd* pParent = nullptr);   // standard constructor
	virtual ~HOADON();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_XACNHAN };
#endif

protected:
	virtual BOOL OnInitDialog();
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	CEdit edit_xacnhan_hoten;
	CEdit edit_xacnhan_sdt;
	CEdit edit_xacnhan_cccd;
	CEdit edit_tong_hoadon;
	DECLARE_MESSAGE_MAP()
public:
	
	afx_msg void OnEnChangeEditSdt();
	afx_msg void OnBnClickedButton1();
};
