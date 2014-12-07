// ZHUCEDlg.cpp : implementation file
//

#include "stdafx.h"
#include "网络挂号mfc.h"
#include "ZHUCEDlg.h"
#include "网络挂号mfcDlg.h"
#include<iostream>
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CZHUCEDlg dialog

CString m_strnum1;
CString m_strnum2;
CString m_strnum3;
CString m_strnum4;
CZHUCEDlg::CZHUCEDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CZHUCEDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CZHUCEDlg)
	m_1 = _T("");
	m_2 = _T("");
	m_3 = _T("");
	m_4 = _T("");
	//}}AFX_DATA_INIT
}


void CZHUCEDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CZHUCEDlg)
	DDX_Text(pDX, IDC_EDIT77, m_1);
	DDX_Text(pDX, IDC_EDIT78, m_2);
	DDX_Text(pDX, IDC_EDIT79, m_3);
	DDX_Text(pDX, IDC_EDIT80, m_4);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CZHUCEDlg, CDialog)
	//{{AFX_MSG_MAP(CZHUCEDlg)
	ON_BN_CLICKED(IDC_BUTTON1, Oninsertsuccess)
	ON_EN_CHANGE(IDC_EDIT77, OnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT78, OnChangeEdit2)
	ON_EN_CHANGE(IDC_EDIT79, OnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT80, OnChangeEdit3)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CZHUCEDlg message handlers

void CZHUCEDlg::Oninsertsuccess() 
{
	// TODO: Add your control notification handler code here
UpdateData(TRUE);
char* pFileName="user.txt";
FILE *fp;
char zhanghao1[20],zhanghao[20],mima[20],name[20],ID[20];
int i;
CStdioFile user;
CFileException fileException;

if(!GetDlgItem(IDC_EDIT77)->GetWindowText(zhanghao1,20))
{
	MessageBox("获取数据出现错误");
	exit(0);
}
if((fp=fopen("user.txt","r"))==NULL)
{
	MessageBox("打开文件出错");
	exit(0);
}
while(!feof(fp))
{
	fscanf(fp,"%s %s %s %s %s",zhanghao,mima,name,ID);
	i=strcmp(zhanghao1,zhanghao);
	if(i==0)
	{
		MessageBox("此账号已被注册，请重新输入");
		
		GetDlgItem(IDC_EDIT77)->SetWindowText("");
		GetDlgItem(IDC_EDIT78)->SetWindowText("");
		GetDlgItem(IDC_EDIT79)->SetWindowText("");
		GetDlgItem(IDC_EDIT80)->SetWindowText("");
	}
}
	fclose(fp);
if(i!=0)
{

if(user.Open(pFileName,CFile::modeReadWrite |CFile::typeText))
{  
	m_strnum1=m_1;
    m_strnum2=m_2;
    m_strnum3=m_3;
    m_strnum4=m_4;
user.SeekToEnd();
user.Write(m_strnum1,m_strnum1.GetLength());
user.WriteString(" ");
user.Write(m_strnum2,m_strnum2.GetLength());
user.WriteString(" ");
user.Write(m_strnum3,m_strnum3.GetLength());
user.WriteString(" ");
user.Write(m_strnum4,m_strnum4.GetLength());
user.WriteString("\n");


}
user.Close();
	MessageBox("注册成功!");
	CDialog::OnOK(); 
	CMfcDlg dlg;
	 dlg.DoModal();

   UpdateData(false);
}  
   
}

void CZHUCEDlg::OnChangeEdit1() 
{   
    
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CZHUCEDlg::OnChangeEdit2() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CZHUCEDlg::OnChangeEdit4() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CZHUCEDlg::OnChangeEdit3() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CZHUCEDlg::OnPaint() 
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
	bmpBackground.LoadBitmap(IDB_BITMAP5);   
	//IDB_BITMAP是你自己的图对应的ID   
	BITMAP   bitmap;   
	bmpBackground.GetBitmap(&bitmap);   
	CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
	dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
		bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   
	
	}
}
