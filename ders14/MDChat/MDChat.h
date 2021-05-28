
// MDChat.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMDChatApp:
// See MDChat.cpp for the implementation of this class
//

class CMDChatApp : public CWinApp
{
public:
	CMDChatApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMDChatApp theApp;
