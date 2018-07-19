
// RemoteControlServerDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "RemoteControlServer.h"
#include "RemoteControlServerDlg.h"
#include "afxdialogex.h"
#include "SerialPort.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CRemoteControlServerDlg 对话框




CRemoteControlServerDlg::CRemoteControlServerDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CRemoteControlServerDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_serialPort = new CSerialPort(); 
}

CRemoteControlServerDlg::~CRemoteControlServerDlg()
{
	delete m_serialPort;
}

void CRemoteControlServerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_STATUS_BUTTON1, m_statusStation1);
	DDX_Control(pDX, IDC_STATUS_BUTTON2, m_statusStation2);
	DDX_Control(pDX, IDC_STATUS_BUTTON3, m_statusStation3);
	DDX_Control(pDX, IDC_STATUS_BUTTON4, m_statusStation4);
	DDX_Control(pDX, IDC_STATUS_BUTTON5, m_statusStation5);
	DDX_Control(pDX, IDC_STATUS_BUTTON6, m_statusStation6);
	DDX_Control(pDX, IDC_STATUS_BUTTON7, m_statusStation7);
	DDX_Control(pDX, IDC_STATUS_BUTTON8, m_statusStation8);
	DDX_Control(pDX, IDC_STATUS_BUTTON9, m_statusStation9);
	DDX_Control(pDX, IDC_STATUS_BUTTON10, m_statusStation10);
	DDX_Control(pDX, IDC_STATUS_BUTTON11, m_statusStation11);
	DDX_Control(pDX, IDC_STATUS_BUTTON12, m_statusStation12);
	DDX_Control(pDX, IDC_STATUS_BUTTON13, m_statusStation13);
	DDX_Control(pDX, IDC_STATUS_BUTTON14, m_statusStation14);
	DDX_Control(pDX, IDC_STATUS_BUTTON15, m_statusStation15);
	DDX_Control(pDX, IDC_STATUS_BUTTON16, m_statusStation16);
	DDX_Control(pDX, IDC_SERIALPORT_COMBO, m_portComboBox);
}

