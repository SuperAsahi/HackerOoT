/*
 * File: z_zelda.c
 * Overlay: ovl_Zelda
 * Description: A custom child Zelda for use with my mod
 */

#include "z_zelda.h"
#include "assets/objects/object_zl4/object_zl4.h"
//#include "include/z64math.h"

// Flag 0 - makes it Z-targetable
// Flag 3 - "friendly npc" Actor Flag
// Flag 4 - update actor while off screen, flag 5 - draw actor while offscreen
#define FLAGS (ACTOR_FLAG_0 | ACTOR_FLAG_3 | ACTOR_FLAG_4 | ACTOR_FLAG_5)

#define SWITCH_FLAG(this) (this->actor.params & 0x3F)

void Zelda_Init(Actor* thisx, PlayState* play);
void Zelda_Destroy(Actor* thisx, PlayState* play);
void Zelda_Update(Actor* thisx, PlayState* play);
void Zelda_Draw(Actor* thisx, PlayState* play);

void Zelda_SetupIdle(Zelda* this, PlayState* play);
void Zelda_Idle(Zelda* this, PlayState* play);

void Zelda_SetupWalkToPlayer(Zelda* this, PlayState* play);
void Zelda_WalkToPlayer(Zelda* this, PlayState* play);

// WalkToPlayer
// idle

u16 Zelda_GetNextTextId(PlayState* play, Actor* thisx);
s16 Zelda_UpdateTalkState(PlayState* play, Actor* thisx);

const ActorInit Zelda_InitVars = {
    ACTOR_ZELDA,
    ACTORCAT_NPC,
    FLAGS,
    OBJECT_ZL4,
    sizeof(Zelda),
    (ActorFunc)Zelda_Init,
    (ActorFunc)Zelda_Destroy,
    (ActorFunc)Zelda_Update,
    (ActorFunc)Zelda_Draw,
};

typedef enum {
    /* 0 */ ZELDA_EYES_NEUTRAL,
    /* 1 */ ZELDA_EYES_SHUT,
    /* 2 */ ZELDA_EYES_LOOK_LEFT,
    /* 3 */ ZELDA_EYES_LOOK_RIGHT,
    /* 4 */ ZELDA_EYES_WIDE,
    /* 5 */ ZELDA_EYES_SQUINT,
    /* 6 */ ZELDA_EYES_OPEN
} ZeldaEyeExpression;

typedef enum {
    /* 0 */ ZELDA_MOUTH_NEUTRAL,
    /* 1 */ ZELDA_MOUTH_HAPPY,
    /* 2 */ ZELDA_MOUTH_WORRIED,
    /* 3 */ ZELDA_MOUTH_SURPRISED
} ZeldaMouthExpression;

typedef enum {
    /* 0 */ ZELDA_EYE_OPEN,
    /* 1 */ ZELDA_EYE_BLINK,
    /* 2 */ ZELDA_EYE_SHUT,
    /* 3 */ ZELDA_EYE_WIDE,
    /* 4 */ ZELDA_EYE_SQUINT,
    /* 5 */ ZELDA_EYE_LOOK_OUT,
    /* 6 */ ZELDA_EYE_LOOK_IN
} ZeldaEyeState;

typedef enum {
    NPCTEST_MESSAGE_COME_BACK_LATER = 0x71B4,
    NPCTEST_MESSAGE_COME_BACK_WAY_LATER = 0x71B5,
    NPCTEST_MESSAGE_DO_YOU_LIKE_TUTORIALS = 0x71B6,
    NPCTEST_MESSAGE_CHOICE_LOVE_EM = 0x71B7,
    NPCTEST_MESSAGE_CHOICE_ABSOLUTELY = 0x71B8,
    NPCTEST_MESSAGE_6 = 0x71B9,
    NPCTEST_MESSAGE_7 = 0x71BA,
    NPCTEST_MESSAGE_8 = 0x71BB,
    NPCTEST_MESSAGE_9 = 0x71BC,
} ZeldaMessageId;

typedef enum {
    ZELDA_ACTION_IDLE,
    ZELDA_ACTION_WALK_TO_PLAYER,
} ZeldaAction;

static ColliderCylinderInit sCylinderInit = {
    {
        COLTYPE_NONE,
        AT_NONE,
        AC_NONE,
        OC1_ON | OC1_TYPE_ALL,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEMTYPE_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0x00000000, 0x00, 0x00 },
        ATELEM_NONE,
        ACELEM_NONE,
        OCELEM_ON,
    },
    { 10, 44, 0, { 0, 0, 0 } },
};


