/*
CGifStatic class to display GIF in static control version 1.0.0

Copyright (c) 2008 Wong Shao Voon

The Code Project Open License (CPOL)
http://www.codeproject.com/info/cpol10.aspx
*/

#pragma once


// CGifStatic

class CGifStatic : public CStatic
{
	DECLARE_DYNAMIC(CGifStatic)


public:
	CGifStatic();
	virtual ~CGifStatic();
	void SetResID(int nResID) {m_nResID=nResID;}

protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();

private:
	int m_nResID;
};


