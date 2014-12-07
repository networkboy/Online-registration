#if !defined(AFX_YISHENG_H__E644143D_D04B_4647_9916_964B931A6946__INCLUDED_)
#define AFX_YISHENG_H__E644143D_D04B_4647_9916_964B931A6946__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// yisheng.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// yisheng dialog

class yisheng : public CDialog
{
// Construction
public:
	yisheng(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(yisheng)
	enum { IDD = IDD_DIALOG5 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(yisheng)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(yisheng)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_YISHENG_H__E644143D_D04B_4647_9916_964B931A6946__INCLUDED_)
