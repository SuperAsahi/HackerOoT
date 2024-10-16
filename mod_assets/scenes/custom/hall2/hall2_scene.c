#include "hall2_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd hall2_scene_header00[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(hall2_scene_alternateHeaders),
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x04, 60),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x01, 0x00, LIGHT_MODE_TIME),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, hall2_scene_header00_lightSettings),
    SCENE_CMD_ENTRANCE_LIST(hall2_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, hall2_scene_header00_playerEntryList),
    SCENE_CMD_EXIT_LIST(hall2_scene_header00_exitList),
    SCENE_CMD_END(),
};

SceneCmd* hall2_scene_alternateHeaders[] = {
    NULL,
    hall2_scene_header02,
    hall2_scene_header03,
    hall2_scene_header04,
    hall2_scene_header05,
    hall2_scene_header06,
    hall2_scene_header07,
    hall2_scene_header08,
    hall2_scene_header09,
    hall2_scene_header10,
    hall2_scene_header11,
    hall2_scene_header12,
    hall2_scene_header13,
};

RomFile hall2_scene_roomList[] = {
    { (uintptr_t)_hall2_room_0SegmentRomStart, (uintptr_t)_hall2_room_0SegmentRomEnd },
};

ActorEntry hall2_scene_header00_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { -68, -80, 941 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(139.999), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

Spawn hall2_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

u16 hall2_scene_header00_exitList[12] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_LOST_WOODS_9,
    ENTR_LINKS_HOUSE_1,
    ENTR_KOKIRI_SHOP_0,
    ENTR_KNOW_IT_ALL_BROS_HOUSE_0,
    ENTR_LOST_WOODS_0,
    ENTR_KOKIRI_FOREST_0,
    ENTR_TWINS_HOUSE_0,
    ENTR_MIDOS_HOUSE_0,
    ENTR_SARIAS_HOUSE_0,
    ENTR_DEKU_TREE_0,
};

EnvLightSettings hall2_scene_header00_lightSettings[4] = {
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

/**
 * Header Adult Day
*/
SceneCmd hall2_scene_header02[] = {
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x04, 60),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_OVERWORLD, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x1D, 0x00, false),
    SCENE_CMD_ENV_LIGHT_SETTINGS(0, NULL),
    SCENE_CMD_ENTRANCE_LIST(hall2_scene_header02_entranceList),
    SCENE_CMD_SPAWN_LIST(1, hall2_scene_header02_playerEntryList),
    SCENE_CMD_EXIT_LIST(hall2_scene_header02_exitList),
    SCENE_CMD_END(),
};

ActorEntry hall2_scene_header02_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { -68, -80, 941 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(139.999), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

Spawn hall2_scene_header02_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

u16 hall2_scene_header02_exitList[12] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_LOST_WOODS_9,
    ENTR_LINKS_HOUSE_1,
    ENTR_KOKIRI_SHOP_0,
    ENTR_KNOW_IT_ALL_BROS_HOUSE_0,
    ENTR_LOST_WOODS_0,
    ENTR_KOKIRI_FOREST_0,
    ENTR_TWINS_HOUSE_0,
    ENTR_MIDOS_HOUSE_0,
    ENTR_SARIAS_HOUSE_0,
    ENTR_DEKU_TREE_0,
};

/**
 * Header Adult Night
*/
SceneCmd hall2_scene_header03[] = {
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x04, 60),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_OVERWORLD, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x1D, 0x00, false),
    SCENE_CMD_ENV_LIGHT_SETTINGS(0, NULL),
    SCENE_CMD_ENTRANCE_LIST(hall2_scene_header03_entranceList),
    SCENE_CMD_SPAWN_LIST(1, hall2_scene_header03_playerEntryList),
    SCENE_CMD_EXIT_LIST(hall2_scene_header03_exitList),
    SCENE_CMD_END(),
};

ActorEntry hall2_scene_header03_playerEntryList[] = {
    // Link / Spawn point
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { -68, -80, 941 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(139.999), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

Spawn hall2_scene_header03_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

u16 hall2_scene_header03_exitList[12] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_LOST_WOODS_9,
    ENTR_LINKS_HOUSE_1,
    ENTR_KOKIRI_SHOP_0,
    ENTR_KNOW_IT_ALL_BROS_HOUSE_0,
    ENTR_LOST_WOODS_0,
    ENTR_KOKIRI_FOREST_0,
    ENTR_TWINS_HOUSE_0,
    ENTR_MIDOS_HOUSE_0,
    ENTR_SARIAS_HOUSE_0,
    ENTR_DEKU_TREE_0,
};

/**
 * Header Cutscene No. 1
*/
SceneCmd hall2_scene_header04[] = {
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x13, 77),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x1D, 0x00, true),
    SCENE_CMD_ENV_LIGHT_SETTINGS(0, NULL),
    SCENE_CMD_ENTRANCE_LIST(NULL),
    SCENE_CMD_SPAWN_LIST(0, NULL),
    SCENE_CMD_EXIT_LIST(hall2_scene_header04_exitList),
    SCENE_CMD_END(),
};

