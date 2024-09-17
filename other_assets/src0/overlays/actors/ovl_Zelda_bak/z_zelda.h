#ifndef Z_ZELDA_H
#define Z_ZELDA_H

#include "ultra64.h"
#include "global.h"
#include "src/overlays/actors/ovl_En_Zl4/z_en_zl4.h"

struct Zelda;

typedef void (*ZeldaActionFunc)(struct Zelda*, PlayState*);

typedef struct Zelda {
    Actor actor;
    ZeldaActionFunc actionFunc;
    NpcInteractInfo interactInfo;
    SkelAnime skelAnime;
    Vec3s jointTable[18];
    Vec3s morphTable[18];
    s16 eyeIndex;
    ColliderCylinder collider;
    u8 talkState;
    u8 csState;
    u8 leftEyeState;
    u8 rightEyeState;
    u8 mouthState;
    u8 eyeExpression;
    u8 mouthExpression;
    s16 blinkTimer;
    s16 talkTimer1;
    s16 talkTimer2;
    s16 cueId;
} Zelda;

#endif