#if !defined(AFX_ZHUCEDLG_H__FC431EB9_8792_4281_A998_4D84144069BE__INCLUDED_)
#define AFX_ZHUCEDLG_H__FC431EB9_8792_4281_A998_4D84144069BE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ZHUCEDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CZHUCEDlg dialog

class CZHUCEDlg : public CDialog
{
// Construction
public:
	CZHUCEDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CZHUCEDlg)
	enum { IDD = IDD_DIALOG4 };
	CString	m_1;
	CString	m_2;
	CString	m_3;
	CString	m_4;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CZHUCEDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CZHUCEDlg)
	afx_msg void Oninsertsuccess();
	afx_msg void OnChangeEdit1();
	afx_msg void OnChangeEdit2();
	afx_msg void OnChangeEdit4();
	afx_msg void OnChangeEdit3();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ZHUCEDLG_H__FC431EB9_8792_4281_A998_4D84144069BE__INCLUDED_)