u16 hall2_scene_header04_exitList[6] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_HYRULE_FIELD_3,
    ENTR_LINKS_HOUSE_0,
    ENTR_KOKIRI_SHOP_0,
    ENTR_SACRED_FOREST_MEADOW_0,
};

/**
 * Header Cutscene No. 2
*/
SceneCmd hall2_scene_header05[] = {
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x13, 75),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x1D, 0x00, true),
    SCENE_CMD_ENV_LIGHT_SETTINGS(0, NULL),
    SCENE_CMD_ENTRANCE_LIST(NULL),
    SCENE_CMD_SPAWN_LIST(0, NULL),
    SCENE_CMD_EXIT_LIST(hall2_scene_header05_exitList),
    SCENE_CMD_END(),
};

u16 hall2_scene_header05_exitList[8] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_HYRULE_FIELD_3,
    ENTR_LINKS_HOUSE_1,
    ENTR_KOKIRI_SHOP_0,
    ENTR_KNOW_IT_ALL_BROS_HOUSE_0,
    ENTR_LOST_WOODS_0,
    ENTR_TWINS_HOUSE_0,
};

/**
 * Header Cutscene No. 3
*/
SceneCmd hall2_scene_header06[] = {
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x13, 75),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x1D, 0x00, true),
    SCENE_CMD_ENV_LIGHT_SETTINGS(0, NULL),
    SCENE_CMD_ENTRANCE_LIST(NULL),
    SCENE_CMD_SPAWN_LIST(0, NULL),
    SCENE_CMD_EXIT_LIST(hall2_scene_header06_exitList),
    SCENE_CMD_END(),
};

u16 hall2_scene_header06_exitList[8] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_HYRULE_FIELD_3,
    ENTR_LINKS_HOUSE_1,
    ENTR_KOKIRI_SHOP_0,
    ENTR_KNOW_IT_ALL_BROS_HOUSE_0,
    ENTR_LOST_WOODS_0,
    ENTR_TWINS_HOUSE_0,
};

/**
 * Header Cutscene No. 4
*/
SceneCmd hall2_scene_header07[] = {
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x13, 75),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x1D, 0x00, false),
    SCENE_CMD_ENV_LIGHT_SETTINGS(0, NULL),
    SCENE_CMD_ENTRANCE_LIST(NULL),
    SCENE_CMD_SPAWN_LIST(0, NULL),
    SCENE_CMD_EXIT_LIST(hall2_scene_header07_exitList),
    SCENE_CMD_END(),
};

u16 hall2_scene_header07_exitList[10] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_HYRULE_FIELD_3,
    ENTR_LINKS_HOUSE_1,
    ENTR_KOKIRI_SHOP_0,
    ENTR_KNOW_IT_ALL_BROS_HOUSE_0,
    ENTR_LOST_WOODS_0,
    ENTR_TWINS_HOUSE_0,
    ENTR_MIDOS_HOUSE_0,
    ENTR_SARIAS_HOUSE_0,
};

/**
 * Header Cutscene No. 5
*/
SceneCmd hall2_scene_header08[] = {
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x04, 127),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x1D, 0x00, false),
    SCENE_CMD_ENV_LIGHT_SETTINGS(0, NULL),
    SCENE_CMD_ENTRANCE_LIST(NULL),
    SCENE_CMD_SPAWN_LIST(0, NULL),
    SCENE_CMD_EXIT_LIST(hall2_scene_header08_exitList),
    SCENE_CMD_END(),
};

u16 hall2_scene_header08_exitList[10] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_HYRULE_FIELD_3,
    ENTR_LINKS_HOUSE_1,
    ENTR_KOKIRI_SHOP_0,
    ENTR_KNOW_IT_ALL_BROS_HOUSE_0,
    ENTR_LOST_WOODS_0,
    ENTR_TWINS_HOUSE_0,
    ENTR_MIDOS_HOUSE_0,
    ENTR_SARIAS_HOUSE_0,
};

/**
 * Header Cutscene No. 6
*/
SceneCmd hall2_scene_header09[] = {
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x04, 127),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x1D, 0x00, false),
    SCENE_CMD_ENV_LIGHT_SETTINGS(0, NULL),
    SCENE_CMD_ENTRANCE_LIST(NULL),
    SCENE_CMD_SPAWN_LIST(0, NULL),
    SCENE_CMD_EXIT_LIST(hall2_scene_header09_exitList),
    SCENE_CMD_END(),
};

u16 hall2_scene_header09_exitList[10] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_HYRULE_FIELD_3,
    ENTR_LINKS_HOUSE_1,
    ENTR_KOKIRI_SHOP_0,
    ENTR_KNOW_IT_ALL_BROS_HOUSE_0,
    ENTR_LOST_WOODS_0,
    ENTR_TWINS_HOUSE_0,
    ENTR_MIDOS_HOUSE_0,
    ENTR_SARIAS_HOUSE_0,
};

