#include "forest_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd forest_room_1_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&forest_room_1_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_END(),
};

RoomShapeNormal forest_room_1_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(forest_room_1_shapeDListsEntry),
    forest_room_1_shapeDListsEntry,
    forest_room_1_shapeDListsEntry + ARRAY_COUNT(forest_room_1_shapeDListsEntry)
};

RoomShapeDListsEntry forest_room_1_shapeDListsEntry[1] = {
    { forest_room_1_shapeHeader_entry_0_opaque, forest_room_1_shapeHeader_entry_0_transparent }
};

Gfx forest_room_1_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(forest_room_1_dl_shack_001_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Gfx forest_room_1_shapeHeader_entry_0_transparent[] = {
	gsSPDisplayList(forest_room_1_dl_Plane_mesh_layer_Transparent),
	gsSPEndDisplayList(),
};

Vtx forest_room_1_dl_Plane_mesh_layer_Transparent_vtx_cull[8] = {
	{{ {1264, -117, 642}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1264, -117, 642}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1264, -117, 561}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1264, -117, 561}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1345, -117, 642}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1345, -117, 642}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1345, -117, 561}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1345, -117, 561}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx forest_room_1_dl_Plane_mesh_layer_Transparent_vtx_0[4] = {
	{{ {1264, -117, 642}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {1345, -117, 642}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {1345, -117, 561}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {1264, -117, 561}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx forest_room_1_dl_Plane_mesh_layer_Transparent_tri_0[] = {
	gsSPVertex(forest_room_1_dl_Plane_mesh_layer_Transparent_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx forest_room_1_dl_shack_001_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {950, -120, 665}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {950, 78, 665}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {950, 78, 134}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {950, -120, 134}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1391, -120, 665}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1391, 78, 665}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1391, 78, 134}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1391, -120, 134}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx forest_room_1_dl_shack_001_mesh_layer_Opaque_vtx_0[44] = {
	{{ {1391, -120, 134}, 0, {3528, -2154}, {0, 127, 0, 255} }},
	{{ {970, -120, 134}, 0, {-2857, -2154}, {0, 127, 0, 255} }},
	{{ {970, -120, 219}, 0, {-2857, -1305}, {0, 127, 0, 255} }},
	{{ {970, -120, 279}, 0, {-2857, -706}, {0, 127, 0, 255} }},
	{{ {950, -120, 219}, 0, {-3161, -1305}, {0, 127, 0, 255} }},
	{{ {950, -120, 279}, 0, {-3161, -706}, {0, 127, 0, 255} }},
	{{ {1391, -120, 665}, 0, {3528, 3146}, {0, 127, 0, 255} }},
	{{ {970, -120, 665}, 0, {-2857, 3146}, {0, 127, 0, 255} }},
	{{ {970, 78, 134}, 0, {-2857, -2154}, {0, 129, 0, 255} }},
	{{ {1391, 78, 134}, 0, {3528, -2154}, {0, 129, 0, 255} }},
	{{ {1391, 78, 665}, 0, {3528, 3146}, {0, 129, 0, 255} }},
	{{ {970, 78, 665}, 0, {-2857, 3146}, {0, 129, 0, 255} }},
	{{ {1391, -120, 134}, 0, {3146, 1911}, {129, 0, 0, 255} }},
	{{ {1391, -120, 665}, 0, {-2154, 1911}, {129, 0, 0, 255} }},
	{{ {1391, 78, 665}, 0, {-2154, -919}, {129, 0, 0, 255} }},
	{{ {1391, 78, 134}, 0, {3146, -919}, {129, 0, 0, 255} }},
	{{ {970, 78, 665}, 0, {-2154, -919}, {127, 0, 0, 255} }},
	{{ {970, -120, 665}, 0, {-2154, 1911}, {127, 0, 0, 255} }},
	{{ {970, -120, 279}, 0, {1698, 1911}, {127, 0, 0, 255} }},
	{{ {970, -20, 279}, 0, {1698, 479}, {127, 0, 0, 255} }},
	{{ {970, -20, 219}, 0, {2297, 479}, {127, 0, 0, 255} }},
	{{ {970, 78, 134}, 0, {3146, -919}, {127, 0, 0, 255} }},
	{{ {970, -120, 219}, 0, {2297, 1911}, {127, 0, 0, 255} }},
	{{ {970, -120, 134}, 0, {3146, 1911}, {127, 0, 0, 255} }},
	{{ {1391, -120, 665}, 0, {3528, 1911}, {0, 0, 129, 255} }},
	{{ {970, -120, 665}, 0, {-2857, 1911}, {0, 0, 129, 255} }},
	{{ {970, 78, 665}, 0, {-2857, -919}, {0, 0, 129, 255} }},
	{{ {1391, 78, 665}, 0, {3528, -919}, {0, 0, 129, 255} }},
	{{ {970, -120, 134}, 0, {-2857, 1911}, {0, 0, 127, 255} }},
	{{ {1391, -120, 134}, 0, {3528, 1911}, {0, 0, 127, 255} }},
	{{ {1391, 78, 134}, 0, {3528, -919}, {0, 0, 127, 255} }},
	{{ {970, 78, 134}, 0, {-2857, -919}, {0, 0, 127, 255} }},
	{{ {970, -20, 279}, 0, {1698, 479}, {0, 0, 129, 255} }},
	{{ {970, -120, 279}, 0, {1698, 1911}, {0, 0, 129, 255} }},
	{{ {950, -120, 279}, 0, {1698, 1911}, {0, 0, 129, 255} }},
	{{ {950, -20, 279}, 0, {1698, 479}, {0, 0, 129, 255} }},
	{{ {970, -120, 219}, 0, {2297, 1911}, {0, 0, 127, 255} }},
	{{ {970, -20, 219}, 0, {2297, 479}, {0, 0, 127, 255} }},
	{{ {950, -20, 219}, 0, {2297, 479}, {0, 0, 127, 255} }},
	{{ {950, -120, 219}, 0, {2297, 1911}, {0, 0, 127, 255} }},
	{{ {970, -20, 219}, 0, {2297, 479}, {0, 129, 0, 255} }},
	{{ {970, -20, 279}, 0, {1698, 479}, {0, 129, 0, 255} }},
	{{ {950, -20, 279}, 0, {1698, 479}, {0, 129, 0, 255} }},
	{{ {950, -20, 219}, 0, {2297, 479}, {0, 129, 0, 255} }},
};

Gfx forest_room_1_dl_shack_001_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(forest_room_1_dl_shack_001_mesh_layer_Opaque_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 6, 0, 0, 3, 7, 6, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(16, 19, 20, 0, 20, 21, 16, 0),
	gsSP2Triangles(20, 22, 21, 0, 22, 23, 21, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(forest_room_1_dl_shack_001_mesh_layer_Opaque_vtx_0 + 32, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSPEndDisplayList(),
};

Gfx mat_forest_room_1_dl_trans_01_layerTransparent[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 251, 0, 255, 43),
	gsSPEndDisplayList(),
};

Gfx forest_room_1_dl_Plane_mesh_layer_Transparent[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(forest_room_1_dl_Plane_mesh_layer_Transparent_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_forest_room_1_dl_trans_01_layerTransparent),
	gsSPDisplayList(forest_room_1_dl_Plane_mesh_layer_Transparent_tri_0),
	gsSPEndDisplayList(),
};

Gfx forest_room_1_dl_shack_001_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(forest_room_1_dl_shack_001_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_forest_room_0_dl_wood_layerOpaque),
	gsSPDisplayList(forest_room_1_dl_shack_001_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

