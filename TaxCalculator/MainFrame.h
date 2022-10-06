#pragma once

#include "wx\wx.h"

class MainFrame : public wxFrame
{
public:
	MainFrame();
	~MainFrame();

	void OnButtonClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};





