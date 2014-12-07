#if !defined(AFX_GUAHAODLG_H__863FFCB3_935B_4997_B3AB_57EDC7823F18__INCLUDED_)
#define AFX_GUAHAODLG_H__863FFCB3_935B_4997_B3AB_57EDC7823F18__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// GUAHAODlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CGUAHAODlg dialog

class CGUAHAODlg : public CDialog
{
// Construction
public:
	CGUAHAODlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CGUAHAODlg)
	enum { IDD = IDD_DIALOG2 };
	CButton	m_10;
	CButton	m_6;
	CComboBox	m_libei;
	CComboBox	m_keshi;
	CString	m_5;
	CString	m_7;
	CString	m_8;
	CString	m_9;
	CString	m_11;
	CString	m_12;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGUAHAODlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CGUAHAODlg)
	afx_msg void OnChangeEdit2();
	afx_msg void OnRadio1();
	afx_msg void OnRadio2();
	afx_msg void OnRadio3();
	afx_msg void OnRadio4();
	afx_msg void OnRadio5();
	afx_msg void OnRadio7();
	afx_msg void OnRadio8();
	afx_msg void OnRadio9();
	afx_msg void OnChangeEdit3();
	afx_msg void OnChangeEdit4();
	afx_msg void OnChangeEdit5();
	afx_msg void OnButton4();
	afx_msg void OnButton5();
	afx_msg void OnChangeEdit1();
	afx_msg void OnChangeEdit6();
	afx_msg void OnCloseupDatetimepicker2(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GUAHAODLG_H__863FFCB3_935B_4997_B3AB_57EDC7823F18__INCLUDED_)
