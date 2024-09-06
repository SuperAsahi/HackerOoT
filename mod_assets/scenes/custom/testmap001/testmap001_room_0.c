#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "testmap001_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

/**
 * Header Child Day (Default)
*/
#define LENGTH_TESTMAP001_ROOM_0_HEADER00_OBJECTLIST 5
#define LENGTH_TESTMAP001_ROOM_0_HEADER00_ACTORLIST 5
SceneCmd testmap001_room_0_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(7, 0, 10),
    SCENE_CMD_ROOM_SHAPE(&testmap001_room_0_shapeHeader),
    SCENE_CMD_OBJECT_LIST(LENGTH_TESTMAP001_ROOM_0_HEADER00_OBJECTLIST, testmap001_room_0_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_TESTMAP001_ROOM_0_HEADER00_ACTORLIST, testmap001_room_0_header00_actorList),
    SCENE_CMD_END(),
};

s16 testmap001_room_0_header00_objectList[LENGTH_TESTMAP001_ROOM_0_HEADER00_OBJECTLIST] = {
    OBJECT_RD,
    OBJECT_TREE_ELEVATOR,
    OBJECT_ZL1,
    OBJECT_IM,
    OBJECT_ZL4,
};

ActorEntry testmap001_room_0_header00_actorList[LENGTH_TESTMAP001_ROOM_0_HEADER00_ACTORLIST] = {
    // Custom Actor
    {
        /* Actor ID   */ ACTOR_TREE_ELEVATOR,
        /* Position   */ { -149, -110, 165 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0008
    },

    // Dungeon Switches
    {
        /* Actor ID   */ ACTOR_OBJ_SWITCH,
        /* Position   */ { -475, -120, 185 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0803
    },

    // Princess Zelda Child
    {
        /* Actor ID   */ ACTOR_EN_ZL1,
        /* Position   */ { -133, -120, 366 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Custom Actor
    {
        /* Actor ID   */ ACTOR_ZELDA,
        /* Position   */ { -422, -120, -32 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(180.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Custom Actor
    {
        /* Actor ID   */ ACTOR_NPC_TEST,
        /* Position   */ { -225, -120, -59 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(180.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

RoomShapeNormal testmap001_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(testmap001_room_0_shapeDListEntry),
    testmap001_room_0_shapeDListEntry,
    testmap001_room_0_shapeDListEntry + ARRAY_COUNT(testmap001_room_0_shapeDListEntry)
};

RoomShapeDListsEntry testmap001_room_0_shapeDListEntry[1] = {
    { testmap001_room_0_entry_0_opaque, NULL },
};

Gfx testmap001_room_0_entry_0_opaque[] = {
	gsSPDisplayList(testmap001_dl_Cube_mesh_layer_Opaque),
	gsSPDisplayList(testmap001_dl_Floor_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx testmap001_dl_Cube_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {45, -120, 184}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {45, -75, 184}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {45, -75, 139}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {45, -120, 139}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {90, -120, 184}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {90, -75, 184}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {90, -75, 139}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {90, -120, 139}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx testmap001_dl_Cube_mesh_layer_Opaque_vtx_0[24] = {
	{{ {45, -120, 184}, 0, {368, 1008}, {129, 0, 0, 255} }},
	{{ {45, -75, 184}, 0, {624, 1008}, {129, 0, 0, 255} }},
	{{ {45, -75, 139}, 0, {624, 752}, {129, 0, 0, 255} }},
	{{ {45, -120, 139}, 0, {368, 752}, {129, 0, 0, 255} }},
	{{ {45, -120, 139}, 0, {368, 752}, {0, 0, 129, 255} }},
	{{ {45, -75, 139}, 0, {624, 752}, {0, 0, 129, 255} }},
	{{ {90, -75, 139}, 0, {624, 496}, {0, 0, 129, 255} }},
	{{ {90, -120, 139}, 0, {368, 496}, {0, 0, 129, 255} }},
	{{ {90, -120, 139}, 0, {368, 496}, {127, 0, 0, 255} }},
	{{ {90, -75, 139}, 0, {624, 496}, {127, 0, 0, 255} }},
	{{ {90, -75, 184}, 0, {624, 240}, {127, 0, 0, 255} }},
	{{ {90, -120, 184}, 0, {368, 240}, {127, 0, 0, 255} }},
	{{ {90, -120, 184}, 0, {368, 240}, {0, 0, 127, 255} }},
	{{ {90, -75, 184}, 0, {624, 240}, {0, 0, 127, 255} }},
	{{ {45, -75, 184}, 0, {624, -16}, {0, 0, 127, 255} }},
	{{ {45, -120, 184}, 0, {368, -16}, {0, 0, 127, 255} }},
	{{ {45, -120, 139}, 0, {112, 496}, {0, 129, 0, 255} }},
	{{ {90, -120, 139}, 0, {368, 496}, {0, 129, 0, 255} }},
	{{ {90, -120, 184}, 0, {368, 240}, {0, 129, 0, 255} }},
	{{ {45, -120, 184}, 0, {112, 240}, {0, 129, 0, 255} }},
	{{ {90, -75, 139}, 0, {624, 496}, {0, 127, 0, 255} }},
	{{ {45, -75, 139}, 0, {880, 496}, {0, 127, 0, 255} }},
	{{ {45, -75, 184}, 0, {880, 240}, {0, 127, 0, 255} }},
	{{ {90, -75, 184}, 0, {624, 240}, {0, 127, 0, 255} }},
};

Gfx testmap001_dl_Cube_mesh_layer_Opaque_tri_0_cel0[] = {
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSPEndDisplayList(),
};

Gfx testmap001_dl_Cube_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(testmap001_dl_Cube_mesh_layer_Opaque_vtx_0 + 0, 24, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 1, SHADE, ENVIRONMENT, 0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsDPSetPrimColor(0, 0, 0, 0, 0, 50),
	gsDPSetBlendColor(255, 255, 255, 128),
	gsSPAlphaCompareCull(G_ALPHA_COMPARE_CULL_ABOVE, 128),
	gsSPDisplayList(testmap001_dl_Cube_mesh_layer_Opaque_tri_0_cel0),
	gsSPAlphaCompareCull(G_ALPHA_COMPARE_CULL_DISABLE, 0),
	gsSPEndDisplayList(),
};

Vtx testmap001_dl_Floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-824, -120, 1335}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-824, -120, 1335}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-824, -120, -460}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-824, -120, -460}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {460, -120, 1335}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {460, -120, 1335}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {460, -120, -460}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {460, -120, -460}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx testmap001_dl_Floor_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-824, -120, 1335}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {460, -120, 1335}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {460, -120, -460}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-824, -120, -460}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx testmap001_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(testmap001_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_testmap001_dl_f3dlite_material_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 1, SHADE, ENVIRONMENT, 0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 13, 0, 255, 255),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsSPEndDisplayList(),
};

Gfx testmap001_dl_Cube_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(testmap001_dl_Cube_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_testmap001_dl_f3dlite_material_layerOpaque),
	gsSPDisplayList(testmap001_dl_Cube_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx testmap001_dl_Floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(testmap001_dl_Floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_testmap001_dl_floor_mat_layerOpaque),
	gsSPDisplayList(testmap001_dl_Floor_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

