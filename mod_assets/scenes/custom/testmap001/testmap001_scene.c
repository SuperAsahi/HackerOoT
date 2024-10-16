#include "testmap001_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd testmap001_scene_header00[] = {
    SCENE_CMD_COL_HEADER(&testmap001_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(3, testmap001_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x00, NA_BGM_FIELD_LOGIC),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x01, 0x00, LIGHT_MODE_TIME),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, testmap001_scene_header00_lightSettings),
    SCENE_CMD_TRANSITION_ACTOR_LIST(2, testmap001_scene_header00_transitionActors),
    SCENE_CMD_ENTRANCE_LIST(testmap001_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, testmap001_scene_header00_playerEntryList),
    SCENE_CMD_END(),
};

RomFile testmap001_scene_roomList[] = {
    { (uintptr_t)_testmap001_room_0SegmentRomStart, (uintptr_t)_testmap001_room_0SegmentRomEnd },
    { (uintptr_t)_testmap001_room_1SegmentRomStart, (uintptr_t)_testmap001_room_1SegmentRomEnd },
    { (uintptr_t)_testmap001_room_2SegmentRomStart, (uintptr_t)_testmap001_room_2SegmentRomEnd },
};

ActorEntry testmap001_scene_header00_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { -202, -120, -299 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

Spawn testmap001_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
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

EnvLightSettings testmap001_scene_header00_lightSettings[4] = {
    // Dawn Lighting
    {
        {    70,    45,    57 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   180,   154,   138 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    20,    20,    60 },   // Diffuse1 Color
        {   140,   120,   100 },   // Fog Color
        ((1 << 10) | 993),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Day Lighting
    {
        {   105,    90,    90 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   255,   255,   240 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    50,    50,    90 },   // Diffuse1 Color
        {   100,   100,   120 },   // Fog Color
        ((1 << 10) | 996),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Dusk Lighting
    {
        {   120,    90,     0 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {   250,   135,    50 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    30,    30,    60 },   // Diffuse1 Color
        {   120,    70,    50 },   // Fog Color
        ((1 << 10) | 995),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
    // Night Lighting
    {
        {    40,    70,   100 },   // Ambient Color
        {    73,   -73,    73 },   // Diffuse0 Direction
        {    20,    20,    35 },   // Diffuse0 Color
        {   -73,    73,   -73 },   // Diffuse1 Direction
        {    50,    50,   100 },   // Diffuse1 Color
        {     0,     0,    30 },   // Fog Color
        ((1 << 10) | 992),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

CollisionHeader testmap001_scene_collisionHeader = {
    { -1504, -170, -799 },
    { 2146, 30, 1335 },
    ARRAY_COUNT(testmap001_scene_vertices), testmap001_scene_vertices,
    ARRAY_COUNT(testmap001_scene_polygons), testmap001_scene_polygons,
    testmap001_scene_polygonTypes,
    testmap001_scene_bgCamInfo,
    0, NULL
};

Vec3s testmap001_scene_camPosData[] = {
    {      0,      0,      0 },
    { 0x15FA, 0x01B4, 0x0072 },
    {   3960,     -1,     -1 },
};

BgCamInfo testmap001_scene_bgCamInfo[] = {
    { CAM_SET_NONE, 3, &testmap001_scene_camPosData[0] },
};

SurfaceType testmap001_scene_polygonTypes[1] = {
    { SURFACETYPE0(0, 0, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
};

Vec3s testmap001_scene_vertices[36] = {
    {     45,   -120,    184 },
    {     45,    -75,    184 },
    {     45,    -75,    139 },
    {     45,   -120,    139 },
    {     90,    -75,    139 },
    {     90,   -120,    139 },
    {     90,    -75,    184 },
    {     90,   -120,    184 },
    {   -824,   -120,   1335 },
    {    460,   -120,   1335 },
    {    460,   -120,   -460 },
    {   -824,   -120,   -460 },
    {    685,   -170,    126 },
    {    685,     30,    126 },
    {    685,     30,     86 },
    {    685,   -170,     86 },
    {    805,     30,     86 },
    {    805,   -170,     86 },
    {    805,     30,    126 },
    {    805,   -170,    126 },
    {    549,   -120,    799 },
    {   2146,   -120,    799 },
    {   2146,   -120,   -799 },
    {    549,   -120,   -799 },
    {  -1032,   -170,    192 },
    {  -1032,     30,    192 },
    {  -1032,     30,    152 },
    {  -1032,   -170,    152 },
    {   -912,     30,    152 },
    {   -912,   -170,    152 },
    {   -912,     30,    192 },
    {   -912,   -170,    192 },
    {  -1504,   -120,    300 },
    {   -904,   -120,    300 },
    {   -904,   -120,   -300 },
    {  -1504,   -120,   -300 },
};

CollisionPoly testmap001_scene_polygons[42] = {
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 45 },
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 45 },
    { 0, COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(4), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0) }, 139 },
    { 0, COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(5), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0) }, 139 },
    { 0, COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 65446 },
    { 0, COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 65446 },
    { 0, COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(1), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0) }, 65352 },
    { 0, COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(0), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0) }, 65352 },
    { 0, COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 65416 },
    { 0, COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(0), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 65416 },
    { 0, COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(1), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 75 },
    { 0, COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 75 },
    { 0, COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX(9, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(10), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 120 },
    { 0, COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(11), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 120 },
    { 0, COLPOLY_VTX(12, COLPOLY_IGNORE_NONE), COLPOLY_VTX(13, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(14), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 685 },
    { 0, COLPOLY_VTX(12, COLPOLY_IGNORE_NONE), COLPOLY_VTX(14, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(15), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 685 },
    { 0, COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX(14, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(16), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0) }, 86 },
    { 0, COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(17), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0) }, 86 },
    { 0, COLPOLY_VTX(17, COLPOLY_IGNORE_NONE), COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(18), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 64731 },
    { 0, COLPOLY_VTX(17, COLPOLY_IGNORE_NONE), COLPOLY_VTX(18, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(19), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 64731 },
    { 0, COLPOLY_VTX(19, COLPOLY_IGNORE_NONE), COLPOLY_VTX(18, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(13), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0) }, 65410 },
    { 0, COLPOLY_VTX(19, COLPOLY_IGNORE_NONE), COLPOLY_VTX(13, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(12), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0) }, 65410 },
    { 0, COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX(17, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(19), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 65366 },
    { 0, COLPOLY_VTX(15, COLPOLY_IGNORE_NONE), COLPOLY_VTX(19, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(12), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 65366 },
    { 0, COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX(14, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(13), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65506 },
    { 0, COLPOLY_VTX(16, COLPOLY_IGNORE_NONE), COLPOLY_VTX(13, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(18), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65506 },
    { 0, COLPOLY_VTX(20, COLPOLY_IGNORE_NONE), COLPOLY_VTX(21, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(22), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 120 },
    { 0, COLPOLY_VTX(20, COLPOLY_IGNORE_NONE), COLPOLY_VTX(22, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(23), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 120 },
    { 0, COLPOLY_VTX(24, COLPOLY_IGNORE_NONE), COLPOLY_VTX(25, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(26), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 64504 },
    { 0, COLPOLY_VTX(24, COLPOLY_IGNORE_NONE), COLPOLY_VTX(26, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(27), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 64504 },
    { 0, COLPOLY_VTX(27, COLPOLY_IGNORE_NONE), COLPOLY_VTX(26, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(28), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0) }, 152 },
    { 0, COLPOLY_VTX(27, COLPOLY_IGNORE_NONE), COLPOLY_VTX(28, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(29), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0) }, 152 },
    { 0, COLPOLY_VTX(29, COLPOLY_IGNORE_NONE), COLPOLY_VTX(28, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(30), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 912 },
    { 0, COLPOLY_VTX(29, COLPOLY_IGNORE_NONE), COLPOLY_VTX(30, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(31), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 912 },
    { 0, COLPOLY_VTX(31, COLPOLY_IGNORE_NONE), COLPOLY_VTX(30, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(25), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0) }, 65344 },
    { 0, COLPOLY_VTX(31, COLPOLY_IGNORE_NONE), COLPOLY_VTX(25, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(24), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0) }, 65344 },
    { 0, COLPOLY_VTX(27, COLPOLY_IGNORE_NONE), COLPOLY_VTX(29, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(31), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 65366 },
    { 0, COLPOLY_VTX(27, COLPOLY_IGNORE_NONE), COLPOLY_VTX(31, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(24), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08) }, 65366 },
    { 0, COLPOLY_VTX(28, COLPOLY_IGNORE_NONE), COLPOLY_VTX(26, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(25), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65506 },
    { 0, COLPOLY_VTX(28, COLPOLY_IGNORE_NONE), COLPOLY_VTX(25, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(30), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 65506 },
    { 0, COLPOLY_VTX(32, COLPOLY_IGNORE_NONE), COLPOLY_VTX(33, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(34), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 120 },
    { 0, COLPOLY_VTX(32, COLPOLY_IGNORE_NONE), COLPOLY_VTX(34, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(35), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 120 },
};

Gfx mat_testmap001_room_0_dl_floor_mat_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsSPEndDisplayList(),
};

