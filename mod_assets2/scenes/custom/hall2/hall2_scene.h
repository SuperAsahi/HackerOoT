#ifndef HALL2_SCENE_H
#define HALL2_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd hall2_scene_header00[];
extern SceneCmd* hall2_scene_alternateHeaders[];
extern RomFile hall2_scene_roomList[];
extern u8 _hall2_room_0SegmentRomStart[];
extern u8 _hall2_room_0SegmentRomEnd[];
extern ActorEntry hall2_scene_header00_playerEntryList[];
extern Spawn hall2_scene_header00_entranceList[];
extern u16 hall2_scene_header00_exitList[12];
extern EnvLightSettings hall2_scene_header00_lightSettings[4];
extern SceneCmd hall2_scene_header02[];
extern ActorEntry hall2_scene_header02_playerEntryList[];
extern Spawn hall2_scene_header02_entranceList[];
extern u16 hall2_scene_header02_exitList[12];
extern SceneCmd hall2_scene_header03[];
extern ActorEntry hall2_scene_header03_playerEntryList[];
extern Spawn hall2_scene_header03_entranceList[];
extern u16 hall2_scene_header03_exitList[12];
extern SceneCmd hall2_scene_header04[];
extern u16 hall2_scene_header04_exitList[6];
extern SceneCmd hall2_scene_header05[];
extern u16 hall2_scene_header05_exitList[8];
extern SceneCmd hall2_scene_header06[];
extern u16 hall2_scene_header06_exitList[8];
extern SceneCmd hall2_scene_header07[];
extern u16 hall2_scene_header07_exitList[10];
extern SceneCmd hall2_scene_header08[];
extern u16 hall2_scene_header08_exitList[10];
extern SceneCmd hall2_scene_header09[];
extern u16 hall2_scene_header09_exitList[10];
extern SceneCmd hall2_scene_header10[];
extern u16 hall2_scene_header10_exitList[10];
extern SceneCmd hall2_scene_header11[];
extern u16 hall2_scene_header11_exitList[10];
extern SceneCmd hall2_scene_header12[];
extern u16 hall2_scene_header12_exitList[10];
extern SceneCmd hall2_scene_header13[];
extern u16 hall2_scene_header13_exitList[10];
extern CollisionHeader hall2_scene_collisionHeader;
extern SurfaceType hall2_scene_polygonTypes[1];
extern Vec3s hall2_scene_vertices[4];
extern CollisionPoly hall2_scene_polygons[2];
extern SceneCmd* hall2_room_0_alternateHeaders[];
extern SceneCmd hall2_room_0_header00[];
extern s16 hall2_room_0_header00_objectList[];
extern ActorEntry hall2_room_0_header00_actorList[];
extern SceneCmd hall2_room_0_header02[];
extern s16 hall2_room_0_header02_objectList[];
extern ActorEntry hall2_room_0_header02_actorList[];
extern SceneCmd hall2_room_0_header03[];
extern s16 hall2_room_0_header03_objectList[];
extern ActorEntry hall2_room_0_header03_actorList[];
extern SceneCmd hall2_room_0_header04[];
extern ActorEntry hall2_room_0_header04_actorList[];
extern SceneCmd hall2_room_0_header05[];
extern ActorEntry hall2_room_0_header05_actorList[];
extern SceneCmd hall2_room_0_header06[];
extern ActorEntry hall2_room_0_header06_actorList[];
extern SceneCmd hall2_room_0_header07[];
extern s16 hall2_room_0_header07_objectList[];
extern ActorEntry hall2_room_0_header07_actorList[];
extern SceneCmd hall2_room_0_header08[];
extern s16 hall2_room_0_header08_objectList[];
extern ActorEntry hall2_room_0_header08_actorList[];
extern SceneCmd hall2_room_0_header09[];
extern s16 hall2_room_0_header09_objectList[];
extern ActorEntry hall2_room_0_header09_actorList[];
extern SceneCmd hall2_room_0_header10[];
extern s16 hall2_room_0_header10_objectList[];
extern ActorEntry hall2_room_0_header10_actorList[];
extern SceneCmd hall2_room_0_header11[];
extern s16 hall2_room_0_header11_objectList[];
extern ActorEntry hall2_room_0_header11_actorList[];
extern SceneCmd hall2_room_0_header12[];
extern s16 hall2_room_0_header12_objectList[];
extern ActorEntry hall2_room_0_header12_actorList[];
extern SceneCmd hall2_room_0_header13[];
extern ActorEntry hall2_room_0_header13_actorList[];
extern Gfx hall2_room_0_shapeHeader_entry_0_opaque[];
extern Vtx hall2_room_0_dl_Plane_mesh_layer_Opaque_vtx_cull[8];
extern Vtx hall2_room_0_dl_Plane_mesh_layer_Opaque_vtx_0[4];
extern Gfx hall2_room_0_dl_Plane_mesh_layer_Opaque_tri_0[];
extern Gfx mat_hall2_room_0_dl_f3dlite_material_113_layerOpaque[];
extern Gfx hall2_room_0_dl_Plane_mesh_layer_Opaque[];
extern RoomShapeCullable hall2_room_0_shapeHeader;
extern RoomShapeCullableEntry hall2_room_0_shapeDListsEntry[1];

#endif
