// Identify_SIMD.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Identify_SIMD.h"
#include "Identify_SIMDDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CIdentify_SIMDApp

BEGIN_MESSAGE_MAP(CIdentify_SIMDApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CIdentify_SIMDApp construction

CIdentify_SIMDApp::CIdentify_SIMDApp()
{
	// Initialize GDI+.
	Gdiplus::GdiplusStartup(&m_gdiplusToken, &m_gdiplusStartupInput, NULL);
}

CIdentify_SIMDApp::~CIdentify_SIMDApp()
{
	// Shutdown GDI+.
	Gdiplus::GdiplusShutdown(m_gdiplusToken);
}

// The one and only CIdentify_SIMDApp object

CIdentify_SIMDApp theApp;


// CIdentify_SIMDApp initialization

BOOL CIdentify_SIMDApp::InitInstance()
{
	// InitCommonControlsEx() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Set this to include all the common control classes you want to use
	// in your application.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CIdentify_SIMDDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
