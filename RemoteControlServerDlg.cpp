
// RemoteControlServerDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "RemoteControlServer.h"
#include "RemoteControlServerDlg.h"
#include "afxdialogex.h"
#include "SerialPort.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
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


// CRemoteControlServerDlg �Ի���




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


// CRemoteControlServerDlg ��Ϣ�������

BOOL CRemoteControlServerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
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

	// ���ô˶Ի����ͼ�ꡣ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	ShowWindow(SW_MAXIMIZE);

	// TODO: �ڴ���Ӷ���ĳ�ʼ������
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
		AfxMessageBox("�򲻿������ļ������ȷ�����½�һ��û�в�����parametre.li�ļ�");
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
		MessageBox("�򿪴���ʧ�ܣ��˿ڲ����ڻ��߱�ռ�ã�", "�������", MB_ICONSTOP);	

	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
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

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CRemoteControlServerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CRemoteControlServerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CRemoteControlServerDlg::OnBnClickedOpenButton1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT1, strFilePath);     
    }  


}


void CRemoteControlServerDlg::OnBnClickedOpenButton2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT2, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT3, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton4()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT4, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton5()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT5, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton6()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT6, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton7()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT7, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton8()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT8, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton9()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT9, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton10()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT10, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton11()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT11, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton12()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT12, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton13()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT13, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton14()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT14, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton15()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
        strFilePath = fileDlg.GetPathName();     
        SetDlgItemText(IDC_PROGRAM_EDIT15, strFilePath);     
    }  
}


void CRemoteControlServerDlg::OnBnClickedOpenButton16()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	TCHAR szFilter[] = _T("Excel�ļ�(*.xls)|*.xls|�����ļ�(*.*)|*.*||");  ;   //�ɹ�ѡ��ĺ�׺  
    // ���챣���ļ��Ի���     
    // ��1������false�Ǳ����ļ���true�Ǵ��ļ�����2��������Ĭ�Ϻ�׺����3��������Ĭ���ļ���  
    CFileDialog fileDlg(TRUE, _T("xls"), NULL, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, szFilter, this);  
    CString strFilePath;   //�ļ�·��  
      
    // ��ʾ�����ļ��Ի���     
    if (IDOK == fileDlg.DoModal())     
    {     
        // ���������ļ��Ի����ϵġ����桱��ť����ѡ����ļ�·����ʾ���༭����     
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
			string strPortName;       // �����ַ������� 
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
	// TODO: �ڴ���ӿؼ�֪ͨ����������
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
		MessageBox("�򿪴���ʧ�ܣ��˿ڲ����ڻ��߱�ռ�ã�", "�������", MB_ICONSTOP);
}
