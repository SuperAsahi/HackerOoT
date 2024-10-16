#include "hall2_scene.h"


/**
 * Header Child Day (Default)
*/
#define LENGTH_HALL2_ROOM_0_HEADER00_OBJECTLIST 11
#define LENGTH_HALL2_ROOM_0_HEADER00_ACTORLIST 11
SceneCmd hall2_room_0_header00[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(hall2_room_0_alternateHeaders),
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(1),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_HALL2_ROOM_0_HEADER00_OBJECTLIST, hall2_room_0_header00_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER00_ACTORLIST, hall2_room_0_header00_actorList),
    SCENE_CMD_END(),
};

SceneCmd* hall2_room_0_alternateHeaders[] = {
    NULL,
    hall2_room_0_header02,
    hall2_room_0_header03,
    hall2_room_0_header04,
    hall2_room_0_header05,
    hall2_room_0_header06,
    hall2_room_0_header07,
    hall2_room_0_header08,
    hall2_room_0_header09,
    hall2_room_0_header10,
    hall2_room_0_header11,
    hall2_room_0_header12,
    hall2_room_0_header13,
};

s16 hall2_room_0_header00_objectList[LENGTH_HALL2_ROOM_0_HEADER00_OBJECTLIST] = {
    OBJECT_KANBAN,
    OBJECT_GS,
    OBJECT_MAMENOKI,
    OBJECT_KM1,
    OBJECT_KW1,
    OBJECT_OS_ANIME,
    OBJECT_MD,
    OBJECT_SA,
    OBJECT_GI_HEART,
    OBJECT_ST,
    OBJECT_FA,
};

