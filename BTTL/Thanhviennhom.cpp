// Thanhviennhom.cpp : implementation file
//

#include "pch.h"
#include "BTTL.h"
#include "afxdialogex.h"
#include "Thanhviennhom.h"


// Thanhviennhom dialog

IMPLEMENT_DYNAMIC(Thanhviennhom, CDialogEx)

Thanhviennhom::Thanhviennhom(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_THANHVIENNHOM, pParent)
{

}

Thanhviennhom::~Thanhviennhom()
{
}

void Thanhviennhom::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(Thanhviennhom, CDialogEx)

	ON_BN_CLICKED(IDC_PIC_CTROL, &Thanhviennhom::OnBnClickedPicCtrol)
END_MESSAGE_MAP()


// Thanhviennhom message handlers





void Thanhviennhom::OnBnClickedPicCtrol()
{
	// Lay hinh vua khuon voi  picture box
	CStatic* picturebox = (CStatic*)(GetDlgItem)(IDC_PIC_THANHVIEN);
	CRect rect;
	picturebox->GetClientRect(rect);
	// tao 1 CCLientDC cho picture box
	CClientDC dc(picturebox);
	// chay anh vao trong lớp CImage
	CImage image;
	image.Load(L"C:\\anhtv.jpg");
	// chay anh vao trong 1 lop CBitMap
	CBitmap m_bitmap;
	m_bitmap.Attach(image.Detach());
	// tao 1 CDC để chay bitmap
	CDC memoryDC;
	memoryDC.CreateCompatibleDC(&dc);
	// them Cbitmap vao memoryDC 
	memoryDC.SelectObject(m_bitmap);
	// lay kich thuoc cho m_bitmap
	BITMAP bmp;
	m_bitmap.GetBitmap(&bmp);
	// cai dat do dai, rong, chieu dai, cao va mau sac
	dc.SetStretchBltMode(COLORONCOLOR);
	dc.StretchBlt(rect.left, rect.top, rect.Width(), rect.Height(), &memoryDC, 0, 0, bmp.bmWidth, bmp.bmHeight, SRCCOPY);
}
