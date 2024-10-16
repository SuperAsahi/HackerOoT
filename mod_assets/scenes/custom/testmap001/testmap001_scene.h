#ifndef TESTMAP001_SCENE_H
#define TESTMAP001_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd testmap001_scene_header00[];
extern RomFile testmap001_scene_roomList[];
extern u8 _testmap001_room_0SegmentRomStart[];
extern u8 _testmap001_room_0SegmentRomEnd[];
extern u8 _testmap001_room_1SegmentRomStart[];
extern u8 _testmap001_room_1SegmentRomEnd[];
extern u8 _testmap001_room_2SegmentRomStart[];
extern u8 _testmap001_room_2SegmentRomEnd[];
extern ActorEntry testmap001_scene_header00_playerEntryList[];
extern Spawn testmap001_scene_header00_entranceList[];
extern TransitionActorEntry testmap001_scene_header00_transitionActors[];
extern EnvLightSettings testmap001_scene_header00_lightSettings[4];
extern CollisionHeader testmap001_scene_collisionHeader;
extern Vec3s testmap001_scene_camPosData[];
extern BgCamInfo testmap001_scene_bgCamInfo[];
extern SurfaceType testmap001_scene_polygonTypes[1];
extern Vec3s testmap001_scene_vertices[36];
extern CollisionPoly testmap001_scene_polygons[42];
extern Gfx mat_testmap001_room_0_dl_floor_mat_layerOpaque[];
extern SceneCmd testmap001_room_0_header00[];
extern s16 testmap001_room_0_header00_objectList[];
extern ActorEntry testmap001_room_0_header00_actorList[];
extern Gfx testmap001_room_0_shapeHeader_entry_0_opaque[];
extern Vtx testmap001_room_0_dl_Cube_mesh_layer_Opaque_vtx_cull[8];
extern Vtx testmap001_room_0_dl_Cube_mesh_layer_Opaque_vtx_0[24];
extern Gfx testmap001_room_0_dl_Cube_mesh_layer_Opaque_tri_0_cel0[];
extern Gfx testmap001_room_0_dl_Cube_mesh_layer_Opaque_tri_0[];
extern Vtx testmap001_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx testmap001_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[4];
extern Gfx testmap001_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Gfx mat_testmap001_room_0_dl_f3dlite_material_layerOpaque[];
extern Gfx testmap001_room_0_dl_Cube_mesh_layer_Opaque[];
extern Gfx testmap001_room_0_dl_Floor_mesh_layer_Opaque[];
extern RoomShapeNormal testmap001_room_0_shapeHeader;
extern RoomShapeDListsEntry testmap001_room_0_shapeDListsEntry[1];
extern SceneCmd testmap001_room_1_header00[];
extern s16 testmap001_room_1_header00_objectList[];
extern ActorEntry testmap001_room_1_header00_actorList[];
extern Gfx testmap001_room_1_shapeHeader_entry_0_opaque[];
extern Vtx testmap001_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx testmap001_room_1_dl_Floor_001_mesh_layer_Opaque_vtx_0[4];
extern Gfx testmap001_room_1_dl_Floor_001_mesh_layer_Opaque_tri_0[];
extern Gfx testmap001_room_1_dl_Floor_001_mesh_layer_Opaque[];
extern RoomShapeNormal testmap001_room_1_shapeHeader;
extern RoomShapeDListsEntry testmap001_room_1_shapeDListsEntry[1];
extern SceneCmd testmap001_room_2_header00[];
extern Gfx testmap001_room_2_shapeHeader_entry_0_opaque[];
extern Vtx testmap001_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_cull[8];
extern Vtx testmap001_room_2_dl_Floor_002_mesh_layer_Opaque_vtx_0[4];
extern Gfx testmap001_room_2_dl_Floor_002_mesh_layer_Opaque_tri_0[];
extern Gfx testmap001_room_2_dl_Floor_002_mesh_layer_Opaque[];
extern RoomShapeNormal testmap001_room_2_shapeHeader;
extern RoomShapeDListsEntry testmap001_room_2_shapeDListsEntry[1];

#endif