BEGIN_MESSAGE_MAP(CRemoteControlServerDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_OPEN_BUTTON1, &CRemoteControlServerDlg::OnBnClickedOpenButton1)
	ON_BN_CLICKED(IDC_OPEN_BUTTON2, &CRemoteControlServerDlg::OnBnClickedOpenButton2)
	ON_BN_CLICKED(IDC_OPEN_BUTTON3, &CRemoteControlServerDlg::OnBnClickedOpenButton3)
	ON_BN_CLICKED(IDC_OPEN_BUTTON4, &CRemoteControlServerDlg::OnBnClickedOpenButton4)
	ON_BN_CLICKED(IDC_OPEN_BUTTON5, &CRemoteControlServerDlg::OnBnClickedOpenButton5)
	ON_BN_CLICKED(IDC_OPEN_BUTTON6, &CRemoteControlServerDlg::OnBnClickedOpenButton6)
	ON_BN_CLICKED(IDC_OPEN_BUTTON7, &CRemoteControlServerDlg::OnBnClickedOpenButton7)
	ON_BN_CLICKED(IDC_OPEN_BUTTON8, &CRemoteControlServerDlg::OnBnClickedOpenButton8)
	ON_BN_CLICKED(IDC_OPEN_BUTTON9, &CRemoteControlServerDlg::OnBnClickedOpenButton9)
	ON_BN_CLICKED(IDC_OPEN_BUTTON10, &CRemoteControlServerDlg::OnBnClickedOpenButton10)
	ON_BN_CLICKED(IDC_OPEN_BUTTON11, &CRemoteControlServerDlg::OnBnClickedOpenButton11)
	ON_BN_CLICKED(IDC_OPEN_BUTTON12, &CRemoteControlServerDlg::OnBnClickedOpenButton12)
	ON_BN_CLICKED(IDC_OPEN_BUTTON13, &CRemoteControlServerDlg::OnBnClickedOpenButton13)
	ON_BN_CLICKED(IDC_OPEN_BUTTON14, &CRemoteControlServerDlg::OnBnClickedOpenButton14)
	ON_BN_CLICKED(IDC_OPEN_BUTTON15, &CRemoteControlServerDlg::OnBnClickedOpenButton15)
	ON_BN_CLICKED(IDC_OPEN_BUTTON16, &CRemoteControlServerDlg::OnBnClickedOpenButton16)
	ON_BN_CLICKED(IDC_OPEN_BUTTON2, &CRemoteControlServerDlg::OnBnClickedOpenButton2)
	ON_BN_CLICKED(IDC_OPEN_BUTTON3, &CRemoteControlServerDlg::OnBnClickedOpenButton3)
	ON_BN_CLICKED(IDC_OPEN_BUTTON4, &CRemoteControlServerDlg::OnBnClickedOpenButton4)
	ON_BN_CLICKED(IDC_OPEN_BUTTON5, &CRemoteControlServerDlg::OnBnClickedOpenButton5)
	ON_BN_CLICKED(IDC_OPEN_BUTTON6, &CRemoteControlServerDlg::OnBnClickedOpenButton6)
	ON_BN_CLICKED(IDC_OPEN_BUTTON7, &CRemoteControlServerDlg::OnBnClickedOpenButton7)
	ON_BN_CLICKED(IDC_OPEN_BUTTON8, &CRemoteControlServerDlg::OnBnClickedOpenButton8)
	ON_BN_CLICKED(IDC_OPEN_BUTTON9, &CRemoteControlServerDlg::OnBnClickedOpenButton9)
	ON_BN_CLICKED(IDC_OPEN_BUTTON10, &CRemoteControlServerDlg::OnBnClickedOpenButton10)
	ON_BN_CLICKED(IDC_OPEN_BUTTON11, &CRemoteControlServerDlg::OnBnClickedOpenButton11)
	ON_BN_CLICKED(IDC_OPEN_BUTTON12, &CRemoteControlServerDlg::OnBnClickedOpenButton12)
	ON_BN_CLICKED(IDC_OPEN_BUTTON13, &CRemoteControlServerDlg::OnBnClickedOpenButton13)
	ON_BN_CLICKED(IDC_OPEN_BUTTON14, &CRemoteControlServerDlg::OnBnClickedOpenButton14)
	ON_BN_CLICKED(IDC_OPEN_BUTTON15, &CRemoteControlServerDlg::OnBnClickedOpenButton15)
	ON_BN_CLICKED(IDC_OPEN_BUTTON16, &CRemoteControlServerDlg::OnBnClickedOpenButton16)
	ON_BN_CLICKED(IDC_OPENPORT_BUTTON, &CRemoteControlServerDlg::OnBnClickedOpenportButton)
END_MESSAGE_MAP()


// CRemoteControlServerDlg 消息处理程序

BOOL CRemoteControlServerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	ShowWindow(SW_MAXIMIZE);

	// TODO: 在此添加额外的初始化代码
	m_statusStation1.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation1.SizeToContent();

	m_statusStation2.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation2.SizeToContent();

	m_statusStation3.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation3.SizeToContent();

	m_statusStation4.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation4.SizeToContent();

	m_statusStation5.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation5.SizeToContent();

	m_statusStation6.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation6.SizeToContent();

	m_statusStation7.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation7.SizeToContent();

	m_statusStation8.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation8.SizeToContent();

	m_statusStation9.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation9.SizeToContent();

	m_statusStation10.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation10.SizeToContent();

	m_statusStation11.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation11.SizeToContent();

	m_statusStation12.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation12.SizeToContent();

	m_statusStation13.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation13.SizeToContent();

	m_statusStation14.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation14.SizeToContent();

	m_statusStation15.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation15.SizeToContent();

	m_statusStation16.SetBitmaps(IDB_REDLED_ON, NULL, NULL, IDB_REDLED_ON);
	m_statusStation16.SizeToContent();

	int port = 2;
	CFile parametre;
	char* plFileName = "parametre.li";
    
	if (!parametre.Open(plFileName, CFile::modeRead))
	{
		AfxMessageBox("打不开参数文件，点击确定则新建一个没有参数的parametre.li文件");
		parametre.Open(plFileName,CFile::modeCreate | CFile::modeWrite);
		parametre.Write(&port, sizeof(int));    
        parametre.Close();

	}
	else
	{
		parametre.Read(&port, sizeof(int));	
        parametre.Close();
	}

	vector<int> serialPorts;
	EnumSerialPort(serialPorts);

	int index = 0;
	for(int i = 0; i < serialPorts.size(); i++) 
	{
		CString portName;
		portName.Format("COM%d", serialPorts[i]);
		m_portComboBox.AddString(portName);
		if (port == serialPorts[i])
			index = i;
	}
	m_portComboBox.SetCurSel(index);

	if (m_serialPort->InitPort(m_hWnd, port, 9600))
		m_serialPort->StartMonitoring();
	else
		MessageBox("打开串口失败，端口不存在或者被占用！", "程序错误", MB_ICONSTOP);	

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CRemoteControlServerDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CRemoteControlServerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CRemoteControlServerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CRemoteControlServerDlg::OnBnClickedOpenButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT1, strFilePath);     
    }  


}


