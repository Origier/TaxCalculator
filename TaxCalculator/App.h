#pragma once

#include "wx/wx.h"
#include "MainFrame.h"

class App : public wxApp
{
public:
	App();
	~App();
	bool OnInit();

private:
	MainFrame* m_frame1 = nullptr;
};