ActorEntry hall2_room_0_header00_actorList[LENGTH_HALL2_ROOM_0_HEADER00_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { 45, 0, -272 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF01
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -608, 120, 1022 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(225.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF02
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { 669, 0, 521 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(189.998), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF04
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { 853, 100, -311 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF05
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -678, 1, -179 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(77.997), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF06
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -1472, -80, -294 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(90.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0003
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -10, 180, -22 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(68.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF0C
    },

    // Mido
    {
        /* Actor ID   */ ACTOR_EN_MD,
        /* Position   */ { 1522, 0, 105 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(264.001), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0100
    },

    // Saria
    {
        /* Actor ID   */ ACTOR_EN_SA,
        /* Position   */ { 18, -80, 873 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(319.999), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Skullwalltula/Golden Skulltula
    {
        /* Actor ID   */ ACTOR_EN_SW,
        /* Position   */ { -1307, 153, 401 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(289.001), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xAD02
    },
};

/**
 * Header Adult Day
*/
#define LENGTH_HALL2_ROOM_0_HEADER02_OBJECTLIST 7
#define LENGTH_HALL2_ROOM_0_HEADER02_ACTORLIST 3
SceneCmd hall2_room_0_header02[] = {
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(1),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_HALL2_ROOM_0_HEADER02_OBJECTLIST, hall2_room_0_header02_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER02_ACTORLIST, hall2_room_0_header02_actorList),
    SCENE_CMD_END(),
};

s16 hall2_room_0_header02_objectList[LENGTH_HALL2_ROOM_0_HEADER02_OBJECTLIST] = {
    OBJECT_DEKUBABA,
    OBJECT_GS,
    OBJECT_KANBAN,
    OBJECT_ST,
    OBJECT_OKUTA,
    OBJECT_DEKUNUTS,
    OBJECT_MAMENOKI,
};

ActorEntry hall2_room_0_header02_actorList[LENGTH_HALL2_ROOM_0_HEADER02_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Skulltula
    {
        /* Actor ID   */ ACTOR_EN_ST,
        /* Position   */ { 1836, 105, 135 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(270.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0001
    },

    // Skullwalltula/Golden Skulltula
    {
        /* Actor ID   */ ACTOR_EN_SW,
        /* Position   */ { 1153, 251, 625 },
        /* Rotation   */ { DEG_TO_BINANG(90.000), DEG_TO_BINANG(328.002), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xAD04
    },
};

/**
 * Header Adult Night
*/
#define LENGTH_HALL2_ROOM_0_HEADER03_OBJECTLIST 7
#define LENGTH_HALL2_ROOM_0_HEADER03_ACTORLIST 8
SceneCmd hall2_room_0_header03[] = {
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(1),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_HALL2_ROOM_0_HEADER03_OBJECTLIST, hall2_room_0_header03_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER03_ACTORLIST, hall2_room_0_header03_actorList),
    SCENE_CMD_END(),
};

s16 hall2_room_0_header03_objectList[LENGTH_HALL2_ROOM_0_HEADER03_OBJECTLIST] = {
    OBJECT_GS,
    OBJECT_KANBAN,
    OBJECT_MAMENOKI,
    OBJECT_KM1,
    OBJECT_KW1,
    OBJECT_OS_ANIME,
    OBJECT_ST,
};

ActorEntry hall2_room_0_header03_actorList[LENGTH_HALL2_ROOM_0_HEADER03_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { 45, 0, -272 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF01
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -608, 120, 1022 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(225.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF02
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -1415, -74, -108 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(90.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF03
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { 669, 0, 521 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(189.998), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF04
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { 853, 100, -311 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF05
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -678, 1, -179 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(77.997), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF06
    },

    // Skullwalltula/Golden Skulltula
    {
        /* Actor ID   */ ACTOR_EN_SW,
        /* Position   */ { 1153, 251, 625 },
        /* Rotation   */ { DEG_TO_BINANG(90.000), DEG_TO_BINANG(328.002), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xAD04
    },
};

/**
 * Header Cutscene No. 1
*/
#define LENGTH_HALL2_ROOM_0_HEADER04_ACTORLIST 1
SceneCmd hall2_room_0_header04[] = {
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(12, 0, 0),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER04_ACTORLIST, hall2_room_0_header04_actorList),
    SCENE_CMD_END(),
};

ActorEntry hall2_room_0_header04_actorList[LENGTH_HALL2_ROOM_0_HEADER04_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

/**
 * Header Cutscene No. 2
*/
#define LENGTH_HALL2_ROOM_0_HEADER05_ACTORLIST 1
SceneCmd hall2_room_0_header05[] = {
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(12, 0, 0),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER05_ACTORLIST, hall2_room_0_header05_actorList),
    SCENE_CMD_END(),
};

ActorEntry hall2_room_0_header05_actorList[LENGTH_HALL2_ROOM_0_HEADER05_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

/**
 * Header Cutscene No. 3
*/
#define LENGTH_HALL2_ROOM_0_HEADER06_ACTORLIST 1
SceneCmd hall2_room_0_header06[] = {
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(12, 0, 0),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER06_ACTORLIST, hall2_room_0_header06_actorList),
    SCENE_CMD_END(),
};

ActorEntry hall2_room_0_header06_actorList[LENGTH_HALL2_ROOM_0_HEADER06_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

/**
 * Header Cutscene No. 4
*/
#define LENGTH_HALL2_ROOM_0_HEADER07_OBJECTLIST 6
#define LENGTH_HALL2_ROOM_0_HEADER07_ACTORLIST 9
SceneCmd hall2_room_0_header07[] = {
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(12, 0, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_HALL2_ROOM_0_HEADER07_OBJECTLIST, hall2_room_0_header07_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER07_ACTORLIST, hall2_room_0_header07_actorList),
    SCENE_CMD_END(),
};

s16 hall2_room_0_header07_objectList[LENGTH_HALL2_ROOM_0_HEADER07_OBJECTLIST] = {
    OBJECT_SA,
    OBJECT_KM1,
    OBJECT_KW1,
    OBJECT_MD,
    OBJECT_OS_ANIME,
    OBJECT_KANBAN,
};

ActorEntry hall2_room_0_header07_actorList[LENGTH_HALL2_ROOM_0_HEADER07_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { 669, 0, 521 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(189.998), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF04
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -340, 0, -414 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF00
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { 62, 0, -258 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(8.998), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF01
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -641, 120, 454 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(163.998), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF02
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -1472, -80, -294 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(90.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0003
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { 853, 102, -311 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF05
    },

    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -638, 1, -165 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(138.999), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0xFF06
    },

    // Mido
    {
        /* Actor ID   */ ACTOR_EN_MD,
        /* Position   */ { 1522, 0, 105 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(264.001), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0100
    },
};

/**
 * Header Cutscene No. 5
*/
#define LENGTH_HALL2_ROOM_0_HEADER08_OBJECTLIST 9
#define LENGTH_HALL2_ROOM_0_HEADER08_ACTORLIST 1
SceneCmd hall2_room_0_header08[] = {
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 127),
    SCENE_CMD_OBJECT_LIST(LENGTH_HALL2_ROOM_0_HEADER08_OBJECTLIST, hall2_room_0_header08_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER08_ACTORLIST, hall2_room_0_header08_actorList),
    SCENE_CMD_END(),
};

s16 hall2_room_0_header08_objectList[LENGTH_HALL2_ROOM_0_HEADER08_OBJECTLIST] = {
    OBJECT_SPOT04_OBJECTS,
    OBJECT_GI_JEWEL,
    OBJECT_MJIN,
    OBJECT_MJIN_OKA,
    OBJECT_SA,
    OBJECT_KM1,
    OBJECT_KW1,
    OBJECT_MD,
    OBJECT_OS_ANIME,
};

ActorEntry hall2_room_0_header08_actorList[LENGTH_HALL2_ROOM_0_HEADER08_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

/**
 * Header Cutscene No. 6
*/
#define LENGTH_HALL2_ROOM_0_HEADER09_OBJECTLIST 9
#define LENGTH_HALL2_ROOM_0_HEADER09_ACTORLIST 1
SceneCmd hall2_room_0_header09[] = {
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 127),
    SCENE_CMD_OBJECT_LIST(LENGTH_HALL2_ROOM_0_HEADER09_OBJECTLIST, hall2_room_0_header09_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER09_ACTORLIST, hall2_room_0_header09_actorList),
    SCENE_CMD_END(),
};

s16 hall2_room_0_header09_objectList[LENGTH_HALL2_ROOM_0_HEADER09_OBJECTLIST] = {
    OBJECT_SPOT04_OBJECTS,
    OBJECT_GI_JEWEL,
    OBJECT_MJIN,
    OBJECT_MJIN_OKA,
    OBJECT_SA,
    OBJECT_KM1,
    OBJECT_KW1,
    OBJECT_MD,
    OBJECT_OS_ANIME,
};

ActorEntry hall2_room_0_header09_actorList[LENGTH_HALL2_ROOM_0_HEADER09_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

/**
 * Header Cutscene No. 7
*/
#define LENGTH_HALL2_ROOM_0_HEADER10_OBJECTLIST 1
#define LENGTH_HALL2_ROOM_0_HEADER10_ACTORLIST 1
SceneCmd hall2_room_0_header10[] = {
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 127),
    SCENE_CMD_OBJECT_LIST(LENGTH_HALL2_ROOM_0_HEADER10_OBJECTLIST, hall2_room_0_header10_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER10_ACTORLIST, hall2_room_0_header10_actorList),
    SCENE_CMD_END(),
};

s16 hall2_room_0_header10_objectList[LENGTH_HALL2_ROOM_0_HEADER10_OBJECTLIST] = {
    OBJECT_SPOT04_OBJECTS,
};

ActorEntry hall2_room_0_header10_actorList[LENGTH_HALL2_ROOM_0_HEADER10_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

/**
 * Header Cutscene No. 8
*/
#define LENGTH_HALL2_ROOM_0_HEADER11_OBJECTLIST 3
#define LENGTH_HALL2_ROOM_0_HEADER11_ACTORLIST 1
SceneCmd hall2_room_0_header11[] = {
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 127),
    SCENE_CMD_OBJECT_LIST(LENGTH_HALL2_ROOM_0_HEADER11_OBJECTLIST, hall2_room_0_header11_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER11_ACTORLIST, hall2_room_0_header11_actorList),
    SCENE_CMD_END(),
};

s16 hall2_room_0_header11_objectList[LENGTH_HALL2_ROOM_0_HEADER11_OBJECTLIST] = {
    OBJECT_SPOT04_OBJECTS,
    OBJECT_WOOD02,
    OBJECT_KANBAN,
};

ActorEntry hall2_room_0_header11_actorList[LENGTH_HALL2_ROOM_0_HEADER11_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

/**
 * Header Cutscene No. 9
*/
#define LENGTH_HALL2_ROOM_0_HEADER12_OBJECTLIST 5
#define LENGTH_HALL2_ROOM_0_HEADER12_ACTORLIST 1
SceneCmd hall2_room_0_header12[] = {
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(12, 0, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_HALL2_ROOM_0_HEADER12_OBJECTLIST, hall2_room_0_header12_objectList),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER12_ACTORLIST, hall2_room_0_header12_actorList),
    SCENE_CMD_END(),
};

s16 hall2_room_0_header12_objectList[LENGTH_HALL2_ROOM_0_HEADER12_OBJECTLIST] = {
    OBJECT_SPOT04_OBJECTS,
    OBJECT_OS_ANIME,
    OBJECT_KM1,
    OBJECT_KW1,
    OBJECT_KANBAN,
};

ActorEntry hall2_room_0_header12_actorList[LENGTH_HALL2_ROOM_0_HEADER12_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

/**
 * Header Cutscene No. 10
*/
#define LENGTH_HALL2_ROOM_0_HEADER13_ACTORLIST 1
SceneCmd hall2_room_0_header13[] = {
    SCENE_CMD_ROOM_SHAPE(&hall2_room_0_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 127),
    SCENE_CMD_ACTOR_LIST(LENGTH_HALL2_ROOM_0_HEADER13_ACTORLIST, hall2_room_0_header13_actorList),
    SCENE_CMD_END(),
};

ActorEntry hall2_room_0_header13_actorList[LENGTH_HALL2_ROOM_0_HEADER13_ACTORLIST] = {
    // Kokiri
    {
        /* Actor ID   */ ACTOR_EN_KO,
        /* Position   */ { -292, 0, -430 },
        /* Rotation   */ { DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000), DEG_TO_BINANG(0.000) },
        /* Parameters */ 0x0000
    },
};

RoomShapeCullable hall2_room_0_shapeHeader = {
    ROOM_SHAPE_TYPE_CULLABLE,
    ARRAY_COUNTU(hall2_room_0_shapeDListsEntry),
    hall2_room_0_shapeDListsEntry,
    hall2_room_0_shapeDListsEntry + ARRAY_COUNTU(hall2_room_0_shapeDListsEntry)
};

RoomShapeCullableEntry hall2_room_0_shapeDListsEntry[1] = {
    {  { 0, -197, 0 }, 3230, hall2_room_0_shapeHeader_entry_0_opaque, NULL }
};

Gfx hall2_room_0_shapeHeader_entry_0_opaque[] = {
	gsSPDisplayList(hall2_room_0_dl_Plane_mesh_layer_Opaque),
	gsSPEndDisplayList(),
};

Vtx hall2_room_0_dl_Plane_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-2284, -197, 2284}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-2284, -197, 2284}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-2284, -197, -2284}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-2284, -197, -2284}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2284, -197, 2284}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2284, -197, 2284}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2284, -197, -2284}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2284, -197, -2284}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx hall2_room_0_dl_Plane_mesh_layer_Opaque_vtx_0[4] = {
	{{ {-2284, -197, 2284}, 0, {-16, 1008}, {0, 127, 0, 255} }},
	{{ {2284, -197, 2284}, 0, {1008, 1008}, {0, 127, 0, 255} }},
	{{ {2284, -197, -2284}, 0, {1008, -16}, {0, 127, 0, 255} }},
	{{ {-2284, -197, -2284}, 0, {-16, -16}, {0, 127, 0, 255} }},
};

Gfx hall2_room_0_dl_Plane_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(hall2_room_0_dl_Plane_mesh_layer_Opaque_vtx_0 + 0, 4, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSPEndDisplayList(),
};

Gfx mat_hall2_room_0_dl_f3dlite_material_113_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 49, 42, 117, 255),
	gsSPEndDisplayList(),
};

Gfx hall2_room_0_dl_Plane_mesh_layer_Opaque[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(hall2_room_0_dl_Plane_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_hall2_room_0_dl_f3dlite_material_113_layerOpaque),
	gsSPDisplayList(hall2_room_0_dl_Plane_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

