#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "forest_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"

/**
 * Header Child Day (Default)
*/
#define LENGTH_FOREST_ROOM_0_HEADER00_OBJECTLIST 3
#define LENGTH_FOREST_ROOM_0_HEADER00_ACTORLIST 12
SceneCmd forest_room_0_header00[] = {
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(22, 0, 0),
    SCENE_CMD_ROOM_SHAPE(&forest_room_0_shapeHeader),
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
    // Torch
    {
        /* Actor ID   */ ACTOR_OBJ_SYOKUDAI,
        /* Position   */ { 244, -118, 230 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x2000
    },

    // Redead/Gibdo
    {
        /* Actor ID   */ ACTOR_EN_RD,
        /* Position   */ { 869, -120, 1404 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(202.841), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Greenery
    {
        /* Actor ID   */ ACTOR_EN_WOOD02,
        /* Position   */ { 751, -120, 1096 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0003
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

    // Torch
    {
        /* Actor ID   */ ACTOR_OBJ_SYOKUDAI,
        /* Position   */ { 365, -120, 357 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

RoomShapeNormal forest_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(forest_room_0_shapeDListEntry),
    forest_room_0_shapeDListEntry,
    forest_room_0_shapeDListEntry + ARRAY_COUNT(forest_room_0_shapeDListEntry)
};

RoomShapeDListsEntry forest_room_0_shapeDListEntry[1] = {
    { forest_room_0_entry_0_opaque, NULL },
};

Gfx forest_room_0_entry_0_opaque[] = {
	gsSPDisplayList(forest_dl_Floor_mesh_layer_Opaque),
	gsSPDisplayList(forest_dl_shack_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

u64 forest_dl_spot16_sceneTex_00CD98_rgba16_ci8[] = {
	0x0001020003040506, 0x07000800090a0a08, 0x0b0c0d0e0f10080a, 0x1112131415000616, 0x0614171418161819, 0x1a121b1c0a1d050a, 0x1e1f20091c1d1818, 0x0b2108220b230524, 
	0x2516262728290a2a, 0x2b2625100f2c0a05, 0x05052d2e082f3030, 0x28312c2f282e0a32, 0x282e0916332f0600, 0x342f0006341e2e35, 0x2b1d361810162d37, 0x1c0817382f341639, 
	0x3a3b35351a2e2618, 0x0a3c102b0f34242f, 0x343d3a2a283e3f18, 0x4018101c34300817, 0x410c424324083828, 0x444546280900000a, 0x2305052830084724, 0x231a4608483e132f, 
	0x494a4b4c233e4d2d, 0x2d0c4e4f1b390f18, 0x1b0350121b050551, 0x0c1616181605101d, 0x521453345455430e, 0x081a431816565618, 0x2a0e065424572c0f, 0x250a0a060b25280e, 
	
};

u64 forest_dl_spot16_sceneTex_00CD98_rgba16_pal_rgba16[] = {
	0x430d5c133a0b5411, 0x3ad121473a8b548f, 0x3acd434d29c93209, 0x294731cb3a4b18c5, 0x20c74c0f4bd15413, 0x53d142cf18854b8d, 0x210721453a8d430f, 0x210518454bcf5c93, 
	0x4c115cd34bcd29c7, 0x328b298918c72987, 0x324b32cb320b2149, 0x2949218731c93b0d, 0x3acb2a4931894c53, 0x4b8f42cd5453218b, 0x434b4b4d5c532909, 0x190553932a0b324d, 
	0x21093b4f32493b4d, 0x3b0f4b514b0f3b4b, 0x298b3b11549329cb, 0x2a0921c9428d4311, 0x534f31874b935c51, 0x438f5cd11887540f, 
};

u64 forest_dl_spot18_room_1Tex_002868_rgba16_ci8[] = {
	0x0001020300030405, 0x06070808090a050b, 0x0c0b0d0501050505, 0x040b040e0f10110e, 0x1213131415140216, 0x170918021900181a, 0x1b1c1d0b1e1f1e00, 0x201b080805040403, 
	0x2122070222232425, 0x2627282926272a26, 0x2b2c2d1104072a24, 0x2a26252a11111111, 0x2e2f223029252631, 0x32272a2925273126, 0x2c2c333234343426, 0x3534362b37383438, 
	0x392421023a27323a, 0x272d263b343c273d, 0x253638382b3e3f40, 0x3234412c423a3743, 0x17252526343f3744, 0x2c112a2b45342731, 0x37353c380711290f, 0x373f363f3f463838, 
	0x2d140447482a3425, 0x342a2a3b494a274b, 0x4c4c2b4d37373711, 0x4e374f4350433838, 0x042d11042d252827, 0x275152453d3d2625, 0x2a252a2b3f373c32, 0x3f53343f35543d3d, 
	0x443f44275132442c, 0x555636385758594a, 0x58335a5b4b5c4556, 0x5d5e553d5f555858, 0x0f60611a6218611c, 0x63641c1d180f0f65, 0x654366421c676869, 0x5a5a6a4b6b413a65, 
	0x471e1e03043c2a0e, 0x4f1d106c6d424b5a, 0x4f6e4b4b3e1d6f6f, 0x70704241706f7042, 0x7151267151665c5e, 0x5772575551356672, 0x513673745c46755c, 0x435b45663136385c, 
	0x45574a513138664a, 0x4545463172513645, 0x4a3d5c4535367677, 0x5c3172775c787973, 0x3145713127514b66, 0x325c5c3d66667836, 0x7a45364c747b7c66, 0x5c51735a4477777b, 
	0x6651723d45366631, 0x3566663c46741153, 0x5b7466734c737a78, 0x78786674667d7345, 0x515166455435453d, 0x27456672577e7a74, 0x6645744566364636, 0x457474463d663159, 
	0x1131492c31456666, 0x31663d457f514657, 0x7e455c3666667b78, 0x8045787345667257, 0x006f4f3a5a113a3f, 0x373f2b383a7a3681, 0x3f436a5a7c6a1010, 0x107c104b82104336, 
	0x252c342d2d472b26, 0x3721262a2b77182c, 0x467b833f382c3f77, 0x5a113f3c11443f2c, 0x3c325a114e351143, 0x5a2d7a2c5a663843, 0x4b4b7b84434b695a, 0x697c3f5a4b4b4e44, 
	0x8535292635342c2c, 0x5a3a374443433f38, 0x6b105a5a6e5a3a4b, 0x8687108610433a3c, 0x040909092a262632, 0x32323d3436463888, 0x6f897b384646734c, 0x34383c3f3f7b463f, 
	0x2d28074e2a442725, 0x8a2b3b27263d2632, 0x3635884b3a3a3f34, 0x3f2d0e6c6e4b4f4e, 0x0c00000b0e8b1111, 0x0e6c0e6c6d8b0e1d, 0x6f6f4e866562628c, 0x626262081d6f086f, 
	0x5127353627293d8d, 0x51515757313f2c2c, 0x6e3551453145408e, 0x7d597134714a7251, 0x5c8f4545328e4066, 0x384b3d7245745c90, 0x46385a88917a4f74, 0x924f78743c3a5a6e, 
	0x54465a69383d408f, 0x66665c7a93363889, 0x7773457937383843, 0x10363d385c7b8843, 0x74325a4b4e7c9495, 0x96979895745c3f90, 0x443836387b967a3d, 0x7374388838383843, 
	0x5799353866725c57, 0x664d9a5771273634, 0x45363d3f51783836, 0x663c5c5c4c365c3c, 0x08112d370e656c4e, 0x65426f7c847a7c4b, 0x6c7008629b0f2d3c, 0x4e113a5c9c9d472d, 
	0x006f1c0f5a4e8610, 0x621c3e0f0f0f639e, 0x6261102d6c2a1b03, 0x624f6c9f1b08080b, 0x086210621d6f9b00, 0x0d6f08620e62200c, 0x2a0e112a1a1a1b60, 0x11212a09000ba01b, 
	
};

u64 forest_dl_spot18_room_1Tex_002868_rgba16_pal_rgba16[] = {
	0x51c96a8d72cf72cd, 0x728d624b08417acf, 0x4987831139475a09, 0x51c741476a4b59c9, 0x6a097acd5a0d624d, 0x7b11628f7b518b95, 0x20c15a0b29033945, 0x3103498549c95209, 
	0x418783518b5393d5, 0x939593939bd5a417, 0x93d3a4198b519391, 0x9351830f93d79c19, 0xa3d7ac599b939bd7, 0x9bd3a3d5a3d38b0f, 0x9b91835382cd9c17, 0x830da4156207934f, 
	0x930d494551858b0d, 0x8b4fac99a3d17b0f, 0x834fac5bacdf7249, 0xa4139bd1728b6a49, 0x8b4dac9ba457938f, 0xac17ad21b5a7acdd, 0xad23ad1f7a8babd3, 0xac15b5a5ad63ac9d, 
	0x620b20c3518728c3, 0x18c159c7ac5761c5, 0x49437a89828b30c1, 0x62096249724b4145, 0x3903a459acdbac13, 0xac558acdabd19b4f, 0xac97a39182cb9b8f, 0x6a07ad61ad1d9c15, 
	0xacd99b4d7209a38f, 0x8acb7a8d61c75987, 0x934d69c58b916a8b, 0x18817acb9b51930f, 0x7a4910c3414382cf, 0x7247930b82897207, 0x8b0b9c59a4994989, 0x21036a0b30c33105, 
	0x4947000000000000
};

Vtx forest_dl_Floor_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1589, -120, 3017}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1589, -120, 3017}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1589, -120, -161}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1589, -120, -161}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1589, -120, 3017}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1589, -120, 3017}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1589, -120, -161}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1589, -120, -161}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx forest_dl_Floor_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-1589, -120, 3017}, 0, {-1901, 2381}, {0, 127, 0, 255} }},
	{{ {1589, -120, 3017}, 0, {2381, 2381}, {0, 127, 0, 255} }},
	{{ {1589, -120, -161}, 0, {2381, -1901}, {0, 127, 0, 255} }},
	{{ {-1589, -120, -161}, 0, {-1901, -1901}, {0, 127, 0, 255} }},
};

