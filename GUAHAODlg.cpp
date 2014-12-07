// GUAHAODlg.cpp : implementation file
//

#include "stdafx.h"
#include "网络挂号mfc.h"
#include "GUAHAODlg.h"
#include "LOGDlg.h"
#include<iostream>
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
CString m_strnum6;
CString m_strnum7;
CString m_strnum8;

/////////////////////////////////////////////////////////////////////////////
// CGUAHAODlg dialog

CString m_strnum5;
CGUAHAODlg::CGUAHAODlg(CWnd* pParent /*=NULL*/)
	: CDialog(CGUAHAODlg::IDD, pParent)
{   
	//{{AFX_DATA_INIT(CGUAHAODlg)
	m_5 = _T("");
	m_7 = _T("");
	m_8 = _T("");
	m_9 = _T("");
	m_11 = _T("");
	m_12 = _T("");
	//}}AFX_DATA_INIT
	
}


void CGUAHAODlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CGUAHAODlg)
	DDX_Control(pDX, IDC_BUTTON4, m_10);
	DDX_Text(pDX, IDC_EDIT2, m_5);
	DDX_Text(pDX, IDC_EDIT3, m_7);
	DDX_Text(pDX, IDC_EDIT4, m_8);
	DDX_Text(pDX, IDC_EDIT5, m_9);
	DDX_Text(pDX, IDC_EDIT1, m_11);
	DDX_Text(pDX, IDC_EDIT6, m_12);
	//}}AFX_DATA_MAP
	GetDlgItem(IDC_RADIO7)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO8)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO9)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO3)->EnableWindow(FALSE);
	GetDlgItem(IDC_RADIO4)->EnableWindow(FALSE);
    GetDlgItem(IDC_RADIO5)->EnableWindow(FALSE);
}


BEGIN_MESSAGE_MAP(CGUAHAODlg, CDialog)
	//{{AFX_MSG_MAP(CGUAHAODlg)
	ON_EN_CHANGE(IDC_EDIT2, OnChangeEdit2)
	ON_BN_CLICKED(IDC_RADIO1, OnRadio1)
	ON_BN_CLICKED(IDC_RADIO2, OnRadio2)
	ON_BN_CLICKED(IDC_RADIO3, OnRadio3)
	ON_BN_CLICKED(IDC_RADIO4, OnRadio4)
	ON_BN_CLICKED(IDC_RADIO5, OnRadio5)
	ON_BN_CLICKED(IDC_RADIO7, OnRadio7)
	ON_BN_CLICKED(IDC_RADIO8, OnRadio8)
	ON_BN_CLICKED(IDC_RADIO9, OnRadio9)
	ON_EN_CHANGE(IDC_EDIT3, OnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, OnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT5, OnChangeEdit5)
	ON_BN_CLICKED(IDC_BUTTON4, OnButton4)
	ON_BN_CLICKED(IDC_BUTTON5, OnButton5)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT6, OnChangeEdit6)
	ON_NOTIFY(DTN_CLOSEUP, IDC_DATETIMEPICKER2, OnCloseupDatetimepicker2)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGUAHAODlg message handlers

/*void CGUAHAODlg::Onqueren() 
{
	// TODO: Add your control notification handler code here
	MessageBox("挂号成功!");
	CDialog::OnOK();
	CLOGDlg dlg;
	dlg.DoModal();
	
}*/


void CGUAHAODlg::OnChangeEdit2() 
{
	
}

void CGUAHAODlg::OnRadio1() 
{   GetDlgItem(IDC_RADIO3)->EnableWindow(true);
	GetDlgItem(IDC_RADIO4)->EnableWindow(true);
    GetDlgItem(IDC_RADIO5)->EnableWindow(true);
    GetDlgItem(IDC_RADIO7)->EnableWindow(FALSE);
    GetDlgItem(IDC_RADIO8)->EnableWindow(FALSE);
    GetDlgItem(IDC_RADIO9)->EnableWindow(FALSE);
}

void CGUAHAODlg::OnRadio2() 
{
	// TODO: Add your control notification handler code here
	GetDlgItem(IDC_RADIO7)->EnableWindow(true);
	GetDlgItem(IDC_RADIO8)->EnableWindow(true);
    GetDlgItem(IDC_RADIO9)->EnableWindow(true);
    GetDlgItem(IDC_RADIO3)->EnableWindow(FALSE);
    GetDlgItem(IDC_RADIO4)->EnableWindow(FALSE);
    GetDlgItem(IDC_RADIO5)->EnableWindow(FALSE);
}

void CGUAHAODlg::OnRadio3() 
{

	m_5="张三";
	m_7="上午8点到11点";
    UpdateData(false);
	m_8="李四";
	m_9="下午2点到5点";
	m_11="工作室201";
	m_12="工作室202";
    UpdateData(false);
}

void CGUAHAODlg::OnRadio4() 
{
	// TODO: Add your control notification handler code here
	m_5="王五";
	m_7="上午8点到11点";
    UpdateData(false);
	m_8="李三";
	m_9="下午2点到5点";
	m_11="工作室203";
	m_12="工作室204";
    UpdateData(false);
}

