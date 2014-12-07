// ÍøÂç¹ÒºÅmfcDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ÍøÂç¹ÒºÅmfc.h"
#include "ÍøÂç¹ÒºÅmfcDlg.h"
#include "LOGDlg.h"
#include "ZHUCEDlg.h"
#include "ºÍ.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMfcDlg dialog

CMfcDlg::CMfcDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMfcDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMfcDlg)
	m_1 = _T("");
	m_2 = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMfcDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMfcDlg)
	DDX_Text(pDX, IDC_EDIT1, m_1);
	DDX_Text(pDX, IDC_EDIT2, m_2);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMfcDlg, CDialog)
	//{{AFX_MSG_MAP(CMfcDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, Onlog)
	ON_BN_CLICKED(IDC_BUTTON2, Oninsert)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMfcDlg message handlers

BOOL CMfcDlg::OnInitDialog()
{
	CDialog::OnInitDialog();
    
	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMfcDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMfcDlg::OnPaint() 
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
		bmpBackground.LoadBitmap(IDB_BITMAP1);   
		//IDB_BITMAPÊÇÄã×Ô¼ºµÄÍ¼¶ÔÓ¦µÄID   
		BITMAP   bitmap;   
		bmpBackground.GetBitmap(&bitmap);   
		CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
		dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
			bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   
		
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMfcDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CMfcDlg::Onlog()                 //µÇÂ¼½çÃæ£¬¼ì²éÕËºÅ¡¢ÃÜÂë£¬£¬È»ºóÌø×ª
{  
	char zhanghao[20],mima[20];   
	FILE *fp;
	GetDlgItem(IDC_EDIT1)->GetWindowText(zhanghao,20);
	GetDlgItem(IDC_EDIT2)->GetWindowText(mima,20);

	if(checkusers(zhanghao,mima)==1)
	{
	 CDialog::OnOK(); 
     CLOGDlg dlg;
 
	 if((fp=fopen("yonghu.txt","w"))==NULL)
	 {
		 MessageBox("´æ´¢ÎÄ¼þ³ö´í!");
		 exit(0);
	 }
	  fprintf(fp,"%s %s\n",zhanghao,mima);
	  fclose(fp);
	 dlg.DoModal();
	}
	else
	{
		AfxMessageBox("ÕËºÅ»òÃÜÂë´íÎó£¬ÇëÖØÐÂÊäÈë£¡");
		/*CDialog::OnOK();
			CMfcDlg dlg1;
			dlg1.DoModal();*/
		GetDlgItem(IDC_EDIT1)->SetWindowText("");
	    GetDlgItem(IDC_EDIT2)->SetWindowText("");	
	}
	
}

void CMfcDlg::Oninsert() 
{
	

	//CDialog::OnOK(); 
	CZHUCEDlg dlg;
	 dlg.DoModal();
}

void CMfcDlg::OnChangeEdit1() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}
