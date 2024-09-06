#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "festival_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

/**
 * Header Child Day (Default)
*/
#define LENGTH_FESTIVAL_ROOM_0_HEADER00_OBJECTLIST 1
#define LENGTH_FESTIVAL_ROOM_0_HEADER00_ACTORLIST 5
SceneCmd festival_room_0_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(0xFF, 0xFF, 10),
    SCENE_CMD_ROOM_SHAPE(&festival_room_0_shapeHeader),
    SCENE_CMD_OBJECT_LIST(LENGTH_FESTIVAL_ROOM_0_HEADER00_OBJECTLIST, festival_room_0_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_FESTIVAL_ROOM_0_HEADER00_ACTORLIST, festival_room_0_header00_actorList),
    SCENE_CMD_END(),
};

s16 festival_room_0_header00_objectList[LENGTH_FESTIVAL_ROOM_0_HEADER00_OBJECTLIST] = {
    OBJECT_BOX,
};

ActorEntry festival_room_0_header00_actorList[LENGTH_FESTIVAL_ROOM_0_HEADER00_ACTORLIST] = {
    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { 350, -120, 483 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x5A41
    },

    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { -282, -120, 27 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x5A64
    },

    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { 239, -120, 76 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x5360
    },

    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { 1, -120, 683 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x5342
    },

    // Treasure Chest
    {
        /* Actor ID   */ ACTOR_EN_BOX,
        /* Position   */ { -303, -120, 438 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x5A23
    },
};

RoomShapeNormal festival_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(festival_room_0_shapeDListEntry),
    festival_room_0_shapeDListEntry,
    festival_room_0_shapeDListEntry + ARRAY_COUNT(festival_room_0_shapeDListEntry)
};

RoomShapeDListsEntry festival_room_0_shapeDListEntry[1] = {
    { festival_room_0_entry_0_opaque, NULL },
};

Gfx festival_room_0_entry_0_opaque[] = {
	gsSPDisplayList(festival_dl_Floor_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx festival_dl_Floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-450, -120, 795}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-450, -120, 795}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-450, -120, -105}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-450, -120, -105}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {450, -120, 795}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {450, -120, 795}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {450, -120, -105}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {450, -120, -105}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx festival_dl_Floor_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-450, -120, 795}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {450, -120, 795}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {450, -120, -105}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-450, -120, -105}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx festival_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(festival_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_festival_dl_floor_mat_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsSPEndDisplayList(),
};

Gfx festival_dl_Floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(festival_dl_Floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_festival_dl_floor_mat_layerOpaque),
	gsSPDisplayList(festival_dl_Floor_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

