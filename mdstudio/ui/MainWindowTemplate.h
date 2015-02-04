///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __MAINWINDOWTEMPLATE_H__
#define __MAINWINDOWTEMPLATE_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
class MapPanel;
class TilesPanel;

#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/ribbon/buttonbar.h>
#include <wx/ribbon/panel.h>
#include <wx/ribbon/page.h>
#include <wx/ribbon/control.h>
#include <wx/ribbon/art.h>
#include <wx/ribbon/bar.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/scrolwin.h>
#include <wx/aui/aui.h>
#include <wx/aui/auibar.h>

///////////////////////////////////////////////////////////////////////////

#define wxID_MAINWINDOW 1000
#define wxID_BTN_TILES_IMPORT 1001
#define wxID_BTN_TOOLS_MAPEDIT 1002
#define wxID_BTN_TOOLS_TILES 1003
#define wxID_MAPPANEL 1004
#define wxID_TILESPANEL 1005

///////////////////////////////////////////////////////////////////////////////
/// Class MainWindowTemplate
///////////////////////////////////////////////////////////////////////////////
class MainWindowTemplate : public wxFrame 
{
	private:
	
	protected:
		wxRibbonBar* m_ribbonBarMain;
		wxRibbonPage* m_ribbonPageProject;
		wxRibbonPanel* m_ribbonPanelProject;
		wxRibbonButtonBar* m_ribbonButtonBarProject;
		wxRibbonPage* m_ribbonPageTiles;
		wxRibbonPanel* m_ribbonPanelTiles;
		wxRibbonButtonBar* m_ribbonButtonBarTiles;
		wxRibbonPage* m_ribbonPageStamps;
		wxRibbonPanel* m_ribbonPanelStamps;
		wxRibbonButtonBar* m_ribbonButtonBarStamps;
		wxRibbonPage* m_ribbonPageMap;
		wxRibbonPanel* m_ribbonPanelMap;
		wxRibbonButtonBar* m_ribbonButtonBarMap;
		wxRibbonPage* m_ribbonPagePalettes;
		wxRibbonPanel* m_ribbonPanelPalettes;
		wxRibbonButtonBar* m_ribbonButtonBarPal;
		wxRibbonPage* m_ribbonPageCollision;
		wxRibbonPanel* m_ribbonPanelCollision;
		wxRibbonButtonBar* m_ribbonButtonBarCollision;
		wxRibbonPage* m_ribbonPageTools;
		wxRibbonPanel* m_ribbonPanelTools;
		wxRibbonButtonBar* m_ribbonButtonBarTools;
		wxStatusBar* m_statusBarMain;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnBtnProjNew( wxRibbonButtonBarEvent& event ) { event.Skip(); }
		virtual void OnBtnProjSave( wxRibbonButtonBarEvent& event ) { event.Skip(); }
		virtual void OnBtnProjExport( wxRibbonButtonBarEvent& event ) { event.Skip(); }
		virtual void OnBtnTilesImport( wxRibbonButtonBarEvent& event ) { event.Skip(); }
		virtual void OnBtnTilesDelete( wxRibbonButtonBarEvent& event ) { event.Skip(); }
		virtual void OnBtnToolsMapEdit( wxRibbonButtonBarEvent& event ) { event.Skip(); }
		virtual void OnBtnToolsTiles( wxRibbonButtonBarEvent& event ) { event.Skip(); }
		virtual void OnBtnToolsStamps( wxRibbonButtonBarEvent& event ) { event.Skip(); }
		
	
	public:
		MapPanel* m_mapPanel;
		
		MainWindowTemplate( wxWindow* parent, wxWindowID id = wxID_MAINWINDOW, const wxString& title = wxT("MD Studio"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxMAXIMIZE|wxTAB_TRAVERSAL );
		
		~MainWindowTemplate();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ToolboxTilesTemplate
///////////////////////////////////////////////////////////////////////////////
class ToolboxTilesTemplate : public wxFrame 
{
	private:
	
	protected:
		TilesPanel* m_tilesPanel;
	
	public:
		
		ToolboxTilesTemplate( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Tiles"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxFRAME_FLOAT_ON_PARENT|wxFRAME_TOOL_WINDOW|wxTAB_TRAVERSAL );
		
		~ToolboxTilesTemplate();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ToolboxMapEditTemplate
///////////////////////////////////////////////////////////////////////////////
class ToolboxMapEditTemplate : public wxFrame 
{
	private:
	
	protected:
		wxAuiToolBar* m_toolbarMapEdit;
		wxAuiToolBarItem* m_tool5; 
		wxAuiToolBarItem* m_tool6; 
		wxAuiToolBarItem* m_tool7; 
		wxAuiToolBarItem* m_tool8; 
		wxAuiToolBarItem* m_tool10; 
	
	public:
		
		ToolboxMapEditTemplate( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Map Editing"), const wxPoint& pos = wxPoint( -1,-1 ), const wxSize& size = wxSize( 128,400 ), long style = wxDEFAULT_FRAME_STYLE|wxFRAME_FLOAT_ON_PARENT|wxFRAME_TOOL_WINDOW|wxSIMPLE_BORDER|wxTAB_TRAVERSAL );
		
		~ToolboxMapEditTemplate();
	
};

#endif //__MAINWINDOWTEMPLATE_H__