typedef enum {
    /*  0 */ ZELDA_ANIM_0,
    /*  1 */ ZELDA_ANIM_1,
    /*  2 */ ZELDA_ANIM_2,
    /*  3 */ ZELDA_ANIM_3,
    /*  4 */ ZELDA_ANIM_4,
    /*  5 */ ZELDA_ANIM_5,
    /*  6 */ ZELDA_ANIM_6,
    /*  7 */ ZELDA_ANIM_7,
    /*  8 */ ZELDA_ANIM_8,
    /*  9 */ ZELDA_ANIM_9,
    /* 10 */ ZELDA_ANIM_10,
    /* 11 */ ZELDA_ANIM_11,
    /* 12 */ ZELDA_ANIM_12,
    /* 13 */ ZELDA_ANIM_13,
    /* 14 */ ZELDA_ANIM_14,
    /* 15 */ ZELDA_ANIM_15,
    /* 16 */ ZELDA_ANIM_16,
    /* 17 */ ZELDA_ANIM_17,
    /* 18 */ ZELDA_ANIM_18,
    /* 19 */ ZELDA_ANIM_19,
    /* 20 */ ZELDA_ANIM_20,
    /* 21 */ ZELDA_ANIM_21,
    /* 22 */ ZELDA_ANIM_22,
    /* 23 */ ZELDA_ANIM_23,
    /* 24 */ ZELDA_ANIM_24,
    /* 25 */ ZELDA_ANIM_25,
    /* 26 */ ZELDA_ANIM_26,
    /* 27 */ ZELDA_ANIM_27,
    /* 28 */ ZELDA_ANIM_28,
    /* 29 */ ZELDA_ANIM_29,
    /* 30 */ ZELDA_ANIM_30,
    /* 31 */ ZELDA_ANIM_31,
    /* 32 */ ZELDA_ANIM_32,
    /* 33 */ ZELDA_ANIM_33
} ZeldaAnimation;

static AnimationInfo sAnimationInfo[] = {
    /*  0 */ /* standing idle */ { &gChildZeldaAnim_000654, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 0.0f },
    /*  1 */ /* moves to introduce herself */ { &gChildZeldaAnim_00E5C8, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, -1.0f },
    /*  2 */ /* introducing herself */ { &gChildZeldaAnim_00EBC4, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -1.0f },
    /*  3 */ /* turns away from window surprised */
    { &gChildZeldaAnim_010DF8, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, -1.0f },
    /*  4 */ /* standing with hand in front of mouth */
    { &gChildZeldaAnim_011248, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -1.0f },
    /*  5 */ /* surprise, moves hand to mouth */ { &gChildZeldaAnim_011698, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -1.0f },
    /*  6 */ /* uncrosses arms, leans toward link with hands together */
    { &gChildZeldaAnim_011B34, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -8.0f },
    /*  7 */ /* turns to write letter */ { &gChildZeldaAnim_0125E4, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 0.0f },
    /*  8 */ /* writing letter */ { &gChildZeldaAnim_012E58, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 0.0f },
    /*  9 */ /* pulls back, looks askew */ { &gChildZeldaAnim_013280, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, -1.0f },
    /* 10 */ /* looks askew at Link */ { &gChildZeldaAnim_013628, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -1.0f },
    /* 11 */ /* crosses arms, looks to the side */ { &gChildZeldaAnim_013A50, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, -1.0f },
    /* 12 */ /* arms crossed, looking away */ { &gChildZeldaAnim_013EA0, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -1.0f },
    /* 13 */ /* turns away, hands behind back, looks up */
    { &gChildZeldaAnim_015F14, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 0.0f },
    /* 14 */ /* turns back to link, hands on top of each other */
    { &gChildZeldaAnim_0169B4, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 0.0f },
    /* 15 */ /* hands behind back looking up */ { &gChildZeldaAnim_016D08, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 0.0f },
    /* 16 */ /* leans toward link, looks askew */ { &gChildZeldaAnim_01726C, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, -1.0f },
    /* 17 */ /* leaning toward link, looking askew */
    { &gChildZeldaAnim_017818, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -8.0f },
    /* 18 */ /* neutral, looking at Link */ { &gChildZeldaAnim_01805C, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 0.0f },
    /* 19 */ /* moves towards link, hands clasped */
    { &gChildZeldaAnim_018898, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, -1.0f },
    /* 20 */ /* facing link, hands clasped */ { &gChildZeldaAnim_01910C, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -1.0f },
    /* 21 */ /* look in window */ { &gChildZeldaAnim_019600, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 0.0f },
    /* 22 */ /* leans forward, hands together */ { &gChildZeldaAnim_01991C, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, -1.0f },
    /* 23 */ /* turns to link, hands on top of each other */
    { &gChildZeldaAnim_01A2FC, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 0.0f },
    /* 24 */ /* stands, hands on top of each other */
    { &gChildZeldaAnim_01AAE0, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 0.0f },
    /* 25 */ /* leaning forward, hands together */ { &gChildZeldaAnim_01AE88, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -1.0f },
    /* 26 */ /* walks aside, points to window */ { &gChildZeldaAnim_01B874, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 0.0f },
    /* 27 */ /* stands pointing at window */ { &gChildZeldaAnim_01BCF0, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 0.0f },
    /* 28 */ /* laughs, hands together */ { &gChildZeldaAnim_01C494, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -1.0f },
    /* 29 */ /* happy, hands together */ { &gChildZeldaAnim_01C7B0, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -1.0f },
    /* 30 */ /* standing hands behind back looking down*/
    { &gChildZeldaAnim_01CE08, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 0.0f },
    /* 31 */ /* cocks head, hands clasped */ { &gChildZeldaAnim_00F0A4, 1.0f, 0.0f, -1.0f, ANIMMODE_ONCE, 0.0f },
    /* 32 */ /* happy, hands clasped */ { &gChildZeldaAnim_00F894, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, 0.0f },
    /* 33 */ /* transition to standing */ { &gChildZeldaAnim_000654, 1.0f, 0.0f, -1.0f, ANIMMODE_LOOP, -8.0f },
};

