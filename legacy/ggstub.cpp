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
