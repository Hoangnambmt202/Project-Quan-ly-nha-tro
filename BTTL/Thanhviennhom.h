#pragma once
#include "afxdialogex.h"


// Thanhviennhom dialog

class Thanhviennhom : public CDialogEx
{
	DECLARE_DYNAMIC(Thanhviennhom)

public:
	Thanhviennhom(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Thanhviennhom();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_THANHVIENNHOM };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedPicCtrol();
};
