#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "hallway_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

/**
 * Header Child Day (Default)
*/
SceneCmd hallway_room_0_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, true),
    SCENE_CMD_TIME_SETTINGS(22, 0, 0),
    SCENE_CMD_ROOM_SHAPE(&hallway_room_0_shapeHeader),
    SCENE_CMD_END(),
};

RoomShapeNormal hallway_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(hallway_room_0_shapeDListEntry),
    hallway_room_0_shapeDListEntry,
    hallway_room_0_shapeDListEntry + ARRAY_COUNT(hallway_room_0_shapeDListEntry)
};

RoomShapeDListsEntry hallway_room_0_shapeDListEntry[1] = {
    { hallway_room_0_entry_0_opaque, NULL },
};

Gfx hallway_room_0_entry_0_opaque[] = {
	gsSPDisplayList(hallway_dl_Floor_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx hallway_dl_Floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-968, -120, 6670}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-968, -120, 6670}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-968, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-968, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -120, 6670}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -120, 6670}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {300, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx hallway_dl_Floor_mesh_layer_Opaque_vtx_0[8] = {
	{{ {-300, -120, 5951}, 0, {-16, 840}, {0, 127, 0, 255} }},
	{{ {-300, -120, 6670}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {300, -120, 6670}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {-300, -120, 5351}, 0, {-16, 718}, {0, 127, 0, 255} }},
	{{ {-300, -120, -300}, 0, {-16, -16}, {0, 127, 0, 255} }},
	{{ {300, -120, -300}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-968, -120, 5351}, 0, {-1156, 641}, {0, 127, 0, 255} }},
	{{ {-968, -120, 5951}, 0, {-1156, 765}, {0, 127, 0, 255} }},
};

Gfx hallway_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(hallway_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSP2Triangles(0, 3, 6, 0, 0, 6, 7, 0),
	gsSPEndDisplayList(),
};

Gfx mat_hallway_dl_floor_mat_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsSPEndDisplayList(),
};

Gfx hallway_dl_Floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(hallway_dl_Floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_hallway_dl_floor_mat_layerOpaque),
	gsSPDisplayList(hallway_dl_Floor_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

