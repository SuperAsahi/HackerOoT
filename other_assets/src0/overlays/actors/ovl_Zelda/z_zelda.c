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

void Zelda_Init(Actor* thisx, PlayState* play);
void Zelda_Destroy(Actor* thisx, PlayState* play);
void Zelda_Update(Actor* thisx, PlayState* play);
void Zelda_Draw(Actor* thisx, PlayState* play);

void Zelda_Idle(Zelda* this, PlayState* play);

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

void Zelda_Init(Actor* thisx, PlayState* play) {
    Zelda* this = (Zelda*)thisx;

    SkelAnime_InitFlex(play, &this->skelAnime, &gChildZeldaSkel, NULL, this->jointTable, this->morphTable, 18);
    ActorShape_Init(&this->actor.shape, 0.0f, ActorShadow_DrawCircle, 18.0f);
    Animation_Change(&this->skelAnime, &gChildZeldaAnim_000654, 1.0f, 0.0f, Animation_GetLastFrame(&gChildZeldaAnim_000654), ANIMMODE_LOOP, 0.0f);
    
    Actor_UpdateBgCheckInfo(play, &this->actor, 75.0f, 30.0f, 30.0f, UPDBGCHECKINFO_FLAG_0 | UPDBGCHECKINFO_FLAG_2);
    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->actor, &sCylinderInit);


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
    Npc_TrackPoint(&this->actor, &this->interactInfo, 0xC, NPC_TRACKING_HEAD_AND_TORSO);
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