Gfx forest_dl_Floor_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(forest_dl_Floor_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Vtx forest_dl_shack_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {903, -162, 745}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {903, 159, 745}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {903, 159, 68}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {903, -162, 68}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1439, -162, 745}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1439, 159, 745}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1439, 159, 68}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1439, -162, 68}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx forest_dl_shack_mesh_layer_Opaque_vtx_0[54] = {
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

Gfx forest_dl_shack_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(forest_dl_shack_mesh_layer_Opaque_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
	gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(forest_dl_shack_mesh_layer_Opaque_vtx_0 + 32, 22, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
	gsSP2Triangles(19, 18, 20, 0, 20, 21, 19, 0),
	gsSPEndDisplayList(),
};

Vtx forest_dl_shack_mesh_layer_Opaque_vtx_1[16] = {
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

Gfx forest_dl_shack_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(forest_dl_shack_mesh_layer_Opaque_vtx_1 + 0, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Gfx mat_forest_dl_f3dlite_material_001_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, forest_dl_spot16_sceneTex_00CD98_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 87),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, forest_dl_spot16_sceneTex_00CD98_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 127, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx mat_forest_dl_wood_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_RGBA16 | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, forest_dl_spot18_room_1Tex_002868_rgba16_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 160),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, forest_dl_spot18_room_1Tex_002868_rgba16_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_forest_dl_f3dlite_material_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
	gsSPEndDisplayList(),
};

Gfx forest_dl_Floor_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(forest_dl_Floor_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_forest_dl_f3dlite_material_001_layerOpaque),
	gsSPDisplayList(forest_dl_Floor_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Gfx forest_dl_shack_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(forest_dl_shack_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_forest_dl_wood_layerOpaque),
	gsSPDisplayList(forest_dl_shack_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_forest_dl_f3dlite_material_layerOpaque),
	gsSPDisplayList(forest_dl_shack_mesh_layer_Opaque_tri_1),
	gsSPEndDisplayList(),
};

