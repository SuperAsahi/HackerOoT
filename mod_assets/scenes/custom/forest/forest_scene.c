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
SceneCmd forest_scene_header00[] = {
    SCENE_CMD_SOUND_SETTINGS(0x00, 0x04, NA_BGM_NATURE_SFX_RAIN),
    SCENE_CMD_ROOM_LIST(1, forest_scene_roomList),
    SCENE_CMD_MISC_SETTINGS(0x00, 0x00),
    SCENE_CMD_COL_HEADER(&forest_collisionHeader),
    SCENE_CMD_SPECIAL_FILES(0x00, OBJECT_GAMEPLAY_DANGEON_KEEP),
    SCENE_CMD_SKYBOX_SETTINGS(0x05, 0x01, LIGHT_MODE_TIME),
    SCENE_CMD_ENTRANCE_LIST(forest_scene_header00_entranceList),
    SCENE_CMD_SPAWN_LIST(1, forest_scene_header00_playerEntryList),
    SCENE_CMD_ENV_LIGHT_SETTINGS(4, forest_scene_header00_lightSettings),
    SCENE_CMD_TRANSITION_ACTOR_LIST(1, forest_scene_header00_transitionActors),
    SCENE_CMD_END(),
};

RomFile forest_scene_roomList[] = {
    { (u32)_forest_room_0SegmentRomStart, (u32)_forest_room_0SegmentRomEnd },
};

ActorEntry forest_scene_header00_playerEntryList[] = {
    {
        /* Actor ID   */ ACTOR_PLAYER,
        /* Position   */ { 0, -120, 0 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0FFF
    },
};

TransitionActorEntry forest_scene_header00_transitionActors[] = {
    // Wooden Door
    {
        /* Room & Cam Index (Front, Back) */ { 0, 0xFF, 0, 0xFF },
        /* Actor ID                       */ ACTOR_EN_DOOR,
        /* Position                       */ { 940, -120, 249 },
        /* Rotation Y                     */ DEG_TO_BINANG(90.000),
        /* Parameters                     */ 0x0000
    },
};

Spawn forest_scene_header00_entranceList[] = {
    // { Spawn Actor List Index, Room Index }
    { 0, 0 },
};

EnvLightSettings forest_scene_header00_lightSettings[4] = {
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
        ((1 << 10) | 850),         // Blend Rate & Fog Near
        12800,                     // Fog Far
    },
};

Vec3s forest_camPosData[3] = {
	{ 0, 0, 0 },
	{ 3859, 56871, 0 },
	{ 3960, -1, -1 },
};

BgCamInfo forest_camData[1] = {
	{ CAM_SET_NONE, 3, &forest_camPosData[0] },
};

SurfaceType forest_polygonTypes[] = {
	{ 0x00000000, 0x00000000 },
	{ 0x00000000, 0x0002000a },
};

