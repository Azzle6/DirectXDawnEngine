#pragma once
#include <Windows.h>

class Window
{
public:
	Window();
	~Window();

	//Initialize the window
	bool init();
	bool broadcast();
	//Release the window
	bool release();
	bool isRun();

	RECT getClientWindowRect();
	void setHWND(HWND hwnd);

	//EVENTS
	virtual void onCreate();
	virtual void onUpdate();
	virtual void onDestroy();

protected:
	HWND m_hwnd;
	bool m_isRun;
};

