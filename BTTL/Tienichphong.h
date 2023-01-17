#pragma once
#include "afxdialogex.h"



// Tienichphong dialog

class Tienichphong : public CDialogEx
{
	DECLARE_DYNAMIC(Tienichphong)

public:
	Tienichphong(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Tienichphong();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG_TIENICH };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:
	afx_msg void OnBnClickedBtnThemchiso();
	CEdit edit_dien;
	CEdit edit_nuoc;
	CString dien_;
	CString nuoc_;
};