void Zelda_SetupAction(Zelda* this, ZeldaActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void Zelda_Init(Actor* thisx, PlayState* play) {
    Zelda* this = (Zelda*)thisx;
    //u8 zeldafollow = 0;

    // Actor_Init(&this->actor, &play);

    SkelAnime_InitFlex(play, &this->skelAnime, &gChildZeldaSkel, NULL, this->jointTable, this->morphTable, 18);
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 18.0f);
    
    // Animation_Change(&this->skelAnime, &gChildZeldaAnim_000654, 1.0f, 0.0f, Animation_GetLastFrame(&gChildZeldaAnim_000654), ANIMMODE_LOOP, 0.0f);
    

    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);

    //Zelda_Idle(this, play);
    Zelda_SetupWalkToPlayer(this, play);
//    this->action = ZELDA_ACTION_IDLE;


    /*
    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinderType1(play, &this->collider, &this->actor, &sCylinderInit);
    */
    
}

void Zelda_Destroy(Actor* thisx, PlayState* play) {
    Zelda* this = (Zelda*)thisx;

    Collider_DestroyCylinder(play, &this->collider);
}

void Zelda_Update(Actor* thisx, PlayState* play) {
    Zelda* this = (Zelda*)thisx;
    Player* player = GET_PLAYER(play);

    SkelAnime_Update(&this->skelAnime);
    this->interactInfo.trackPos = player->actor.world.pos;
    //Zelda_UpdateFace(this);
    Npc_TrackPoint(&this->actor, &this->interactInfo, 0xC, NPC_TRACKING_HEAD_AND_TORSO);
    Actor_UpdateBgCheckInfo(play, &this->actor, 75.0f, 30.0f, 30.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);
    Npc_UpdateTalking(
        play,
        &this->actor,
        &this->interactInfo.talkState,
        50.0f,
        Zelda_GetNextTextId,
        Zelda_UpdateTalkState
    );

    Collider_UpdateCylinder(&this->actor, &this->collider);
    CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    // Hitbox = AT
    // Hurtbox = AC
    // Bumping = OC

    this->actionFunc(this, play);

}

