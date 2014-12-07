#if !defined(AFX_LOGDLG_H__34A6CB16_14EE_4508_BB8E_4C53133916F1__INCLUDED_)
#define AFX_LOGDLG_H__34A6CB16_14EE_4508_BB8E_4C53133916F1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// LOGDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CLOGDlg dialog

class CLOGDlg : public CDialog
{
// Construction
public:
	CLOGDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CLOGDlg)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CLOGDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CLOGDlg)
	afx_msg void Onguahao();
	afx_msg void Onchaxun();
	afx_msg void Onagainlog();
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LOGDLG_H__34A6CB16_14EE_4508_BB8E_4C53133916F1__INCLUDED_)
