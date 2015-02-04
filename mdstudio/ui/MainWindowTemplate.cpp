///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  5 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "MapPanel.h"
#include "TilesPanel.h"

#include "MainWindowTemplate.h"

///////////////////////////////////////////////////////////////////////////

MainWindowTemplate::MainWindowTemplate( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_ribbonBarMain = new wxRibbonBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxRIBBON_BAR_DEFAULT_STYLE|wxRIBBON_BAR_SHOW_PAGE_ICONS|wxRIBBON_BAR_SHOW_PAGE_LABELS|wxRIBBON_BAR_SHOW_PANEL_MINIMISE_BUTTONS );
	m_ribbonBarMain->SetArtProvider(new wxRibbonDefaultArtProvider); 
	m_ribbonPageProject = new wxRibbonPage( m_ribbonBarMain, wxID_ANY, wxT("Project") , wxNullBitmap , 0 );
	m_ribbonBarMain->SetActivePage( m_ribbonPageProject ); 
	m_ribbonPanelProject = new wxRibbonPanel( m_ribbonPageProject, wxID_ANY, wxT("Project") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBarProject = new wxRibbonButtonBar( m_ribbonPanelProject, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBarProject->AddButton( wxID_ANY, wxT("New"), wxNullBitmap, wxEmptyString);
	m_ribbonButtonBarProject->AddButton( wxID_ANY, wxT("Save"), wxNullBitmap, wxEmptyString);
	m_ribbonButtonBarProject->AddButton( wxID_ANY, wxT("Export"), wxNullBitmap, wxEmptyString);
	m_ribbonPageTiles = new wxRibbonPage( m_ribbonBarMain, wxID_ANY, wxT("Tiles") , wxNullBitmap , 0 );
	m_ribbonPanelTiles = new wxRibbonPanel( m_ribbonPageTiles, wxID_ANY, wxT("Tiles") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBarTiles = new wxRibbonButtonBar( m_ribbonPanelTiles, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBarTiles->AddButton( wxID_BTN_TILES_IMPORT, wxT("Import"), wxNullBitmap, wxEmptyString);
	m_ribbonButtonBarTiles->AddButton( wxID_ANY, wxT("Delete"), wxNullBitmap, wxEmptyString);
	m_ribbonPageStamps = new wxRibbonPage( m_ribbonBarMain, wxID_ANY, wxT("Stamps") , wxNullBitmap , 0 );
	m_ribbonPanelStamps = new wxRibbonPanel( m_ribbonPageStamps, wxID_ANY, wxT("Stamps") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBarStamps = new wxRibbonButtonBar( m_ribbonPanelStamps, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBarStamps->AddButton( wxID_ANY, wxT("Create"), wxNullBitmap, wxEmptyString);
	m_ribbonButtonBarStamps->AddButton( wxID_ANY, wxT("Delete"), wxNullBitmap, wxEmptyString);
	m_ribbonPageMap = new wxRibbonPage( m_ribbonBarMain, wxID_ANY, wxT("Map") , wxNullBitmap , 0 );
	m_ribbonPanelMap = new wxRibbonPanel( m_ribbonPageMap, wxID_ANY, wxT("Map") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBarMap = new wxRibbonButtonBar( m_ribbonPanelMap, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBarMap->AddButton( wxID_ANY, wxT("Resize"), wxNullBitmap, wxEmptyString);
	m_ribbonPagePalettes = new wxRibbonPage( m_ribbonBarMain, wxID_ANY, wxT("Palettes") , wxNullBitmap , 0 );
	m_ribbonPanelPalettes = new wxRibbonPanel( m_ribbonPagePalettes, wxID_ANY, wxT("Palettes") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBarPal = new wxRibbonButtonBar( m_ribbonPanelPalettes, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBarPal->AddButton( wxID_ANY, wxT("Import"), wxNullBitmap, wxEmptyString);
	m_ribbonPageCollision = new wxRibbonPage( m_ribbonBarMain, wxID_ANY, wxT("Collision") , wxNullBitmap , 0 );
	m_ribbonPanelCollision = new wxRibbonPanel( m_ribbonPageCollision, wxID_ANY, wxT("Collision") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBarCollision = new wxRibbonButtonBar( m_ribbonPanelCollision, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBarCollision->AddButton( wxID_ANY, wxT("Configuration"), wxNullBitmap, wxEmptyString);
	m_ribbonButtonBarCollision->AddButton( wxID_ANY, wxT("Collision Tile Editor"), wxNullBitmap, wxEmptyString);
	m_ribbonPageTools = new wxRibbonPage( m_ribbonBarMain, wxID_ANY, wxT("Toolbox") , wxNullBitmap , 0 );
	m_ribbonPanelTools = new wxRibbonPanel( m_ribbonPageTools, wxID_ANY, wxT("Toolbox") , wxNullBitmap , wxDefaultPosition, wxDefaultSize, wxRIBBON_PANEL_DEFAULT_STYLE );
	m_ribbonButtonBarTools = new wxRibbonButtonBar( m_ribbonPanelTools, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_ribbonButtonBarTools->AddButton( wxID_BTN_TOOLS_MAPEDIT, wxT("Map Editing"), wxNullBitmap, wxEmptyString);
	m_ribbonButtonBarTools->AddButton( wxID_BTN_TOOLS_TILES, wxT("Tiles"), wxNullBitmap, wxEmptyString);
	m_ribbonButtonBarTools->AddButton( wxID_ANY, wxT("Stamps"), wxNullBitmap, wxEmptyString);
	m_ribbonBarMain->Realize();
	
	bSizer1->Add( m_ribbonBarMain, 0, wxALL|wxEXPAND, 5 );
	
	m_mapPanel = new MapPanel( this, wxID_MAPPANEL, wxDefaultPosition, wxDefaultSize, wxALWAYS_SHOW_SB|wxTAB_TRAVERSAL );
	bSizer1->Add( m_mapPanel, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	m_statusBarMain = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnProjNew ) );
	this->Connect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnProjSave ) );
	this->Connect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnProjExport ) );
	this->Connect( wxID_BTN_TILES_IMPORT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnTilesImport ) );
	this->Connect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnTilesDelete ) );
	this->Connect( wxID_BTN_TOOLS_MAPEDIT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnToolsMapEdit ) );
	this->Connect( wxID_BTN_TOOLS_TILES, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnToolsTiles ) );
	this->Connect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnToolsStamps ) );
}

