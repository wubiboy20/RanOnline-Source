// Stub for the Intel JPEG Library import library (ijl15.lib), absent from
// this source tree (*.lib is gitignored). It is demanded by a
// #pragma comment(lib, "../Tik/Library/ijl15.lib") in
// Lib_Engine/DxCommon/DxGrapUtils.cpp (and a typo'd "../=Library/ijl15.lib"
// in bmp2jpeg.cpp). Only ijlInit/ijlFree/ijlWrite are called, all for
// screenshot-to-JPEG conversion, and every call site checks for IJL_OK and
// bails out on error, so returning IJL_INTERNAL_ERROR simply disables JPEG
// screenshots. Signatures come from Tik/Include/ijl.h itself.
#include <windows.h>
#include "ijl.h"

IJLERR IJL_STDCALL ijlInit( JPEG_CORE_PROPERTIES* jcprops )
{
    (void)jcprops;
    return IJL_INTERNAL_ERROR;
}

IJLERR IJL_STDCALL ijlFree( JPEG_CORE_PROPERTIES* jcprops )
{
    (void)jcprops;
    return IJL_INTERNAL_ERROR;
}

IJLERR IJL_STDCALL ijlWrite( JPEG_CORE_PROPERTIES* jcprops, IJLIOTYPE iotype )
{
    (void)jcprops;
    (void)iotype;
    return IJL_INTERNAL_ERROR;
}
