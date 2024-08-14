// =============================================================
// debug_util.h
// Put this in a separate file, include/debug_util.h
#ifndef Z_DEBUG_UTIL_H
#define Z_DEBUG_UTIL_H

void Debug_Print(u8 line, const char* fmt, ...);
void Debug_Print_Draw(GraphicsContext* gfxCtx);

#endif
