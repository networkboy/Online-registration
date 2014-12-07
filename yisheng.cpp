// yisheng.cpp : implementation file
//
#include "stdafx.h"
#include "网络挂号mfc.h"
#include "yisheng.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// yisheng dialog


yisheng::yisheng(CWnd* pParent /*=NULL*/)
	: CDialog(yisheng::IDD, pParent)
{
	//{{AFX_DATA_INIT(yisheng)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void yisheng::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(yisheng)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(yisheng, CDialog)
	//{{AFX_MSG_MAP(yisheng)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// yisheng message handlers


	



void yisheng::OnPaint() 
{
	if (IsIconic())
{
	CPaintDC dc(this); // device context for painting
	
	SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);
	
	// Center icon in client rectangle
	int cxIcon = GetSystemMetrics(SM_CXICON);
	int cyIcon = GetSystemMetrics(SM_CYICON);
	CRect rect;
	GetClientRect(&rect);
	int x = (rect.Width() - cxIcon + 1) / 2;
	int y = (rect.Height() - cyIcon + 1) / 2;
	
	// Draw the icon
	//	dc.DrawIcon(x, y, m_hIcon);
}
else
{
	CPaintDC   dc(this);   
	CRect   rect;   
	GetClientRect(&rect);   
	CDC   dcMem;   
	dcMem.CreateCompatibleDC(&dc);   
	CBitmap   bmpBackground;   
	bmpBackground.LoadBitmap(IDB_BITMAP4);   
	//IDB_BITMAP是你自己的图对应的ID   
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
		bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   
	
	}
}
