
// RemoteControlServer.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CRemoteControlServerApp:
// �йش����ʵ�֣������ RemoteControlServer.cpp
//

class CRemoteControlServerApp : public CWinApp
{
public:
	CRemoteControlServerApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CRemoteControlServerApp theApp;