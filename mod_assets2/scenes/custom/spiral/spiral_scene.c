#include "spiral_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd spiral_scene_header00[] = {
    SCENE_CMD_COL_HEADER(&spiral_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, spiral_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x00, NA_BGM_GANON_BOSS),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x00, 0x00, LIGHT_MODE_TIME),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, spiral_scene_header00_lightSettings),
    SCENE_CMD_ENTRANCE_LIST(spiral_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, spiral_scene_header00_playerEntryList),
    SCENE_CMD_EXIT_LIST(spiral_scene_header00_exitList),
    SCENE_CMD_END(),
};

RomFile spiral_scene_roomList[] = {
    { (uintptr_t)_spiral_room_0SegmentRomStart, (uintptr_t)_spiral_room_0SegmentRomEnd },
};

ActorEntry spiral_scene_header00_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { 292, 86, -1049 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

Spawn spiral_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

u16 spiral_scene_header00_exitList[1] = {
    ENTR_MASKCS_0,
};

EnvLightSettings spiral_scene_header00_lightSettings[4] = {
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

CollisionHeader spiral_scene_collisionHeader = {
    { 9, -4610, -1177 },
    { 539, 351, 1949 },
    ARRAY_COUNT(spiral_scene_vertices), spiral_scene_vertices,
    ARRAY_COUNT(spiral_scene_polygons), spiral_scene_polygons,
    spiral_scene_polygonTypes,
    NULL,
    0, NULL
};

SurfaceType spiral_scene_polygonTypes[2] = {
    { SURFACETYPE0(0, 0, 0x00, 0, 0x01, 0x00, 0, 0), SURFACETYPE1(0x02, 0x00, 0, 0, 0, 0, 0, 0) },
    { SURFACETYPE0(0, 0, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
};

Vec3s spiral_scene_vertices[15] = {
    {    274,  -4610,    750 },
    {    539,  -4610,    903 },
    {    539,    203,    903 },
    {    274,    203,    750 },
    {    539,  -4610,   1209 },
    {    539,    203,   1209 },
    {    274,  -4610,   1362 },
    {    274,    203,   1362 },
    {      9,  -4610,   1209 },
    {      9,    203,   1209 },
    {      9,  -4610,    903 },
    {      9,    203,    903 },
    {    274,    351,   1949 },
    {    508,     74,  -1177 },
    {     41,     74,  -1177 },
};

CollisionPoly spiral_scene_polygons[13] = {
    { 0, COLPOLY_VTX(0, (COLPOLY_IGNORE_PROJECTILES | COLPOLY_IGNORE_CAMERA)), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(-0.49999988079071045), COLPOLY_SNORMAL(-6.538309804682285e-08), COLPOLY_SNORMAL(0.866025447845459) }, 65024 },
    { 0, COLPOLY_VTX(0, (COLPOLY_IGNORE_PROJECTILES | COLPOLY_IGNORE_CAMERA)), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(-0.49999988079071045), COLPOLY_SNORMAL(-6.538309804682285e-08), COLPOLY_SNORMAL(0.866025447845459) }, 65024 },
    { 0, COLPOLY_VTX(1, (COLPOLY_IGNORE_PROJECTILES | COLPOLY_IGNORE_CAMERA)), COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(5), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 539 },
    { 0, COLPOLY_VTX(1, (COLPOLY_IGNORE_PROJECTILES | COLPOLY_IGNORE_CAMERA)), COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 539 },
    { 0, COLPOLY_VTX(4, (COLPOLY_IGNORE_PROJECTILES | COLPOLY_IGNORE_CAMERA)), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(-0.49999988079071045), COLPOLY_SNORMAL(6.538309804682285e-08), COLPOLY_SNORMAL(-0.866025447845459) }, 1317 },
    { 0, COLPOLY_VTX(4, (COLPOLY_IGNORE_PROJECTILES | COLPOLY_IGNORE_CAMERA)), COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(5), { COLPOLY_SNORMAL(-0.49999988079071045), COLPOLY_SNORMAL(6.538309804682285e-08), COLPOLY_SNORMAL(-0.866025447845459) }, 1317 },
    { 0, COLPOLY_VTX(6, (COLPOLY_IGNORE_PROJECTILES | COLPOLY_IGNORE_CAMERA)), COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(9), { COLPOLY_SNORMAL(0.49999985098838806), COLPOLY_SNORMAL(6.538310515225021e-08), COLPOLY_SNORMAL(-0.866025447845459) }, 1042 },
    { 0, COLPOLY_VTX(6, (COLPOLY_IGNORE_PROJECTILES | COLPOLY_IGNORE_CAMERA)), COLPOLY_VTX(9, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(0.49999985098838806), COLPOLY_SNORMAL(6.538310515225021e-08), COLPOLY_SNORMAL(-0.866025447845459) }, 1042 },
    { 0, COLPOLY_VTX(8, (COLPOLY_IGNORE_PROJECTILES | COLPOLY_IGNORE_CAMERA)), COLPOLY_VTX(10, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(11), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 65527 },
    { 0, COLPOLY_VTX(8, (COLPOLY_IGNORE_PROJECTILES | COLPOLY_IGNORE_CAMERA)), COLPOLY_VTX(11, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(9), { COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0) }, 65527 },
    { 0, COLPOLY_VTX(10, (COLPOLY_IGNORE_PROJECTILES | COLPOLY_IGNORE_CAMERA)), COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(0.49999985098838806), COLPOLY_SNORMAL(-6.538310515225021e-08), COLPOLY_SNORMAL(0.866025447845459) }, 64750 },
    { 0, COLPOLY_VTX(10, (COLPOLY_IGNORE_PROJECTILES | COLPOLY_IGNORE_CAMERA)), COLPOLY_VTX(3, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(11), { COLPOLY_SNORMAL(0.49999985098838806), COLPOLY_SNORMAL(-6.538310515225021e-08), COLPOLY_SNORMAL(0.866025447845459) }, 64750 },
    { 1, COLPOLY_VTX(13, COLPOLY_IGNORE_NONE), COLPOLY_VTX(14, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(12), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9961090087890625), COLPOLY_SNORMAL(-0.08812940865755081) }, 65358 },
};

