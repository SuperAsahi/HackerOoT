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
SceneCmd testmap001_scene_header00[] = {
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x00, NA_BGM_FIELD_LOGIC),
    SCENE_CMD_ROOM_LIST(3, testmap001_scene_roomList),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_COL_HEADER(&testmap001_collisionHeader),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x01, 0x00, LIGHT_MODE_TIME),
    SCENE_CMD_ENTRANCE_LIST(testmap001_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, testmap001_scene_header00_playerEntryList),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, testmap001_scene_header00_lightSettings),
    SCENE_CMD_TRANSITION_ACTOR_LIST(2, testmap001_scene_header00_transitionActors),
    SCENE_CMD_END(),
};

RomFile testmap001_scene_roomList[] = {
    { (u32)_testmap001_room_0SegmentRomStart, (u32)_testmap001_room_0SegmentRomEnd },
    { (u32)_testmap001_room_1SegmentRomStart, (u32)_testmap001_room_1SegmentRomEnd },
    { (u32)_testmap001_room_2SegmentRomStart, (u32)_testmap001_room_2SegmentRomEnd },
};

ActorEntry testmap001_scene_header00_playerEntryList[] = {
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { -202, -120, -299 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

TransitionActorEntry testmap001_scene_header00_transitionActors[] = {
    // Lifting Wooden Door
    {
        /* Room & Cam Index (Front, Back) */ { 0, 0xFF, 1, 0xFF },
        /* Actor ID                       */ ACTOR_DOOR_SHUTTER,
        /* Position                       */ { 745, -120, 106 },
        /* Rotation Y                     */ DEG_TO_BINANG(0.000),
        /* Parameters                     */ 0x0000
    },

    // Lifting Wooden Door
    {
        /* Room & Cam Index (Front, Back) */ { 0, 0xFF, 2, 0xFF },
        /* Actor ID                       */ ACTOR_DOOR_SHUTTER,
        /* Position                       */ { -972, -120, 172 },
        /* Rotation Y                     */ DEG_TO_BINANG(0.000),
        /* Parameters                     */ 0x0000
    },
};

Spawn testmap001_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

EnvLightSettings testmap001_scene_header00_lightSettings[4] = {
    // Dawn Lighting
    {
        {    70,    45,    57 },   // Ambient Color
        {    73,    73,    73 },   // Diffuse0 Direction
        {   180,   154,   138 },   // Diffuse0 Color
        {   -73,   -73,   -73 },   // Diffuse1 Direction
        {    20,    20,    60 },   // Diffuse1 Color
        {   140,   120,   100 },   // Fog Color
        ((1 << 10) | 993),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Day Lighting
    {
        {   105,    90,    90 },   // Ambient Color
        {    73,    73,    73 },   // Diffuse0 Direction
        {   255,   255,   240 },   // Diffuse0 Color
        {   -73,   -73,   -73 },   // Diffuse1 Direction
        {    50,    50,    90 },   // Diffuse1 Color
        {   100,   100,   120 },   // Fog Color
        ((1 << 10) | 996),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Dusk Lighting
    {
        {   120,    90,     0 },   // Ambient Color
        {    73,    73,    73 },   // Diffuse0 Direction
        {   250,   135,    50 },   // Diffuse0 Color
        {   -73,   -73,   -73 },   // Diffuse1 Direction
        {    30,    30,    60 },   // Diffuse1 Color
        {   120,    70,    50 },   // Fog Color
        ((1 << 10) | 995),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Night Lighting
    {
        {    40,    70,   100 },   // Ambient Color
        {    73,    73,    73 },   // Diffuse0 Direction
        {    20,    20,    35 },   // Diffuse0 Color
        {   -73,   -73,   -73 },   // Diffuse1 Direction
        {    50,    50,   100 },   // Diffuse1 Color
        {     0,     0,    30 },   // Fog Color
        ((1 << 10) | 992),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

Gfx mat_testmap001_dl_floor_mat_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsSPEndDisplayList(),
};

Vec3s testmap001_camPosData[3] = {
	{ 0, 0, 0 },
	{ 5626, 436, 114 },
	{ 3960, -1, -1 },
};

BgCamInfo testmap001_camData[1] = {
	{ CAM_SET_NONE, 3, &testmap001_camPosData[0] },
};

SurfaceType testmap001_polygonTypes[] = {
	{ 0x00000000, 0x00000000 },
};

CollisionPoly testmap001_polygons[] = {
	{ 0x0000, 0x0000, 0x0001, 0x0002, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x002d },
	{ 0x0000, 0x0000, 0x0002, 0x0003, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x002d },
	{ 0x0000, 0x0003, 0x0002, 0x0004, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0x008b },
	{ 0x0000, 0x0003, 0x0004, 0x0005, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0x008b },
	{ 0x0000, 0x0005, 0x0004, 0x0006, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xffa6 },
	{ 0x0000, 0x0005, 0x0006, 0x0007, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xffa6 },
	{ 0x0000, 0x0007, 0x0006, 0x0001, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0xff48 },
	{ 0x0000, 0x0007, 0x0001, 0x0000, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0xff48 },
	{ 0x0000, 0x0003, 0x0005, 0x0007, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0xff88 },
	{ 0x0000, 0x0003, 0x0007, 0x0000, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0xff88 },
	{ 0x0000, 0x0004, 0x0002, 0x0001, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x004b },
	{ 0x0000, 0x0004, 0x0001, 0x0006, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x004b },
	{ 0x0000, 0x0008, 0x0009, 0x000a, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0078 },
	{ 0x0000, 0x0008, 0x000a, 0x000b, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0078 },
	{ 0x0000, 0x000c, 0x000d, 0x000e, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x02ad },
	{ 0x0000, 0x000c, 0x000e, 0x000f, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x02ad },
	{ 0x0000, 0x000f, 0x000e, 0x0010, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0x0056 },
	{ 0x0000, 0x000f, 0x0010, 0x0011, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0x0056 },
	{ 0x0000, 0x0011, 0x0010, 0x0012, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfcdb },
	{ 0x0000, 0x0011, 0x0012, 0x0013, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfcdb },
	{ 0x0000, 0x0013, 0x0012, 0x000d, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0xff82 },
	{ 0x0000, 0x0013, 0x000d, 0x000c, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0xff82 },
	{ 0x0000, 0x000f, 0x0011, 0x0013, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0xff56 },
	{ 0x0000, 0x000f, 0x0013, 0x000c, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0xff56 },
	{ 0x0000, 0x0010, 0x000e, 0x000d, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0xffe2 },
	{ 0x0000, 0x0010, 0x000d, 0x0012, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0xffe2 },
	{ 0x0000, 0x0014, 0x0015, 0x0016, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0078 },
	{ 0x0000, 0x0014, 0x0016, 0x0017, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0078 },
	{ 0x0000, 0x0018, 0x0019, 0x001a, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfbf8 },
	{ 0x0000, 0x0018, 0x001a, 0x001b, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfbf8 },
	{ 0x0000, 0x001b, 0x001a, 0x001c, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0x0098 },
	{ 0x0000, 0x001b, 0x001c, 0x001d, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0x0098 },
	{ 0x0000, 0x001d, 0x001c, 0x001e, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x0390 },
	{ 0x0000, 0x001d, 0x001e, 0x001f, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x0390 },
	{ 0x0000, 0x001f, 0x001e, 0x0019, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0xff40 },
	{ 0x0000, 0x001f, 0x0019, 0x0018, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0xff40 },
	{ 0x0000, 0x001b, 0x001d, 0x001f, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0xff56 },
	{ 0x0000, 0x001b, 0x001f, 0x0018, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0xff56 },
	{ 0x0000, 0x001c, 0x001a, 0x0019, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0xffe2 },
	{ 0x0000, 0x001c, 0x0019, 0x001e, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0xffe2 },
	{ 0x0000, 0x0020, 0x0021, 0x0022, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0078 },
	{ 0x0000, 0x0020, 0x0022, 0x0023, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0078 },
};

Vec3s testmap001_vertices[36] = {
	{ 45, -120, 184 },
	{ 45, -75, 184 },
	{ 45, -75, 139 },
	{ 45, -120, 139 },
	{ 90, -75, 139 },
	{ 90, -120, 139 },
	{ 90, -75, 184 },
	{ 90, -120, 184 },
	{ -824, -120, 1335 },
	{ 460, -120, 1335 },
	{ 460, -120, -460 },
	{ -824, -120, -460 },
	{ 685, -170, 126 },
	{ 685, 30, 126 },
	{ 685, 30, 86 },
	{ 685, -170, 86 },
	{ 805, 30, 86 },
	{ 805, -170, 86 },
	{ 805, 30, 126 },
	{ 805, -170, 126 },
	{ 549, -120, 799 },
	{ 2146, -120, 799 },
	{ 2146, -120, -799 },
	{ 549, -120, -799 },
	{ -1032, -170, 192 },
	{ -1032, 30, 192 },
	{ -1032, 30, 152 },
	{ -1032, -170, 152 },
	{ -912, 30, 152 },
	{ -912, -170, 152 },
	{ -912, 30, 192 },
	{ -912, -170, 192 },
	{ -1504, -120, 300 },
	{ -904, -120, 300 },
	{ -904, -120, -300 },
	{ -1504, -120, -300 },
};

CollisionHeader testmap001_collisionHeader = {
	-1504,
	-170,
	-799,
	2146,
	30,
	1335,
	36,
	testmap001_vertices,
	42,
	testmap001_polygons,
	testmap001_polygonTypes,
	testmap001_camData,
	0,
	0
};

