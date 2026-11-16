// Stub implementations for CAutoPilotButton and CAutoSystem (Lib_ClientUI).
//
// The real AutoPilotButton.cpp / AutoSystem.cpp no longer compile against
// the current UI headers: they call CBasicTextButton::SetGeneralButton
// (now private), DxFontMan (renamed), and CInnerInterface::ShowCommonLineInfo
// (removed) -- which is presumably why they were dropped from the project.
// But InnerInterfaceSimple.cpp still constructs both classes, so the linker
// needs these symbols. These inert implementations satisfy the linker and
// leave the AutoPilot UI empty; every other UI class is unaffected.
#include "StdAfx.h"
#include "AutoPilotButton.h"
#include "AutoSystem.h"

CAutoPilotButton::CAutoPilotButton(void)
    : m_pAutoPilotButton( NULL )
    , m_pd3dDevice( NULL )
{
}

CAutoPilotButton::~CAutoPilotButton(void)
{
}

void CAutoPilotButton::CreateSubControl()
{
}

void CAutoPilotButton::TranslateUIMessage( UIGUID ControlID, DWORD dwMsg )
{
}

void CAutoPilotButton::Update( int x, int y, BYTE LB, BYTE MB, BYTE RB, int nScroll, float fElapsedTime, BOOL bFirstControl )
{
}

CAutoSystem::CAutoSystem(void)
    : m_pBackground( NULL )
    , m_pAutoCombatButton( NULL )
    , m_pAutoPotLootButton( NULL )
{
}

CAutoSystem::~CAutoSystem(void)
{
}

void CAutoSystem::CreateSubControl()
{
}

void CAutoSystem::TranslateUIMessage( UIGUID ControlID, DWORD dwMsg )
{
}

void CAutoSystem::Update( int x, int y, BYTE LB, BYTE MB, BYTE RB, int nScroll, float fElapsedTime, BOOL bFirstControl )
{
}
