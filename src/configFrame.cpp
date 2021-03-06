/***************************************************************
 * Name:      configFrame.h
 * Purpose:   Dialog for editing configuration data - header file
 * Author:    Grzegorz Szura (grzegorz@szura.net)
 * Created:   2010-03-11
 * Copyright: Grzegorz Szura (http://www.szura.net)
 * License:
 **************************************************************/

#include "../data/xpm/wx_nfp.xpm"
#include "configFrame.h"
#include <wx/colordlg.h>
#include <wx/numdlg.h>
#include "wx-nfpApp.h"
#include  <wx/url.h>

//(*InternalHeaders(configFrame)
#include <wx/string.h>
#include <wx/intl.h>
//*)

/******************************************************************************/

//(*IdInit(configFrame)
const long configFrame::ID_staticLanguage = wxNewId();
const long configFrame::ID_changesLanguage = wxNewId();
const long configFrame::ID_listBoxLanguage = wxNewId();
const long configFrame::ID_checkBoxOpenLastOpenedFile = wxNewId();
const long configFrame::ID_changesOpenLastOpenedFile = wxNewId();
const long configFrame::ID_checkBoxAutosaveChanges = wxNewId();
const long configFrame::ID_changesAutosaveChanges = wxNewId();
const long configFrame::ID_checkBoxAutosaveSet = wxNewId();
const long configFrame::ID_changesAutosaveSet = wxNewId();
const long configFrame::ID_checkBoxSyncFileAutomatically = wxNewId();
const long configFrame::ID_changesSyncFileAutomatically = wxNewId();
const long configFrame::ID_checkBoxRememberPosition = wxNewId();
const long configFrame::ID_changesRememberPosition = wxNewId();
const long configFrame::ID_checkBoxFlatButtons = wxNewId();
const long configFrame::ID_changesFlatButtons = wxNewId();
const long configFrame::ID_checkBoxCheckForUpdates = wxNewId();
const long configFrame::ID_changesCheckForUpdates = wxNewId();
const long configFrame::ID_space2 = wxNewId();
const long configFrame::ID_staticUpdatesProxy = wxNewId();
const long configFrame::ID_space1 = wxNewId();
const long configFrame::ID_space3 = wxNewId();
const long configFrame::ID_textUpdatesProxy = wxNewId();
const long configFrame::ID_changesUpdatesProxy = wxNewId();
const long configFrame::ID_panelGeneral = wxNewId();
const long configFrame::ID_checkBoxCheckForMissingDays = wxNewId();
const long configFrame::ID_changesCheckForMissingDays = wxNewId();
const long configFrame::ID_checkBoxBreastsAutocontrolReminder = wxNewId();
const long configFrame::ID_changesBreastsAutocontrolReminder = wxNewId();
const long configFrame::ID_space5 = wxNewId();
const long configFrame::ID_staticBreastsAutocontrolReminderDay1 = wxNewId();
const long configFrame::ID_spinCtrlBreastsAutocontrolReminderDay = wxNewId();
const long configFrame::ID_staticBreastsAutocontrolReminderDay2 = wxNewId();
const long configFrame::ID_changesBreastsAutocontrolReminderDay = wxNewId();
const long configFrame::ID_space6 = wxNewId();
const long configFrame::ID_staticBreastAutocontrolInterval1 = wxNewId();
const long configFrame::ID_spinCtrlBreastAutocontrolInterval = wxNewId();
const long configFrame::ID_staticBreastAutocontrolInterval2 = wxNewId();
const long configFrame::ID_changesBreastAutocontrolInterval = wxNewId();
const long configFrame::ID_space9 = wxNewId();
const long configFrame::ID_staticTemperatureRangeHigh = wxNewId();
const long configFrame::ID_comboBoxTemperatureRangeHigh = wxNewId();
const long configFrame::ID_staticTemperatureCorF1 = wxNewId();
const long configFrame::ID_changesTemperatureRangeHigh = wxNewId();
const long configFrame::ID_space10 = wxNewId();
const long configFrame::ID_staticTemperatureRangeLow = wxNewId();
const long configFrame::ID_comboBoxTemperatureRangeLow = wxNewId();
const long configFrame::ID_staticTemperatureCorF2 = wxNewId();
const long configFrame::ID_changesTemperatureRangeLow = wxNewId();
const long configFrame::ID_panelApplication = wxNewId();
const long configFrame::ID_checkBoxAutoanalyzeCard = wxNewId();
const long configFrame::ID_changesAutoanalyzeCard = wxNewId();
const long configFrame::ID_STATICTEXT14 = wxNewId();
const long configFrame::ID_checkBoxShowAutoanalysisDetails = wxNewId();
const long configFrame::ID_changesShowAutoanalysisDetails = wxNewId();
const long configFrame::ID_STATICTEXT10 = wxNewId();
const long configFrame::ID_STATICTEXT17 = wxNewId();
const long configFrame::ID_STATICTEXT18 = wxNewId();
const long configFrame::ID_spinMaxAllowedNotMesuredLowLevelDays = wxNewId();
const long configFrame::ID_STATICTEXT19 = wxNewId();
const long configFrame::ID_STATICTEXT11 = wxNewId();
const long configFrame::ID_changesMaxAllowedNotMesuredLowLevelDays = wxNewId();
const long configFrame::ID_STATICTEXT12 = wxNewId();
const long configFrame::ID_spinMaxIncludedNotMesuredLowLevelDays = wxNewId();
const long configFrame::ID_STATICTEXT15 = wxNewId();
const long configFrame::ID_changesMaxIncludedNotMesuredLowLevelDays = wxNewId();
const long configFrame::ID_STATICTEXT8 = wxNewId();
const long configFrame::ID_STATICTEXT9 = wxNewId();
const long configFrame::ID_spinMaxAllowedNotMesuredHighLevelDays = wxNewId();
const long configFrame::ID_STATICTEXT21 = wxNewId();
const long configFrame::ID_changesMaxAllowedNotMesuredHighLevelDays = wxNewId();
const long configFrame::ID_STATICTEXT23 = wxNewId();
const long configFrame::ID_STATICTEXT24 = wxNewId();
const long configFrame::ID_spinMaxIncludedNotMesuredHighLevelDays = wxNewId();
const long configFrame::ID_STATICTEXT25 = wxNewId();
const long configFrame::ID_changesMaxIncludedNotMesuredHighLevelDays = wxNewId();
const long configFrame::ID_STATICTEXT27 = wxNewId();
const long configFrame::ID_checkBoxIncludeNotMesuredDaysIfAfterMucusPeak = wxNewId();
const long configFrame::ID_changesIncludeNotMesuredDaysIfAfterMucusPeak = wxNewId();
const long configFrame::ID_STATICTEXT3 = wxNewId();
const long configFrame::ID_STATICTEXT5 = wxNewId();
const long configFrame::ID_STATICTEXT2 = wxNewId();
const long configFrame::ID_spinNumberOfHistoricalCyclesToUse = wxNewId();
const long configFrame::ID_STATICTEXT4 = wxNewId();
const long configFrame::ID_changesNumberOfHistoricalCyclesToUse = wxNewId();
const long configFrame::ID_STATICTEXT1 = wxNewId();
const long configFrame::ID_STATICTEXT6 = wxNewId();
const long configFrame::ID_STATICTEXT22 = wxNewId();
const long configFrame::ID_comboBoxAutoanalyzeCardPreferResult1 = wxNewId();
const long configFrame::ID_changesAutoanalyzeCardPreferResult1 = wxNewId();
const long configFrame::ID_STATICTEXT26 = wxNewId();
const long configFrame::ID_comboBoxAutoanalyzeCardPreferResult2 = wxNewId();
const long configFrame::ID_changesAutoanalyzeCardPreferResult2 = wxNewId();
const long configFrame::ID_STATICTEXT28 = wxNewId();
const long configFrame::ID_comboBoxAutoanalyzeCardPreferResult3 = wxNewId();
const long configFrame::ID_changesAutoanalyzeCardPreferResult3 = wxNewId();
const long configFrame::ID_STATICTEXT29 = wxNewId();
const long configFrame::ID_comboBoxAutoanalyzeCardPreferResult4 = wxNewId();
const long configFrame::ID_changesAutoanalyzeCardPreferResult4 = wxNewId();
const long configFrame::ID_STATICTEXT30 = wxNewId();
const long configFrame::ID_comboBoxAutoanalyzeCardPreferResult5 = wxNewId();
const long configFrame::ID_changesAutoanalyzeCardPreferResult5 = wxNewId();
const long configFrame::ID_PANEL1 = wxNewId();
const long configFrame::ID_staticColours = wxNewId();
const long configFrame::ID_buttonColourBackground = wxNewId();
const long configFrame::ID_changesColourBackground = wxNewId();
const long configFrame::ID_staticColourCell = wxNewId();
const long configFrame::ID_buttonColourCell11 = wxNewId();
const long configFrame::ID_buttonColourCell21 = wxNewId();
const long configFrame::ID_buttonColourMarkedCell1 = wxNewId();
const long configFrame::ID_buttonColourCell12 = wxNewId();
const long configFrame::ID_buttonColourCell22 = wxNewId();
const long configFrame::ID_buttonColourMarkedCell2 = wxNewId();
const long configFrame::ID_changesColourCell = wxNewId();
const long configFrame::ID_buttonColourPointNormal = wxNewId();
const long configFrame::ID_changesColourPointNormal = wxNewId();
const long configFrame::ID_buttonColourPointBefore = wxNewId();
const long configFrame::ID_changesColourPointBefore = wxNewId();
const long configFrame::ID_buttonColourPointAfter = wxNewId();
const long configFrame::ID_changesColourPointAfter = wxNewId();
const long configFrame::ID_buttonColourTemperatureLine = wxNewId();
const long configFrame::ID_changesColourTemperatureLine = wxNewId();
const long configFrame::ID_buttonColourTemperatureLevelLine = wxNewId();
const long configFrame::ID_changesColourTemperatureLevelLine = wxNewId();
const long configFrame::ID_buttonColourPhaseLine = wxNewId();
const long configFrame::ID_changesColourPhaseLine = wxNewId();
const long configFrame::ID_buttonColourBorders = wxNewId();
const long configFrame::ID_changesColourBorders = wxNewId();
const long configFrame::ID_panelColours = wxNewId();
const long configFrame::ID_staticFonts = wxNewId();
const long configFrame::ID_buttonFontHeadTopic = wxNewId();
const long configFrame::ID_changesFontHeadTopic = wxNewId();
const long configFrame::ID_buttonFontHeadName = wxNewId();
const long configFrame::ID_changesFontHeadName = wxNewId();
const long configFrame::ID_buttonFontHeadValue = wxNewId();
const long configFrame::ID_changesFontHeadValue = wxNewId();
const long configFrame::ID_buttonFontResultHeader = wxNewId();
const long configFrame::ID_changesFontResultHeader = wxNewId();
const long configFrame::ID_buttonFontResultDefault = wxNewId();
const long configFrame::ID_changesFontResultDefault = wxNewId();
const long configFrame::ID_buttonFontResultResults = wxNewId();
const long configFrame::ID_changesFontResultResults = wxNewId();
const long configFrame::ID_buttonFontResultPhases = wxNewId();
const long configFrame::ID_changesFontResultPhases = wxNewId();
const long configFrame::ID_panelFonts = wxNewId();
const long configFrame::ID_checkBoxRememberPassword = wxNewId();
const long configFrame::ID_changesRememberPassword = wxNewId();
const long configFrame::ID_STATICTEXT31 = wxNewId();
const long configFrame::ID_staticPassword = wxNewId();
const long configFrame::ID_STATICTEXT35 = wxNewId();
const long configFrame::ID_STATICTEXT34 = wxNewId();
const long configFrame::ID_textPassword = wxNewId();
const long configFrame::ID_STATICTEXT7 = wxNewId();
const long configFrame::ID_STATICTEXT32 = wxNewId();
const long configFrame::ID_staticPasswordNote = wxNewId();
const long configFrame::ID_changesPassword = wxNewId();
const long configFrame::ID_checkBoxUseCustomServer = wxNewId();
const long configFrame::ID_changesUseCustomServer = wxNewId();
const long configFrame::ID_STATICTEXT13 = wxNewId();
const long configFrame::ID_staticCustomServerUri = wxNewId();
const long configFrame::ID_STATICTEXT16 = wxNewId();
const long configFrame::ID_STATICTEXT20 = wxNewId();
const long configFrame::ID_textCustomServerUri = wxNewId();
const long configFrame::ID_changesCustomServerUri = wxNewId();
const long configFrame::ID_staticLengthUnit = wxNewId();
const long configFrame::ID_comboBoxLengthUnit = wxNewId();
const long configFrame::ID_changesLengthUnit = wxNewId();
const long configFrame::ID_staticTemperatureUnit = wxNewId();
const long configFrame::ID_comboBoxTemperatureUnit = wxNewId();
const long configFrame::ID_changesTemperatureUnit = wxNewId();
const long configFrame::ID_buttonSetDefaults = wxNewId();
const long configFrame::ID_panelOther = wxNewId();
const long configFrame::ID_notebook = wxNewId();
const long configFrame::ID_buttonSave = wxNewId();
const long configFrame::ID_buttonCancel = wxNewId();
const long configFrame::ID_space4 = wxNewId();
const long configFrame::ID_buttonOk = wxNewId();
const long configFrame::ID_panelMain = wxNewId();
//*)

BEGIN_EVENT_TABLE(configFrame,wxDialog)
    //(*EventTable(configFrame)
    //*)
END_EVENT_TABLE()

/******************************************************************************/

const wxEventType wxEVT_CONFIG_DATA_MODIFIED_EVENT = wxNewEventType();

/*******************************************************************************
********************************************************************************
*******************************************************************************/

/**
 *
 */
configFrame::configFrame(wxWindow* parent,configClass *config, size_t pageNo, wxWindowID id,const wxPoint& pos,const wxSize& size)
{
    m_parent = parent;
    m_config = config;

    buildGui(parent);

    update();

    notebook->ChangeSelection(pageNo);
}

