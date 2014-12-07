#if !defined(AFX_CHAXUNDLG_H__EE4A1287_B957_4093_A1E9_B8ABC3EDEE28__INCLUDED_)
#define AFX_CHAXUNDLG_H__EE4A1287_B957_4093_A1E9_B8ABC3EDEE28__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CHAXUNDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCHAXUNDlg dialog

class CCHAXUNDlg : public CDialog
{
// Construction
public:
	CCHAXUNDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CCHAXUNDlg)
	enum { IDD = IDD_DIALOG3 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCHAXUNDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCHAXUNDlg)
	afx_msg void OnButton2();
	afx_msg void OnPaint();
	afx_msg void Onuser_chaxun();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHAXUNDLG_H__EE4A1287_B957_4093_A1E9_B8ABC3EDEE28__INCLUDED_)
