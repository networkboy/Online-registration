// LOGDlg.cpp : implementation file
//

#include "stdafx.h"
#include "网络挂号mfc.h"
#include "LOGDlg.h"
#include "GUAHAODlg.h"
#include "CHAXUNDlg.h"
#include "网络挂号mfcDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CLOGDlg dialog


CLOGDlg::CLOGDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CLOGDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CLOGDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CLOGDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CLOGDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CLOGDlg, CDialog)
	//{{AFX_MSG_MAP(CLOGDlg)
	ON_BN_CLICKED(IDC_BUTTON1, Onguahao)
	ON_BN_CLICKED(IDC_BUTTON3, Onchaxun)
	ON_BN_CLICKED(IDC_BUTTON2, Onagainlog)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CLOGDlg message handlers



void CLOGDlg::Onguahao() 
{   
	// TODO: Add your control notification handler code here
	//CDialog::OnOK();
	CGUAHAODlg dlg;
	dlg.DoModal();

	
}

void CLOGDlg::Onchaxun() 
{
	// TODO: Add your control notification handler code here
	CCHAXUNDlg dlg;
	dlg.DoModal();
	
	
}

void CLOGDlg::Onagainlog() 
{
	// TODO: Add your control notification handler code here
	CDialog::OnOK();
	CMfcDlg dlg;
	dlg.DoModal();
	
}



void CLOGDlg::OnPaint() 
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
		bmpBackground.LoadBitmap(IDB_BITMAP2);   
		//IDB_BITMAP是你自己的图对应的ID   
		BITMAP   bitmap;   
		bmpBackground.GetBitmap(&bitmap);   
		CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
		dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
			bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   
		
	}
}
