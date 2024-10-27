#include "lab_scene.h"


/**
 * Header Child Day (Default)
*/
SceneCmd lab_room_2_header00[] = {
    SCENE_CMD_ROOM_SHAPE(&lab_room_2_shapeHeader),
    SCENE_CMD_ECHO_SETTINGS(0x00),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_END(),
};

RoomShapeNormal lab_room_2_shapeHeader = {
    ROOM_SHAPE_TYPE_NORMAL,
    ARRAY_COUNT(lab_room_2_shapeDListsEntry),
    lab_room_2_shapeDListsEntry,
    lab_room_2_shapeDListsEntry + ARRAY_COUNT(lab_room_2_shapeDListsEntry)
};

RoomShapeDListsEntry lab_room_2_shapeDListsEntry[0] = {
    
};

