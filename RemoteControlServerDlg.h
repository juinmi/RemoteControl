
// RemoteControlServerDlg.h : 头文件
//
#include "BitButtonNL.h"
#include <vector>
#include "afxwin.h"
using namespace std;

#pragma once

class CSerialPort;
// CRemoteControlServerDlg 对话框
class CRemoteControlServerDlg : public CDialogEx
{
// 构造
public:
	CRemoteControlServerDlg(CWnd* pParent = NULL);	// 标准构造函数
	~CRemoteControlServerDlg();                 	// 标准析构函数

// 对话框数据
	enum { IDD = IDD_REMOTECONTROLSERVER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CBitButtonNL m_statusStation1;
	CBitButtonNL m_statusStation2;
	CBitButtonNL m_statusStation3;
	CBitButtonNL m_statusStation4;
	CBitButtonNL m_statusStation5;
	CBitButtonNL m_statusStation6;
	CBitButtonNL m_statusStation7;
	CBitButtonNL m_statusStation8;
	CBitButtonNL m_statusStation9;
	CBitButtonNL m_statusStation10;
	CBitButtonNL m_statusStation11;
	CBitButtonNL m_statusStation12;
	CBitButtonNL m_statusStation13;
	CBitButtonNL m_statusStation14;
	CBitButtonNL m_statusStation15;
	CBitButtonNL m_statusStation16;
	afx_msg void OnBnClickedOpenButton1();
	afx_msg void OnBnClickedOpenButton2();
	afx_msg void OnBnClickedOpenButton3();
	afx_msg void OnBnClickedOpenButton4();
	afx_msg void OnBnClickedOpenButton5();
	afx_msg void OnBnClickedOpenButton6();
	afx_msg void OnBnClickedOpenButton7();
	afx_msg void OnBnClickedOpenButton8();
	afx_msg void OnBnClickedOpenButton9();
	afx_msg void OnBnClickedOpenButton10();
	afx_msg void OnBnClickedOpenButton11();
	afx_msg void OnBnClickedOpenButton12();
	afx_msg void OnBnClickedOpenButton13();
	afx_msg void OnBnClickedOpenButton14();
	afx_msg void OnBnClickedOpenButton15();
	afx_msg void OnBnClickedOpenButton16();

	int EnumSerialPort(vector<int>& serialPorts);
	CComboBox m_portComboBox;
	CSerialPort* m_serialPort;
	afx_msg void OnBnClickedOpenportButton();
};
