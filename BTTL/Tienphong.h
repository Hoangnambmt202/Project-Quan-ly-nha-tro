#pragma once
#include "afxdialogex.h"
#include"Tienichphong.h"
#include "Khachhang.h"


// Tienphong dialog

class Tienphong : public CDialogEx
{

	
	DECLARE_DYNAMIC(Tienphong)

public:
	Tienphong(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Tienphong();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_TINHTIEN };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

	
protected:
	virtual BOOL OnInitDialog();
	CEdit giaphong;
	CEdit tiendien;
	CEdit tiennuoc;
	CEdit tong;
public:
	afx_msg void OnBnClickedBtnXacnhan();
	afx_msg void OnBnClickedBtnTong();
	CString xacnhantien;
	afx_msg void OnBnClickedBtnTrove();
};

