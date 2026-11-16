// Stub for the nProtect GameGuard server library (ggsrvlib.lib).
// The real library was never committed to this repo (.gitignore excludes
// *.lib). Only two entry points are actually called by the server code
// (Lib_Network/s_CFieldServer.cpp, s_CAgentServer.cpp). Returning
// ERROR_SUCCESS (0) makes the servers log "GameGuard server DLL load
// success" and continue without GameGuard auth, which matches the rest of
// this source: no per-user GGAuth* function is called anywhere.
// Signatures match Tik/Include/ggsrv.h (extern "C", __cdecl).
extern "C" unsigned long __cdecl InitGameguardAuth(char* sGGPath, unsigned long dwNumActive, int useTimer, int useLog)
{
    (void)sGGPath;
    (void)dwNumActive;
    (void)useTimer;
    (void)useLog;
    return 0;
}

extern "C" void __cdecl CleanupGameguardAuth()
{
}

// ---------------------------------------------------------------------------
// CCSAuth2 stub: the per-user GameGuard auth class from the same SDK header.
// Its implementation also lived only in the real ggsrvlib.lib. The server
// code (Lib_Network/s_CNetUserNProtect.cpp) treats a 0 return from
// GetAuthQuery()/CheckAuthAnswer() as success, so no-op implementations
// returning 0 make GameGuard auth always pass, consistent with
// InitGameguardAuth() above reporting success without a GameGuard server.
#include <windows.h>
#include <string.h>
#include "Tik/Include/ggsrv.h"

CCSAuth2::CCSAuth2()
    : m_pProtocol( NULL )
    , m_bPrtcRef( 0 )
    , m_dwUserFlag( 0 )
{
    memset( &m_GGVer, 0, sizeof( m_GGVer ) );
    memset( &m_AuthQueryTmp, 0, sizeof( m_AuthQueryTmp ) );
    memset( &m_AuthQuery, 0, sizeof( m_AuthQuery ) );
    memset( &m_AuthAnswer, 0, sizeof( m_AuthAnswer ) );
}

CCSAuth2::~CCSAuth2()
{
}

void CCSAuth2::Init()
{
}

void CCSAuth2::Close()
{
}

unsigned long CCSAuth2::GetAuthQuery()
{
    return 0;
}

unsigned long CCSAuth2::CheckAuthAnswer()
{
    return 0;
}

// Insurance: if any translation unit refers to the destructor through the
// virtual-destructor mangled name, alias it to the stub destructor above.
#pragma comment(linker, "/alternatename:??1CCSAuth2@@UAE@XZ=??1CCSAuth2@@QAE@XZ")