s32 Zelda_OverrideLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3f* pos, Vec3s* rot, void* thisx) {
    Zelda* this = (Zelda*)thisx;
    Vec3s limbRot;

    if (limbIndex == 17) {
        limbRot = this->interactInfo.headRot;
        Matrix_Translate(900.0f, 0.0f, 0.0f, MTXMODE_APPLY);
        // If you change this to Matrix_RotateY, and remove the other limb indexes, it becomes creepypasta
        Matrix_RotateX(BINANG_TO_RAD_ALT(limbRot.y), MTXMODE_APPLY);
        Matrix_RotateZ(BINANG_TO_RAD_ALT(limbRot.x), MTXMODE_APPLY);
        Matrix_Translate(-900.0f, 0.0f, 0.0f, MTXMODE_APPLY);
    }
    if (limbIndex == 10) {
        limbRot = this->interactInfo.torsoRot;
        Matrix_RotateY(BINANG_TO_RAD_ALT(limbRot.y), MTXMODE_APPLY);
        Matrix_RotateX(BINANG_TO_RAD_ALT(limbRot.x), MTXMODE_APPLY);
    }
    if ((limbIndex >= 3) && (limbIndex < 7)) {
        *dList = NULL;
    }
    return false;
}

void Zelda_PostLimbDraw(PlayState* play, s32 limbIndex, Gfx** dList, Vec3s* rot, void* thisx) {
    Vec3f zeroVec = { 0.0f, 0.0f, 0.0f };
    Zelda* this = (Zelda*)thisx;

    if (limbIndex == 17) {
        Matrix_MultVec3f(&zeroVec, &this->actor.focus.pos);
    }
}

