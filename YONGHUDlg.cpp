// YONGHUDlg.cpp : implementation file
//

#include "stdafx.h"
#include "网络挂号mfc.h"
#include "YONGHUDlg.h"
//#include "和.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CYONGHUDlg dialog


CYONGHUDlg::CYONGHUDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CYONGHUDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CYONGHUDlg)
	m_0 = _T("");
	//}}AFX_DATA_INIT
}


void CYONGHUDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CYONGHUDlg)
	DDX_Text(pDX, IDC_EDIT1, m_0);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CYONGHUDlg, CDialog)
	//{{AFX_MSG_MAP(CYONGHUDlg)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
//	ON_NOTIFY(DTN_CLOSEUP, IDC_DATETIMEPICKER1, OnCloseupDatetimepicker1)
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CYONGHUDlg message handlers

void CYONGHUDlg::OnChangeEdit1() 
{


	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	

	
}

void CYONGHUDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	FILE*fp;
	int i,j,k=0;
	char zhanghao[20],mima[20],name[20],ID[20],pl[50],time[50],doctor[20],z[20],m[20],o[20],p[20];
	if((fp=fopen("yonghu.txt","r"))==NULL)
	{
		MessageBox("存储文件出错!");
		exit(0);
	}
	fscanf(fp,"%s %s",z,m);
	fclose(fp);
	if((fp=fopen("user.txt","r"))==NULL)
	{
		MessageBox("存储文件出错!");
		exit(0);
	}
	while(!feof(fp))
	{
		fscanf(fp,"%s %s %s %s",zhanghao,mima,name,ID);
		i=strcmp(z,zhanghao);
		j=strcmp(m,mima);
		if(i==0&&j==0)
		{
			//fclose(fp);
			break;
		}
	}
	fclose(fp);
	m_0="用户账号：";
	m_0+=zhanghao;
    m_0+="\r\n用户密码：";
	m_0+=mima;
	m_0+="\r\n用户姓名：";
	m_0+=name;
	m_0+="\r\n身份证号：";
	m_0+=ID;
	m_0+="\r\n病例信息：";
	if((fp=fopen("bingli.txt","r"))==NULL)
	{
		MessageBox("存储文件出错!");
		exit(0);
	}
	while(!feof(fp))
	{
		fscanf(fp,"%s %s %s %s %s",o,p,doctor,time,pl);
		i=strcmp(z,o);
		j=strcmp(m,p);
		if (!feof(fp)==0)
		{
			break;
		}
		if(i==0&&j==0)
		{
			m_0+="\r\n医生姓名：";
			m_0+=doctor;
			m_0+="  工作时间：";
			m_0+=time;
			m_0+="  工作地点:";
			m_0+=pl;
			k++;
			continue;
		}
	}
	if(k==0)
	{
		m_0+="暂无病例信息";
	}
	fclose(fp);
	GetDlgItem(IDC_EDIT1)->SetWindowText(m_0);
}

void CYONGHUDlg::OnCloseupDatetimepicker1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	
	*pResult = 0;
}

void CYONGHUDlg::OnPaint() 
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
		bmpBackground.LoadBitmap(IDB_BITMAP7);   
		//IDB_BITMAP是你自己的图对应的ID   
		BITMAP   bitmap;   
		bmpBackground.GetBitmap(&bitmap);   
		CBitmap   *pbmpOld=dcMem.SelectObject(&bmpBackground);   
		dc.StretchBlt(0,0,rect.Width(),rect.Height(),&dcMem,0,0,   
			bitmap.bmWidth,bitmap.bmHeight,SRCCOPY);   
		
	}
}
