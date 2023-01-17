#pragma once
#include "afxdialogex.h"
#include"Sodophong.h"


// Thongtinkhachhang dialog

class Thongtinkhachhang : public CDialogEx
{
	DECLARE_DYNAMIC(Thongtinkhachhang)

public:
	Thongtinkhachhang(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Thongtinkhachhang();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_THONGTINKHACH };
#endif

protected:
	
	
public:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();
	DECLARE_MESSAGE_MAP()
	CEdit edit_ten;
	CEdit edit_sdt;
	CEdit edit_cccd;
	CListCtrl list_thongtin;
	afx_msg void OnBnClickedBtnDangky();
	afx_msg void OnBnClickedBtnXoa();
	afx_msg void OnBnClickedBtnLuu();
	afx_msg void OnBnClickedXemthanhvien();
	afx_msg void OnBnClickedBtnTinhtien();
	CString ht;
	CString sdt;
	CString cccd;
};