void Zelda_Draw(Actor* thisx, PlayState* play) {
    Zelda* this = (Zelda*)thisx;
    void* mouthTex[] = { gChildZeldaMouthNeutralTex, gChildZeldaMouthHappyTex, gChildZeldaMouthWorriedTex,
                         gChildZeldaMouthSurprisedTex };
    void* eyeTex[] = {
        gChildZeldaEyeOpenTex,   gChildZeldaEyeBlinkTex, gChildZeldaEyeShutTex, gChildZeldaEyeWideTex,
        gChildZeldaEyeSquintTex, gChildZeldaEyeOutTex,   gChildZeldaEyeInTex,
    };

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    gSPSegment(POLY_OPA_DISP++, 0x08, SEGMENTED_TO_VIRTUAL(eyeTex[this->rightEyeState]));
    gSPSegment(POLY_OPA_DISP++, 0x09, SEGMENTED_TO_VIRTUAL(eyeTex[this->leftEyeState]));
    gSPSegment(POLY_OPA_DISP++, 0x0A, SEGMENTED_TO_VIRTUAL(mouthTex[this->mouthState]));
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    SkelAnime_DrawFlexOpa(play, this->skelAnime.skeleton, this->skelAnime.jointTable, this->skelAnime.dListCount,
                          Zelda_OverrideLimbDraw, Zelda_PostLimbDraw, this);
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
/*

void Zelda_UpdateFace(Zelda* this) {
    if (this->blinkTimer > 0) {
        this->blinkTimer--;
    } else {
        this->blinkTimer = 0;
    }
    if (this->blinkTimer <= 2) {
        this->leftEyeState = this->rightEyeState = this->blinkTimer;
    }
    switch (this->eyeExpression) {
        case ZELDA_EYES_NEUTRAL:
            if (this->blinkTimer == 0) {
                this->blinkTimer = Rand_S16Offset(30, 30);
            }
            break;
        case ZELDA_EYES_SHUT:
            if (this->blinkTimer == 0) {
                this->leftEyeState = this->rightEyeState = ZELDA_EYE_SHUT;
            }
            break;
        case ZELDA_EYES_LOOK_LEFT:
            if (this->blinkTimer == 0) {
                this->leftEyeState = ZELDA_EYE_LOOK_OUT;
                this->rightEyeState = ZELDA_EYE_LOOK_IN;
            }
            break;
        case ZELDA_EYES_LOOK_RIGHT:
            if (this->blinkTimer == 0) {
                this->leftEyeState = ZELDA_EYE_LOOK_IN;
                this->rightEyeState = ZELDA_EYE_LOOK_OUT;
            }
            break;
        case ZELDA_EYES_WIDE:
            if (this->blinkTimer == 0) {
                this->leftEyeState = this->rightEyeState = ZELDA_EYE_WIDE;
            }
            break;
        case ZELDA_EYES_SQUINT:
            if (this->blinkTimer == 0) {
                this->leftEyeState = this->rightEyeState = ZELDA_EYE_SQUINT;
            }
            break;
        case ZELDA_EYES_OPEN:
            if (this->blinkTimer >= 3) {
                this->blinkTimer = ZELDA_EYE_OPEN;
            }
            break;
    }
    switch (this->mouthExpression) {
        case ZELDA_MOUTH_HAPPY:
            this->mouthState = 1;
            break;
        case ZELDA_MOUTH_WORRIED:
            this->mouthState = 2;
            break;
        case ZELDA_MOUTH_SURPRISED:
            this->mouthState = 3;
            break;
        default:
            this->mouthState = 0;
            break;
    }
}

*/

u16 Zelda_GetNextTextId(PlayState* play, Actor* thisx) {
    if (LINK_IS_ADULT) {
        return NPCTEST_MESSAGE_DO_YOU_LIKE_TUTORIALS;
    } else {
        if (GET_INFTABLE(INFTABLE_E0)) {
            return NPCTEST_MESSAGE_COME_BACK_WAY_LATER;
        } else {
            return NPCTEST_MESSAGE_COME_BACK_LATER;
        }
    }
}

/*
u16 Zelda_GetTextId(PlayState* play, Actor* thisx) {
    u16 maskReactionTextId = MaskReaction_GetTextId(play, MASK_REACTION_SET_ZELDA);   
    s16 textId;

    if (maskReactionTextId != 0) {
        return maskReactionTextId;
    }
    return textId;
}
*/

s16 Zelda_UpdateTalkState(PlayState* play, Actor* thisx) {
    s16 talkState = NPC_TALK_STATE_TALKING;

    switch (Message_GetState(&play->msgCtx)) {
        case TEXT_STATE_CHOICE:
            if (Message_ShouldAdvance(play)) {
                if (play->msgCtx.choiceIndex == 0) {
                    thisx->textId = NPCTEST_MESSAGE_CHOICE_LOVE_EM;
                } else {
                    thisx->textId = NPCTEST_MESSAGE_CHOICE_ABSOLUTELY;
                }

                Message_ContinueTextbox(play, thisx->textId);
            }
            break;
        case TEXT_STATE_DONE:
            if (thisx->textId == NPCTEST_MESSAGE_COME_BACK_LATER) {
             SET_INFTABLE(INFTABLE_E0);
            }
            talkState = NPC_TALK_STATE_IDLE;
            break;
    }

    return talkState;
}

void Zelda_SetupIdle(Zelda* this, PlayState* play) {
    Debug_Print(0, "zelda setup idle");
    //Flags_UnsetSwitch(play, SWITCH_FLAG(this));

    this->timer = (Rand_ZeroOne() * 10.0f) + 5.0f;
    this->actor.speed = 0.0f;
    this->actor.world.rot.y = this->actor.shape.rot.y;
    this->action = ZELDA_ACTION_IDLE;
    Zelda_SetupAction(this, Zelda_Idle);
}

void Zelda_Idle(Zelda* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    Debug_Print(1, "zelda idle");

    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 450, 250);

        if ((Flags_GetSwitch(play, SWITCH_FLAG(this))) && (Actor_WorldDistXYZToActor(&this->actor, &player->actor) >= 80.0f)) {
                Debug_Print(4, "test");
                //Zelda_Idle(this, play);
                //}
                                Zelda_SetupWalkToPlayer(this, play);

            }
            /*
            else
            {
                if (Actor_WorldDistXYZToActor(&this->actor, &player->actor) >= 80.0f) {
                Debug_Print(4, "test2");
                Zelda_SetupWalkToPlayer(this, play);
            }
        }*/
}

/*
void TreeElevator_SetupWaitForSwitch(TreeElevator* this, PlayState* play) {
    Flags_UnsetSwitch(play, SWITCH_FLAG(this));
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y;
    this->actionFunc = TreeElevator_WaitForSwitch;
}

void TreeElevator_WaitForSwitch(TreeElevator* this, PlayState* play) {
//    Debug_Print(1, "current frame: %u", play->gameplayFrames);
    if (Flags_GetSwitch(play, SWITCH_FLAG(this))) {
        TreeElevator_SetupRaise(this, play);
    }
*/

void Zelda_SetupWalkToPlayer(Zelda* this, PlayState* play) {
    Debug_Print(2, "setup walk to player");
    //Animation_Change(&this->skelAnime, ZELDA_ANIM_26, 1.0f, 0.0f, Animation_GetLastFrame(ZELDA_ANIM_26), ANIMMODE_LOOP, 4.0f);
    Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, ZELDA_ANIM_3);
    this->actor.speed = 0.8f;
    this->action = ZELDA_ACTION_WALK_TO_PLAYER;
    Zelda_SetupAction(this, Zelda_WalkToPlayer);
}

