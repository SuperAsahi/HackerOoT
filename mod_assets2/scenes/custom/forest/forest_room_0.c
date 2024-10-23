#include "forest_scene.h"


/**
 * Header Child Day (Default)
*/
#define LENGTH_FOREST_ROOM_0_HEADER00_OBJECTLIST 3
#define LENGTH_FOREST_ROOM_0_HEADER00_ACTORLIST 12
SceneCmd forest_room_0_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&forest_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(22, 0, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_FOREST_ROOM_0_HEADER00_OBJECTLIST, forest_room_0_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_FOREST_ROOM_0_HEADER00_ACTORLIST, forest_room_0_header00_actorList),
    SCENE_CMD_END(),
};

s16 forest_room_0_header00_objectList[LENGTH_FOREST_ROOM_0_HEADER00_OBJECTLIST] = {
    OBJECT_WOOD02,
    OBJECT_SYOKUDAI,
    OBJECT_RD,
};

ActorEntry forest_room_0_header00_actorList[LENGTH_FOREST_ROOM_0_HEADER00_ACTORLIST] = {
    // Redead/Gibdo
    {
        /* Actor ID   */ ACTOR_EN_RD,
        /* Position   */ { 869, -120, 1404 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(202.841), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Torch
    {
        /* Actor ID   */ ACTOR_OBJ_SYOKUDAI,
        /* Position   */ { 244, -118, 230 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x2000
    },

    // Torch
    {
        /* Actor ID   */ ACTOR_OBJ_SYOKUDAI,
        /* Position   */ { 370, -120, 547 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x1000
    },

    // Torch
    {
        /* Actor ID   */ ACTOR_OBJ_SYOKUDAI,
        /* Position   */ { -502, -120, 484 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x1000
    },

    // Torch
    {
        /* Actor ID   */ ACTOR_OBJ_SYOKUDAI,
        /* Position   */ { -102, -120, 838 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x1000
    },

    // Torch
    {
        /* Actor ID   */ ACTOR_OBJ_SYOKUDAI,
        /* Position   */ { 365, -120, 357 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Torch
    {
        /* Actor ID   */ ACTOR_OBJ_SYOKUDAI,
        /* Position   */ { -242, -120, 183 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x2400
    },

    // Greenery
    {
        /* Actor ID   */ ACTOR_EN_WOOD02,
        /* Position   */ { -829, -120, 1436 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Greenery
    {
        /* Actor ID   */ ACTOR_EN_WOOD02,
        /* Position   */ { 851, -120, 2037 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Greenery
    {
        /* Actor ID   */ ACTOR_EN_WOOD02,
        /* Position   */ { -729, -120, 2646 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Greenery
    {
        /* Actor ID   */ ACTOR_EN_WOOD02,
        /* Position   */ { -876, -120, 568 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0003
    },

    // Greenery
    {
        /* Actor ID   */ ACTOR_EN_WOOD02,
        /* Position   */ { 751, -120, 1096 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0003
    },
};

RoomShapeNormal forest_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(forest_room_0_shapeDListsEntry),
    forest_room_0_shapeDListsEntry,
    forest_room_0_shapeDListsEntry + ARRAY_COUNT(forest_room_0_shapeDListsEntry)
};

RoomShapeDListsEntry forest_room_0_shapeDListsEntry[1] = {
    { forest_room_0_shapeHeader_entry_0_opaque, forest_room_0_shapeHeader_entry_0_transparent }
};

Gfx forest_room_0_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(forest_room_0_dl_Floor_mesh_layer_Opaque),
	gsSPDisplayList(forest_room_0_dl_shack_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Gfx forest_room_0_shapeHeader_entry_0_transparent[] = {
	gsSPDisplayList(forest_room_0_dl_Plane_001_mesh_layer_Transparent),
	gsSPEndDisplayList(),
};

u64 forest_room_0_dl_spot16_sceneTex_00CD98_rgba16_ci8[] = {
	0x0001020003040506, 0x07000800090a0a08, 0x0b0c0d0e0f10080a, 0x1112131415000616, 0x0614171418161819, 0x1a121b1c0a1d050a, 0x1e1f20091c1d1818, 0x0b2108220b230524, 
	0x2516262728290a2a, 0x2b2625100f2c0a05, 0x05052d2e082f3030, 0x28312c2f282e0a32, 0x282e0916332f0600, 0x342f0006341e2e35, 0x2b1d361810162d37, 0x1c0817382f341639, 
	0x3a3b35351a2e2618, 0x0a3c102b0f34242f, 0x343d3a2a283e3f18, 0x4018101c34300817, 0x410c424324083828, 0x444546280900000a, 0x2305052830084724, 0x231a4608483e132f, 
	0x494a4b4c233e4d2d, 0x2d0c4e4f1b390f18, 0x1b0350121b050551, 0x0c1616181605101d, 0x521453345455430e, 0x081a431816565618, 0x2a0e065424572c0f, 0x250a0a060b25280e, 
	
};

u64 forest_room_0_dl_spot16_sceneTex_00CD98_rgba16_pal_rgba16[] = {
	0x430d5c133a0b5411, 0x3ad121473a8b548f, 0x3acd434d29c93209, 0x294731cb3a4b18c5, 0x20c74c0f4bd15413, 0x53d142cf18854b8d, 0x210721453a8d430f, 0x210518454bcf5c93, 
	0x4c115cd34bcd29c7, 0x328b298918c72987, 0x324b32cb320b2149, 0x2949218731c93b0d, 0x3acb2a4931894c53, 0x4b8f42cd5453218b, 0x434b4b4d5c532909, 0x190553932a0b324d, 
	0x21093b4f32493b4d, 0x3b0f4b514b0f3b4b, 0x298b3b11549329cb, 0x2a0921c9428d4311, 0x534f31874b935c51, 0x438f5cd11887540f, 
};

Vtx forest_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1589, -120, 3017}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1589, -120, 3017}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1589, -120, -161}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1589, -120, -161}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1589, -120, 3017}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1589, -120, 3017}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1589, -120, -161}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1589, -120, -161}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx forest_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[10] = {
	{{ {-1589, -120, -161}, 0, {-1901, -1901}, {0, 127, 0, 255} }},
	{{ {-1589, -120, 3017}, 0, {-1901, 2381}, {0, 127, 0, 255} }},
	{{ {1589, -120, 3017}, 0, {2381, 2381}, {0, 127, 0, 255} }},
	{{ {952, -120, 690}, 0, {1523, -755}, {0, 127, 0, 255} }},
	{{ {1401, -120, 693}, 0, {2129, -751}, {0, 127, 0, 255} }},
	{{ {1589, -120, -161}, 0, {2381, -1901}, {0, 127, 0, 255} }},
	{{ {945, -120, 123}, 0, {1513, -1519}, {0, 127, 0, 255} }},
	{{ {945, -120, 123}, 0, {1513, -1519}, {0, 127, 0, 255} }},
	{{ {1399, -120, 127}, 0, {2126, -1514}, {0, 127, 0, 255} }},
	{{ {1401, -120, 693}, 0, {2129, -751}, {0, 127, 0, 255} }},
};

Gfx forest_room_0_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(forest_room_0_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
	gsSP2Triangles(3, 6, 0, 0, 5, 0, 7, 0),
	gsSP2Triangles(7, 8, 5, 0, 8, 9, 5, 0),
	gsSPEndDisplayList(),
};

Vtx forest_room_0_dl_Plane_001_mesh_layer_Transparent_vtx_cull[8] = {
	{{ {-1393, -119, 279}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1393, -119, 279}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1393, -119, 198}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1393, -119, 198}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1311, -119, 279}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1311, -119, 279}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1311, -119, 198}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1311, -119, 198}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx forest_room_0_dl_Plane_001_mesh_layer_Transparent_vtx_0[4] = {
	{{ {-1393, -119, 279}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {-1311, -119, 279}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {-1311, -119, 198}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-1393, -119, 198}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx forest_room_0_dl_Plane_001_mesh_layer_Transparent_tri_0[] = {
	gsSPVertex(forest_room_0_dl_Plane_001_mesh_layer_Transparent_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx forest_room_0_dl_shack_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {903, -162, 745}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {903, 159, 745}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {903, 159, 68}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {903, -162, 68}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1439, -162, 745}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1439, 159, 745}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1439, 159, 68}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1439, -162, 68}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx forest_room_0_dl_shack_mesh_layer_Opaque_vtx_0[54] = {
	{{ {1439, 66, 745}, 0, {-2180, 677}, {127, 0, 0, 255} }},
	{{ {1439, 66, 68}, 0, {2859, 677}, {127, 0, 0, 255} }},
	{{ {1439, 159, 255}, 0, {1462, -322}, {127, 0, 0, 255} }},
	{{ {903, 66, 68}, 0, {2644, 283}, {129, 0, 0, 255} }},
	{{ {903, 66, 745}, 0, {-2331, 1086}, {129, 0, 0, 255} }},
	{{ {903, 159, 255}, 0, {1106, -481}, {129, 0, 0, 255} }},
	{{ {930, -20, 279}, 0, {932, 1476}, {129, 0, 0, 255} }},
	{{ {930, -162, 704}, 0, {-2230, 2999}, {129, 0, 0, 255} }},
	{{ {930, 66, 704}, 0, {-2230, 566}, {129, 0, 0, 255} }},
	{{ {930, -20, 219}, 0, {1378, 1476}, {129, 0, 0, 255} }},
	{{ {930, 66, 109}, 0, {2203, 566}, {129, 0, 0, 255} }},
	{{ {930, -162, 109}, 0, {2203, 2999}, {129, 0, 0, 255} }},
	{{ {930, -162, 109}, 0, {-1230, 2999}, {0, 0, 129, 255} }},
	{{ {930, 66, 109}, 0, {-1230, 566}, {0, 0, 129, 255} }},
	{{ {1412, 66, 109}, 0, {4221, 566}, {0, 0, 129, 255} }},
	{{ {1412, -162, 109}, 0, {4221, 2999}, {0, 0, 129, 255} }},
	{{ {1412, -162, 109}, 0, {2203, 2999}, {127, 0, 0, 255} }},
	{{ {1412, 66, 109}, 0, {2203, 566}, {127, 0, 0, 255} }},
	{{ {1412, 66, 704}, 0, {-2230, 566}, {127, 0, 0, 255} }},
	{{ {1412, -162, 704}, 0, {-2230, 2999}, {127, 0, 0, 255} }},
	{{ {1412, -162, 704}, 0, {4221, 2999}, {0, 0, 127, 255} }},
	{{ {1412, 66, 704}, 0, {4221, 566}, {0, 0, 127, 255} }},
	{{ {930, 66, 704}, 0, {-1230, 566}, {0, 0, 127, 255} }},
	{{ {930, -162, 704}, 0, {-1230, 2999}, {0, 0, 127, 255} }},
	{{ {1412, 66, 704}, 0, {4221, 2923}, {0, 129, 0, 255} }},
	{{ {1412, 66, 109}, 0, {4221, -1509}, {0, 129, 0, 255} }},
	{{ {1439, 66, 68}, 0, {4524, -1813}, {0, 129, 0, 255} }},
	{{ {1439, 66, 745}, 0, {4524, 3227}, {0, 129, 0, 255} }},
	{{ {930, 66, 109}, 0, {-1230, -1509}, {0, 129, 0, 255} }},
	{{ {930, 66, 704}, 0, {-1230, 2923}, {0, 129, 0, 255} }},
	{{ {903, 66, 745}, 0, {-1534, 3227}, {0, 129, 0, 255} }},
	{{ {903, 66, 68}, 0, {-1534, -1813}, {0, 129, 0, 255} }},
	{{ {1412, 66, 109}, 0, {4221, -1509}, {0, 129, 0, 255} }},
	{{ {930, 66, 109}, 0, {-1230, -1509}, {0, 129, 0, 255} }},
	{{ {903, 66, 68}, 0, {-1534, -1813}, {0, 129, 0, 255} }},
	{{ {1439, 66, 68}, 0, {4524, -1813}, {0, 129, 0, 255} }},
	{{ {930, 66, 704}, 0, {-1230, 2923}, {0, 129, 0, 255} }},
	{{ {1412, 66, 704}, 0, {4221, 2923}, {0, 129, 0, 255} }},
	{{ {1439, 66, 745}, 0, {4524, 3227}, {0, 129, 0, 255} }},
	{{ {903, 66, 745}, 0, {-1534, 3227}, {0, 129, 0, 255} }},
	{{ {903, 66, 745}, 0, {-1534, 3469}, {0, 125, 24, 255} }},
	{{ {1439, 66, 745}, 0, {4524, 3469}, {0, 125, 24, 255} }},
	{{ {1439, 159, 255}, 0, {4524, -66}, {0, 125, 24, 255} }},
	{{ {903, 159, 255}, 0, {-1534, -66}, {0, 125, 24, 255} }},
	{{ {1439, 66, 68}, 0, {4524, -2326}, {0, 114, 199, 255} }},
	{{ {903, 66, 68}, 0, {-1534, -2326}, {0, 114, 199, 255} }},
	{{ {903, 159, 255}, 0, {-1534, -930}, {0, 114, 199, 255} }},
	{{ {1439, 159, 255}, 0, {4524, -930}, {0, 114, 199, 255} }},
	{{ {930, -120, 219}, 0, {1378, 2543}, {129, 0, 0, 255} }},
	{{ {930, -20, 219}, 0, {1378, 1476}, {129, 0, 0, 255} }},
	{{ {930, -162, 109}, 0, {2203, 2999}, {129, 0, 0, 255} }},
	{{ {930, -120, 279}, 0, {932, 2543}, {129, 0, 0, 255} }},
	{{ {930, -162, 704}, 0, {-2230, 2999}, {129, 0, 0, 255} }},
	{{ {930, -20, 279}, 0, {932, 1476}, {129, 0, 0, 255} }},
};

Gfx forest_room_0_dl_shack_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(forest_room_0_dl_shack_mesh_layer_Opaque_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
	gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(forest_room_0_dl_shack_mesh_layer_Opaque_vtx_0 + 32, 22, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
	gsSP2Triangles(19, 18, 20, 0, 20, 21, 19, 0),
	gsSPEndDisplayList(),
};

Vtx forest_room_0_dl_shack_mesh_layer_Opaque_vtx_1[16] = {
	{{ {930, -20, 219}, 0, {1378, 1476}, {0, 0, 127, 255} }},
	{{ {930, -120, 219}, 0, {1378, 2543}, {0, 0, 127, 255} }},
	{{ {950, -120, 219}, 0, {1378, 2543}, {0, 0, 127, 255} }},
	{{ {950, -20, 219}, 0, {1378, 1476}, {0, 0, 127, 255} }},
	{{ {930, -120, 219}, 0, {1378, 2543}, {0, 127, 0, 255} }},
	{{ {930, -120, 279}, 0, {932, 2543}, {0, 127, 0, 255} }},
	{{ {950, -120, 279}, 0, {932, 2543}, {0, 127, 0, 255} }},
	{{ {950, -120, 219}, 0, {1378, 2543}, {0, 127, 0, 255} }},
	{{ {930, -20, 279}, 0, {932, 1476}, {0, 129, 0, 255} }},
	{{ {930, -20, 219}, 0, {1378, 1476}, {0, 129, 0, 255} }},
	{{ {950, -20, 219}, 0, {1378, 1476}, {0, 129, 0, 255} }},
	{{ {950, -20, 279}, 0, {932, 1476}, {0, 129, 0, 255} }},
	{{ {930, -120, 279}, 0, {932, 2543}, {0, 0, 129, 255} }},
	{{ {930, -20, 279}, 0, {932, 1476}, {0, 0, 129, 255} }},
	{{ {950, -20, 279}, 0, {932, 1476}, {0, 0, 129, 255} }},
	{{ {950, -120, 279}, 0, {932, 2543}, {0, 0, 129, 255} }},
};

Gfx forest_room_0_dl_shack_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(forest_room_0_dl_shack_mesh_layer_Opaque_vtx_1 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Gfx mat_forest_room_0_dl_f3dlite_material_001_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, forest_room_0_dl_spot16_sceneTex_00CD98_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 87),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, forest_room_0_dl_spot16_sceneTex_00CD98_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 127, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx mat_forest_room_0_dl_trans_02_layerTransparent[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_XLU_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 251, 0, 255, 43),
	gsSPEndDisplayList(),
};

Gfx mat_forest_room_0_dl_f3dlite_material_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
	gsSPEndDisplayList(),
};

Gfx forest_room_0_dl_Floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(forest_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_forest_room_0_dl_f3dlite_material_001_layerOpaque),
	gsSPDisplayList(forest_room_0_dl_Floor_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx forest_room_0_dl_Plane_001_mesh_layer_Transparent[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(forest_room_0_dl_Plane_001_mesh_layer_Transparent_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_forest_room_0_dl_trans_02_layerTransparent),
	gsSPDisplayList(forest_room_0_dl_Plane_001_mesh_layer_Transparent_tri_0),
	gsSPEndDisplayList(),
};

Gfx forest_room_0_dl_shack_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(forest_room_0_dl_shack_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_forest_room_0_dl_wood_layerOpaque),
	gsSPDisplayList(forest_room_0_dl_shack_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_forest_room_0_dl_f3dlite_material_layerOpaque),
	gsSPDisplayList(forest_room_0_dl_shack_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

