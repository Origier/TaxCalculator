#include "MainFrame.h"

wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)

wxEND_EVENT_TABLE()


MainFrame::MainFrame() : wxFrame(nullptr, wxID_ANY, "Tax Calculator", wxPoint(30, 30), wxSize(800, 600)) {

}

MainFrame::~MainFrame() {

}

void MainFrame::OnButtonClicked(wxCommandEvent& evt) {

}

