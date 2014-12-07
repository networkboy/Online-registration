// ÍøÂç¹ÒºÅmfcDlg.h : header file
//

#if !defined(AFX_MFCDLG_H__1956A4F1_6EBE_4B21_A9BD_5F78D4612D40__INCLUDED_)
#define AFX_MFCDLG_H__1956A4F1_6EBE_4B21_A9BD_5F78D4612D40__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMfcDlg dialog

class CMfcDlg : public CDialog
{
// Construction
public:
	CMfcDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMfcDlg)
	enum { IDD = IDD_MFC_DIALOG };
	CString	m_1;
	CString	m_2;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMfcDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMfcDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void Onlog();
	afx_msg void Oninsert();
	afx_msg void OnChangeEdit1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCDLG_H__1956A4F1_6EBE_4B21_A9BD_5F78D4612D40__INCLUDED_)