void Zelda_WalkToPlayer(Zelda* this, PlayState* play) {
    Player* player = GET_PLAYER(play);

    Debug_Print(3, "walk to player");


        if ((Flags_GetSwitch(play, SWITCH_FLAG(this))) && (Actor_WorldDistXYZToActor(&this->actor, &player->actor) >= 80.0f)) {
                Debug_Print(3, "walking");
                Math_SmoothStepToF(&this->actor.world.pos.x, player->actor.world.pos.x, 0.5f, 4.2f, 0.0f);
                Math_SmoothStepToF(&this->actor.world.pos.z, player->actor.world.pos.z, 0.5f, 4.2f, 0.0f);
                Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 900, 600);


                    //Math_SmoothStepToS(&this->actor.world.pos.x, &player->actor, 1, 200, 0);

                    //func_8008EEAC(play, &this->actor);
                   // GET_PLAYER(play)->unk_684 = &this->actor;
                   
                } else {
            //Animation_ChangeByInfo(&this->skelAnime, sAnimationInfo, ZELDA_ANIM_0);
            //Animation_Change(&this->skelAnime, &ZELDA_ANIM_0, 1.0f, 0.0f, Animation_GetLastFrame(&ZELDA_ANIM_0), ANIMMODE_LOOP, 4.0f);
            Zelda_SetupIdle(this, play);
        }
}

/*

    Vec3f preyPos;

    SkelAnime_Update(&this->skelAnime);
    if (this->timer != 0) {
        this->timer--;
    }
    Math_StepToF(&this->actor.speed, 4.0f, 0.5f);
    if (this->actor.bgCheckFlags & BGCHECKFLAG_WALL) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.wallYaw, 2, 0xC00, 0x300);
       // Math_ScaledStepToS(&this->actor.shape.rot.x, this->targetPitch, 0x100);
    } else if (Actor_IsFacingPlayer(&this->actor, 0x2800)) {
        if (Animation_OnFrame(&this->skelAnime, 4.0f)) {
            this->skelAnime.playSpeed = 0.0f;
            this->skelAnime.curFrame = 4.0f;
        }
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0xC00, 0x300);
        preyPos.x = player->actor.world.pos.x;
        preyPos.y = player->actor.world.pos.y + 20.0f;
        preyPos.z = player->actor.world.pos.z;
        Math_SmoothStepToS(&this->actor.shape.rot.x, Actor_WorldPitchTowardPoint(&this->actor, &preyPos) + 0x1554, 2,
                           0x400, 0x100);

    }
}
*/

   /* Vec3f D_80AE4918 = { 0.0f, 0.0f, 0.0f };
    Color_RGBA8 D_80AE4924 = { 200, 200, 255, 255 };
    Color_RGBA8 D_80AE4928 = { 0, 0, 255, 0 };
    Player* player = GET_PLAYER(play);
    s32 pad;
    s16 yaw = this->actor.yawTowardsPlayer - this->actor.shape.rot.y;
    s16 targetY = Actor_WorldYawTowardPoint(&this->actor, &player->actor.prevPos);
    f32 distToPlayer = Actor_WorldDistXZToActor(&this->actor, &GET_PLAYER(play)->actor);
    Vec3f preyPos;

    if (distToPlayer > 50.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 2, 0xC00, 0x300);
        preyPos.x = player->actor.world.pos.x;
        preyPos.y = player->actor.world.pos.y + 20.0f;
        preyPos.z = player->actor.world.pos.z;
        Math_SmoothStepToS(&this->actor.shape.rot.x, Actor_WorldPitchTowardPoint(&this->actor, &preyPos) + 0x1554, 2,
                           0x400, 0x100);
    }
}

//Actor_WorldDistXZToActor(&this->actor, &GET_PLAYER(play)->actor);

*/

