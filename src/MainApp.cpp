/// @file MainApp.cpp
/// @author rev

#include "stdafx.h"
#include "MainApp.h"

MainApp::MainApp( void )
{
	// Constructor for CTrayApp
}

BOOL MainApp::InitInstance( void )
{
	// This function is called automatically when the application starts

	// Create the Window
	m_View.Create();

	return TRUE;
}
