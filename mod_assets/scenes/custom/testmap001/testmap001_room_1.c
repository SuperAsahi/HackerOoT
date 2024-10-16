#include "testmap001_scene.h"


/**
 * Header Child Day (Default)
*/
#define LENGTH_TESTMAP001_ROOM_1_HEADER00_OBJECTLIST 2
#define LENGTH_TESTMAP001_ROOM_1_HEADER00_ACTORLIST 1
SceneCmd testmap001_room_1_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&testmap001_room_1_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_OBJECT_LIST(LENGTH_TESTMAP001_ROOM_1_HEADER00_OBJECTLIST, testmap001_room_1_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_TESTMAP001_ROOM_1_HEADER00_ACTORLIST, testmap001_room_1_header00_actorList),
    SCENE_CMD_END(),
};

s16 testmap001_room_1_header00_objectList[LENGTH_TESTMAP001_ROOM_1_HEADER00_OBJECTLIST] = {
    OBJECT_RD,
    OBJECT_ZL4,
};

ActorEntry testmap001_room_1_header00_actorList[LENGTH_TESTMAP001_ROOM_1_HEADER00_ACTORLIST] = {
    // Redead/Gibdo
    {
        /* Actor ID   */ ACTOR_EN_RD,
        /* Position   */ { 1372, -120, -69 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

RoomShapeNormal testmap001_room_1_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(testmap001_room_1_shapeDListsEntry),
    testmap001_room_1_shapeDListsEntry,
    testmap001_room_1_shapeDListsEntry + ARRAY_COUNT(testmap001_room_1_shapeDListsEntry)
};

RoomShapeDListsEntry testmap001_room_1_shapeDListsEntry[1] = {
    { testmap001_room_1_shapeHeader_entry_0_opaque, NULL }
};

Gfx testmap001_room_1_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(testmap001_room_1_dl_Floor_001_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx testmap001_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {549, -120, 799}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {549, -120, 799}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {549, -120, -799}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {549, -120, -799}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2146, -120, 799}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2146, -120, 799}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2146, -120, -799}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2146, -120, -799}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx testmap001_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_0[4] = {
	{{ {549, -120, 799}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {2146, -120, 799}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {2146, -120, -799}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {549, -120, -799}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx testmap001_room_1_dl_Floor_001_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(testmap001_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx testmap001_room_1_dl_Floor_001_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(testmap001_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_testmap001_room_0_dl_floor_mat_layerOpaque),
	gsSPDisplayList(testmap001_room_1_dl_Floor_001_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