/*
    this->skelAnime.playSpeed = this->actor.speed;
    Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.yawTowardsPlayer, 1, 0xFA, 0);
   // Math_SmoothStepToS(&this->actor.shape.rot.y, player->actor.world, 1, 10, 0);

    //Math_SmoothStepToS(&this->actor.shape.rot.y, targetY, 1, 0x1C2, 0);

     s16 targetY = Actor_WorldYawTowardPoint(&this->actor, &player->actor.pos);

    if (Actor_WorldDistXYZToPoint(&this->actor, &this->actor.home.pos) >= 5.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, targetY, 1, 0x1C2, 0);


    this->actor.world.rot.y = this->actor.shape.rot.y;
    SkelAnime_Update(&this->skelAnime);

    if (Actor_WorldDistXYZToPoint(&player->actor, &this->actor.home.pos) >= 150.0f) {
        Zelda_SetupIdle(this);
    }
    

    if (Actor_WorldDistXYZToActor(&this->actor, &player->actor) <= 150.0f) {
                    Debug_Print(4, "smooth step");
                    Math_SmoothStepToS(&this->actor.shape.rot.y, targetY, 1, 200, 0);

                    //func_8008EEAC(play, &this->actor);
                   // GET_PLAYER(play)->unk_684 = &this->actor;
                   
                } else {
            Zelda_SetupIdle(this);
        }
}
*/

/*
    if (this->grabWaitTimer != 0) {
        this->grabWaitTimer--;
    }

    if (!this->grabWaitTimer && (Actor_WorldDistXYZToActor(&this->actor, &player->actor) <= 45.0f) &&
        Actor_IsFacingPlayer(&this->actor, 0x38E3)) {
        player->actor.freezeTimer = 0;
        if (play->grabPlayer(play, player)) {
            this->actor.flags &= ~ACTOR_FLAG_0;
            Zelda_SetupGrab(this);
        }
    }

    if ((this->skelAnime.curFrame == 10.0f) || (this->skelAnime.curFrame == 22.0f)) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
    } else if ((play->gameplayFrames & 0x5F) == 0) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_REDEAD_CRY);
    }
}

void Zelda_SetupWalkToHome(Zelda* this, PlayState* play) {
    Animation_Change(&this->skelAnime, &gGibdoRedeadWalkAnim, 0.5f, 0, Animation_GetLastFrame(&gGibdoRedeadWalkAnim),
                     ANIMMODE_LOOP_INTERP, -4.0f);
    this->action = REDEAD_ACTION_WALK_TO_HOME;
    Zelda_SetupAction(this, Zelda_WalkToHome);
}

void Zelda_WalkToHome(Zelda* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    s32 pad;
    s16 targetY = Actor_WorldYawTowardPoint(&this->actor, &this->actor.home.pos);

    if (Actor_WorldDistXYZToPoint(&this->actor, &this->actor.home.pos) >= 5.0f) {
        Math_SmoothStepToS(&this->actor.shape.rot.y, targetY, 1, 0x1C2, 0);
    } else {
        this->actor.speed = 0.0f;
        if (Math_SmoothStepToS(&this->actor.shape.rot.y, this->actor.home.rot.y, 1, 0x1C2, 0) == 0) {
            if (this->actor.params != REDEAD_TYPE_CRYING) {
                Zelda_SetupIdle(this);
            } else {
                Zelda_SetupCrouch(this);
            }
        }
    }

    Math_SmoothStepToS(&this->headYRotation, 0, 1, 0x64, 0);
    Math_SmoothStepToS(&this->upperBodyYRotation, 0, 1, 0x64, 0);
    this->actor.world.rot.y = this->actor.shape.rot.y;
    SkelAnime_Update(&this->skelAnime);

    if (!(player->stateFlags1 & (PLAYER_STATE1_7 | PLAYER_STATE1_13 | PLAYER_STATE1_14 | PLAYER_STATE1_18 |
                                 PLAYER_STATE1_19 | PLAYER_STATE1_21)) &&
        !(player->stateFlags2 & PLAYER_STATE2_7) &&
        (Actor_WorldDistXYZToPoint(&player->actor, &this->actor.home.pos) < 150.0f)) {
        this->actor.targetMode = 0;
        Zelda_SetupWalkToPlayer(this, play);
    } else if (this->actor.params > REDEAD_TYPE_DOES_NOT_MOURN_IF_WALKING) {
        if (this->actor.parent != NULL) {
            Zelda_SetupWalkToParent(this);
        } else {
            this->isMourning = false;
        }
    }

    if (this->skelAnime.curFrame == 10.0f || this->skelAnime.curFrame == 22.0f) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_RIZA_WALK);
    } else if ((play->gameplayFrames & 0x5F) == 0) {
        Actor_PlaySfx(&this->actor, NA_SE_EN_REDEAD_CRY);
    }
}
*/

