// Identify_SIMDDlg.h : header file
//

#pragma once
#include "afxwin.h"
#include "GifStatic.h"


// CIdentify_SIMDDlg dialog
class CIdentify_SIMDDlg : public CDialog
{
// Construction
public:
	CIdentify_SIMDDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_IDENTIFY_SIMD_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;
	CString m_CPUModel;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CGifStatic m_ctlMMX;
	CGifStatic m_ctlSSE;
	CGifStatic m_ctlSSE2;
	CGifStatic m_ctlSSE3;
	CGifStatic m_ctlSSSE3;
	CGifStatic m_ctlSSE41;
	CGifStatic m_ctlSSE42;
	CGifStatic m_ctlMMXPlus;
	CGifStatic m_ctl3DNow;
	CGifStatic m_ctl3DNowPlus;
	CGifStatic m_ctlSSE4a;
	CGifStatic m_ctlSSE5;
	CGifStatic m_ctlAES;
	CGifStatic m_ctlAVX;
};
