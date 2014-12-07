// CHAXUNDlg.cpp : implementation file
//

#include "stdafx.h"
#include "网络挂号mfc.h"
#include "CHAXUNDlg.h"
#include "yisheng.h"
#include "YONGHUDlg.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCHAXUNDlg dialog


CCHAXUNDlg::CCHAXUNDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCHAXUNDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCHAXUNDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CCHAXUNDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCHAXUNDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCHAXUNDlg, CDialog)
	//{{AFX_MSG_MAP(CCHAXUNDlg)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	ON_WM_PAINT()
	ON_BN_CLICKED(IDC_BUTTON1, Onuser_chaxun)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCHAXUNDlg message handlers

void CCHAXUNDlg::OnButton2() 
{
	CDialog::OnOK(); 
	yisheng dlg;
	 dlg.DoModal();
}



void CCHAXUNDlg::OnPaint() 
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
		bmpBackground.LoadBitmap(IDB_BITMAP3);   
		//IDB_BITMAP是你自己的图对应的ID   
		BITMAP   bitmap;   
		bmpBackground.GetBitmap(&bitmap);   
		CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
		dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
			bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   
		
	}
}

void CCHAXUNDlg::Onuser_chaxun() 
{
	//CDialog::OnOK(); 
	CYONGHUDlg dlg;
	 dlg.DoModal();
	
}
