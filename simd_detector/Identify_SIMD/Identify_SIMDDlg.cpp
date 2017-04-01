// Identify_SIMDDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Identify_SIMD.h"
#include "Identify_SIMDDlg.h"
#include "../SIMD_lib/SIMD.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CIdentify_SIMDDlg dialog




CIdentify_SIMDDlg::CIdentify_SIMDDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CIdentify_SIMDDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

	SIMD simd;

	m_ctlMMX.SetResID(simd.HasMMX() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctlSSE.SetResID(simd.HasSSE() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctlSSE2.SetResID(simd.HasSSE2() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctlSSE3.SetResID(simd.HasSSE3() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctlSSSE3.SetResID(simd.HasSSSE3() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctlSSE41.SetResID(simd.HasSSE41() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctlSSE42.SetResID(simd.HasSSE42() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctlMMXPlus.SetResID(simd.HasMMXplus() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctl3DNow.SetResID(simd.Has3Dnow() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctl3DNowPlus.SetResID(simd.Has3DnowExt() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctlSSE4a.SetResID(simd.HasSSE4a() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctlSSE5.SetResID(simd.HasSSE5() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctlAES.SetResID(simd.HasAES() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);
	m_ctlAVX.SetResID(simd.HasAVX() ? IDR_AVAILABLEGIF: IDR_NOTAVAILABLEGIF);

	m_CPUModel = simd.GetCPUModel().c_str();

}

void CIdentify_SIMDDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATIC_MMX, m_ctlMMX);
	DDX_Control(pDX, IDC_STATIC_SSE, m_ctlSSE);
	DDX_Control(pDX, IDC_STATIC_SSE2, m_ctlSSE2);
	DDX_Control(pDX, IDC_STATIC_SSE3, m_ctlSSE3);
	DDX_Control(pDX, IDC_STATIC_SSSE3, m_ctlSSSE3);
	DDX_Control(pDX, IDC_STATIC_SSE41, m_ctlSSE41);
	DDX_Control(pDX, IDC_STATIC_SSE42, m_ctlSSE42);
	DDX_Control(pDX, IDC_STATIC_MMXPLUS, m_ctlMMXPlus);
	DDX_Control(pDX, IDC_STATIC_3DNOW, m_ctl3DNow);
	DDX_Control(pDX, IDC_STATIC_3DNOWPLUS, m_ctl3DNowPlus);
	DDX_Control(pDX, IDC_STATIC_SSE4A, m_ctlSSE4a);
	DDX_Control(pDX, IDC_STATIC_SSE5, m_ctlSSE5);
	DDX_Control(pDX, IDC_STATIC_AES, m_ctlAES);
	DDX_Control(pDX, IDC_STATIC_AVX, m_ctlAVX);
}

BEGIN_MESSAGE_MAP(CIdentify_SIMDDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


// CIdentify_SIMDDlg message handlers

BOOL CIdentify_SIMDDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here
	SetWindowTextW(m_CPUModel);


	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CIdentify_SIMDDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CIdentify_SIMDDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CIdentify_SIMDDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

