// ÍøÂç¹ÒºÅmfc.h : main header file for the ÍøÂç¹ÒºÅMFC application
//

#if !defined(AFX_MFC_H__240F811D_8D38_4FFC_BB29_3D711D1E015B__INCLUDED_)
#define AFX_MFC_H__240F811D_8D38_4FFC_BB29_3D711D1E015B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMfcApp:
// See ÍøÂç¹ÒºÅmfc.cpp for the implementation of this class
//

class CMfcApp : public CWinApp
{
public:
	CMfcApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMfcApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMfcApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFC_H__240F811D_8D38_4FFC_BB29_3D711D1E015B__INCLUDED_)