void configFrame::buildGui(wxWindow* parent)
{
    //(*Initialize(configFrame)
    wxStaticBoxSizer* StaticBoxSizer2;
    wxFlexGridSizer* FlexGridSizer1;
    wxFlexGridSizer* FlexGridSizer2;
    wxBoxSizer* sizerMain2;
    wxFlexGridSizer* sizerOther2;
    wxBoxSizer* BoxSizer3;
    wxFlexGridSizer* sizerApplication6;
    wxStaticBoxSizer* StaticBoxSizer5;
    wxBoxSizer* BoxSizer10;
    wxBoxSizer* sizerFonts;
    wxFlexGridSizer* sizerGeneral5;
    wxFlexGridSizer* sizerApplication5;
    wxFlexGridSizer* sizerColours4;
    wxBoxSizer* BoxSizer7;
    wxStaticBoxSizer* sizerFonts1;
    wxStaticBoxSizer* sizerGeneral3;
    wxStaticBoxSizer* sizerOther1;
    wxBoxSizer* BoxSizer11;
    wxStaticBoxSizer* sizerApplication7;
    wxBoxSizer* BoxSizer13;
    wxBoxSizer* sizerGeneral;
    wxBoxSizer* BoxSizer2;
    wxFlexGridSizer* FlexGridSizer4;
    wxStaticBoxSizer* StaticBoxSizer3;
    wxBoxSizer* sizerApplication;
    wxBoxSizer* BoxSizer9;
    wxStaticBoxSizer* sizerColours1;
    wxBoxSizer* sizerMain1;
    wxBoxSizer* sizerColours;
    wxFlexGridSizer* sizerColours2;
    wxStaticBoxSizer* sizerApplication1;
    wxFlexGridSizer* FlexGridSizer3;
    wxFlexGridSizer* sizerApplication2;
    wxBoxSizer* BoxSizer4;
    wxBoxSizer* sizerGeneral6;
    wxStaticBoxSizer* sizerGeneral2;
    wxStaticBoxSizer* StaticBoxSizer4;
    wxBoxSizer* BoxSizer8;
    wxBoxSizer* sizerColours3;
    wxBoxSizer* BoxSizer1;
    wxFlexGridSizer* sizerFonts2;
    wxBoxSizer* sizerOther;
    wxBoxSizer* sizerButtons;
    wxBoxSizer* BoxSizer12;
    wxBoxSizer* BoxSizer14;
    wxFlexGridSizer* FlexGridSizer5;
    wxBoxSizer* sizerGeneral7;
    wxFlexGridSizer* sizerApplication3;
    wxFlexGridSizer* sizerGeneral4;
    wxBoxSizer* BoxSizer6;
    wxBoxSizer* BoxSizer5;
    wxStaticBoxSizer* StaticBoxSizer1;

    Create(parent, wxID_ANY, _("NFP - configuration"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
    Move(wxPoint(-1,-1));
    sizerMain1 = new wxBoxSizer(wxHORIZONTAL);
    panelMain = new wxPanel(this, ID_panelMain, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_panelMain"));
    sizerMain2 = new wxBoxSizer(wxVERTICAL);
    notebook = new wxNotebook(panelMain, ID_notebook, wxDefaultPosition, wxDefaultSize, wxNB_TOP, _T("ID_notebook"));
    panelGeneral = new wxPanel(notebook, ID_panelGeneral, wxPoint(64,35), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_panelGeneral"));
    sizerGeneral = new wxBoxSizer(wxVERTICAL);
    sizerGeneral2 = new wxStaticBoxSizer(wxHORIZONTAL, panelGeneral, wxEmptyString);
    sizerGeneral4 = new wxFlexGridSizer(0, 2, 0, 0);
    sizerGeneral4->AddGrowableCol(0);
    staticLanguage = new wxStaticText(panelGeneral, ID_staticLanguage, _("Choose application language:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticLanguage"));
    sizerGeneral4->Add(staticLanguage, 1, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesLanguage = new wxStaticText(panelGeneral, ID_changesLanguage, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesLanguage"));
    changesLanguage->SetForegroundColour(wxColour(255,0,0));
    sizerGeneral4->Add(changesLanguage, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    listBoxLanguage = new wxListBox(panelGeneral, ID_listBoxLanguage, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_listBoxLanguage"));
    listBoxLanguage->SetToolTip(_("Select new language of the application."));
    sizerGeneral4->Add(listBoxLanguage, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerGeneral2->Add(sizerGeneral4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    sizerGeneral->Add(sizerGeneral2, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerGeneral3 = new wxStaticBoxSizer(wxHORIZONTAL, panelGeneral, wxEmptyString);
    sizerGeneral5 = new wxFlexGridSizer(0, 2, 0, 0);
    sizerGeneral5->AddGrowableCol(0);
    checkBoxOpenLastOpenedFile = new wxCheckBox(panelGeneral, ID_checkBoxOpenLastOpenedFile, _("Open the last opened cards\' set"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxOpenLastOpenedFile"));
    checkBoxOpenLastOpenedFile->SetValue(false);
    checkBoxOpenLastOpenedFile->SetToolTip(_("Open the last opened cards\' set when application starts."));
    sizerGeneral5->Add(checkBoxOpenLastOpenedFile, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesOpenLastOpenedFile = new wxStaticText(panelGeneral, ID_changesOpenLastOpenedFile, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesOpenLastOpenedFile"));
    changesOpenLastOpenedFile->SetForegroundColour(wxColour(255,0,0));
    sizerGeneral5->Add(changesOpenLastOpenedFile, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    checkBoxAutosaveChanges = new wxCheckBox(panelGeneral, ID_checkBoxAutosaveChanges, _("Save automatically changes in days / cards"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxAutosaveChanges"));
    checkBoxAutosaveChanges->SetValue(false);
    checkBoxAutosaveChanges->SetToolTip(_("Save automatically changes while editing days and cards"));
    sizerGeneral5->Add(checkBoxAutosaveChanges, 1, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesAutosaveChanges = new wxStaticText(panelGeneral, ID_changesAutosaveChanges, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesAutosaveChanges"));
    changesAutosaveChanges->SetForegroundColour(wxColour(255,0,0));
    sizerGeneral5->Add(changesAutosaveChanges, 0, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    checkBoxAutosaveSet = new wxCheckBox(panelGeneral, ID_checkBoxAutosaveSet, _("Save automatically card set"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxAutosaveSet"));
    checkBoxAutosaveSet->SetValue(false);
    checkBoxAutosaveSet->SetToolTip(_("Save automatically changes in card set while exiting the application or closing the card set"));
    sizerGeneral5->Add(checkBoxAutosaveSet, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesAutosaveSet = new wxStaticText(panelGeneral, ID_changesAutosaveSet, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesAutosaveSet"));
    changesAutosaveSet->SetForegroundColour(wxColour(255,0,0));
    sizerGeneral5->Add(changesAutosaveSet, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    checkBoxSyncFileAutomatically = new wxCheckBox(panelGeneral, ID_checkBoxSyncFileAutomatically, _("Synchronize cards\' set with server automatically"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxSyncFileAutomatically"));
    checkBoxSyncFileAutomatically->SetValue(false);
    checkBoxSyncFileAutomatically->SetToolTip(_("Perform automatically synchronization with server on opening and saving cards\' set.\nOf course this works, when you enabled storing cards on server (menu \'NFP\' / \'Store cards\' set on server\' set on server)."));
    sizerGeneral5->Add(checkBoxSyncFileAutomatically, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesSyncFileAutomatically = new wxStaticText(panelGeneral, ID_changesSyncFileAutomatically, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesSyncFileAutomatically"));
    changesSyncFileAutomatically->SetForegroundColour(wxColour(255,0,0));
    sizerGeneral5->Add(changesSyncFileAutomatically, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    checkBoxRememberPosition = new wxCheckBox(panelGeneral, ID_checkBoxRememberPosition, _("Remember windows positions and sizes"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxRememberPosition"));
    checkBoxRememberPosition->SetValue(false);
    checkBoxRememberPosition->SetToolTip(_("Remember application\'s windows and dialogs positions and sizes."));
    sizerGeneral5->Add(checkBoxRememberPosition, 1, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesRememberPosition = new wxStaticText(panelGeneral, ID_changesRememberPosition, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesRememberPosition"));
    changesRememberPosition->SetForegroundColour(wxColour(255,0,0));
    sizerGeneral5->Add(changesRememberPosition, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    checkBoxFlatButtons = new wxCheckBox(panelGeneral, ID_checkBoxFlatButtons, _("Use flat buttons"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxFlatButtons"));
    checkBoxFlatButtons->SetValue(false);
    checkBoxFlatButtons->SetToolTip(_("Choose if all buttons in the application should be flat or standard ones."));
    sizerGeneral5->Add(checkBoxFlatButtons, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesFlatButtons = new wxStaticText(panelGeneral, ID_changesFlatButtons, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesFlatButtons"));
    changesFlatButtons->SetForegroundColour(wxColour(255,0,0));
    sizerGeneral5->Add(changesFlatButtons, 0, wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerGeneral3->Add(sizerGeneral5, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    sizerGeneral->Add(sizerGeneral3, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer5 = new wxStaticBoxSizer(wxHORIZONTAL, panelGeneral, wxEmptyString);
    FlexGridSizer4 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer4->AddGrowableCol(0);
    checkBoxCheckForUpdates = new wxCheckBox(panelGeneral, ID_checkBoxCheckForUpdates, _("Check for application updates"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxCheckForUpdates"));
    checkBoxCheckForUpdates->SetValue(false);
    checkBoxCheckForUpdates->SetToolTip(_("If set the application checks for new version every time when it is starting.\nThe only data which are sent is the information if you are using Windows or Linux operating system."));
    FlexGridSizer4->Add(checkBoxCheckForUpdates, 1, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesCheckForUpdates = new wxStaticText(panelGeneral, ID_changesCheckForUpdates, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesCheckForUpdates"));
    changesCheckForUpdates->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer4->Add(changesCheckForUpdates, 0, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerGeneral6 = new wxBoxSizer(wxHORIZONTAL);
    space2 = new wxStaticText(panelGeneral, ID_space2, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_space2"));
    space2->SetForegroundColour(wxColour(255,0,0));
    sizerGeneral6->Add(space2, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticUpdatesProxy = new wxStaticText(panelGeneral, ID_staticUpdatesProxy, _("Proxy server address:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticUpdatesProxy"));
    sizerGeneral6->Add(staticUpdatesProxy, 1, wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4->Add(sizerGeneral6, 1, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    space1 = new wxStaticText(panelGeneral, ID_space1, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_space1"));
    space1->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer4->Add(space1, 0, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerGeneral7 = new wxBoxSizer(wxHORIZONTAL);
    space3 = new wxStaticText(panelGeneral, ID_space3, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_space3"));
    space3->SetForegroundColour(wxColour(255,0,0));
    sizerGeneral7->Add(space3, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textUpdatesProxy = new wxTextCtrl(panelGeneral, ID_textUpdatesProxy, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_textUpdatesProxy"));
    textUpdatesProxy->SetToolTip(_("If you are using the proxy server to comunicate with the Internet\nthen write here the addess of it in the format \'hostname:port\' or \'hostname\'\n(in this case the default proxy port \'8080\' will be used),\neg. 1.2.3.4:8088"));
    sizerGeneral7->Add(textUpdatesProxy, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer4->Add(sizerGeneral7, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesUpdatesProxy = new wxStaticText(panelGeneral, ID_changesUpdatesProxy, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesUpdatesProxy"));
    changesUpdatesProxy->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer4->Add(changesUpdatesProxy, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer5->Add(FlexGridSizer4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    sizerGeneral->Add(StaticBoxSizer5, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    panelGeneral->SetSizer(sizerGeneral);
    sizerGeneral->Fit(panelGeneral);
    sizerGeneral->SetSizeHints(panelGeneral);
    panelApplication = new wxPanel(notebook, ID_panelApplication, wxPoint(71,10), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_panelApplication"));
    sizerApplication = new wxBoxSizer(wxVERTICAL);
    sizerApplication1 = new wxStaticBoxSizer(wxVERTICAL, panelApplication, wxEmptyString);
    sizerApplication2 = new wxFlexGridSizer(0, 2, 0, 0);
    sizerApplication2->AddGrowableCol(0);
    checkBoxCheckForMissingDays = new wxCheckBox(panelApplication, ID_checkBoxCheckForMissingDays, _("Check for missing days"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxCheckForMissingDays"));
    checkBoxCheckForMissingDays->SetValue(false);
    checkBoxCheckForMissingDays->SetToolTip(_("When the cards\' set is loaded check if the last card contains all days including today,\nif not then propose adding missing ones."));
    sizerApplication2->Add(checkBoxCheckForMissingDays, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesCheckForMissingDays = new wxStaticText(panelApplication, ID_changesCheckForMissingDays, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesCheckForMissingDays"));
    changesCheckForMissingDays->SetForegroundColour(wxColour(255,0,0));
    sizerApplication2->Add(changesCheckForMissingDays, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    checkBoxBreastsAutocontrolReminder = new wxCheckBox(panelApplication, ID_checkBoxBreastsAutocontrolReminder, _("Enable the breasts self-control reminder"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxBreastsAutocontrolReminder"));
    checkBoxBreastsAutocontrolReminder->SetValue(false);
    checkBoxBreastsAutocontrolReminder->SetToolTip(_("The breast self-control should be performed monthly.\nWhen you enable this function, application can reminds you about it."));
    sizerApplication2->Add(checkBoxBreastsAutocontrolReminder, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesBreastsAutocontrolReminder = new wxStaticText(panelApplication, ID_changesBreastsAutocontrolReminder, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesBreastsAutocontrolReminder"));
    changesBreastsAutocontrolReminder->SetForegroundColour(wxColour(255,0,0));
    sizerApplication2->Add(changesBreastsAutocontrolReminder, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerApplication1->Add(sizerApplication2, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    sizerApplication3 = new wxFlexGridSizer(0, 5, 0, 0);
    sizerApplication3->AddGrowableCol(0);
    space5 = new wxStaticText(panelApplication, ID_space5, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_space5"));
    space5->SetForegroundColour(wxColour(255,0,0));
    sizerApplication3->Add(space5, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    staticBreastsAutocontrolReminderDay1 = new wxStaticText(panelApplication, ID_staticBreastsAutocontrolReminderDay1, _("Remind at"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticBreastsAutocontrolReminderDay1"));
    staticBreastsAutocontrolReminderDay1->SetToolTip(_("Set on which day of cycle the application should remind about breast self-control."));
    sizerApplication3->Add(staticBreastsAutocontrolReminderDay1, 0, wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    spinCtrlBreastsAutocontrolReminderDay = new wxSpinCtrl(panelApplication, ID_spinCtrlBreastsAutocontrolReminderDay, _T("6"), wxDefaultPosition, wxSize(60,-1), 0, 1, 30, 6, _T("ID_spinCtrlBreastsAutocontrolReminderDay"));
    spinCtrlBreastsAutocontrolReminderDay->SetValue(_T("6"));
    spinCtrlBreastsAutocontrolReminderDay->SetToolTip(_("Set on which day of cycle the application should remind about breast self-control."));
    sizerApplication3->Add(spinCtrlBreastsAutocontrolReminderDay, 0, wxLEFT|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    staticBreastsAutocontrolReminderDay2 = new wxStaticText(panelApplication, ID_staticBreastsAutocontrolReminderDay2, _("day of cycle"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticBreastsAutocontrolReminderDay2"));
    staticBreastsAutocontrolReminderDay2->SetToolTip(_("Set on which day of cycle the application should remind about breast self-control."));
    sizerApplication3->Add(staticBreastsAutocontrolReminderDay2, 1, wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    changesBreastsAutocontrolReminderDay = new wxStaticText(panelApplication, ID_changesBreastsAutocontrolReminderDay, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesBreastsAutocontrolReminderDay"));
    changesBreastsAutocontrolReminderDay->SetForegroundColour(wxColour(255,0,0));
    sizerApplication3->Add(changesBreastsAutocontrolReminderDay, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    space6 = new wxStaticText(panelApplication, ID_space6, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_space6"));
    space6->SetForegroundColour(wxColour(255,0,0));
    sizerApplication3->Add(space6, 0, wxBOTTOM|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    staticBreastAutocontrolInterval1 = new wxStaticText(panelApplication, ID_staticBreastAutocontrolInterval1, _("Remind every"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticBreastAutocontrolInterval1"));
    staticBreastAutocontrolInterval1->SetToolTip(_("When the cycle is longer than reminder day defined above plus number of days defined here\nthen remind again about breast self-control.\nThis option is usefull during pregnancy and breast-feed time, when the cycle\'s \'length\' is 200 days or more ;-)"));
    sizerApplication3->Add(staticBreastAutocontrolInterval1, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    spinCtrlBreastAutocontrolInterval = new wxSpinCtrl(panelApplication, ID_spinCtrlBreastAutocontrolInterval, _T("30"), wxDefaultPosition, wxSize(60,-1), 0, 10, 50, 30, _T("ID_spinCtrlBreastAutocontrolInterval"));
    spinCtrlBreastAutocontrolInterval->SetValue(_T("30"));
    spinCtrlBreastAutocontrolInterval->SetToolTip(_("When the cycle is longer than reminder day defined above plus number of days defined here\nthen remind again about breast self-control.\nThis option is usefull during pregnancy and breast-feed time, when the cycle\'s \'length\' is 200 days or more ;-)"));
    sizerApplication3->Add(spinCtrlBreastAutocontrolInterval, 0, wxBOTTOM|wxLEFT|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    staticBreastAutocontrolInterval2 = new wxStaticText(panelApplication, ID_staticBreastAutocontrolInterval2, _("days"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticBreastAutocontrolInterval2"));
    staticBreastAutocontrolInterval2->SetToolTip(_("When the cycle is longer than reminder day defined above plus number of days defined here\nthen remind again about breast self-control.\nThis option is usefull during pregnancy and breast-feed time, when the cycle\'s \'length\' is 200 days or more ;-)"));
    sizerApplication3->Add(staticBreastAutocontrolInterval2, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    changesBreastAutocontrolInterval = new wxStaticText(panelApplication, ID_changesBreastAutocontrolInterval, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesBreastAutocontrolInterval"));
    changesBreastAutocontrolInterval->SetForegroundColour(wxColour(255,0,0));
    sizerApplication3->Add(changesBreastAutocontrolInterval, 0, wxBOTTOM|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    sizerApplication1->Add(sizerApplication3, 0, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    sizerApplication->Add(sizerApplication1, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerApplication7 = new wxStaticBoxSizer(wxHORIZONTAL, panelApplication, _("Temperatures\' range on the chart"));
    sizerApplication5 = new wxFlexGridSizer(0, 5, 0, 0);
    sizerApplication5->AddGrowableCol(1);
    space9 = new wxStaticText(panelApplication, ID_space9, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_space9"));
    space9->SetForegroundColour(wxColour(255,0,0));
    sizerApplication5->Add(space9, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticTemperatureRangeHigh = new wxStaticText(panelApplication, ID_staticTemperatureRangeHigh, _("High temperature"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticTemperatureRangeHigh"));
    staticTemperatureRangeHigh->SetToolTip(_("Define the high temperature of the chart.\nHighest temperature will be printed outside of the chart."));
    sizerApplication5->Add(staticTemperatureRangeHigh, 0, wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    comboBoxTemperatureRangeHigh = new wxComboBox(panelApplication, ID_comboBoxTemperatureRangeHigh, wxEmptyString, wxDefaultPosition, wxSize(100,-1), 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_comboBoxTemperatureRangeHigh"));
    comboBoxTemperatureRangeHigh->SetToolTip(_("Define the high temperature of the chart.\nHighest temperature will be printed outside of the chart."));
    sizerApplication5->Add(comboBoxTemperatureRangeHigh, 0, wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    staticTemperatureCorF1 = new wxStaticText(panelApplication, ID_staticTemperatureCorF1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticTemperatureCorF1"));
    sizerApplication5->Add(staticTemperatureCorF1, 0, wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    changesTemperatureRangeHigh = new wxStaticText(panelApplication, ID_changesTemperatureRangeHigh, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesTemperatureRangeHigh"));
    changesTemperatureRangeHigh->SetForegroundColour(wxColour(255,0,0));
    sizerApplication5->Add(changesTemperatureRangeHigh, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    space10 = new wxStaticText(panelApplication, ID_space10, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_space10"));
    space10->SetForegroundColour(wxColour(255,0,0));
    sizerApplication5->Add(space10, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    staticTemperatureRangeLow = new wxStaticText(panelApplication, ID_staticTemperatureRangeLow, _("Low temperature"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticTemperatureRangeLow"));
    staticTemperatureRangeLow->SetToolTip(_("Define the low temperature of the chart.\nLowest temperature will be printed outside of the chart."));
    sizerApplication5->Add(staticTemperatureRangeLow, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    comboBoxTemperatureRangeLow = new wxComboBox(panelApplication, ID_comboBoxTemperatureRangeLow, wxEmptyString, wxDefaultPosition, wxSize(100,-1), 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_comboBoxTemperatureRangeLow"));
    comboBoxTemperatureRangeLow->SetToolTip(_("Define the low temperature of the chart.\nLowest temperature will be printed outside of the chart."));
    sizerApplication5->Add(comboBoxTemperatureRangeLow, 0, wxBOTTOM|wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    staticTemperatureCorF2 = new wxStaticText(panelApplication, ID_staticTemperatureCorF2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticTemperatureCorF2"));
    sizerApplication5->Add(staticTemperatureCorF2, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    changesTemperatureRangeLow = new wxStaticText(panelApplication, ID_changesTemperatureRangeLow, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesTemperatureRangeLow"));
    changesTemperatureRangeLow->SetForegroundColour(wxColour(255,0,0));
    sizerApplication5->Add(changesTemperatureRangeLow, 0, wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerApplication7->Add(sizerApplication5, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    sizerApplication->Add(sizerApplication7, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    panelApplication->SetSizer(sizerApplication);
    sizerApplication->Fit(panelApplication);
    sizerApplication->SetSizeHints(panelApplication);
    PanelAnalysis = new wxPanel(notebook, ID_PANEL1, wxPoint(108,8), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    StaticBoxSizer3 = new wxStaticBoxSizer(wxVERTICAL, PanelAnalysis, wxEmptyString);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    checkBoxAutoanalyzeCard = new wxCheckBox(PanelAnalysis, ID_checkBoxAutoanalyzeCard, _("Analyze card automatically after data changes"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxAutoanalyzeCard"));
    checkBoxAutoanalyzeCard->SetValue(false);
    checkBoxAutoanalyzeCard->SetToolTip(_("Everytime after updating cycle\'s data, run auto-analysis"));
    BoxSizer2->Add(checkBoxAutoanalyzeCard, 1, wxTOP|wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesAutoanalyzeCard = new wxStaticText(PanelAnalysis, ID_changesAutoanalyzeCard, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesAutoanalyzeCard"));
    changesAutoanalyzeCard->SetForegroundColour(wxColour(255,0,0));
    BoxSizer2->Add(changesAutoanalyzeCard, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer3->Add(BoxSizer2, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer13 = new wxBoxSizer(wxHORIZONTAL);
    StaticText12 = new wxStaticText(PanelAnalysis, ID_STATICTEXT14, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT14"));
    BoxSizer13->Add(StaticText12, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    checkBoxShowAutoanalysisDetails = new wxCheckBox(PanelAnalysis, ID_checkBoxShowAutoanalysisDetails, _("Show details of auto-analysis"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxShowAutoanalysisDetails"));
    checkBoxShowAutoanalysisDetails->SetValue(false);
    checkBoxShowAutoanalysisDetails->SetToolTip(_("Show infobox with results of auto-analysis"));
    BoxSizer13->Add(checkBoxShowAutoanalysisDetails, 1, wxBOTTOM|wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesShowAutoanalysisDetails = new wxStaticText(PanelAnalysis, ID_changesShowAutoanalysisDetails, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesShowAutoanalysisDetails"));
    changesShowAutoanalysisDetails->SetForegroundColour(wxColour(255,0,0));
    BoxSizer13->Add(changesShowAutoanalysisDetails, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer3->Add(BoxSizer13, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    StaticText8 = new wxStaticText(PanelAnalysis, ID_STATICTEXT10, _("What to do with days with disrupted or not measured\ntemperature while calculating low- and high levels:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    StaticBoxSizer3->Add(StaticText8, 0, wxTOP|wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer3 = new wxFlexGridSizer(0, 5, 0, 0);
    FlexGridSizer3->AddGrowableCol(1);
    StaticText15 = new wxStaticText(PanelAnalysis, ID_STATICTEXT17, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT17"));
    FlexGridSizer3->Add(StaticText15, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText16 = new wxStaticText(PanelAnalysis, ID_STATICTEXT18, _("- allow maximum"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT18"));
    FlexGridSizer3->Add(StaticText16, 0, wxTOP|wxLEFT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    spinMaxAllowedNotMesuredLowLevelDays = new wxSpinCtrl(PanelAnalysis, ID_spinMaxAllowedNotMesuredLowLevelDays, _T("3"), wxDefaultPosition, wxSize(60,-1), 0, 0, 10, 3, _T("ID_spinMaxAllowedNotMesuredLowLevelDays"));
    spinMaxAllowedNotMesuredLowLevelDays->SetValue(_T("3"));
    FlexGridSizer3->Add(spinMaxAllowedNotMesuredLowLevelDays, 0, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText17 = new wxStaticText(PanelAnalysis, ID_STATICTEXT19, _("such days in low-level"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT19"));
    FlexGridSizer3->Add(StaticText17, 1, wxTOP|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    StaticText9 = new wxStaticText(PanelAnalysis, ID_STATICTEXT11, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT11"));
    FlexGridSizer3->Add(StaticText9, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesMaxAllowedNotMesuredLowLevelDays = new wxStaticText(PanelAnalysis, ID_changesMaxAllowedNotMesuredLowLevelDays, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesMaxAllowedNotMesuredLowLevelDays"));
    changesMaxAllowedNotMesuredLowLevelDays->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer3->Add(changesMaxAllowedNotMesuredLowLevelDays, 0, wxTOP|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText10 = new wxStaticText(PanelAnalysis, ID_STATICTEXT12, _("- accept maximum"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    FlexGridSizer3->Add(StaticText10, 0, wxLEFT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    spinMaxIncludedNotMesuredLowLevelDays = new wxSpinCtrl(PanelAnalysis, ID_spinMaxIncludedNotMesuredLowLevelDays, _T("2"), wxDefaultPosition, wxSize(60,-1), 0, 0, 5, 2, _T("ID_spinMaxIncludedNotMesuredLowLevelDays"));
    spinMaxIncludedNotMesuredLowLevelDays->SetValue(_T("2"));
    FlexGridSizer3->Add(spinMaxIncludedNotMesuredLowLevelDays, 0, wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText13 = new wxStaticText(PanelAnalysis, ID_STATICTEXT15, _("such days as low-level days"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT15"));
    FlexGridSizer3->Add(StaticText13, 1, wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    changesMaxIncludedNotMesuredLowLevelDays = new wxStaticText(PanelAnalysis, ID_changesMaxIncludedNotMesuredLowLevelDays, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesMaxIncludedNotMesuredLowLevelDays"));
    changesMaxIncludedNotMesuredLowLevelDays->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer3->Add(changesMaxIncludedNotMesuredLowLevelDays, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText6 = new wxStaticText(PanelAnalysis, ID_STATICTEXT8, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT8"));
    FlexGridSizer3->Add(StaticText6, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText7 = new wxStaticText(PanelAnalysis, ID_STATICTEXT9, _("- allow maximum"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    FlexGridSizer3->Add(StaticText7, 0, wxTOP|wxLEFT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    spinMaxAllowedNotMesuredHighLevelDays = new wxSpinCtrl(PanelAnalysis, ID_spinMaxAllowedNotMesuredHighLevelDays, _T("1"), wxDefaultPosition, wxSize(60,-1), 0, 0, 10, 1, _T("ID_spinMaxAllowedNotMesuredHighLevelDays"));
    spinMaxAllowedNotMesuredHighLevelDays->SetValue(_T("1"));
    FlexGridSizer3->Add(spinMaxAllowedNotMesuredHighLevelDays, 0, wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText19 = new wxStaticText(PanelAnalysis, ID_STATICTEXT21, _("such days in high-level"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT21"));
    FlexGridSizer3->Add(StaticText19, 1, wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    changesMaxAllowedNotMesuredHighLevelDays = new wxStaticText(PanelAnalysis, ID_changesMaxAllowedNotMesuredHighLevelDays, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesMaxAllowedNotMesuredHighLevelDays"));
    changesMaxAllowedNotMesuredHighLevelDays->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer3->Add(changesMaxAllowedNotMesuredHighLevelDays, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText21 = new wxStaticText(PanelAnalysis, ID_STATICTEXT23, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT23"));
    FlexGridSizer3->Add(StaticText21, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText22 = new wxStaticText(PanelAnalysis, ID_STATICTEXT24, _("- accept maximum"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT24"));
    FlexGridSizer3->Add(StaticText22, 0, wxLEFT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    spinMaxIncludedNotMesuredHighLevelDays = new wxSpinCtrl(PanelAnalysis, ID_spinMaxIncludedNotMesuredHighLevelDays, _T("1"), wxDefaultPosition, wxSize(60,-1), 0, 0, 3, 1, _T("ID_spinMaxIncludedNotMesuredHighLevelDays"));
    spinMaxIncludedNotMesuredHighLevelDays->SetValue(_T("1"));
    FlexGridSizer3->Add(spinMaxIncludedNotMesuredHighLevelDays, 0, wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText23 = new wxStaticText(PanelAnalysis, ID_STATICTEXT25, _("such days as high-level days"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT25"));
    FlexGridSizer3->Add(StaticText23, 1, wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    changesMaxIncludedNotMesuredHighLevelDays = new wxStaticText(PanelAnalysis, ID_changesMaxIncludedNotMesuredHighLevelDays, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesMaxIncludedNotMesuredHighLevelDays"));
    changesMaxIncludedNotMesuredHighLevelDays->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer3->Add(changesMaxIncludedNotMesuredHighLevelDays, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer3->Add(FlexGridSizer3, 0, wxTOP|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    StaticText25 = new wxStaticText(PanelAnalysis, ID_STATICTEXT27, wxEmptyString, wxDefaultPosition, wxSize(40,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT27"));
    BoxSizer4->Add(StaticText25, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    checkBoxIncludeNotMesuredDaysIfAfterMucusPeak = new wxCheckBox(PanelAnalysis, ID_checkBoxIncludeNotMesuredDaysIfAfterMucusPeak, _("only if 1st day of high level temp. is after mucus peak day"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxIncludeNotMesuredDaysIfAfterMucusPeak"));
    checkBoxIncludeNotMesuredDaysIfAfterMucusPeak->SetValue(true);
    BoxSizer4->Add(checkBoxIncludeNotMesuredDaysIfAfterMucusPeak, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesIncludeNotMesuredDaysIfAfterMucusPeak = new wxStaticText(PanelAnalysis, ID_changesIncludeNotMesuredDaysIfAfterMucusPeak, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesIncludeNotMesuredDaysIfAfterMucusPeak"));
    changesIncludeNotMesuredDaysIfAfterMucusPeak->SetForegroundColour(wxColour(255,0,0));
    BoxSizer4->Add(changesIncludeNotMesuredDaysIfAfterMucusPeak, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer3->Add(BoxSizer4, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerApplication6 = new wxFlexGridSizer(0, 2, 0, 0);
    sizerApplication6->AddGrowableCol(0);
    staticAlalysis1 = new wxStaticText(PanelAnalysis, ID_STATICTEXT3, _("When calculating begining of the fertile phase:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    sizerApplication6->Add(staticAlalysis1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    staticAnalysis2 = new wxStaticText(PanelAnalysis, ID_STATICTEXT5, wxEmptyString, wxDefaultPosition, wxSize(15,-1), 0, _T("ID_STATICTEXT5"));
    sizerApplication6->Add(staticAnalysis2, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1 = new wxFlexGridSizer(0, 5, 0, 0);
    FlexGridSizer1->AddGrowableCol(0);
    StaticText2 = new wxStaticText(PanelAnalysis, ID_STATICTEXT2, _("- use historical data from last max"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    FlexGridSizer1->Add(StaticText2, 1, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    spinNumberOfHistoricalCyclesToUse = new wxSpinCtrl(PanelAnalysis, ID_spinNumberOfHistoricalCyclesToUse, _T("12"), wxDefaultPosition, wxSize(60,-1), 0, 6, 36, 12, _T("ID_spinNumberOfHistoricalCyclesToUse"));
    spinNumberOfHistoricalCyclesToUse->SetValue(_T("12"));
    FlexGridSizer1->Add(spinNumberOfHistoricalCyclesToUse, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText3 = new wxStaticText(PanelAnalysis, ID_STATICTEXT4, _("cycles"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    FlexGridSizer1->Add(StaticText3, 0, wxBOTTOM|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    sizerApplication6->Add(FlexGridSizer1, 1, wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    changesNumberOfHistoricalCyclesToUse = new wxStaticText(PanelAnalysis, ID_changesNumberOfHistoricalCyclesToUse, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesNumberOfHistoricalCyclesToUse"));
    changesNumberOfHistoricalCyclesToUse->SetForegroundColour(wxColour(255,0,0));
    sizerApplication6->Add(changesNumberOfHistoricalCyclesToUse, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    StaticText1 = new wxStaticText(PanelAnalysis, ID_STATICTEXT1, _("- sort calculated results in following order:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    sizerApplication6->Add(StaticText1, 1, wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
    StaticText4 = new wxStaticText(PanelAnalysis, ID_STATICTEXT6, wxEmptyString, wxDefaultPosition, wxSize(15,-1), 0, _T("ID_STATICTEXT6"));
    sizerApplication6->Add(StaticText4, 1, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
    StaticText20 = new wxStaticText(PanelAnalysis, ID_STATICTEXT22, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT22"));
    BoxSizer3->Add(StaticText20, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    comboBoxAutoanalyzeCardPreferResult1 = new wxComboBox(PanelAnalysis, ID_comboBoxAutoanalyzeCardPreferResult1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_comboBoxAutoanalyzeCardPreferResult1"));
    BoxSizer3->Add(comboBoxAutoanalyzeCardPreferResult1, 1, wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerApplication6->Add(BoxSizer3, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    changesAutoanalyzeCardPreferResult1 = new wxStaticText(PanelAnalysis, ID_changesAutoanalyzeCardPreferResult1, wxEmptyString, wxDefaultPosition, wxSize(15,-1), 0, _T("ID_changesAutoanalyzeCardPreferResult1"));
    changesAutoanalyzeCardPreferResult1->SetForegroundColour(wxColour(255,0,0));
    sizerApplication6->Add(changesAutoanalyzeCardPreferResult1, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
    StaticText24 = new wxStaticText(PanelAnalysis, ID_STATICTEXT26, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT26"));
    BoxSizer5->Add(StaticText24, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    comboBoxAutoanalyzeCardPreferResult2 = new wxComboBox(PanelAnalysis, ID_comboBoxAutoanalyzeCardPreferResult2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_comboBoxAutoanalyzeCardPreferResult2"));
    BoxSizer5->Add(comboBoxAutoanalyzeCardPreferResult2, 1, wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerApplication6->Add(BoxSizer5, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    changesAutoanalyzeCardPreferResult2 = new wxStaticText(PanelAnalysis, ID_changesAutoanalyzeCardPreferResult2, wxEmptyString, wxDefaultPosition, wxSize(15,-1), 0, _T("ID_changesAutoanalyzeCardPreferResult2"));
    changesAutoanalyzeCardPreferResult2->SetForegroundColour(wxColour(255,0,0));
    sizerApplication6->Add(changesAutoanalyzeCardPreferResult2, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
    StaticText26 = new wxStaticText(PanelAnalysis, ID_STATICTEXT28, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT28"));
    BoxSizer6->Add(StaticText26, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    comboBoxAutoanalyzeCardPreferResult3 = new wxComboBox(PanelAnalysis, ID_comboBoxAutoanalyzeCardPreferResult3, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_comboBoxAutoanalyzeCardPreferResult3"));
    BoxSizer6->Add(comboBoxAutoanalyzeCardPreferResult3, 1, wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerApplication6->Add(BoxSizer6, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    changesAutoanalyzeCardPreferResult3 = new wxStaticText(PanelAnalysis, ID_changesAutoanalyzeCardPreferResult3, wxEmptyString, wxDefaultPosition, wxSize(15,-1), 0, _T("ID_changesAutoanalyzeCardPreferResult3"));
    changesAutoanalyzeCardPreferResult3->SetForegroundColour(wxColour(255,0,0));
    sizerApplication6->Add(changesAutoanalyzeCardPreferResult3, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
    StaticText27 = new wxStaticText(PanelAnalysis, ID_STATICTEXT29, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT29"));
    BoxSizer7->Add(StaticText27, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    comboBoxAutoanalyzeCardPreferResult4 = new wxComboBox(PanelAnalysis, ID_comboBoxAutoanalyzeCardPreferResult4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_comboBoxAutoanalyzeCardPreferResult4"));
    BoxSizer7->Add(comboBoxAutoanalyzeCardPreferResult4, 1, wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerApplication6->Add(BoxSizer7, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    changesAutoanalyzeCardPreferResult4 = new wxStaticText(PanelAnalysis, ID_changesAutoanalyzeCardPreferResult4, wxEmptyString, wxDefaultPosition, wxSize(15,-1), 0, _T("ID_changesAutoanalyzeCardPreferResult4"));
    changesAutoanalyzeCardPreferResult4->SetForegroundColour(wxColour(255,0,0));
    sizerApplication6->Add(changesAutoanalyzeCardPreferResult4, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
    StaticText28 = new wxStaticText(PanelAnalysis, ID_STATICTEXT30, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT30"));
    BoxSizer8->Add(StaticText28, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    comboBoxAutoanalyzeCardPreferResult5 = new wxComboBox(PanelAnalysis, ID_comboBoxAutoanalyzeCardPreferResult5, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_comboBoxAutoanalyzeCardPreferResult5"));
    BoxSizer8->Add(comboBoxAutoanalyzeCardPreferResult5, 1, wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerApplication6->Add(BoxSizer8, 1, wxALL|wxEXPAND|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 0);
    changesAutoanalyzeCardPreferResult5 = new wxStaticText(PanelAnalysis, ID_changesAutoanalyzeCardPreferResult5, wxEmptyString, wxDefaultPosition, wxSize(15,-1), 0, _T("ID_changesAutoanalyzeCardPreferResult5"));
    changesAutoanalyzeCardPreferResult5->SetForegroundColour(wxColour(255,0,0));
    sizerApplication6->Add(changesAutoanalyzeCardPreferResult5, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer3->Add(sizerApplication6, 1, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(StaticBoxSizer3, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    PanelAnalysis->SetSizer(BoxSizer1);
    BoxSizer1->Fit(PanelAnalysis);
    BoxSizer1->SetSizeHints(PanelAnalysis);
    panelColours = new wxPanel(notebook, ID_panelColours, wxPoint(151,13), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_panelColours"));
    sizerColours = new wxBoxSizer(wxHORIZONTAL);
    sizerColours1 = new wxStaticBoxSizer(wxVERTICAL, panelColours, wxEmptyString);
    staticColours = new wxStaticText(panelColours, ID_staticColours, _("Choose colour for:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticColours"));
    sizerColours1->Add(staticColours, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerColours2 = new wxFlexGridSizer(0, 2, 0, 0);
    sizerColours2->AddGrowableCol(0);
    sizerColours2->AddGrowableRow(0);
    sizerColours2->AddGrowableRow(1);
    sizerColours2->AddGrowableRow(2);
    sizerColours2->AddGrowableRow(3);
    sizerColours2->AddGrowableRow(4);
    sizerColours2->AddGrowableRow(5);
    sizerColours2->AddGrowableRow(6);
    sizerColours2->AddGrowableRow(7);
    sizerColours2->AddGrowableRow(8);
    buttonColourBackground = new wxButton(panelColours, ID_buttonColourBackground, _("Background"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonColourBackground"));
    buttonColourBackground->SetToolTip(_("Define the colour of the chart\'s background."));
    sizerColours2->Add(buttonColourBackground, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesColourBackground = new wxStaticText(panelColours, ID_changesColourBackground, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesColourBackground"));
    changesColourBackground->SetForegroundColour(wxColour(255,0,0));
    sizerColours2->Add(changesColourBackground, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    sizerColours3 = new wxBoxSizer(wxHORIZONTAL);
    staticColourCell = new wxStaticText(panelColours, ID_staticColourCell, _("Cells colours of \'normal\' days\nand currently active day"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT, _T("ID_staticColourCell"));
    sizerColours3->Add(staticColourCell, 1, wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
    sizerColours4 = new wxFlexGridSizer(0, 3, 0, 0);
    buttonColourCell11 = new wxButton(panelColours, ID_buttonColourCell11, wxEmptyString, wxDefaultPosition, wxSize(30,20), 0, wxDefaultValidator, _T("ID_buttonColourCell11"));
    buttonColourCell11->SetMinSize(wxSize(30,15));
    buttonColourCell11->SetToolTip(_("Define the colour of the chart\'s cell 1,1 (odd column, odd row)."));
    sizerColours4->Add(buttonColourCell11, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    buttonColourCell21 = new wxButton(panelColours, ID_buttonColourCell21, wxEmptyString, wxDefaultPosition, wxSize(30,20), 0, wxDefaultValidator, _T("ID_buttonColourCell21"));
    buttonColourCell21->SetToolTip(_("Define the colour of the chart\'s cell 2,1 (even column, odd row)."));
    sizerColours4->Add(buttonColourCell21, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    buttonColourMarkedCell1 = new wxButton(panelColours, ID_buttonColourMarkedCell1, wxEmptyString, wxDefaultPosition, wxSize(30,20), 0, wxDefaultValidator, _T("ID_buttonColourMarkedCell1"));
    buttonColourMarkedCell1->SetToolTip(_("Define the colour of the selected cell of the chart, odd row."));
    sizerColours4->Add(buttonColourMarkedCell1, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    buttonColourCell12 = new wxButton(panelColours, ID_buttonColourCell12, wxEmptyString, wxDefaultPosition, wxSize(30,20), 0, wxDefaultValidator, _T("ID_buttonColourCell12"));
    buttonColourCell12->SetToolTip(_("Define the colour of the chart\'s cell 1,2 (odd column, even row)."));
    sizerColours4->Add(buttonColourCell12, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    buttonColourCell22 = new wxButton(panelColours, ID_buttonColourCell22, wxEmptyString, wxDefaultPosition, wxSize(30,20), 0, wxDefaultValidator, _T("ID_buttonColourCell22"));
    buttonColourCell22->SetToolTip(_("Define the colour of the chart\'s cell 2,2 (even column, even row)."));
    sizerColours4->Add(buttonColourCell22, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    buttonColourMarkedCell2 = new wxButton(panelColours, ID_buttonColourMarkedCell2, wxEmptyString, wxDefaultPosition, wxSize(30,20), 0, wxDefaultValidator, _T("ID_buttonColourMarkedCell2"));
    buttonColourMarkedCell2->SetToolTip(_("Define the colour of the selected cell of the chart, even row."));
    sizerColours4->Add(buttonColourMarkedCell2, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    sizerColours3->Add(sizerColours4, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    sizerColours2->Add(sizerColours3, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesColourCell = new wxStaticText(panelColours, ID_changesColourCell, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesColourCell"));
    changesColourCell->SetForegroundColour(wxColour(255,0,0));
    sizerColours2->Add(changesColourCell, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonColourPointNormal = new wxButton(panelColours, ID_buttonColourPointNormal, _("Temperature point"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonColourPointNormal"));
    buttonColourPointNormal->SetToolTip(_("Define the colour of the temperature point."));
    sizerColours2->Add(buttonColourPointNormal, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesColourPointNormal = new wxStaticText(panelColours, ID_changesColourPointNormal, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesColourPointNormal"));
    changesColourPointNormal->SetForegroundColour(wxColour(255,0,0));
    sizerColours2->Add(changesColourPointNormal, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonColourPointBefore = new wxButton(panelColours, ID_buttonColourPointBefore, _("Low-level temperature point"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonColourPointBefore"));
    buttonColourPointBefore->SetToolTip(_("Define the colour of the low-level temperature point."));
    sizerColours2->Add(buttonColourPointBefore, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesColourPointBefore = new wxStaticText(panelColours, ID_changesColourPointBefore, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesColourPointBefore"));
    changesColourPointBefore->SetForegroundColour(wxColour(255,0,0));
    sizerColours2->Add(changesColourPointBefore, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonColourPointAfter = new wxButton(panelColours, ID_buttonColourPointAfter, _("High-level temperature point"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonColourPointAfter"));
    buttonColourPointAfter->SetToolTip(_("Define the colour of the high-level temperature point."));
    sizerColours2->Add(buttonColourPointAfter, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesColourPointAfter = new wxStaticText(panelColours, ID_changesColourPointAfter, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesColourPointAfter"));
    changesColourPointAfter->SetForegroundColour(wxColour(255,0,0));
    sizerColours2->Add(changesColourPointAfter, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonColourTemperatureLine = new wxButton(panelColours, ID_buttonColourTemperatureLine, _("Temperatures line"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonColourTemperatureLine"));
    buttonColourTemperatureLine->SetToolTip(_("Define the colour of the temperatures lines."));
    sizerColours2->Add(buttonColourTemperatureLine, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesColourTemperatureLine = new wxStaticText(panelColours, ID_changesColourTemperatureLine, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesColourTemperatureLine"));
    changesColourTemperatureLine->SetForegroundColour(wxColour(255,0,0));
    sizerColours2->Add(changesColourTemperatureLine, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonColourTemperatureLevelLine = new wxButton(panelColours, ID_buttonColourTemperatureLevelLine, _("Low- and high-level temperature line"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonColourTemperatureLevelLine"));
    buttonColourTemperatureLevelLine->SetToolTip(_("Define the colour of the low- and high-level temperature lines."));
    sizerColours2->Add(buttonColourTemperatureLevelLine, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesColourTemperatureLevelLine = new wxStaticText(panelColours, ID_changesColourTemperatureLevelLine, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesColourTemperatureLevelLine"));
    changesColourTemperatureLevelLine->SetForegroundColour(wxColour(255,0,0));
    sizerColours2->Add(changesColourTemperatureLevelLine, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonColourPhaseLine = new wxButton(panelColours, ID_buttonColourPhaseLine, _("Cycle\'s phases line"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonColourPhaseLine"));
    buttonColourPhaseLine->SetToolTip(_("Define the colour of the cycle\'s phases lines."));
    sizerColours2->Add(buttonColourPhaseLine, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesColourPhaseLine = new wxStaticText(panelColours, ID_changesColourPhaseLine, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesColourPhaseLine"));
    changesColourPhaseLine->SetForegroundColour(wxColour(255,0,0));
    sizerColours2->Add(changesColourPhaseLine, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonColourBorders = new wxButton(panelColours, ID_buttonColourBorders, _("Borders"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonColourBorders"));
    buttonColourBorders->SetToolTip(_("Define the colour of the chart\'s borders."));
    sizerColours2->Add(buttonColourBorders, 1, wxTOP|wxBOTTOM|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesColourBorders = new wxStaticText(panelColours, ID_changesColourBorders, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesColourBorders"));
    changesColourBorders->SetForegroundColour(wxColour(255,0,0));
    sizerColours2->Add(changesColourBorders, 0, wxTOP|wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    sizerColours1->Add(sizerColours2, 1, wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
    sizerColours->Add(sizerColours1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    panelColours->SetSizer(sizerColours);
    sizerColours->Fit(panelColours);
    sizerColours->SetSizeHints(panelColours);
    panelFonts = new wxPanel(notebook, ID_panelFonts, wxPoint(213,15), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_panelFonts"));
    sizerFonts = new wxBoxSizer(wxHORIZONTAL);
    sizerFonts1 = new wxStaticBoxSizer(wxVERTICAL, panelFonts, wxEmptyString);
    staticFonts = new wxStaticText(panelFonts, ID_staticFonts, _("Choose fonts for:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticFonts"));
    sizerFonts1->Add(staticFonts, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerFonts2 = new wxFlexGridSizer(0, 2, 0, 0);
    sizerFonts2->AddGrowableCol(0);
    sizerFonts2->AddGrowableRow(0);
    sizerFonts2->AddGrowableRow(1);
    sizerFonts2->AddGrowableRow(2);
    sizerFonts2->AddGrowableRow(3);
    sizerFonts2->AddGrowableRow(4);
    sizerFonts2->AddGrowableRow(5);
    sizerFonts2->AddGrowableRow(6);
    sizerFonts2->AddGrowableRow(7);
    buttonFontHeadTopic = new wxButton(panelFonts, ID_buttonFontHeadTopic, _("Cycle observation card"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonFontHeadTopic"));
    buttonFontHeadTopic->SetToolTip(_("Set font and colour of the string \'Cycle observation card\' visible in the left-top corner of the window."));
    sizerFonts2->Add(buttonFontHeadTopic, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesFontHeadTopic = new wxStaticText(panelFonts, ID_changesFontHeadTopic, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesFontHeadTopic"));
    changesFontHeadTopic->SetForegroundColour(wxColour(255,0,0));
    sizerFonts2->Add(changesFontHeadTopic, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonFontHeadName = new wxButton(panelFonts, ID_buttonFontHeadName, _("Name of the parameter in the header"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonFontHeadName"));
    buttonFontHeadName->SetToolTip(_("Set font and colour of parameters\' names in the header."));
    sizerFonts2->Add(buttonFontHeadName, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesFontHeadName = new wxStaticText(panelFonts, ID_changesFontHeadName, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesFontHeadName"));
    changesFontHeadName->SetForegroundColour(wxColour(255,0,0));
    sizerFonts2->Add(changesFontHeadName, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonFontHeadValue = new wxButton(panelFonts, ID_buttonFontHeadValue, _("Value of the parameter in the header"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonFontHeadValue"));
    buttonFontHeadValue->SetToolTip(_("Set font and colour of parameters\' values in the header."));
    sizerFonts2->Add(buttonFontHeadValue, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesFontHeadValue = new wxStaticText(panelFonts, ID_changesFontHeadValue, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesFontHeadValue"));
    changesFontHeadValue->SetForegroundColour(wxColour(255,0,0));
    sizerFonts2->Add(changesFontHeadValue, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonFontResultHeader = new wxButton(panelFonts, ID_buttonFontResultHeader, _("First column of the chart"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonFontResultHeader"));
    buttonFontResultHeader->SetToolTip(_("Set font and colour used in the first column of the chart (headers\' column)."));
    sizerFonts2->Add(buttonFontResultHeader, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesFontResultHeader = new wxStaticText(panelFonts, ID_changesFontResultHeader, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesFontResultHeader"));
    changesFontResultHeader->SetForegroundColour(wxColour(255,0,0));
    sizerFonts2->Add(changesFontResultHeader, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonFontResultDefault = new wxButton(panelFonts, ID_buttonFontResultDefault, _("Data in the chart"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonFontResultDefault"));
    buttonFontResultDefault->SetToolTip(_("Set font and colour used to present the data on the chart."));
    sizerFonts2->Add(buttonFontResultDefault, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesFontResultDefault = new wxStaticText(panelFonts, ID_changesFontResultDefault, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesFontResultDefault"));
    changesFontResultDefault->SetForegroundColour(wxColour(255,0,0));
    sizerFonts2->Add(changesFontResultDefault, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonFontResultResults = new wxButton(panelFonts, ID_buttonFontResultResults, _("Results\' rows in the chart"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonFontResultResults"));
    buttonFontResultResults->SetToolTip(_("Set font and colour of charactes in results\' rows on the chart (mucus and cervix peaks)."));
    sizerFonts2->Add(buttonFontResultResults, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesFontResultResults = new wxStaticText(panelFonts, ID_changesFontResultResults, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesFontResultResults"));
    changesFontResultResults->SetForegroundColour(wxColour(255,0,0));
    sizerFonts2->Add(changesFontResultResults, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    buttonFontResultPhases = new wxButton(panelFonts, ID_buttonFontResultPhases, _("Fertile / Unfertile Phase"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonFontResultPhases"));
    buttonFontResultPhases->SetToolTip(_("Set font and colour of strings \'Fertile / Unfertile Phase\'."));
    sizerFonts2->Add(buttonFontResultPhases, 1, wxTOP|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    changesFontResultPhases = new wxStaticText(panelFonts, ID_changesFontResultPhases, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesFontResultPhases"));
    changesFontResultPhases->SetForegroundColour(wxColour(255,0,0));
    sizerFonts2->Add(changesFontResultPhases, 0, wxTOP|wxRIGHT|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 2);
    sizerFonts1->Add(sizerFonts2, 1, wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 10);
    sizerFonts->Add(sizerFonts1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    panelFonts->SetSizer(sizerFonts);
    sizerFonts->Fit(panelFonts);
    sizerFonts->SetSizeHints(panelFonts);
    panelOther = new wxPanel(notebook, ID_panelOther, wxPoint(108,8), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_panelOther"));
    sizerOther = new wxBoxSizer(wxVERTICAL);
    StaticBoxSizer4 = new wxStaticBoxSizer(wxVERTICAL, panelOther, _("Synchronization details"));
    FlexGridSizer5 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer5->AddGrowableCol(0);
    checkBoxRememberPassword = new wxCheckBox(panelOther, ID_checkBoxRememberPassword, _("Remember password"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxRememberPassword"));
    checkBoxRememberPassword->SetValue(false);
    checkBoxRememberPassword->SetToolTip(_("Application can remember your password.\nDo not use this option on public computer."));
    FlexGridSizer5->Add(checkBoxRememberPassword, 0, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesRememberPassword = new wxStaticText(panelOther, ID_changesRememberPassword, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesRememberPassword"));
    changesRememberPassword->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer5->Add(changesRememberPassword, 0, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer9 = new wxBoxSizer(wxHORIZONTAL);
    StaticText29 = new wxStaticText(panelOther, ID_STATICTEXT31, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT31"));
    StaticText29->SetForegroundColour(wxColour(255,0,0));
    BoxSizer9->Add(StaticText29, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticPassword = new wxStaticText(panelOther, ID_staticPassword, _("Password:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticPassword"));
    BoxSizer9->Add(staticPassword, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer5->Add(BoxSizer9, 0, wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText33 = new wxStaticText(panelOther, ID_STATICTEXT35, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT35"));
    StaticText33->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer5->Add(StaticText33, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer10 = new wxBoxSizer(wxHORIZONTAL);
    StaticText32 = new wxStaticText(panelOther, ID_STATICTEXT34, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT34"));
    StaticText32->SetForegroundColour(wxColour(255,0,0));
    BoxSizer10->Add(StaticText32, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textPassword = new wxTextCtrl(panelOther, ID_textPassword, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD, wxDefaultValidator, _T("ID_textPassword"));
    textPassword->SetMaxLength(64);
    textPassword->SetToolTip(_("Application can remember your password.\nDo not use this option on public computer.\nPassword can be 64 characters length."));
    BoxSizer10->Add(textPassword, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer5->Add(BoxSizer10, 0, wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText5 = new wxStaticText(panelOther, ID_STATICTEXT7, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT7"));
    StaticText5->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer5->Add(StaticText5, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer14 = new wxBoxSizer(wxHORIZONTAL);
    StaticText30 = new wxStaticText(panelOther, ID_STATICTEXT32, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT32"));
    StaticText30->SetForegroundColour(wxColour(255,0,0));
    BoxSizer14->Add(StaticText30, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticPasswordNote = new wxStaticText(panelOther, ID_staticPasswordNote, _("It\'s not recomended to save password\nif it\'s not your private computer."), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticPasswordNote"));
    BoxSizer14->Add(staticPasswordNote, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer5->Add(BoxSizer14, 1, wxBOTTOM|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesPassword = new wxStaticText(panelOther, ID_changesPassword, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesPassword"));
    changesPassword->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer5->Add(changesPassword, 1, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer4->Add(FlexGridSizer5, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    FlexGridSizer2 = new wxFlexGridSizer(0, 2, 0, 0);
    FlexGridSizer2->AddGrowableCol(0);
    checkBoxUseCustomServer = new wxCheckBox(panelOther, ID_checkBoxUseCustomServer, _("Use custom server"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_checkBoxUseCustomServer"));
    checkBoxUseCustomServer->SetValue(false);
    checkBoxUseCustomServer->SetToolTip(_("If you want you cas setup your own server for storing cards file. More details you can find in the documentation."));
    FlexGridSizer2->Add(checkBoxUseCustomServer, 0, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesUseCustomServer = new wxStaticText(panelOther, ID_changesUseCustomServer, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesUseCustomServer"));
    changesUseCustomServer->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer2->Add(changesUseCustomServer, 0, wxTOP|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer11 = new wxBoxSizer(wxHORIZONTAL);
    StaticText11 = new wxStaticText(panelOther, ID_STATICTEXT13, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT13"));
    StaticText11->SetForegroundColour(wxColour(255,0,0));
    BoxSizer11->Add(StaticText11, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticCustomServerUri = new wxStaticText(panelOther, ID_staticCustomServerUri, _("URL:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticCustomServerUri"));
    BoxSizer11->Add(staticCustomServerUri, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2->Add(BoxSizer11, 0, wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticText14 = new wxStaticText(panelOther, ID_STATICTEXT16, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT16"));
    StaticText14->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer2->Add(StaticText14, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer12 = new wxBoxSizer(wxHORIZONTAL);
    StaticText18 = new wxStaticText(panelOther, ID_STATICTEXT20, wxEmptyString, wxDefaultPosition, wxSize(25,-1), wxALIGN_CENTRE, _T("ID_STATICTEXT20"));
    StaticText18->SetForegroundColour(wxColour(255,0,0));
    BoxSizer12->Add(StaticText18, 0, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    textCustomServerUri = new wxTextCtrl(panelOther, ID_textCustomServerUri, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_textCustomServerUri"));
    textCustomServerUri->SetToolTip(_("If you want you cas setup your own server for storing cards file. More details you can find in the documentation."));
    BoxSizer12->Add(textCustomServerUri, 1, wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer2->Add(BoxSizer12, 0, wxBOTTOM|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesCustomServerUri = new wxStaticText(panelOther, ID_changesCustomServerUri, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesCustomServerUri"));
    changesCustomServerUri->SetForegroundColour(wxColour(255,0,0));
    FlexGridSizer2->Add(changesCustomServerUri, 1, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer4->Add(FlexGridSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerOther->Add(StaticBoxSizer4, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerOther1 = new wxStaticBoxSizer(wxVERTICAL, panelOther, _("Units used in application"));
    sizerOther2 = new wxFlexGridSizer(0, 3, 0, 0);
    sizerOther2->AddGrowableCol(1);
    staticLengthUnit = new wxStaticText(panelOther, ID_staticLengthUnit, _("Length unit"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticLengthUnit"));
    staticLengthUnit->Disable();
    staticLengthUnit->SetToolTip(_("Choose if you want to use centimiter or inch as a length unit."));
    sizerOther2->Add(staticLengthUnit, 1, wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    comboBoxLengthUnit = new wxComboBox(panelOther, ID_comboBoxLengthUnit, wxEmptyString, wxDefaultPosition, wxSize(120,-1), 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_comboBoxLengthUnit"));
    comboBoxLengthUnit->Disable();
    comboBoxLengthUnit->SetToolTip(_("Choose if you want to use centimiter or inch as a length unit."));
    sizerOther2->Add(comboBoxLengthUnit, 0, wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesLengthUnit = new wxStaticText(panelOther, ID_changesLengthUnit, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesLengthUnit"));
    changesLengthUnit->SetForegroundColour(wxColour(255,0,0));
    sizerOther2->Add(changesLengthUnit, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    staticTemperatureUnit = new wxStaticText(panelOther, ID_staticTemperatureUnit, _("Temperature unit"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_staticTemperatureUnit"));
    staticTemperatureUnit->Disable();
    staticTemperatureUnit->SetToolTip(_("Choose if you want to use Celsius or Fahrenheit as a temperature unit."));
    sizerOther2->Add(staticTemperatureUnit, 1, wxBOTTOM|wxLEFT|wxRIGHT|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
    comboBoxTemperatureUnit = new wxComboBox(panelOther, ID_comboBoxTemperatureUnit, wxEmptyString, wxDefaultPosition, wxSize(120,-1), 0, 0, wxCB_READONLY, wxDefaultValidator, _T("ID_comboBoxTemperatureUnit"));
    comboBoxTemperatureUnit->Disable();
    comboBoxTemperatureUnit->SetToolTip(_("Choose if you want to use Celsius or Fahrenheit as a temperature unit."));
    sizerOther2->Add(comboBoxTemperatureUnit, 0, wxBOTTOM|wxLEFT|wxRIGHT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    changesTemperatureUnit = new wxStaticText(panelOther, ID_changesTemperatureUnit, wxEmptyString, wxDefaultPosition, wxSize(15,-1), wxALIGN_CENTRE, _T("ID_changesTemperatureUnit"));
    changesTemperatureUnit->SetForegroundColour(wxColour(255,0,0));
    sizerOther2->Add(changesTemperatureUnit, 0, wxBOTTOM|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerOther1->Add(sizerOther2, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerOther->Add(sizerOther1, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer2 = new wxStaticBoxSizer(wxHORIZONTAL, panelOther, wxEmptyString);
    sizerOther->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBoxSizer1 = new wxStaticBoxSizer(wxHORIZONTAL, panelOther, wxEmptyString);
    buttonSetDefaults = new wxButton(panelOther, ID_buttonSetDefaults, _("Restore defaults settings"), wxDefaultPosition, wxSize(-1,30), 0, wxDefaultValidator, _T("ID_buttonSetDefaults"));
    buttonSetDefaults->SetToolTip(_("Restore defaults settings of all application parameters,\n except application language."));
    StaticBoxSizer1->Add(buttonSetDefaults, 1, wxALL|wxEXPAND|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 5);
    sizerOther->Add(StaticBoxSizer1, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    panelOther->SetSizer(sizerOther);
    sizerOther->Fit(panelOther);
    sizerOther->SetSizeHints(panelOther);
    notebook->AddPage(panelGeneral, _("General"), false);
    notebook->AddPage(panelApplication, _("Application"), false);
    notebook->AddPage(PanelAnalysis, _("Analysis"), false);
    notebook->AddPage(panelColours, _("Colours"), false);
    notebook->AddPage(panelFonts, _("Fonts"), false);
    notebook->AddPage(panelOther, _("Other"), false);
    sizerMain2->Add(notebook, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerButtons = new wxBoxSizer(wxHORIZONTAL);
    buttonSave = new wxButton(panelMain, ID_buttonSave, _("Save"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_buttonSave"));
    buttonSave->SetToolTip(_("Save and apply changes without closing this window"));
    sizerButtons->Add(buttonSave, 0, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    buttonCancel = new wxButton(panelMain, ID_buttonCancel, _("Cancel"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_buttonCancel"));
    buttonCancel->SetToolTip(_("Discard changes and close this window"));
    sizerButtons->Add(buttonCancel, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    space4 = new wxStaticText(panelMain, ID_space4, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, _T("ID_space4"));
    sizerButtons->Add(space4, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    buttonOk = new wxButton(panelMain, ID_buttonOk, _("Close (and save)"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_buttonOk"));
    buttonOk->SetToolTip(_("Save and apply changes and close this window"));
    sizerButtons->Add(buttonOk, 0, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    sizerMain2->Add(sizerButtons, 0, wxTOP|wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    panelMain->SetSizer(sizerMain2);
    sizerMain2->Fit(panelMain);
    sizerMain2->SetSizeHints(panelMain);
    sizerMain1->Add(panelMain, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    SetSizer(sizerMain1);
    sizerMain1->Fit(this);
    sizerMain1->SetSizeHints(this);

    Connect(ID_listBoxLanguage,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&configFrame::listBoxLanguageSelected);
    Connect(ID_checkBoxOpenLastOpenedFile,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxOpenLastOpenedFileClick);
    Connect(ID_checkBoxAutosaveChanges,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxAutosaveChangesClick);
    Connect(ID_checkBoxAutosaveSet,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxAutosaveSetClick);
    Connect(ID_checkBoxSyncFileAutomatically,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxSyncFileAutomaticallyClick);
    Connect(ID_checkBoxRememberPosition,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxRememberPositionClick);
    Connect(ID_checkBoxFlatButtons,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxFlatButtonsClick);
    Connect(ID_checkBoxCheckForUpdates,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxCheckForUpdatesClick);
    Connect(ID_textUpdatesProxy,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&configFrame::textUpdatesProxyUpdated);
    Connect(ID_checkBoxCheckForMissingDays,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxCheckForMissingDaysClick);
    Connect(ID_checkBoxBreastsAutocontrolReminder,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxBreastsAutocontrolReminderClick);
    Connect(ID_spinCtrlBreastsAutocontrolReminderDay,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&configFrame::spinCtrlBreastsAutocontrolReminderDayUpdated);
    Connect(ID_spinCtrlBreastAutocontrolInterval,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&configFrame::spinCtrlBreastAutocontrolIntervalUpdated);
    Connect(ID_comboBoxTemperatureRangeHigh,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&configFrame::comboBoxTemperatureRangeHighUpdated);
    Connect(ID_comboBoxTemperatureRangeLow,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&configFrame::comboBoxTemperatureRangeLowUpdated);
    Connect(ID_checkBoxAutoanalyzeCard,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxAutoanalyzeCardClick);
    Connect(ID_checkBoxShowAutoanalysisDetails,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxShowAutoanalysisDetailsClick);
    Connect(ID_spinMaxAllowedNotMesuredLowLevelDays,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&configFrame::spinMaxAllowedNotMesuredLowLevelDaysChange);
    Connect(ID_spinMaxIncludedNotMesuredLowLevelDays,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&configFrame::spinMaxIncludedNotMesuredLowLevelDaysChange);
    Connect(ID_spinMaxAllowedNotMesuredHighLevelDays,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&configFrame::spinMaxAllowedNotMesuredHighLevelDaysChange);
    Connect(ID_spinMaxIncludedNotMesuredHighLevelDays,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&configFrame::spinMaxIncludedNotMesuredHighLevelDaysChange);
    Connect(ID_checkBoxIncludeNotMesuredDaysIfAfterMucusPeak,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxIncludeNotMesuredDaysIfAfterMucusPeakClick);
    Connect(ID_spinNumberOfHistoricalCyclesToUse,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&configFrame::spinNumberOfHistoricalCyclesToUseChange);
    Connect(ID_comboBoxAutoanalyzeCardPreferResult1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&configFrame::comboBoxAutoanalyzeCardPreferResult1TextUpdated);
    Connect(ID_comboBoxAutoanalyzeCardPreferResult2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&configFrame::comboBoxAutoanalyzeCardPreferResult2TextUpdated);
    Connect(ID_comboBoxAutoanalyzeCardPreferResult3,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&configFrame::comboBoxAutoanalyzeCardPreferResult3TextUpdated);
    Connect(ID_comboBoxAutoanalyzeCardPreferResult4,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&configFrame::comboBoxAutoanalyzeCardPreferResult4TextUpdated);
    Connect(ID_comboBoxAutoanalyzeCardPreferResult5,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&configFrame::comboBoxAutoanalyzeCardPreferResult5TextUpdated);
    Connect(ID_buttonColourBackground,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourBackgroundClick);
    Connect(ID_buttonColourCell11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourCell11Click);
    Connect(ID_buttonColourCell21,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourCell21Click);
    Connect(ID_buttonColourMarkedCell1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourMarkedCell1Click);
    Connect(ID_buttonColourCell12,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourCell12Click);
    Connect(ID_buttonColourCell22,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourCell22Click);
    Connect(ID_buttonColourMarkedCell2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourMarkedCell2Click);
    Connect(ID_buttonColourPointNormal,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourPointNormalClick);
    Connect(ID_buttonColourPointBefore,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourPointBeforeClick);
    Connect(ID_buttonColourPointAfter,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourPointAfterClick);
    Connect(ID_buttonColourTemperatureLine,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourTemperatureLineClick);
    Connect(ID_buttonColourTemperatureLevelLine,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourTemperatureLevelLineClick);
    Connect(ID_buttonColourPhaseLine,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourPhaseLineClick);
    Connect(ID_buttonColourBorders,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonColourBordersClick);
    Connect(ID_buttonFontHeadTopic,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonFontHeadTopicClick);
    Connect(ID_buttonFontHeadName,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonFontHeadNameClick);
    Connect(ID_buttonFontHeadValue,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonFontHeadValueClick);
    Connect(ID_buttonFontResultHeader,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonFontResultHeaderClick);
    Connect(ID_buttonFontResultDefault,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonFontResultDefaultClick);
    Connect(ID_buttonFontResultResults,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonFontResultResultsClick);
    Connect(ID_buttonFontResultPhases,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonFontResultPhasesClick);
    Connect(ID_checkBoxRememberPassword,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxRememberPasswordClick);
    Connect(ID_textPassword,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&configFrame::textPasswordText);
    Connect(ID_checkBoxUseCustomServer,wxEVT_COMMAND_CHECKBOX_CLICKED,(wxObjectEventFunction)&configFrame::checkBoxUseCustomServerClick);
    Connect(ID_textCustomServerUri,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&configFrame::textCustomServerUriText);
    Connect(ID_comboBoxLengthUnit,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&configFrame::comboBoxLengthUnitUpdated);
    Connect(ID_comboBoxTemperatureUnit,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&configFrame::comboBoxTemperatureUnitUpdated);
    Connect(ID_buttonSetDefaults,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonSetDefaultsClick);
    Connect(ID_buttonSave,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonSaveClick);
    Connect(ID_buttonCancel,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonCancelClick);
    Connect(ID_buttonOk,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&configFrame::buttonOkClick);
    Connect(wxID_ANY,wxEVT_CLOSE_WINDOW,(wxObjectEventFunction)&configFrame::configFrameClose);
    //*)

    m_fontDialog =  new wxFontDialog( this );

    /****************************************************/
    /** comboBoxes' data */
    comboBoxTemperatureRangeHigh->Append(_T("38,0"));
    comboBoxTemperatureRangeHigh->Append(_T("37,9"));
    comboBoxTemperatureRangeHigh->Append(_T("37,8"));
    comboBoxTemperatureRangeHigh->Append(_T("37,7"));
    comboBoxTemperatureRangeHigh->Append(_T("37,6"));
    comboBoxTemperatureRangeHigh->Append(_T("37,5"));
    comboBoxTemperatureRangeHigh->Append(_T("37,4"));
    comboBoxTemperatureRangeHigh->Append(_T("37,3"));
    comboBoxTemperatureRangeHigh->Append(_T("37,2"));
    comboBoxTemperatureRangeHigh->SetSelection( comboBoxTemperatureRangeHigh->Append(_T("37,1")) );
    comboBoxTemperatureRangeHigh->Append(_T("37,0"));
    comboBoxTemperatureRangeHigh->Append(_T("36,9"));
    comboBoxTemperatureRangeHigh->Append(_T("36,8"));
    comboBoxTemperatureRangeHigh->Append(_T("36,7"));
    comboBoxTemperatureRangeHigh->Append(_T("36,6"));
    comboBoxTemperatureRangeLow->Append(_T("36,6"));
    comboBoxTemperatureRangeLow->Append(_T("36,5"));
    comboBoxTemperatureRangeLow->Append(_T("36,4"));
    comboBoxTemperatureRangeLow->Append(_T("36,3"));
    comboBoxTemperatureRangeLow->SetSelection( comboBoxTemperatureRangeLow->Append(_T("36,2")) );
    comboBoxTemperatureRangeLow->Append(_T("36,1"));
    comboBoxTemperatureRangeLow->Append(_T("36,0"));
    comboBoxTemperatureRangeLow->Append(_T("35,9"));
    comboBoxTemperatureRangeLow->Append(_T("35,8"));
    comboBoxTemperatureRangeLow->Append(_T("35,7"));
    comboBoxTemperatureRangeLow->Append(_T("35,6"));
    comboBoxTemperatureRangeLow->Append(_T("35,5"));
    comboBoxTemperatureRangeLow->Append(_T("35,4"));
    comboBoxTemperatureRangeLow->Append(_T("35,3"));
    comboBoxTemperatureRangeLow->Append(_T("35,2"));
    comboBoxTemperatureRangeLow->Append(_T("35,1"));
    comboBoxTemperatureRangeLow->Append(_T("35,0"));
    comboBoxLengthUnit->SetSelection( comboBoxLengthUnit->Append(_("centimiter")) );
    comboBoxLengthUnit->Append(_("inch"));
    comboBoxTemperatureUnit->SetSelection( comboBoxTemperatureUnit->Append(_("Celsius")) );
    comboBoxTemperatureUnit->Append(_("Fahrenheit"));

    /** comboBoxes' results */
    comboBoxAutoanalyzeCardPreferResult1->Append(RULE_2120_string);
    comboBoxAutoanalyzeCardPreferResult1->Append(RULE_CLINICAL_string);
    comboBoxAutoanalyzeCardPreferResult1->SetSelection( comboBoxAutoanalyzeCardPreferResult1->Append(RULE_DOERING_string) );
    comboBoxAutoanalyzeCardPreferResult1->Append(RULE_CERVICAL_MUCUS_BASED_string);
    comboBoxAutoanalyzeCardPreferResult1->Append(RULE_CERVICAL_POSITION_BASED_string);

    comboBoxAutoanalyzeCardPreferResult2->Append(RULE_2120_string);
    comboBoxAutoanalyzeCardPreferResult2->Append(RULE_CLINICAL_string);
    comboBoxAutoanalyzeCardPreferResult2->Append(RULE_DOERING_string);
    comboBoxAutoanalyzeCardPreferResult2->SetSelection( comboBoxAutoanalyzeCardPreferResult2->Append(RULE_CERVICAL_MUCUS_BASED_string) );
    comboBoxAutoanalyzeCardPreferResult2->Append(RULE_CERVICAL_POSITION_BASED_string);

    comboBoxAutoanalyzeCardPreferResult3->Append(RULE_2120_string);
    comboBoxAutoanalyzeCardPreferResult3->Append(RULE_CLINICAL_string);
    comboBoxAutoanalyzeCardPreferResult3->Append(RULE_DOERING_string);
    comboBoxAutoanalyzeCardPreferResult3->Append(RULE_CERVICAL_MUCUS_BASED_string);
    comboBoxAutoanalyzeCardPreferResult3->SetSelection( comboBoxAutoanalyzeCardPreferResult3->Append(RULE_CERVICAL_POSITION_BASED_string) );

    comboBoxAutoanalyzeCardPreferResult4->Append(RULE_2120_string);
    comboBoxAutoanalyzeCardPreferResult4->SetSelection( comboBoxAutoanalyzeCardPreferResult4->Append(RULE_CLINICAL_string) );
    comboBoxAutoanalyzeCardPreferResult4->Append(RULE_DOERING_string);
    comboBoxAutoanalyzeCardPreferResult4->Append(RULE_CERVICAL_MUCUS_BASED_string);
    comboBoxAutoanalyzeCardPreferResult4->Append(RULE_CERVICAL_POSITION_BASED_string);

    comboBoxAutoanalyzeCardPreferResult5->SetSelection( comboBoxAutoanalyzeCardPreferResult5->Append(RULE_2120_string) );
    comboBoxAutoanalyzeCardPreferResult5->Append(RULE_CLINICAL_string);
    comboBoxAutoanalyzeCardPreferResult5->Append(RULE_DOERING_string);
    comboBoxAutoanalyzeCardPreferResult5->Append(RULE_CERVICAL_MUCUS_BASED_string);
    comboBoxAutoanalyzeCardPreferResult5->Append(RULE_CERVICAL_POSITION_BASED_string);

    /****************************************************/
#if defined(__WXMSW__)
    // set flat buttons on colors and fonts tabs.
    buttonColourBackground->SetWindowStyle( wxNO_BORDER );
    buttonColourBackground->Refresh();
    buttonColourCell11->SetWindowStyle( wxNO_BORDER );
    buttonColourCell11->Refresh();
    buttonColourCell12->SetWindowStyle( wxNO_BORDER );
    buttonColourCell12->Refresh();
    buttonColourCell21->SetWindowStyle( wxNO_BORDER );
    buttonColourCell21->Refresh();
    buttonColourCell22->SetWindowStyle( wxNO_BORDER );
    buttonColourCell22->Refresh();
    buttonColourMarkedCell1->SetWindowStyle( wxNO_BORDER );
    buttonColourMarkedCell1->Refresh();
    buttonColourMarkedCell2->SetWindowStyle( wxNO_BORDER );
    buttonColourMarkedCell2->Refresh();
    buttonColourPointNormal->SetWindowStyle( wxNO_BORDER );
    buttonColourPointNormal->Refresh();
    buttonColourPointBefore->SetWindowStyle( wxNO_BORDER );
    buttonColourPointBefore->Refresh();
    buttonColourPointAfter->SetWindowStyle( wxNO_BORDER );
    buttonColourPointAfter->Refresh();
    buttonColourTemperatureLine->SetWindowStyle( wxNO_BORDER );
    buttonColourTemperatureLine->Refresh();
    buttonColourTemperatureLevelLine->SetWindowStyle( wxNO_BORDER );
    buttonColourTemperatureLevelLine->Refresh();
    buttonColourPhaseLine->SetWindowStyle( wxNO_BORDER );
    buttonColourPhaseLine->Refresh();
    buttonColourBorders->SetWindowStyle( wxNO_BORDER );
    buttonColourBorders->Refresh();
    buttonFontHeadTopic->SetWindowStyle( wxNO_BORDER );
    buttonFontHeadTopic->Refresh();
    buttonFontHeadName->SetWindowStyle( wxNO_BORDER );
    buttonFontHeadName->Refresh();
    buttonFontHeadValue->SetWindowStyle( wxNO_BORDER );
    buttonFontHeadValue->Refresh();
    buttonFontResultHeader->SetWindowStyle( wxNO_BORDER );
    buttonFontResultHeader->Refresh();
    buttonFontResultDefault->SetWindowStyle( wxNO_BORDER );
    buttonFontResultDefault->Refresh();
    buttonFontResultResults->SetWindowStyle( wxNO_BORDER );
    buttonFontResultResults->Refresh();
    buttonFontResultPhases->SetWindowStyle( wxNO_BORDER );
    buttonFontResultPhases->Refresh();
#else
    //checkBoxCheckForUpdates->Enable( false );
    //staticUpdatesProxy->Enable( false );
    //textUpdatesProxy->Enable( false );
#endif

    setButtonsStyle();
    SetSize( m_config->formCardLeft, m_config->formCardTop, -1, -1 );

    //GetSizer()->Fit( this );
    //GetSizer()->SetSizeHints( this );
    //Center();
    wxIcon wx_nfp_ICON( wx_nfp_xpm );
    SetIcon( wx_nfp_ICON );

    /*******************************/
    // added to force resizing buttons on colours and fonts panels
    wxSize s = notebook->GetSize();
    s.SetWidth( s.GetWidth() + 1 );
    notebook->SetSize( s );

    /*******************************/
    SetAffirmativeId( ID_buttonOk );
    SetEscapeId( ID_buttonCancel );
    buttonOk->SetDefault();

    m_init = false;


}

/**
 *
 */
configFrame::~configFrame()
{
    //(*Destroy(configFrame)
    //*)
}

/******************************************************************************/

/**
 * configFrameClose
 */
void configFrame::configFrameClose( wxCloseEvent& /*event*/ )
{
    wxLogDebug( _T("[configFrame] configFrameClose()") );
    Destroy();
}

/**
 * buttonOkClick
 */
void configFrame::buttonOkClick( wxCommandEvent& event )
{
    save();

    int exitCode = 1;
    if (m_syncServerChanged)
        exitCode = CONFIG_SYNC_SERVER_CHANGED;

    wxLogDebug( wxString::Format( _T("[configFrame] buttonOkClick(), exit code: %i"), exitCode) );
    EndModal( exitCode );
}

/**
 * buttonCancelClick
 */
void configFrame::buttonCancelClick( wxCommandEvent& event )
{
    wxLogDebug( _T("[configFrame] buttonCancelClick()") );

    int exitCode = 0;
    if (m_syncServerChanged)
        exitCode = CONFIG_SYNC_SERVER_CHANGED;

    wxLogDebug( wxString::Format( _T("[configFrame] buttonCancelClick(), exit code: %i"), exitCode) );
    EndModal( exitCode );
}

/**
 * buttonSaveClick
 */
void configFrame::buttonSaveClick( wxCommandEvent& event )
{
    wxLogDebug( _T("[configFrame] buttonSaveClick()") );
    save();
}

/******************************************************************************/

/**
 * listBoxLanguageSelected
 */
void configFrame::listBoxLanguageSelected( wxCommandEvent& event )
{
    if ( listBoxLanguage->GetSelection() != wxNOT_FOUND ) {
        if ( m_langIdentifiers[ listBoxLanguage->GetSelection()] == m_config->langId ) {
            if ( changesLanguage->GetLabel().IsSameAs( _T( "*" ) ) ) {
                m_changes--;
                changesLanguage->SetLabel( _T( "" ) );
            }
        } else {
            if ( !changesLanguage->GetLabel().IsSameAs( _T( "*" ) ) ) {
                m_changes++;
                changesLanguage->SetLabel( _T( "*" ) );
            }
        }
        updateButtonsState();
    }
}

/**
 * checkBoxOpenLastOpenedFileClick
 */
void configFrame::checkBoxOpenLastOpenedFileClick( wxCommandEvent& event )
{
    if ( checkBoxOpenLastOpenedFile->GetValue() == m_config->openLastOpenedFile ) {
        if ( changesOpenLastOpenedFile->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesOpenLastOpenedFile->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesOpenLastOpenedFile->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesOpenLastOpenedFile->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * checkBoxAutosaveChangesClick
 */
void configFrame::checkBoxAutosaveChangesClick(wxCommandEvent& event)
{
    if ( checkBoxAutosaveChanges->GetValue() == m_config->autosaveChanges ) {
        if ( changesAutosaveChanges->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesAutosaveChanges->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesAutosaveChanges->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesAutosaveChanges->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * checkBoxAutosaveSetClick
 */
void configFrame::checkBoxAutosaveSetClick(wxCommandEvent& event)
{
    if ( checkBoxAutosaveSet->GetValue() == m_config->autosaveSet) {
        if ( changesAutosaveSet->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesAutosaveSet->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesAutosaveSet->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesAutosaveSet->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

void configFrame::checkBoxSyncFileAutomaticallyClick(wxCommandEvent& event)
{
    if ( checkBoxSyncFileAutomatically->GetValue() == m_config->syncFileAutomatically) {
        if ( changesSyncFileAutomatically->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesSyncFileAutomatically->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesSyncFileAutomatically->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesSyncFileAutomatically->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * checkBoxRememberPositionClick
 */
void configFrame::checkBoxRememberPositionClick( wxCommandEvent& event )
{
    if ( checkBoxRememberPosition->GetValue() == m_config->rememberPosition ) {
        if ( changesRememberPosition->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesRememberPosition->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesRememberPosition->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesRememberPosition->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * checkBoxFlatButtonsClick
 */
void configFrame::checkBoxFlatButtonsClick( wxCommandEvent& event )
{
    if ( checkBoxFlatButtons->GetValue() == m_config->useFlatButtons ) {
        if ( changesFlatButtons->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesFlatButtons->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesFlatButtons->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesFlatButtons->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * checkBoxCheckForUpdatesClick
 */
void configFrame::checkBoxCheckForUpdatesClick( wxCommandEvent& event )
{
    if ( checkBoxCheckForUpdates->GetValue() == m_config->checkForUpdates ) {
        if ( changesCheckForUpdates->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesCheckForUpdates->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesCheckForUpdates->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesCheckForUpdates->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();

    staticUpdatesProxy->Enable( checkBoxCheckForUpdates->GetValue() );
    textUpdatesProxy->Enable( checkBoxCheckForUpdates->GetValue() );
}

/**
 * textUpdatesProxyUpdated
 */
void configFrame::textUpdatesProxyUpdated( wxCommandEvent& event )
{
    if ( textUpdatesProxy->GetValue().IsSameAs( m_config->updatesProxy ) ) {
        if ( changesUpdatesProxy->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesUpdatesProxy->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesUpdatesProxy->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesUpdatesProxy->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/******************************************************************************/

/**
 * checkBoxCheckForMissingDaysClick
 */
void configFrame::checkBoxCheckForMissingDaysClick( wxCommandEvent& event )
{
    if ( checkBoxCheckForMissingDays->GetValue() == m_config->checkForMissingDays ) {
        if ( changesCheckForMissingDays->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesCheckForMissingDays->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesCheckForMissingDays->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesCheckForMissingDays->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * checkBoxBreastsAutocontrolReminderClick
 */
void configFrame::checkBoxBreastsAutocontrolReminderClick( wxCommandEvent& event )
{
    if ( checkBoxBreastsAutocontrolReminder->GetValue() ) {
        spinCtrlBreastsAutocontrolReminderDay->Enable( true );
        spinCtrlBreastAutocontrolInterval->Enable( true );
        staticBreastsAutocontrolReminderDay1->Enable( true );
        staticBreastsAutocontrolReminderDay2->Enable( true );
        staticBreastAutocontrolInterval1->Enable( true );
        staticBreastAutocontrolInterval2->Enable( true );
    } else {
        spinCtrlBreastsAutocontrolReminderDay->Enable( false );
        spinCtrlBreastAutocontrolInterval->Enable( false );
        staticBreastsAutocontrolReminderDay1->Enable( false );
        staticBreastsAutocontrolReminderDay2->Enable( false );
        staticBreastAutocontrolInterval1->Enable( false );
        staticBreastAutocontrolInterval2->Enable( false );
    }

    if ( checkBoxBreastsAutocontrolReminder->GetValue() && m_config->breastSelfControlReminderDay > 0 ) {
        if ( changesBreastsAutocontrolReminder->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesBreastsAutocontrolReminder->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesBreastsAutocontrolReminder->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesBreastsAutocontrolReminder->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * spinCtrlBreastsAutocontrolReminderDayUpdated
 */
void configFrame::spinCtrlBreastsAutocontrolReminderDayUpdated( wxSpinEvent& event )
{
    if ( !m_init ) {
        if ( spinCtrlBreastsAutocontrolReminderDay->GetValue() == m_config->breastSelfControlReminderDay ) {
            if ( changesBreastsAutocontrolReminderDay->GetLabel().IsSameAs( _T( "*" ) ) ) {
                m_changes--;
                changesBreastsAutocontrolReminderDay->SetLabel( _T( "" ) );
            }
        } else {
            if ( !changesBreastsAutocontrolReminderDay->GetLabel().IsSameAs( _T( "*" ) ) ) {
                m_changes++;
                changesBreastsAutocontrolReminderDay->SetLabel( _T( "*" ) );
            }
        }
        updateButtonsState();
    }
}

/**
 * spinCtrlBreastAutocontrolIntervalUpdated
 */
void configFrame::spinCtrlBreastAutocontrolIntervalUpdated( wxSpinEvent& event )
{
    if ( !m_init ) {
        if ( spinCtrlBreastAutocontrolInterval->GetValue() == m_config->breastSelfControlInterval ) {
            if ( changesBreastAutocontrolInterval->GetLabel().IsSameAs( _T( "*" ) ) ) {
                m_changes--;
                changesBreastAutocontrolInterval->SetLabel( _T( "" ) );
            }
        } else {
            if ( !changesBreastAutocontrolInterval->GetLabel().IsSameAs( _T( "*" ) ) ) {
                m_changes++;
                changesBreastAutocontrolInterval->SetLabel( _T( "*" ) );
            }
        }
        updateButtonsState();
    }
}

/**
 * comboBoxLengthUnitUpdated
 */
void configFrame::comboBoxLengthUnitUpdated( wxCommandEvent& event )
{
    // TODO - is it working in different languages????
    if ( comboBoxLengthUnit->GetValue().IsSameAs( _( "centimiter" ) ) && m_config->lengthInCentimeters ) {
        if ( changesLengthUnit->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesLengthUnit->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesLengthUnit->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesLengthUnit->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * comboBoxTemperatureUnitUpdated
 */
void configFrame::comboBoxTemperatureUnitUpdated( wxCommandEvent& event )
{
    // TODO - is it working in different languages????
    if ( comboBoxTemperatureUnit->GetValue().IsSameAs( _( "Celsius" ) ) ) {
        staticTemperatureCorF1->SetLabel( _T( "C" ) );
        staticTemperatureCorF2->SetLabel( _T( "C" ) );

        wxArrayString arrMax = m_util.prepareTemperaturesArray( 3660, 3800, 10 );
        wxArrayString arrMin = m_util.prepareTemperaturesArray( 3500, 3660, 10 );

        comboBoxTemperatureRangeHigh->Clear();
        comboBoxTemperatureRangeHigh->Append( arrMax );
        comboBoxTemperatureRangeLow->Clear();
        comboBoxTemperatureRangeLow->Append( arrMin );

        comboBoxTemperatureRangeHigh->SetValue( m_util.temperatureToStr( m_config->temperatureRangeHigh, false ) );
        comboBoxTemperatureRangeLow->SetValue( m_util.temperatureToStr( m_config->temperatureRangeLow, false ) );
    } else {
        staticTemperatureCorF1->SetLabel( _T( "F" ) );
        staticTemperatureCorF2->SetLabel( _T( "F" ) );

        wxArrayString arrMax = m_util.prepareTemperaturesArray( 7060, 10000, 10 );
        wxArrayString arrMin = m_util.prepareTemperaturesArray( 7000, 10000, 10 );

        comboBoxTemperatureRangeHigh->Clear();
        comboBoxTemperatureRangeHigh->Append( arrMax );
        comboBoxTemperatureRangeLow->Clear();
        comboBoxTemperatureRangeLow->Append( arrMax );

        comboBoxTemperatureRangeHigh->SetValue( m_util.temperatureToStr( m_util.celsiusToFahrenheit( m_config->temperatureRangeHigh ), false ) );
        comboBoxTemperatureRangeLow->SetValue( m_util.temperatureToStr( m_util.celsiusToFahrenheit( m_config->temperatureRangeLow ), false ) );
    }

    if ( comboBoxTemperatureUnit->GetValue().IsSameAs( _( "Celsius" ) ) && m_config->temperatureInCelsius ) {
        if ( changesTemperatureUnit->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesTemperatureUnit->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesTemperatureUnit->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesTemperatureUnit->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();

}

/**
 * comboBoxTemperatureRangeHighUpdated
 */
void configFrame::comboBoxTemperatureRangeHighUpdated( wxCommandEvent& event )
{
    if ( m_util.strToTemperature( comboBoxTemperatureRangeHigh->GetValue() ) == m_config->temperatureRangeHigh ) {
        if ( changesTemperatureRangeHigh->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesTemperatureRangeHigh->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesTemperatureRangeHigh->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesTemperatureRangeHigh->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * comboBoxTemperatureRangeLowUpdated
 */
void configFrame::comboBoxTemperatureRangeLowUpdated( wxCommandEvent& event )
{
    if ( m_util.strToTemperature( comboBoxTemperatureRangeLow->GetValue() ) == m_config->temperatureRangeLow ) {
        if ( changesTemperatureRangeLow->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesTemperatureRangeLow->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesTemperatureRangeLow->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesTemperatureRangeLow->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/******************************************************************************/

/**
 * buttonColourBackgroundClick
 */
void configFrame::buttonColourBackgroundClick( wxCommandEvent& event )
{
    showColourDialog( buttonColourBackground, _( "Background" ) );
    checkColourChanges( buttonColourBackground, m_config->colourBackground, changesColourBackground );
}

/**
 * buttonColourCell11Click
 */
void configFrame::buttonColourCell11Click( wxCommandEvent& event )
{
    showColourDialog( buttonColourCell11, _( "Cell 1,1" ) );
    checkCellsColourChanges();
}

/**
 * buttonColourCell12Click
 */
void configFrame::buttonColourCell12Click( wxCommandEvent& event )
{

    showColourDialog( buttonColourCell12, _( "Cell 1,2" ) );
    checkCellsColourChanges();
}

/**
 * buttonColourCell21Click
 */
void configFrame::buttonColourCell21Click( wxCommandEvent& event )
{
    showColourDialog( buttonColourCell21, _( "Cell 2,1" ) );
    checkCellsColourChanges();
}

/**
 * buttonColourCell22Click
 */
void configFrame::buttonColourCell22Click( wxCommandEvent& event )
{
    showColourDialog( buttonColourCell22, _( "Cell 2,2" ) );
    checkCellsColourChanges();
}

/**
 * buttonColourMarkedCell1Click
 */
void configFrame::buttonColourMarkedCell1Click( wxCommandEvent& event )
{
    showColourDialog( buttonColourMarkedCell1, _( "Active day's cell 1" ) );
    checkCellsColourChanges();
}

/**
 * buttonColourMarkedCell2Click
 */
void configFrame::buttonColourMarkedCell2Click( wxCommandEvent& event )
{
    showColourDialog( buttonColourMarkedCell2, _( "Active day's cell 2" ) );
    checkCellsColourChanges();
}

/**
 * buttonColourPointNormalClick
 */
void configFrame::buttonColourPointNormalClick( wxCommandEvent& event )
{
    showColourDialog( buttonColourPointNormal,  _( "Temperature point" ) );
    checkColourChanges( buttonColourPointNormal, m_config->colourPointNormal, changesColourPointNormal );
}

/**
 * buttonColourPointBeforeClick
 */
void configFrame::buttonColourPointBeforeClick( wxCommandEvent& event )
{
    showColourDialog( buttonColourPointBefore, _( "Low-level temperature point" ) );
    checkColourChanges( buttonColourPointBefore, m_config->colourPointBefore, changesColourPointBefore );
}

/**
 * buttonColourPointAfterClick
 */
void configFrame::buttonColourPointAfterClick( wxCommandEvent& event )
{
    showColourDialog( buttonColourPointAfter, _( "High-level temperature point" ) );
    checkColourChanges( buttonColourPointAfter, m_config->colourPointAfter, changesColourPointAfter );
}

/**
 * buttonColourTemperatureLineClick
 */
void configFrame::buttonColourTemperatureLineClick( wxCommandEvent& event )
{
    showColourDialog( buttonColourTemperatureLine, _( "Temperatures line" ) );
    checkColourChanges( buttonColourTemperatureLine, m_config->colourTemperatureLine, changesColourTemperatureLine );
}

/**
 * buttonColourTemperatureLevelLineClick
 */
void configFrame::buttonColourTemperatureLevelLineClick( wxCommandEvent& event )
{
    showColourDialog( buttonColourTemperatureLevelLine, _( "Low- and high-level temperature line" ) );
    checkColourChanges( buttonColourTemperatureLevelLine, m_config->colourTemperatureLevelLine, changesColourTemperatureLevelLine );
}

/**
 * buttonColourPhaseLineClick
 */
void configFrame::buttonColourPhaseLineClick( wxCommandEvent& event )
{
    showColourDialog( buttonColourPhaseLine, _( "Cycle's phases line" ) );
    checkColourChanges( buttonColourPhaseLine, m_config->colourPhaseLine, changesColourPhaseLine );
}

/**
 * buttonColourBordersClick
 */
void configFrame::buttonColourBordersClick( wxCommandEvent& event )
{
    showColourDialog( buttonColourBorders, _( "Borders" ) );
    checkColourChanges( buttonColourBorders, m_config->colourBorders, changesColourBorders );
}

/******************************************************************************/

/**
 * buttonFontHeadTopicClick
 */
void configFrame::buttonFontHeadTopicClick( wxCommandEvent& event )
{
    showFontDialog( buttonFontHeadTopic, m_config->fontHeadTopic, m_config->fontHeadTopicColour, changesFontHeadTopic, _( "Cycle observation card" ) );
}

/**
 * buttonFontHeadNameClick
 */
void configFrame::buttonFontHeadNameClick( wxCommandEvent& event )
{
    showFontDialog( buttonFontHeadName, m_config->fontHeadName, m_config->fontHeadNameColour, changesFontHeadName, _( "Name of the parameter in the header" ) );
}

/**
 * buttonFontHeadValueClick
 */
void configFrame::buttonFontHeadValueClick( wxCommandEvent& event )
{
    showFontDialog( buttonFontHeadValue, m_config->fontHeadValue, m_config->fontHeadValueColour, changesFontHeadValue, _( "Value of the parameter in the header" ) );
}

/**
 * buttonFontResultHeaderClick
 */
void configFrame::buttonFontResultHeaderClick( wxCommandEvent& event )
{
    showFontDialog( buttonFontResultHeader, m_config->fontResultHeader, m_config->fontResultHeaderColour, changesFontResultHeader, _( "First column of the chart" ) );
}

/**
 * buttonFontResultDefaultClick
 */
void configFrame::buttonFontResultDefaultClick( wxCommandEvent& event )
{
    showFontDialog( buttonFontResultDefault, m_config->fontResultDefault, m_config->fontResultDefaultColour, changesFontResultDefault, _( "Data in the chart" ) );
}

/**
 * buttonFontResultResultsClick
 */
void configFrame::buttonFontResultResultsClick( wxCommandEvent& event )
{
    showFontDialog( buttonFontResultResults, m_config->fontResultResults, m_config->fontResultResultsColour, changesFontResultResults, _( "Results' rows in the chart" ) );
}

/**
 * buttonFontResultPhasesClick
 */
void configFrame::buttonFontResultPhasesClick( wxCommandEvent& event )
{
    showFontDialog( buttonFontResultPhases, m_config->fontResultPhases, m_config->fontResultPhasesColour, changesFontResultPhases, _( "Phase I/II/III" ) );
}

/******************************************************************************/

/**
 * checkBoxAutoanalyzeCardClick
 */
void configFrame::checkBoxAutoanalyzeCardClick(wxCommandEvent& event)
{
    if ( checkBoxAutoanalyzeCard->GetValue() == m_config->autoanalyzeCard) {
        if ( changesAutoanalyzeCard->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesAutoanalyzeCard->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesAutoanalyzeCard->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesAutoanalyzeCard->SetLabel( _T( "*" ) );
        }
    }

    checkBoxShowAutoanalysisDetails->Enable(checkBoxAutoanalyzeCard->GetValue());
    updateButtonsState();
}

/**
 * checkBoxShowAutoanalysisDetailsClick
 */
void configFrame::checkBoxShowAutoanalysisDetailsClick(wxCommandEvent& event)
{
    if ( checkBoxShowAutoanalysisDetails->GetValue() == m_config->showAutoanalysisDetails) {
        if ( changesShowAutoanalysisDetails->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesShowAutoanalysisDetails->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesShowAutoanalysisDetails->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesShowAutoanalysisDetails->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * spinMaxAllowedNotMesuredLowLevelDaysChange
 */
void configFrame::spinMaxAllowedNotMesuredLowLevelDaysChange(wxSpinEvent& event)
{
    if ( spinMaxAllowedNotMesuredLowLevelDays->GetValue() == m_config->maxAllowedNotMesuredLowLevelDays ) {
        if ( changesMaxAllowedNotMesuredLowLevelDays->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesMaxAllowedNotMesuredLowLevelDays->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesMaxAllowedNotMesuredLowLevelDays->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesMaxAllowedNotMesuredLowLevelDays->SetLabel( _T( "*" ) );
        }
    }
    if ( spinMaxIncludedNotMesuredLowLevelDays->GetValue() > spinMaxAllowedNotMesuredLowLevelDays->GetValue() ) {
        spinMaxIncludedNotMesuredLowLevelDays->SetValue(spinMaxAllowedNotMesuredLowLevelDays->GetValue());
        spinMaxIncludedNotMesuredLowLevelDaysChange(event);
    }
    updateButtonsState();
}

/**
 * spinMaxIncludedNotMesuredLowLevelDaysChange
 */
void configFrame::spinMaxIncludedNotMesuredLowLevelDaysChange(wxSpinEvent& event)
{
    if ( spinMaxIncludedNotMesuredLowLevelDays->GetValue() == m_config->maxIncludedNotMesuredLowLevelDays ) {
        if ( changesMaxIncludedNotMesuredLowLevelDays->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesMaxIncludedNotMesuredLowLevelDays->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesMaxIncludedNotMesuredLowLevelDays->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesMaxIncludedNotMesuredLowLevelDays->SetLabel( _T( "*" ) );
        }
    }
    if ( spinMaxIncludedNotMesuredLowLevelDays->GetValue() > spinMaxAllowedNotMesuredLowLevelDays->GetValue() ) {
        spinMaxAllowedNotMesuredLowLevelDays->SetValue(spinMaxIncludedNotMesuredLowLevelDays->GetValue());
        spinMaxAllowedNotMesuredLowLevelDaysChange(event);
    }
    updateButtonsState();
}

/**
 * spinMaxAllowedNotMesuredHighLevelDaysChange
 */
void configFrame::spinMaxAllowedNotMesuredHighLevelDaysChange(wxSpinEvent& event)
{
    if ( spinMaxAllowedNotMesuredHighLevelDays->GetValue() == m_config->maxAllowedNotMesuredHighLevelDays ) {
        if ( changesMaxAllowedNotMesuredHighLevelDays->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesMaxAllowedNotMesuredHighLevelDays->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesMaxAllowedNotMesuredHighLevelDays->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesMaxAllowedNotMesuredHighLevelDays->SetLabel( _T( "*" ) );
        }
    }
    if ( spinMaxIncludedNotMesuredHighLevelDays->GetValue() > spinMaxAllowedNotMesuredHighLevelDays->GetValue() ) {
        spinMaxIncludedNotMesuredHighLevelDays->SetValue(spinMaxAllowedNotMesuredHighLevelDays->GetValue());
        spinMaxIncludedNotMesuredHighLevelDaysChange(event);
    }
    updateButtonsState();
}

/**
 * spinMaxIncludedNotMesuredHighLevelDaysChange
 */
void configFrame::spinMaxIncludedNotMesuredHighLevelDaysChange(wxSpinEvent& event)
{
    if ( spinMaxIncludedNotMesuredHighLevelDays->GetValue() == m_config->maxIncludedNotMesuredHighLevelDays ) {
        if ( changesMaxIncludedNotMesuredHighLevelDays->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesMaxIncludedNotMesuredHighLevelDays->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesMaxIncludedNotMesuredHighLevelDays->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesMaxIncludedNotMesuredHighLevelDays->SetLabel( _T( "*" ) );
        }
    }
    if ( spinMaxIncludedNotMesuredHighLevelDays->GetValue() > spinMaxAllowedNotMesuredHighLevelDays->GetValue() ) {
        spinMaxAllowedNotMesuredHighLevelDays->SetValue(spinMaxIncludedNotMesuredHighLevelDays->GetValue());
        spinMaxAllowedNotMesuredHighLevelDaysChange(event);
    }
    updateButtonsState();
}

/**
 * checkBoxIncludeNotMesuredDaysIfAfterMucusPeakClick
 */
void configFrame::checkBoxIncludeNotMesuredDaysIfAfterMucusPeakClick(wxCommandEvent& event)
{
    if ( checkBoxIncludeNotMesuredDaysIfAfterMucusPeak->GetValue() == m_config->includeNotMesuredDaysIfAfterMucusPeak) {
        if ( changesIncludeNotMesuredDaysIfAfterMucusPeak->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesIncludeNotMesuredDaysIfAfterMucusPeak->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesIncludeNotMesuredDaysIfAfterMucusPeak->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesIncludeNotMesuredDaysIfAfterMucusPeak->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

void configFrame::spinNumberOfHistoricalCyclesToUseChange(wxSpinEvent& event)
{
    if ( spinNumberOfHistoricalCyclesToUse->GetValue() == m_config->numberOfHistoricalCyclesToUse ) {
        if ( changesNumberOfHistoricalCyclesToUse->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesNumberOfHistoricalCyclesToUse->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesNumberOfHistoricalCyclesToUse->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesNumberOfHistoricalCyclesToUse->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

void configFrame::comboBoxAutoanalyzeCardPreferResult1TextUpdated(wxCommandEvent& event)
{
    if ( comboBoxAutoanalyzeCardPreferResult1->GetSelection() == m_config->autoanalyzeCardPreferResult1 -1 ) {
        if ( changesAutoanalyzeCardPreferResult1->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesAutoanalyzeCardPreferResult1->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesAutoanalyzeCardPreferResult1->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesAutoanalyzeCardPreferResult1->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

void configFrame::comboBoxAutoanalyzeCardPreferResult2TextUpdated(wxCommandEvent& event)
{
    if ( comboBoxAutoanalyzeCardPreferResult2->GetSelection() == m_config->autoanalyzeCardPreferResult2 -1 ) {
        if ( changesAutoanalyzeCardPreferResult2->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesAutoanalyzeCardPreferResult2->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesAutoanalyzeCardPreferResult2->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesAutoanalyzeCardPreferResult2->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

void configFrame::comboBoxAutoanalyzeCardPreferResult3TextUpdated(wxCommandEvent& event)
{
    if ( comboBoxAutoanalyzeCardPreferResult3->GetSelection() == m_config->autoanalyzeCardPreferResult3 -1 ) {
        if ( changesAutoanalyzeCardPreferResult3->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesAutoanalyzeCardPreferResult3->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesAutoanalyzeCardPreferResult3->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesAutoanalyzeCardPreferResult3->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

void configFrame::comboBoxAutoanalyzeCardPreferResult4TextUpdated(wxCommandEvent& event)
{
    if ( comboBoxAutoanalyzeCardPreferResult4->GetSelection() == m_config->autoanalyzeCardPreferResult4 -1 ) {
        if ( changesAutoanalyzeCardPreferResult4->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesAutoanalyzeCardPreferResult4->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesAutoanalyzeCardPreferResult4->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesAutoanalyzeCardPreferResult4->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

void configFrame::comboBoxAutoanalyzeCardPreferResult5TextUpdated(wxCommandEvent& event)
{
    if ( comboBoxAutoanalyzeCardPreferResult5->GetSelection() == m_config->autoanalyzeCardPreferResult5 -1 ) {
        if ( changesAutoanalyzeCardPreferResult5->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesAutoanalyzeCardPreferResult5->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesAutoanalyzeCardPreferResult5->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesAutoanalyzeCardPreferResult5->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}


/*
    comboBoxAutoanalyzeCardPreferResult1->SetSelection(m_config->autoanalyzeCardPreferResult1-1);
    comboBoxAutoanalyzeCardPreferResult2->SetSelection(m_config->autoanalyzeCardPreferResult2-1);
    comboBoxAutoanalyzeCardPreferResult3->SetSelection(m_config->autoanalyzeCardPreferResult3-1);
    comboBoxAutoanalyzeCardPreferResult4->SetSelection(m_config->autoanalyzeCardPreferResult4-1);
    comboBoxAutoanalyzeCardPreferResult5->SetSelection(m_config->autoanalyzeCardPreferResult5-1);
*/

/**
 * checkBoxAutoanalyzeCardPreferSafeResultClick
 */
/*
void configFrame::checkBoxAutoanalyzeCardPreferSafeResultClick(wxCommandEvent& event)
{
   if ( checkBoxAutoanalyzeCardPreferSafeResult->GetValue() == m_config->autoanalyzeCardPreferSafeResult) {
       if ( changesAutoanalyzeCardPreferSafeResult->GetLabel().IsSameAs( _T( "*" ) ) ) {
           m_changes--;
           changesAutoanalyzeCardPreferSafeResult->SetLabel( _T( "" ) );
       }
   } else {
       if ( !changesAutoanalyzeCardPreferSafeResult->GetLabel().IsSameAs( _T( "*" ) ) ) {
           m_changes++;
           changesAutoanalyzeCardPreferSafeResult->SetLabel( _T( "*" ) );
       }
   }
   updateButtonsState();
}
*/



/******************************************************************************/


/**
 * checkBoxRememberPasswordClick
 */
void configFrame::checkBoxRememberPasswordClick(wxCommandEvent& event)
{
    if ( checkBoxRememberPassword->GetValue() == m_config->rememberPassword) {
        if ( changesRememberPassword->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesRememberPassword->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesRememberPassword->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesRememberPassword->SetLabel( _T( "*" ) );
        }
    }

    staticPassword->Enable(checkBoxRememberPassword->GetValue());
    staticPasswordNote->Enable(checkBoxRememberPassword->GetValue());
    textPassword->Enable(checkBoxRememberPassword->GetValue());
    updateButtonsState();
}

/**
 * textPasswordText
 */
void configFrame::textPasswordText(wxCommandEvent& event)
{
    if ( textPassword->GetValue().IsSameAs( m_config->password ) ) {
        if ( changesPassword->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesPassword->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesPassword->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesPassword->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * checkBoxUseCustomServerClick
 */
void configFrame::checkBoxUseCustomServerClick(wxCommandEvent& event)
{
    if ( checkBoxUseCustomServer->GetValue() == m_config->useCustomServer) {
        if ( changesUseCustomServer->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesUseCustomServer->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesUseCustomServer->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesUseCustomServer->SetLabel( _T( "*" ) );
        }
    }

    staticCustomServerUri->Enable(checkBoxUseCustomServer->GetValue());
    textCustomServerUri->Enable(checkBoxUseCustomServer->GetValue());
    updateButtonsState();
}

/**
 * textCustomServerUriText
 */
void configFrame::textCustomServerUriText(wxCommandEvent& event)
{
    if ( textCustomServerUri->GetValue().IsSameAs( m_config->customServerUri ) ) {
        if ( changesCustomServerUri->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesCustomServerUri->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesCustomServerUri->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesCustomServerUri->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * buttonSetDefaultsClick
 */
void configFrame::buttonSetDefaultsClick( wxCommandEvent& event )
{
    m_config->setDefaultParams();

// Fonts update notification
    sendDataUpdateEvent( CONFIG_FONT_CHANGED, _T( "Fonts settings have been changed - refresh view." ) );
// Buttons style update
    setButtonsStyle();
    sendDataUpdateEvent( CONFIG_BUTTONS_STYLE_CHANGED, _T( "Buttons style setting has been changed - run setButtonsStyle() methods." ) );
// Config update
    sendDataUpdateEvent( CONFIG_CHANGED, _T( "Config has been changed." ) );

    update();
}

/******************************************************************************/

/**
 *
 */
void configFrame::setButtonsStyle()
{
    int flatButton = 0;
    if ( m_config->useFlatButtons ) {
        flatButton = wxNO_BORDER;
    }

    notebook->SetWindowStyle( flatButton );
    buttonOk->SetWindowStyle( flatButton );
    buttonCancel->SetWindowStyle( flatButton );
    buttonSave->SetWindowStyle( flatButton );
    buttonSetDefaults->SetWindowStyle( flatButton );

    notebook->Refresh();
    buttonOk->Refresh();
    buttonCancel->Refresh();
    buttonSave->Refresh();
    buttonSetDefaults->Refresh();
    panelOther->Refresh();
}

/**
 * update
 */
void configFrame::update()
{
    /*******************************/
    /** PAGE GENERAL */

    wxGetApp().getTranslationHelper()->getInstalledLanguages( m_langNames, m_langIdentifiers );
    listBoxLanguage->Clear();
    for ( size_t i = 0; i < m_langNames.Count(); i++ ) {
        listBoxLanguage->Append( m_langNames[i] );

        if ( m_langIdentifiers[i] == m_config->langId ) {
            listBoxLanguage->SetSelection( i );
        }
    }

    checkBoxOpenLastOpenedFile->SetValue( m_config->openLastOpenedFile );
    checkBoxAutosaveChanges->SetValue( m_config->autosaveChanges );
    checkBoxAutosaveSet->SetValue( m_config->autosaveSet );
    checkBoxSyncFileAutomatically->SetValue( m_config->syncFileAutomatically );

    checkBoxRememberPosition->SetValue( m_config->rememberPosition );
    checkBoxFlatButtons->SetValue( m_config->useFlatButtons );

    checkBoxCheckForUpdates->SetValue( m_config->checkForUpdates );
    textUpdatesProxy->SetValue( m_config->updatesProxy );
    staticUpdatesProxy->Enable( m_config->checkForUpdates );
    textUpdatesProxy->Enable( m_config->checkForUpdates );

    /*******************************/
    /** PAGE APPLICATION */

    checkBoxCheckForMissingDays->SetValue( m_config->checkForMissingDays );

    spinCtrlBreastsAutocontrolReminderDay->SetValue( m_config->breastSelfControlReminderDay );
    spinCtrlBreastAutocontrolInterval->SetValue( m_config->breastSelfControlInterval );
    if ( m_config->breastSelfControlReminderDay > 0 ) {
        checkBoxBreastsAutocontrolReminder->SetValue( true );
        spinCtrlBreastsAutocontrolReminderDay->Enable( true );
        spinCtrlBreastAutocontrolInterval->Enable( true );
        staticBreastsAutocontrolReminderDay1->Enable( true );
        staticBreastsAutocontrolReminderDay2->Enable( true );
        staticBreastAutocontrolInterval1->Enable( true );
        staticBreastAutocontrolInterval2->Enable( true );
    } else {
        checkBoxBreastsAutocontrolReminder->SetValue( false );
        spinCtrlBreastsAutocontrolReminderDay->Enable( false );
        spinCtrlBreastAutocontrolInterval->Enable( false );
        staticBreastsAutocontrolReminderDay1->Enable( false );
        staticBreastsAutocontrolReminderDay2->Enable( false );
        staticBreastAutocontrolInterval1->Enable( false );
        staticBreastAutocontrolInterval2->Enable( false );
    }

    comboBoxTemperatureRangeHigh->SetValue( m_util.temperatureToStr( m_config->temperatureRangeHigh, false ) );
    comboBoxTemperatureRangeLow->SetValue( m_util.temperatureToStr( m_config->temperatureRangeLow, false ) );


    // TODO - enable these controls when the functionality will be implemented
    staticLengthUnit->Enable( false );
    comboBoxLengthUnit->Enable( false );
    staticTemperatureUnit->Enable( false );
    comboBoxTemperatureUnit->Enable( false );


    /*******************************/
    /** PAGE RESULTS */
    checkBoxAutoanalyzeCard->SetValue( m_config->autoanalyzeCard );
    checkBoxShowAutoanalysisDetails->SetValue( m_config->showAutoanalysisDetails );
    checkBoxShowAutoanalysisDetails->Enable( m_config->autoanalyzeCard );

    spinMaxAllowedNotMesuredLowLevelDays->SetValue( m_config->maxAllowedNotMesuredLowLevelDays );
    spinMaxIncludedNotMesuredLowLevelDays->SetValue( m_config->maxIncludedNotMesuredLowLevelDays );
    spinMaxAllowedNotMesuredHighLevelDays->SetValue( m_config->maxAllowedNotMesuredHighLevelDays );
    spinMaxIncludedNotMesuredHighLevelDays->SetValue( m_config->maxIncludedNotMesuredHighLevelDays );
    checkBoxIncludeNotMesuredDaysIfAfterMucusPeak->SetValue( m_config->includeNotMesuredDaysIfAfterMucusPeak );
    spinNumberOfHistoricalCyclesToUse->SetValue( m_config->numberOfHistoricalCyclesToUse );
    comboBoxAutoanalyzeCardPreferResult1->SetSelection(m_config->autoanalyzeCardPreferResult1-1);
    comboBoxAutoanalyzeCardPreferResult2->SetSelection(m_config->autoanalyzeCardPreferResult2-1);
    comboBoxAutoanalyzeCardPreferResult3->SetSelection(m_config->autoanalyzeCardPreferResult3-1);
    comboBoxAutoanalyzeCardPreferResult4->SetSelection(m_config->autoanalyzeCardPreferResult4-1);
    comboBoxAutoanalyzeCardPreferResult5->SetSelection(m_config->autoanalyzeCardPreferResult5-1);

    /*******************************/
    /** PAGE COLORS */
    setColour( buttonColourBackground, m_config->colourBackground );

    setColour( buttonColourCell11, m_config->colourCell11 );
    setColour( buttonColourCell21, m_config->colourCell21 );
    setColour( buttonColourCell12, m_config->colourCell12 );
    setColour( buttonColourCell22, m_config->colourCell22 );

    setColour( buttonColourMarkedCell1, m_config->colourMarkedCell1 );
    setColour( buttonColourMarkedCell2, m_config->colourMarkedCell2 );

    setColour( buttonColourPointNormal, m_config->colourPointNormal );
    setColour( buttonColourPointBefore, m_config->colourPointBefore );
    setColour( buttonColourPointAfter, m_config->colourPointAfter );

    setColour( buttonColourTemperatureLine, m_config->colourTemperatureLine );
    setColour( buttonColourTemperatureLevelLine, m_config->colourTemperatureLevelLine );

    setColour( buttonColourPhaseLine, m_config->colourPhaseLine );
    setColour( buttonColourBorders, m_config->colourBorders );

    /*******************************/
    /** PAGE FONTS */
    buttonFontHeadTopic->SetFont( m_config->fontHeadTopic );
    buttonFontHeadName->SetFont( m_config->fontHeadName );
    buttonFontHeadValue->SetFont( m_config->fontHeadValue );
    buttonFontResultHeader->SetFont( m_config->fontResultHeader );
    buttonFontResultDefault->SetFont( m_config->fontResultDefault );
    buttonFontResultResults->SetFont( m_config->fontResultResults );
    buttonFontResultPhases->SetFont( m_config->fontResultPhases );

    buttonFontHeadTopic->SetForegroundColour( m_config->fontHeadTopicColour );
    buttonFontHeadName->SetForegroundColour( m_config->fontHeadNameColour );
    buttonFontHeadValue->SetForegroundColour( m_config->fontHeadValueColour );
    buttonFontResultHeader->SetForegroundColour( m_config->fontResultHeaderColour );
    buttonFontResultDefault->SetForegroundColour( m_config->fontResultDefaultColour );
    buttonFontResultResults->SetForegroundColour( m_config->fontResultResultsColour );
    buttonFontResultPhases->SetForegroundColour( m_config->fontResultPhasesColour );

    buttonFontHeadTopic->SetBackgroundColour( m_config->colourBackground );
    buttonFontHeadName->SetBackgroundColour( m_config->colourBackground );
    buttonFontHeadValue->SetBackgroundColour( m_config->colourBackground );
    buttonFontResultHeader->SetBackgroundColour( m_config->colourCell11 );
    buttonFontResultDefault->SetBackgroundColour( m_config->colourCell12 );
    buttonFontResultResults->SetBackgroundColour( m_config->colourCell22 );
    buttonFontResultPhases->SetBackgroundColour( m_config->colourCell11 );

    /*******************************/
    /** PAGE PRINTING */

    /*******************************/
    /** PAGE OTHER */

    checkBoxRememberPassword->SetValue(m_config->rememberPassword);
    staticPassword->Enable(m_config->rememberPassword);
    staticPasswordNote->Enable(m_config->rememberPassword);
    textPassword->Enable(m_config->rememberPassword);
    if ( m_config->rememberPassword )
        textPassword->SetValue(m_config->password);
    else
        textPassword->SetValue(wxEmptyString);

    checkBoxUseCustomServer->SetValue(m_config->useCustomServer);
    textCustomServerUri->SetValue(m_config->customServerUri);
    staticCustomServerUri->Enable(m_config->useCustomServer);
    textCustomServerUri->Enable(m_config->useCustomServer);

    if ( m_config->lengthInCentimeters ) {
        comboBoxLengthUnit->SetValue( _( "centimiter" ) );
    } else {
        comboBoxLengthUnit->SetValue( _( "inch" ) );
    }

    if ( m_config->temperatureInCelsius ) {
        comboBoxTemperatureUnit->SetValue( _( "Celsius" ) );
        staticTemperatureCorF1->SetLabel( _T( "C" ) );
        staticTemperatureCorF2->SetLabel( _T( "C" ) );
    } else {
        comboBoxTemperatureUnit->SetValue( _( "Fahrenheit" ) );
        staticTemperatureCorF1->SetLabel( _T( "F" ) );
        staticTemperatureCorF2->SetLabel( _T( "F" ) );
    }


    /*******************************/
    m_changes = 0;
    changesLanguage->SetLabel( _T( "" ) );
    changesRememberPosition->SetLabel( _T( "" ) );
    changesFlatButtons->SetLabel( _T( "" ) );
    changesCheckForUpdates->SetLabel( _T( "" ) );
    changesUpdatesProxy->SetLabel( _T( "" ) );
    changesOpenLastOpenedFile->SetLabel( _T( "" ) );
    changesAutosaveChanges->SetLabel( _T( "" ) );
    changesAutosaveSet->SetLabel( _T( "" ) );
    changesCheckForMissingDays->SetLabel( _T( "" ) );
    changesBreastsAutocontrolReminder->SetLabel( _T( "" ) );
    changesBreastsAutocontrolReminderDay->SetLabel( _T( "" ) );
    changesBreastAutocontrolInterval->SetLabel( _T( "" ) );
    changesLengthUnit->SetLabel( _T( "" ) );
    changesTemperatureUnit->SetLabel( _T( "" ) );
    changesTemperatureRangeHigh->SetLabel( _T( "" ) );
    changesTemperatureRangeLow->SetLabel( _T( "" ) );
    changesColourBackground->SetLabel( _T( "" ) );
    changesColourCell->SetLabel( _T( "" ) );
    changesColourPointNormal->SetLabel( _T( "" ) );
    changesColourPointBefore->SetLabel( _T( "" ) );
    changesColourPointAfter->SetLabel( _T( "" ) );
    changesColourTemperatureLine->SetLabel( _T( "" ) );
    changesColourTemperatureLevelLine->SetLabel( _T( "" ) );
    changesColourPhaseLine->SetLabel( _T( "" ) );
    changesColourBorders->SetLabel( _T( "" ) );
    changesFontHeadTopic->SetLabel( _T( "" ) );
    changesFontHeadName->SetLabel( _T( "" ) );
    changesFontHeadValue->SetLabel( _T( "" ) );
    changesFontResultHeader->SetLabel( _T( "" ) );
    changesFontResultDefault->SetLabel( _T( "" ) );
    changesFontResultResults->SetLabel( _T( "" ) );
    changesFontResultPhases->SetLabel( _T( "" ) );
    changesAutoanalyzeCard->SetLabel( _T( "" ) );
    changesMaxAllowedNotMesuredLowLevelDays->SetLabel( _T( "" ) );
    changesMaxIncludedNotMesuredLowLevelDays->SetLabel( _T( "" ) );
    changesMaxAllowedNotMesuredHighLevelDays->SetLabel( _T( "" ) );
    changesMaxIncludedNotMesuredHighLevelDays->SetLabel( _T( "" ) );
    changesIncludeNotMesuredDaysIfAfterMucusPeak->SetLabel( _T( "" ) );
    changesAutoanalyzeCardPreferResult1->SetLabel( _T( "" ) );
    changesAutoanalyzeCardPreferResult2->SetLabel( _T( "" ) );
    changesAutoanalyzeCardPreferResult3->SetLabel( _T( "" ) );
    changesAutoanalyzeCardPreferResult4->SetLabel( _T( "" ) );
    changesAutoanalyzeCardPreferResult5->SetLabel( _T( "" ) );
    changesNumberOfHistoricalCyclesToUse->SetLabel( _T( "" ) );
    changesSyncFileAutomatically->SetLabel( _T( "" ) );
    changesShowAutoanalysisDetails->SetLabel( _T( "" ) );
    changesRememberPassword->SetLabel( _T( "" ) );
    changesPassword->SetLabel( _T( "" ) );
    changesUseCustomServer->SetLabel( _T( "" ) );
    changesCustomServerUri->SetLabel( _T( "" ) );


    updateButtonsState();
}

/**
 * Open teh colourDialog and set the choosen colour as a background colour of the button.
 */
void configFrame::showColourDialog( wxButton *button, wxString name )
{
    wxColour newColour = wxGetColourFromUser( this, button->GetBackgroundColour(), _( "Choose colour for:" ) + name );
    if ( newColour.IsOk() ) {
        setColour( button, newColour );
    }
}

/**
 * Set the colour as a background colour of the button. If the colour is "too dark" set the foreground colour of the button to white.
 */
void configFrame::setColour( wxButton *button, wxColour newColour )
{
    button->SetBackgroundColour( newColour );

    if ( newColour.Red() < 180 && newColour.Green() < 180 && newColour.Blue() < 180 ) {
        button->SetForegroundColour( wxColour( 255, 255, 255 ) );
    } else {
        button->SetForegroundColour( wxColour( 0, 0, 0 ) );
    }
}

/**
 * Check if the current colour of the button is different than currently active colour. If yes than enable the 'changes mark'. If not than disable the 'changes mark'.
 */
void configFrame::checkColourChanges( wxButton *button, wxColour prevColour, wxStaticText *changesMark )
{
    if ( button->GetBackgroundColour() == prevColour ) {
        if ( changesMark->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesMark->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesMark->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesMark->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * Check if the current colour of at least one of the cells' buttons is different than currently active colour. If yes than enable the 'changes mark'. If not than disable the 'changes mark'.
 */
void configFrame::checkCellsColourChanges()
{
    if ( buttonColourCell11->GetBackgroundColour() == m_config->colourCell11 &&
            buttonColourCell12->GetBackgroundColour() == m_config->colourCell12 &&
            buttonColourCell21->GetBackgroundColour() == m_config->colourCell21 &&
            buttonColourCell22->GetBackgroundColour() == m_config->colourCell22 &&
            buttonColourMarkedCell1->GetBackgroundColour() == m_config->colourMarkedCell1 &&
            buttonColourMarkedCell2->GetBackgroundColour() == m_config->colourMarkedCell2
       ) {
        if ( changesColourCell->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesColourCell->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesColourCell->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesColourCell->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * setFont
 */
void configFrame::showFontDialog( wxButton *button, wxFont prevFont, wxColour prevColour, wxStaticText *changesMark, wxString name )
{
    m_fontData.SetInitialFont( button->GetFont() );
    m_fontData.SetColour( button->GetForegroundColour() );

    if ( m_fontDialog->Create( this, m_fontData ) ) {
        if ( m_fontDialog->ShowModal() == wxID_OK ) {
            m_fontData = m_fontDialog->GetFontData();
            button->SetFont( m_fontData.GetChosenFont() );
            button->SetForegroundColour( m_fontData.GetColour() );

        }
    }

    if ( m_config->showColoursDialogForFonts ) {
        wxColour newColour = wxGetColourFromUser( this, button->GetForegroundColour(), _( "Choose colour for:" ) + name );
        if ( newColour.IsOk() ) {
            button->SetForegroundColour( newColour );
        }
    }

    if ( areFontsTheSame( button->GetFont(), prevFont, button->GetForegroundColour(), prevColour ) ) {
        if ( changesMark->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes--;
            changesMark->SetLabel( _T( "" ) );
        }
    } else {
        if ( !changesMark->GetLabel().IsSameAs( _T( "*" ) ) ) {
            m_changes++;
            changesMark->SetLabel( _T( "*" ) );
        }
    }
    updateButtonsState();
}

/**
 * update the buttons state (buttonSave, buttonCancel).
 */
void configFrame::updateButtonsState()
{
    if ( m_changes == 0 ) {
        buttonSave->Enable( false );
        buttonCancel->Enable( false );
    } else {
        buttonSave->Enable( true );
        buttonCancel->Enable( true );
    }
}

/**
 * save
 */
bool configFrame::save()
{
    // check if proxy is defined correctly
    /*
    if ( m_config->checkForUpdates ) {
     if ( m_config->updatesProxy.Find(_(":")) == wxNOT_FOUND ) {
      wxMessageBox( _("Addres of the proxy server is incorrectly defined. Correct format: '<host>:<port>' or '<host>' (in this case the default proxy port '8080' will be used)"), _("Error"), wxOK | wxICON_ERROR, this);
      textUpdatesProxy->SetFocus();
      return false;
     }
    }
    */

    // check if custom sync server is correctly defines
    if ( checkBoxUseCustomServer->GetValue() ) {
        if ( textCustomServerUri->GetValue().IsEmpty() ) {
            wxMessageBox( _( "Use custom synchronization server is enabled, but custom server URL is empty." ), _( "Error" ), wxOK | wxICON_ERROR, this );
            return false;
        }
        wxURL url(textCustomServerUri->GetValue());
        if ( !url.IsOk() ) {
            wxMessageBox( _( "Use custom synchronization server is enabled, but given custom server URL is incorrect." ), _( "Error" ), wxOK | wxICON_ERROR, this );
        }
    }

    // saving data
    bool fontsChanged = false;
    bool languageChanged = false;
    bool buttonStyleChanged = false;
    m_syncServerChanged = false;

    /*******************************/
    /** PAGE GENERAL */
    long newLangId = m_langIdentifiers[ listBoxLanguage->GetSelection()];
    if ( newLangId != m_config->langId ) {
        languageChanged = true;
        m_config->langId = newLangId;
        wxGetApp().getTranslationHelper()->setApplicationLanguage( newLangId );
    }

    m_config->openLastOpenedFile = checkBoxOpenLastOpenedFile->GetValue();
    m_config->autosaveChanges = checkBoxAutosaveChanges->GetValue();
    m_config->autosaveSet = checkBoxAutosaveSet->GetValue();
    m_config->syncFileAutomatically = checkBoxSyncFileAutomatically->GetValue();

    m_config->rememberPosition = checkBoxRememberPosition->GetValue();

    if ( m_config->useFlatButtons != checkBoxFlatButtons->GetValue() ) {
        buttonStyleChanged = true;
        m_config->useFlatButtons = checkBoxFlatButtons->GetValue();
    }

    m_config->checkForUpdates = checkBoxCheckForUpdates->GetValue();

    wxString proxy = textUpdatesProxy->GetValue();
    proxy = proxy.Trim( true );
    proxy = proxy.Trim( false );

    if ( proxy.Len() > 0 && proxy.Find( _T( ":" ) ) == wxNOT_FOUND ) {
        m_config->updatesProxy = proxy + _T( ":8080" );
    } else {
        m_config->updatesProxy = proxy;
    }

    /*******************************/
    /** PAGE APPLICATION */
    m_config->checkForMissingDays = checkBoxCheckForMissingDays->GetValue();

    if ( checkBoxBreastsAutocontrolReminder->GetValue() ) {
        m_config->breastSelfControlReminderDay = spinCtrlBreastsAutocontrolReminderDay->GetValue();
    } else {
        m_config->breastSelfControlReminderDay = -1;
    }
    m_config->breastSelfControlInterval = spinCtrlBreastAutocontrolInterval->GetValue();

    m_config->temperatureRangeHigh = m_util.strToTemperature( comboBoxTemperatureRangeHigh->GetValue() );
    m_config->temperatureRangeLow = m_util.strToTemperature( comboBoxTemperatureRangeLow->GetValue() );

    /*******************************/
    /** PAGE ANALYSIS */
    m_config->autoanalyzeCard = checkBoxAutoanalyzeCard->GetValue();
    m_config->showAutoanalysisDetails = checkBoxShowAutoanalysisDetails->GetValue();
    m_config->maxAllowedNotMesuredLowLevelDays = spinMaxAllowedNotMesuredLowLevelDays->GetValue();
    m_config->maxIncludedNotMesuredLowLevelDays = spinMaxIncludedNotMesuredLowLevelDays->GetValue();
    m_config->maxAllowedNotMesuredHighLevelDays = spinMaxAllowedNotMesuredHighLevelDays->GetValue();
    m_config->maxIncludedNotMesuredHighLevelDays = spinMaxIncludedNotMesuredHighLevelDays->GetValue();
    m_config->includeNotMesuredDaysIfAfterMucusPeak = checkBoxIncludeNotMesuredDaysIfAfterMucusPeak->GetValue();
    m_config->autoanalyzeCardPreferResult1 = comboBoxAutoanalyzeCardPreferResult1->GetSelection()+1;
    m_config->autoanalyzeCardPreferResult2 = comboBoxAutoanalyzeCardPreferResult2->GetSelection()+1;
    m_config->autoanalyzeCardPreferResult3 = comboBoxAutoanalyzeCardPreferResult3->GetSelection()+1;
    m_config->autoanalyzeCardPreferResult4 = comboBoxAutoanalyzeCardPreferResult4->GetSelection()+1;
    m_config->autoanalyzeCardPreferResult5 = comboBoxAutoanalyzeCardPreferResult5->GetSelection()+1;
    m_config->numberOfHistoricalCyclesToUse = spinNumberOfHistoricalCyclesToUse->GetValue();

    /*******************************/
    /** PAGE COLORS */
    m_config->colourBackground           = buttonColourBackground->GetBackgroundColour();
    m_config->colourCell11               = buttonColourCell11->GetBackgroundColour();
    m_config->colourCell21               = buttonColourCell21->GetBackgroundColour();
    m_config->colourCell12               = buttonColourCell12->GetBackgroundColour();
    m_config->colourCell22               = buttonColourCell22->GetBackgroundColour();
    m_config->colourMarkedCell1          = buttonColourMarkedCell1->GetBackgroundColour();
    m_config->colourMarkedCell2          = buttonColourMarkedCell2->GetBackgroundColour();
    m_config->colourPointNormal          = buttonColourPointNormal->GetBackgroundColour();
    m_config->colourPointBefore          = buttonColourPointBefore->GetBackgroundColour();
    m_config->colourPointAfter           = buttonColourPointAfter->GetBackgroundColour();
    m_config->colourTemperatureLine      = buttonColourTemperatureLine->GetBackgroundColour();
    m_config->colourTemperatureLevelLine = buttonColourTemperatureLevelLine->GetBackgroundColour();
    m_config->colourPhaseLine            = buttonColourPhaseLine->GetBackgroundColour();
    m_config->colourBorders              = buttonColourBorders->GetBackgroundColour();

    /*******************************/
    /** PAGE FONTS */

    if ( !areFontsTheSame( m_config->fontHeadTopic, buttonFontHeadTopic->GetFont() ) )
        fontsChanged = true;
    else if ( !areFontsTheSame( m_config->fontHeadName, buttonFontHeadName->GetFont() ) )
        fontsChanged = true;
    else if ( !areFontsTheSame( m_config->fontHeadValue, buttonFontHeadValue->GetFont() ) )
        fontsChanged = true;
    else if ( !areFontsTheSame( m_config->fontResultHeader, buttonFontResultHeader->GetFont() ) )
        fontsChanged = true;
    else if ( !areFontsTheSame( m_config->fontResultDefault, buttonFontResultDefault->GetFont() ) )
        fontsChanged = true;
    else if ( !areFontsTheSame( m_config->fontResultResults, buttonFontResultResults->GetFont() ) )
        fontsChanged = true;
    else if ( !areFontsTheSame( m_config->fontResultPhases, buttonFontResultPhases->GetFont() ) )
        fontsChanged = true;

    m_config->fontHeadTopic          = buttonFontHeadTopic->GetFont();
    m_config->fontHeadName           = buttonFontHeadName->GetFont();
    m_config->fontHeadValue          = buttonFontHeadValue->GetFont();
    m_config->fontResultHeader       = buttonFontResultHeader->GetFont();
    m_config->fontResultDefault      = buttonFontResultDefault->GetFont();
    m_config->fontResultResults      = buttonFontResultResults->GetFont();
    m_config->fontResultPhases       = buttonFontResultPhases->GetFont();

    m_config->fontHeadTopicColour     = buttonFontHeadTopic->GetForegroundColour();
    m_config->fontHeadNameColour      = buttonFontHeadName->GetForegroundColour();
    m_config->fontHeadValueColour     = buttonFontHeadValue->GetForegroundColour();
    m_config->fontResultHeaderColour  = buttonFontResultHeader->GetForegroundColour();
    m_config->fontResultDefaultColour = buttonFontResultDefault->GetForegroundColour();
    m_config->fontResultResultsColour = buttonFontResultResults->GetForegroundColour();
    m_config->fontResultPhasesColour  = buttonFontResultPhases->GetForegroundColour();

    /*******************************/
    /** PAGE PRINTING */

    /*******************************/
    /** PAGE OTHER */

    m_config->rememberPassword = checkBoxRememberPassword->GetValue();
    if (m_config->rememberPassword)
        m_config->password = textPassword->GetValue();
    else
        m_config->password = wxEmptyString;

    if ( m_config->useCustomServer != checkBoxUseCustomServer->GetValue() ) {
        wxLogDebug( _T("m_config->useCustomServer != checkBoxUseCustomServer->GetValue() -> sync server update") );
        m_syncServerChanged = true;
    }

    wxString customServerUri = textCustomServerUri->GetValue();
    if ( !customServerUri.EndsWith( _T("/") ))
        textCustomServerUri->SetValue( customServerUri + _T("/") );

    if ( checkBoxUseCustomServer->GetValue() && !m_config->customServerUri.IsSameAs( textCustomServerUri->GetValue() ) ) {
        wxLogDebug( _T("checkBoxUseCustomServer->GetValue() && !m_config->customServerUri.IsSameAs( textCustomServerUri->GetValue() ) -> sync server update") );
        m_syncServerChanged = true;
    }

    m_config->useCustomServer = checkBoxUseCustomServer->GetValue();
    m_config->customServerUri = textCustomServerUri->GetValue();


    if ( comboBoxLengthUnit->GetValue().IsSameAs( _( "centimiter" ) ) ) {
        m_config->lengthInCentimeters = true;
    } else {
        m_config->lengthInCentimeters = false;
    }

    if ( comboBoxTemperatureUnit->GetValue().IsSameAs( _( "Celsius" ) ) ) {
        m_config->temperatureInCelsius = true;
    } else {
        m_config->temperatureInCelsius = false;
    }



    m_config->saveParamsToConfigFile();

    // Language update
    if ( languageChanged ) {
        sendDataUpdateEvent( CONFIG_LANGUAGE_CHANGED, _T( "Language settings have been changed - display info that the application must be restarted." ) );
    }
    // Fonts update notification
    if ( fontsChanged ) {
        sendDataUpdateEvent( CONFIG_FONT_CHANGED, _T( "Fonts settings have been changed - refresh view." ) );
    }

    // Buttons style update
    if ( buttonStyleChanged ) {
        setButtonsStyle();
        sendDataUpdateEvent( CONFIG_BUTTONS_STYLE_CHANGED, _T( "Buttons style setting has been changed - run setButtonsStyle() methods." ) );
    }

    // Config update
    m_config->calculateParams();
    sendDataUpdateEvent( CONFIG_CHANGED, _T( "Config has been changed." ) );

    update();

    // Language or fonts update notification
    if ( languageChanged )
        wxMessageBox( _( "You must restart the application to change the language of the application." ), _( "Notification" ), wxOK | wxICON_EXCLAMATION, this );

    if ( fontsChanged )
        wxMessageBox( _( "Application fonts have been changed.\nIt's recommended to restart the application to have data correctly displayed." ), _( "Notification" ), wxOK | wxICON_EXCLAMATION, this );

    return true;
}

/**
 * areFontsTheSame
 */
bool configFrame::areFontsTheSame( wxFont font1, wxFont font2, wxColour colour1, wxColour colour2 )
{
    if ( !areFontsTheSame( font1, font2 ) ) {
        return false;
    }

    if ( colour1 != colour2 ) {
        return false;
    }

    return true;
}

/**
 * areFontsTheSame
 */
bool configFrame::areFontsTheSame( wxFont font1, wxFont font2 )
{
    if ( font1.GetPointSize() != font2.GetPointSize() ) {
        return false;
    }
    if ( font1.GetFamily() != font2.GetFamily() ) {
        return false;
    }
    if ( font1.GetStyle() != font2.GetStyle() ) {
        return false;
    }
    if ( font1.GetWeight() != font2.GetWeight() ) {
        return false;
    }
    if ( font1.GetUnderlined() != font2.GetUnderlined() ) {
        return false;
    }
    if ( !font1.GetFaceName().IsSameAs( font2.GetFaceName() ) ) {
        return false;
    }
    if ( font1.GetEncoding() != font2.GetEncoding() ) {
        return false;
    }

    return true;
}

/**
 *
 */
void configFrame::sendDataUpdateEvent( int id, wxString message )
{
    wxCommandEvent event( wxEVT_CONFIG_DATA_MODIFIED_EVENT, CONFIG_EVENT );
    event.SetInt( id );
    event.SetString( message );
    wxPostEvent( m_parent, event );
}

/******************************************************************************/
