/*
CGifStatic class to display GIF in static control version 1.0.0

Copyright (c) 2008 Wong Shao Voon

The Code Project Open License (CPOL)
http://www.codeproject.com/info/cpol10.aspx
*/

// GifStatic.cpp : implementation file
//

#include "stdafx.h"
//#include "TestGifCtrl.h"
#include "GifStatic.h"


// CGifStatic

IMPLEMENT_DYNAMIC(CGifStatic, CStatic)

CGifStatic::CGifStatic()
{

}

CGifStatic::~CGifStatic()
{
}


BEGIN_MESSAGE_MAP(CGifStatic, CStatic)
	ON_WM_PAINT()
END_MESSAGE_MAP()



// CGifStatic message handlers



void CGifStatic::OnPaint()
{
	CPaintDC dc(this); 

	HINSTANCE hResInstance = AfxGetResourceHandle( );

	HRSRC res = FindResource(hResInstance,
							 MAKEINTRESOURCE(m_nResID),L"BINARY");
	if (res) 
	{
		HGLOBAL mem = LoadResource(hResInstance, res);
		void *data = LockResource(mem);
		size_t len = SizeofResource(hResInstance, res);

		HGLOBAL hGlobal = GlobalAlloc(GMEM_MOVEABLE, len);
		LPVOID pvData = GlobalLock( hGlobal );
		memcpy(pvData,data,len);
		GlobalUnlock(hGlobal);

		LPSTREAM pStream = NULL;
		HRESULT hr = CreateStreamOnHGlobal( hGlobal, TRUE, &pStream );

		using namespace Gdiplus;
		Image image(pStream,false);

		pStream->Release();

		Graphics graph(dc.GetSafeHdc());

		graph.DrawImage(&image,0,0,image.GetWidth(),image.GetHeight());
	}
}
