/// @file View.h
/// @author rev

#pragma once

class CView : public CWnd
{
public:
	CView( void ) : m_capsState( GetLockStates() ) {}
	virtual ~CView( void ) {}

protected:
	virtual void OnAbout( void );
	virtual void OnCreate( void );
	virtual void OnDestroy( void );
	virtual void OnTimer( void );
	virtual void OnTrayIcon( WPARAM wParam, LPARAM lParam );
	virtual void PreCreate( CREATESTRUCT& cs );
	virtual LRESULT WndProc( UINT uMsg, WPARAM wParam, LPARAM lParam );

	void NotifyIcon( DWORD message = NIM_ADD, unsigned char state = 0 );
	void RemoveIcon( void );

	static unsigned char GetLockStates( void );

private:
	unsigned char m_capsState;
};
