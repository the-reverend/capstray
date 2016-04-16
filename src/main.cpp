/// @file main.cpp
/// @author rev

#include "stdafx.h"
#include "MainApp.h"

int APIENTRY WinMain( HINSTANCE, HINSTANCE, LPSTR, int )
{
	// Start Win32++
	MainApp theApp;

	// Run the application
	return theApp.Run();
}
