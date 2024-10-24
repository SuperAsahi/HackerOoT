#include "games_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd games_room_1_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&games_room_1_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_END(),
};

RoomShapeNormal games_room_1_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(games_room_1_shapeDListsEntry),
    games_room_1_shapeDListsEntry,
    games_room_1_shapeDListsEntry + ARRAY_COUNT(games_room_1_shapeDListsEntry)
};

RoomShapeDListsEntry games_room_1_shapeDListsEntry[1] = {
    { games_room_1_shapeHeader_entry_0_opaque, games_room_1_shapeHeader_entry_0_transparent }
};

Gfx games_room_1_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(games_room_1_dl_floor_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Gfx games_room_1_shapeHeader_entry_0_transparent[] = {
	gsSPDisplayList(games_room_1_dl_Plane_001_mesh_layer_Transparent),
	gsSPEndDisplayList(),
};

Vtx games_room_1_dl_floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-354, -120, 354}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-354, -120, 354}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-354, -120, -354}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-354, -120, -354}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {354, -120, 354}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {354, -120, 354}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {354, -120, -354}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {354, -120, -354}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx games_room_1_dl_floor_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-354, -120, 354}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {354, -120, 354}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {354, -120, -354}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-354, -120, -354}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx games_room_1_dl_floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(games_room_1_dl_floor_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx games_room_1_dl_Plane_001_mesh_layer_Transparent_vtx_cull[8] = {
	{{ {135, -114, -237}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {135, -114, -237}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {135, -114, -385}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {135, -114, -385}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {283, -114, -237}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {283, -114, -237}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {283, -114, -385}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {283, -114, -385}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx games_room_1_dl_Plane_001_mesh_layer_Transparent_vtx_0[4] = {
	{{ {135, -114, -237}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {283, -114, -237}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {283, -114, -385}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {135, -114, -385}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx games_room_1_dl_Plane_001_mesh_layer_Transparent_tri_0[] = {
	gsSPVertex(games_room_1_dl_Plane_001_mesh_layer_Transparent_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_games_room_1_dl_trans_002_layerTransparent[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 0, 238, 105),
	gsSPEndDisplayList(),
};

Gfx games_room_1_dl_floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(games_room_1_dl_floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_games_room_1_dl_f3dlite_material_layerOpaque),
	gsSPDisplayList(games_room_1_dl_floor_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx games_room_1_dl_Plane_001_mesh_layer_Transparent[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(games_room_1_dl_Plane_001_mesh_layer_Transparent_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_games_room_1_dl_trans_002_layerTransparent),
	gsSPDisplayList(games_room_1_dl_Plane_001_mesh_layer_Transparent_tri_0),
	gsSPEndDisplayList(),
};

