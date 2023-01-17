#pragma once
#include "afxdialogex.h"


// Sodophong dialog

class Sodophong : public CDialogEx
{
	DECLARE_DYNAMIC(Sodophong)

public:
	Sodophong(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Sodophong();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SODOPHONG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnPhong1();
	afx_msg void OnBnClickedBtnPhong2();
	afx_msg void OnBnClickedBtnPhong3();
	afx_msg void OnBnClickedBtnPhong4();
	afx_msg void OnBnClickedBtnPhong5();
	afx_msg void OnBnClickedBtnPhong6();
	afx_msg void OnBnClickedBtnPhong7();
	afx_msg void OnBnClickedBtnPhong8();
	afx_msg void OnBnClickedBtnPhong9();
	afx_msg void OnBnClickedBtnPhong10();
};
