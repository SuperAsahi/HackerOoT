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
SceneCmd testmap001_room_2_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(0xFF, 0xFF, 10),
    SCENE_CMD_ROOM_SHAPE(&testmap001_room_2_shapeHeader),
    SCENE_CMD_END(),
};

RoomShapeNormal testmap001_room_2_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(testmap001_room_2_shapeDListEntry),
    testmap001_room_2_shapeDListEntry,
    testmap001_room_2_shapeDListEntry + ARRAY_COUNT(testmap001_room_2_shapeDListEntry)
};

RoomShapeDListsEntry testmap001_room_2_shapeDListEntry[1] = {
    { testmap001_room_2_entry_0_opaque, NULL },
};

Gfx testmap001_room_2_entry_0_opaque[] = {
	gsSPDisplayList(testmap001_dl_Floor_002_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx testmap001_dl_Floor_002_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1504, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1504, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1504, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1504, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-904, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-904, -120, 300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-904, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-904, -120, -300}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx testmap001_dl_Floor_002_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-1504, -120, 300}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {-904, -120, 300}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {-904, -120, -300}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-1504, -120, -300}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx testmap001_dl_Floor_002_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(testmap001_dl_Floor_002_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx testmap001_dl_Floor_002_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(testmap001_dl_Floor_002_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_testmap001_dl_floor_mat_layerOpaque),
	gsSPDisplayList(testmap001_dl_Floor_002_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

