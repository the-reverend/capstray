/// @file MainApp.h
/// @author rev

#pragma once

#include "View.h"

class MainApp : public CWinApp
{
public:
	MainApp();
	virtual ~MainApp( void ) {}
	virtual BOOL InitInstance( void );
	CView& GetView( void ) { return m_View; }

private:
	CView m_View;
};

/// @return a reference to the MainApp object
inline MainApp& GetSimpleApp( void ) { return *(( MainApp* )GetApp() ); }
