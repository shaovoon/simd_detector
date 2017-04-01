// Identify_SIMD.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CIdentify_SIMDApp:
// See Identify_SIMD.cpp for the implementation of this class
//

class CIdentify_SIMDApp : public CWinApp
{
public:
	CIdentify_SIMDApp();
	~CIdentify_SIMDApp();

// Overrides
	public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()

protected:
	Gdiplus::GdiplusStartupInput m_gdiplusStartupInput;
	ULONG_PTR m_gdiplusToken;

};

extern CIdentify_SIMDApp theApp;