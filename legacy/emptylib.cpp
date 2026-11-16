// Placeholder object so the linker can open HShield.lib. GameClient2 is
// compiled with _NO_HACKSHIELD defined (see the build workflow), and in
// that mode Tik/HS/HShield.h turns every _AhnHS_* call into a no-op macro,
// so no real HackShield symbols are referenced.
extern "C" void muse_hshield_stub()
{
}