CollisionPoly forest_polygons[] = {
	{ 0x0000, 0x0000, 0x0001, 0x0002, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0xfecb },
	{ 0x0000, 0x0000, 0x0002, 0x0003, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0xfecb },
	{ 0x0000, 0x0003, 0x0002, 0x0004, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x0398 },
	{ 0x0000, 0x0003, 0x0004, 0x0005, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x0398 },
	{ 0x0000, 0x0005, 0x0004, 0x0006, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0x00bd },
	{ 0x0000, 0x0005, 0x0006, 0x0007, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0x00bd },
	{ 0x0000, 0x0007, 0x0006, 0x0001, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfc40 },
	{ 0x0000, 0x0007, 0x0001, 0x0000, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfc40 },
	{ 0x0000, 0x0003, 0x0005, 0x0007, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0xff56 },
	{ 0x0000, 0x0003, 0x0007, 0x0000, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0xff56 },
	{ 0x0000, 0x0004, 0x0002, 0x0001, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0xffe2 },
	{ 0x0000, 0x0004, 0x0001, 0x0006, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0xffe2 },
	{ 0x0000, 0x0008, 0x0009, 0x000a, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0078 },
	{ 0x0000, 0x0008, 0x000a, 0x000b, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0078 },
	{ 0x0000, 0x000d, 0x000e, 0x000c, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0xff25 },
	{ 0x0000, 0x000e, 0x000f, 0x000c, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0xff25 },
	{ 0x0000, 0x000d, 0x0010, 0x0011, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0078 },
	{ 0x0000, 0x000d, 0x0011, 0x000e, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(7.549790126404332e-08), 0x0078 },
	{ 0x0000, 0x0012, 0x000c, 0x000f, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.112808475540078e-07), 0xffec },
	{ 0x0000, 0x0012, 0x000f, 0x0013, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.112808475540078e-07), 0xffec },
	{ 0x0000, 0x0010, 0x0012, 0x0013, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0x0117 },
	{ 0x0000, 0x0010, 0x0013, 0x0011, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0x0117 },
	{ 0x0001, 0x0014, 0x0015, 0x0012, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x03a2 },
	{ 0x0001, 0x0017, 0x000c, 0x0016, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x03a2 },
	{ 0x0001, 0x000c, 0x0012, 0x0015, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x03a2 },
	{ 0x0001, 0x000c, 0x0015, 0x0016, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x03a2 },
	{ 0x0001, 0x0017, 0x0016, 0x0018, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0x006d },
	{ 0x0001, 0x0017, 0x0018, 0x0019, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(7.549790126404332e-08), COLPOLY_SNORMAL(-1.0), 0x006d },
	{ 0x0001, 0x0019, 0x0018, 0x001a, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfa7c },
	{ 0x0001, 0x0019, 0x001a, 0x001b, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfa7c },
	{ 0x0001, 0x001b, 0x001a, 0x0015, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0xfd40 },
	{ 0x0001, 0x001b, 0x0015, 0x0014, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-7.549790126404332e-08), COLPOLY_SNORMAL(1.0), 0xfd40 },
	{ 0x0001, 0x001a, 0x0018, 0x001c, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0x0042 },
	{ 0x0001, 0x001a, 0x001c, 0x001d, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0x0042 },
	{ 0x0001, 0x001d, 0x001c, 0x001e, COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0xfa61 },
	{ 0x0001, 0x0016, 0x0015, 0x001f, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0x0042 },
	{ 0x0001, 0x0016, 0x001f, 0x0020, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0x0042 },
	{ 0x0001, 0x0015, 0x001a, 0x001d, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0x0042 },
	{ 0x0001, 0x0015, 0x001d, 0x001f, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0x0042 },
	{ 0x0001, 0x0018, 0x0016, 0x0020, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0x0042 },
	{ 0x0001, 0x0018, 0x0020, 0x001c, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(-7.549790126404332e-08), 0x0042 },
	{ 0x0001, 0x0020, 0x001f, 0x0021, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x0387 },
	{ 0x0001, 0x001f, 0x001d, 0x001e, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9822087287902832), COLPOLY_SNORMAL(0.18779276311397552), 0xff33 },
	{ 0x0001, 0x001f, 0x001e, 0x0021, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.9822087287902832), COLPOLY_SNORMAL(0.18779276311397552), 0xff33 },
	{ 0x0001, 0x001c, 0x0020, 0x0021, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.8949235081672668), COLPOLY_SNORMAL(-0.4462195634841919), 0xffe3 },
	{ 0x0001, 0x001c, 0x0021, 0x001e, COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.8949235081672668), COLPOLY_SNORMAL(-0.4462195634841919), 0xffe3 },
	{ 0x0001, 0x0017, 0x000d, 0x000c, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x03a2 },
	{ 0x0001, 0x0014, 0x0012, 0x0010, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x03a2 },
	{ 0x0001, 0x0017, 0x0010, 0x000d, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x03a2 },
	{ 0x0001, 0x0017, 0x0014, 0x0010, COLPOLY_SNORMAL(-1.0), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.0), 0x03a2 },
};

Vec3s forest_vertices[34] = {
	{ 960, -170, 309 },
	{ 960, 30, 309 },
	{ 920, 30, 309 },
	{ 920, -170, 309 },
	{ 920, 30, 189 },
	{ 920, -170, 189 },
	{ 960, 30, 189 },
	{ 960, -170, 189 },
	{ -1589, -120, 3017 },
	{ 1589, -120, 3017 },
	{ 1589, -120, -161 },
	{ -1589, -120, -161 },
	{ 930, -20, 219 },
	{ 930, -120, 219 },
	{ 950, -120, 219 },
	{ 950, -20, 219 },
	{ 930, -120, 279 },
	{ 950, -120, 279 },
	{ 930, -20, 279 },
	{ 950, -20, 279 },
	{ 930, -162, 704 },
	{ 930, 66, 704 },
	{ 930, 66, 109 },
	{ 930, -162, 109 },
	{ 1412, 66, 109 },
	{ 1412, -162, 109 },
	{ 1412, 66, 704 },
	{ 1412, -162, 704 },
	{ 1439, 66, 68 },
	{ 1439, 66, 745 },
	{ 1439, 159, 255 },
	{ 903, 66, 745 },
	{ 903, 66, 68 },
	{ 903, 159, 255 },
};

CollisionHeader forest_collisionHeader = {
	-1589,
	-170,
	-161,
	1589,
	159,
	3017,
	34,
	forest_vertices,
	50,
	forest_polygons,
	forest_polygonTypes,
	forest_camData,
	0,
	0
};

