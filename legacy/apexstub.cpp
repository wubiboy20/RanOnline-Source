// Stub for the AhnLab APEX client interface library (AHClientInterface.lib),
// demanded by a #pragma comment(lib, "../=Library/AHClientInterface.lib") in
// Lib_Client/ClientApex.cpp. Only two entry points exist in the interface
// header (Lib_Network/ApexClient.h): CHCStart and CHCEnd. The stub leaves
// the receive callback NULL (ClientApex.cpp checks it before calling) and
// reports success, so the game client runs without the APEX anti-cheat
// service, matching the _NO_HACKSHIELD setup used for HackShield.
#include <windows.h>
#include "ApexClient.h"

extern "C" long WINAPI CHCStart( _FUNC_C_SEND pfSend, _FUNC_C_REC& pfRec )
{
    (void)pfSend;
    pfRec = NULL;
    return 0;
}

extern "C" long WINAPI CHCEnd()
{
    return 0;
}