void CRemoteControlServerDlg::OnBnClickedOpenButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT2, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton3()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT3, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton4()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT4, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton5()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT5, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton6()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT6, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton7()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT7, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton8()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT8, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton9()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT9, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton10()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT10, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton11()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT11, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton12()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT12, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton13()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT13, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton14()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT14, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton15()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT15, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton16()
{
	// TODO: 在此添加控件通知处理程序代码
	TCHAR szFilter[] = _T("Excel文件(*.xls)|*.xls|所有文件(*.*)|*.*||");  ;   //可供选择的后缀  
    // 构造保存文件对话框     
    // 第1个参数false是保存文件，true是打开文件。第2个参数是默认后缀，第3个参数是默认文件名  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //文件路径  
      
    // 显示保存文件对话框     
    if (IDOK == fileDlg.DoModal())     
    {     
        // 如果点击了文件对话框上的“保存”按钮，则将选择的文件路径显示到编辑框里     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT16, strFilePath);     
    }  
}

int CRemoteControlServerDlg::EnumSerialPort(vector<int>& serialPorts)
{
	
	HKEY hKey; 
	LPCTSTR data_Set = _T("HARDWARE\\DEVICEMAP\\SERIALCOMM\\"); 

	long ret0 = (::RegOpenKeyEx(HKEY_LOCAL_MACHINE, data_Set, 0, KEY_READ, &hKey)); 
	if(ret0 != ERROR_SUCCESS) 
		return -1; 

	TCHAR Name[25]; 
	UCHAR szPortName[25]; 
	int portNumber;
	LONG Status; 
	DWORD dwIndex = 0; 
	DWORD dwName; 
	DWORD dwSizeofPortName; 
	DWORD Type; 
	dwName = sizeof(Name); 
	dwSizeofPortName = sizeof(szPortName); 

	do
	{ 
		memset(szPortName, 0, sizeof(szPortName));
		Status = RegEnumValue(hKey, dwIndex++, Name, &dwName, NULL, &Type, szPortName, &dwSizeofPortName); 
		if ((Status == ERROR_SUCCESS) || (Status == ERROR_MORE_DATA)) 
		{ 
			string strPortName;       // 串口字符串保存 
			int nullCount = 0;
			for(int i = 0; i < 25; i++)	{
				if (szPortName[i] != 0) {
					nullCount = 0;
					strPortName.push_back(szPortName[i]);
				}
				else {
					nullCount++;
					if (nullCount >= 2)
						break;
				}
			}
			portNumber = atoi(strPortName.c_str() + 3);
			serialPorts.push_back(portNumber);
		
		} 
	}while((Status == ERROR_SUCCESS) || (Status == ERROR_MORE_DATA)); 

	RegCloseKey(hKey); 

	return 0;
}


void CRemoteControlServerDlg::OnBnClickedOpenportButton()
{
	// TODO: 在此添加控件通知处理程序代码
	int port = 0;
	CString strPort;
	m_portComboBox.GetWindowText(strPort);
	port = atoi(strPort.Mid(3));
	if (m_serialPort->InitPort(m_hWnd, port, 9600))
	{
		m_serialPort->StartMonitoring();

		CFile parametre;
		char* plFileName = "parametre.li";
		parametre.Open(plFileName,CFile::modeCreate | CFile::modeWrite);
		parametre.Write(&port, sizeof(int));  
		parametre.Close();
	}
	else
		MessageBox("打开串口失败，端口不存在或者被占用！", "程序错误", MB_ICONSTOP);
}
