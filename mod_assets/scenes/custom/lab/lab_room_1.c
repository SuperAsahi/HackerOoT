#include "lab_scene.h"


/**
 * Header Child Day (Default)
*/
#define LENGTH_LAB_ROOM_1_HEADER00_OBJECTLIST 2
SceneCmd lab_room_1_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&lab_room_1_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_OBJECT_LIST(LENGTH_LAB_ROOM_1_HEADER00_OBJECTLIST, lab_room_1_header00_objectList),
    SCENE_CMD_END(),
};

s16 lab_room_1_header00_objectList[LENGTH_LAB_ROOM_1_HEADER00_OBJECTLIST] = {
    OBJECT_IM,
    OBJECT_BDOOR,
};

RoomShapeNormal lab_room_1_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(lab_room_1_shapeDListsEntry),
    lab_room_1_shapeDListsEntry,
    lab_room_1_shapeDListsEntry + ARRAY_COUNT(lab_room_1_shapeDListsEntry)
};

RoomShapeDListsEntry lab_room_1_shapeDListsEntry[0] = {
    
};