void CGUAHAODlg::OnRadio5() 
{
	m_5="吴学";
	m_7="上午8点到11点";
    UpdateData(false);
	m_8="杨建";
	m_9="下午2点到5点";
	m_11="工作室205";
	m_12="工作室206";
    UpdateData(false);// TODO: Add your control notification handler code here
	
}

void CGUAHAODlg::OnRadio7() 
{
	// TODO: Add your control notification handler code here
	m_5="王胜";
	m_7="上午8点到11点";
    UpdateData(false);
	m_8="谭国";
	m_9="下午2点到5点";
	m_11="工作室207";
	m_12="工作室208";
    UpdateData(false);
}

void CGUAHAODlg::OnRadio8() 
{
	// TODO: Add your control notification handler code here
	m_5="余阳";
	m_7="上午8点到11点";
    UpdateData(false);
	m_8="胡志";
	m_9="下午2点到5点";
	m_11="工作室209";
	m_12="工作室210";
    UpdateData(false);
}

void CGUAHAODlg::OnRadio9() 
{
	// TODO: Add your control notification handler code here
	m_5="岱山";
	m_7="上午8点到11点";
    UpdateData(false);
	m_8="常超";
	m_9="下午2点到5点";
	m_11="工作室211";
	m_12="工作室212";
    UpdateData(false);
}


void CGUAHAODlg::OnChangeEdit3() 
{

	
}

void CGUAHAODlg::OnChangeEdit4() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CGUAHAODlg::OnChangeEdit5() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CGUAHAODlg::OnButton4() 
{  
	FILE *fp;
	int i,j;
	char zhanghao[20],mima[20];
    UpdateData(TRUE);
	char* pFileName="bingli.txt";
	CStdioFile bingli;
	CFileException fileException;
	
	if((fp=fopen("yonghu.txt","r"))==NULL)
	{
		MessageBox("存储文件出错!");
		exit(0);
	}
	fscanf(fp,"%s %s",zhanghao,mima);
	  fclose(fp);
	  i=strlen(zhanghao);
	  j=strlen(mima);
	if(bingli.Open(pFileName,CFile::modeReadWrite |CFile::typeText))
	{  
		m_strnum6=m_5;
		m_strnum7=m_7;
		m_strnum8=m_11;
        bingli.SeekToEnd();
		bingli.Write(zhanghao,i);
		bingli.WriteString(" ");
		bingli.Write(mima,j);
		bingli.WriteString(" ");
		bingli.Write(m_strnum6,m_strnum6.GetLength());
		bingli.WriteString(" ");
		bingli.Write(m_strnum7,m_strnum7.GetLength());
		bingli.WriteString(" ");
		bingli.Write(m_strnum8,m_strnum8.GetLength());
		bingli.WriteString(" ");
		bingli.WriteString("\n");
		
		
	}
bingli.Close();
	MessageBox("挂号成功!");
	CDialog::OnOK();
	CLOGDlg dlg;
	dlg.DoModal();
}

void CGUAHAODlg::OnButton5() 
{
	FILE *fp;
	int i,j;
	char zhanghao[20],mima[20];
	UpdateData(TRUE);
	char* pFileName="bingli.txt";
	CStdioFile bingli;
	CFileException fileException;
	if((fp=fopen("yonghu.txt","r"))==NULL)
	{
	MessageBox("存储文件出错!");
	exit(0);
	}
	fscanf(fp,"%s %s",zhanghao,mima);
	fclose(fp);
	i=strlen(zhanghao);
	j=strlen(mima);
	if(bingli.Open(pFileName,CFile::modeReadWrite |CFile::typeText))
	{  
		m_strnum6=m_8;
		m_strnum7=m_9;
		m_strnum8=m_12;
		bingli.SeekToEnd();
		bingli.Write(zhanghao,i);
		bingli.WriteString(" ");
		bingli.Write(mima,j);
		bingli.WriteString(" ");
		bingli.Write(m_strnum6,m_strnum6.GetLength());
		bingli.WriteString(" ");
		bingli.Write(m_strnum7,m_strnum7.GetLength());
		bingli.WriteString(" ");
		bingli.Write(m_strnum8,m_strnum8.GetLength());
		bingli.WriteString(" ");
		bingli.WriteString("\n");
	
	
}
bingli.Close();
	MessageBox("挂号成功!");
	CDialog::OnOK();
	CLOGDlg dlg;
	dlg.DoModal();
}


void CGUAHAODlg::OnChangeEdit1() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CGUAHAODlg::OnChangeEdit6() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}



void CGUAHAODlg::OnCloseupDatetimepicker2(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	*pResult = 0;
}

void CGUAHAODlg::OnPaint() 
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
		bmpBackground.LoadBitmap(IDB_BITMAP6);   
		//IDB_BITMAP是你自己的图对应的ID   
		BITMAP   bitmap;   
		bmpBackground.GetBitmap(&bitmap);   
		CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
		dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
			bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   
		
	}
}