MainWindowTemplate::~MainWindowTemplate()
{
	// Disconnect Events
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnProjNew ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnProjSave ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnProjExport ) );
	this->Disconnect( wxID_BTN_TILES_IMPORT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnTilesImport ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnTilesDelete ) );
	this->Disconnect( wxID_BTN_TOOLS_MAPEDIT, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnToolsMapEdit ) );
	this->Disconnect( wxID_BTN_TOOLS_TILES, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnToolsTiles ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_RIBBONBUTTON_CLICKED, wxRibbonButtonBarEventHandler( MainWindowTemplate::OnBtnToolsStamps ) );
	
}

ToolboxTilesTemplate::ToolboxTilesTemplate( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	m_tilesPanel = new TilesPanel( this, wxID_TILESPANEL, wxDefaultPosition, wxDefaultSize, wxALWAYS_SHOW_SB|wxVSCROLL );
	m_tilesPanel->SetScrollRate( 5, 5 );
	bSizer2->Add( m_tilesPanel, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
}

ToolboxTilesTemplate::~ToolboxTilesTemplate()
{
}

ToolboxMapEditTemplate::ToolboxMapEditTemplate( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	m_toolbarMapEdit = new wxAuiToolBar( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxAUI_TB_HORZ_LAYOUT|wxAUI_TB_TEXT ); 
	m_tool5 = m_toolbarMapEdit->AddTool( wxID_ANY, wxT("Paint"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool6 = m_toolbarMapEdit->AddTool( wxID_ANY, wxT("Erase"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool7 = m_toolbarMapEdit->AddTool( wxID_ANY, wxT("Flip V"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool8 = m_toolbarMapEdit->AddTool( wxID_ANY, wxT("Flip H"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_tool10 = m_toolbarMapEdit->AddTool( wxID_ANY, wxT("Set Palette"), wxNullBitmap, wxNullBitmap, wxITEM_NORMAL, wxEmptyString, wxEmptyString, NULL ); 
	
	m_toolbarMapEdit->Realize(); 
	
	
	this->Centre( wxBOTH );
}

ToolboxMapEditTemplate::~ToolboxMapEditTemplate()
{
}