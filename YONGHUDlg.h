#if !defined(AFX_YONGHUDLG_H__B97715C9_9B0A_4D1F_BC9A_9A3C037B5947__INCLUDED_)
#define AFX_YONGHUDLG_H__B97715C9_9B0A_4D1F_BC9A_9A3C037B5947__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// YONGHUDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CYONGHUDlg dialog

class CYONGHUDlg : public CDialog
{
// Construction
public:
	CYONGHUDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CYONGHUDlg)
	enum { IDD = IDD_DIALOG6 };
	CString	m_0;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CYONGHUDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CYONGHUDlg)
	afx_msg void OnChangeEdit1();
	afx_msg void OnButton1();
	afx_msg void OnCloseupDatetimepicker1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
		LPCSTR str0;
	char * str1;
	LPCTSTR m_5;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YONGHUDLG_H__B97715C9_9B0A_4D1F_BC9A_9A3C037B5947__INCLUDED_)