/**
 * Header Cutscene No. 7
*/
SceneCmd hall2_scene_header10[] = {
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x13, 103),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_OVERWORLD, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x1D, 0x00, true),
    SCENE_CMD_ENV_LIGHT_SETTINGS(0, NULL),
    SCENE_CMD_ENTRANCE_LIST(NULL),
    SCENE_CMD_SPAWN_LIST(0, NULL),
    SCENE_CMD_EXIT_LIST(hall2_scene_header10_exitList),
    SCENE_CMD_END(),
};

u16 hall2_scene_header10_exitList[10] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_LOST_WOODS_8,
    ENTR_LINKS_HOUSE_1,
    ENTR_KOKIRI_SHOP_0,
    ENTR_KNOW_IT_ALL_BROS_HOUSE_0,
    ENTR_LOST_WOODS_0,
    ENTR_TWINS_HOUSE_0,
    ENTR_MIDOS_HOUSE_0,
    ENTR_SARIAS_HOUSE_0,
};

/**
 * Header Cutscene No. 8
*/
SceneCmd hall2_scene_header11[] = {
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x13, 103),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_OVERWORLD, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x1D, 0x00, true),
    SCENE_CMD_ENV_LIGHT_SETTINGS(0, NULL),
    SCENE_CMD_ENTRANCE_LIST(NULL),
    SCENE_CMD_SPAWN_LIST(0, NULL),
    SCENE_CMD_EXIT_LIST(hall2_scene_header11_exitList),
    SCENE_CMD_END(),
};

u16 hall2_scene_header11_exitList[10] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_LOST_WOODS_8,
    ENTR_LINKS_HOUSE_1,
    ENTR_KOKIRI_SHOP_0,
    ENTR_KNOW_IT_ALL_BROS_HOUSE_0,
    ENTR_LOST_WOODS_0,
    ENTR_TWINS_HOUSE_0,
    ENTR_MIDOS_HOUSE_0,
    ENTR_SARIAS_HOUSE_0,
};

/**
 * Header Cutscene No. 9
*/
SceneCmd hall2_scene_header12[] = {
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x04, 127),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_OVERWORLD, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x1D, 0x00, false),
    SCENE_CMD_ENV_LIGHT_SETTINGS(0, NULL),
    SCENE_CMD_ENTRANCE_LIST(NULL),
    SCENE_CMD_SPAWN_LIST(0, NULL),
    SCENE_CMD_EXIT_LIST(hall2_scene_header12_exitList),
    SCENE_CMD_END(),
};

u16 hall2_scene_header12_exitList[10] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_LOST_WOODS_8,
    ENTR_LINKS_HOUSE_1,
    ENTR_KOKIRI_SHOP_0,
    ENTR_KNOW_IT_ALL_BROS_HOUSE_0,
    ENTR_LOST_WOODS_0,
    ENTR_TWINS_HOUSE_0,
    ENTR_MIDOS_HOUSE_0,
    ENTR_SARIAS_HOUSE_0,
};

/**
 * Header Cutscene No. 10
*/
SceneCmd hall2_scene_header13[] = {
    SCENE_CMD_COL_HEADER(&hall2_scene_collisionHeader),
    SCENE_CMD_ROOM_LIST(1, hall2_scene_roomList),
    SCENE_CMD_SOUND_SETTINGS(1, 0x04, 60),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x04),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_OVERWORLD, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x1D, 0x00, false),
    SCENE_CMD_ENV_LIGHT_SETTINGS(0, NULL),
    SCENE_CMD_ENTRANCE_LIST(NULL),
    SCENE_CMD_SPAWN_LIST(0, NULL),
    SCENE_CMD_EXIT_LIST(hall2_scene_header13_exitList),
    SCENE_CMD_END(),
};

u16 hall2_scene_header13_exitList[10] = {
    ENTR_KOKIRI_FOREST_0,
    ENTR_DEKU_TREE_0,
    ENTR_LOST_WOODS_8,
    ENTR_LINKS_HOUSE_1,
    ENTR_KOKIRI_SHOP_0,
    ENTR_KNOW_IT_ALL_BROS_HOUSE_0,
    ENTR_LOST_WOODS_0,
    ENTR_TWINS_HOUSE_0,
    ENTR_MIDOS_HOUSE_0,
    ENTR_SARIAS_HOUSE_0,
};

CollisionHeader hall2_scene_collisionHeader = {
    { -2284, -197, -2284 },
    { 2284, -197, 2284 },
    ARRAY_COUNT(hall2_scene_vertices), hall2_scene_vertices,
    ARRAY_COUNT(hall2_scene_polygons), hall2_scene_polygons,
    hall2_scene_polygonTypes,
    NULL,
    0, NULL
};

SurfaceType hall2_scene_polygonTypes[1] = {
    { SURFACETYPE0(0, 0, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
};

Vec3s hall2_scene_vertices[4] = {
    {  -2284,   -197,   2284 },
    {   2284,   -197,   2284 },
    {   2284,   -197,  -2284 },
    {  -2284,   -197,  -2284 },
};

CollisionPoly hall2_scene_polygons[2] = {
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 197 },
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08) }, 197 },
};

