#ifndef GAMES_SCENE_H
#define GAMES_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd games_scene_header00[];
extern RomFile games_scene_roomList[];
extern u8 _games_room_0SegmentRomStart[];
extern u8 _games_room_0SegmentRomEnd[];
extern u8 _games_room_1SegmentRomStart[];
extern u8 _games_room_1SegmentRomEnd[];
extern u8 _games_room_2SegmentRomStart[];
extern u8 _games_room_2SegmentRomEnd[];
extern ActorEntry games_scene_header00_playerEntryList[];
extern Spawn games_scene_header00_entranceList[];
extern u16 games_scene_header00_exitList[3];
extern EnvLightSettings games_scene_header00_lightSettings[4];
extern CollisionHeader games_scene_collisionHeader;
extern Vec3s games_scene_camPosData[];
extern BgCamInfo games_scene_bgCamInfo[];
extern SurfaceType games_scene_polygonTypes[4];
extern Vec3s games_scene_vertices[328];
extern CollisionPoly games_scene_polygons[590];
extern Gfx mat_games_room_1_dl_f3dlite_material_layerOpaque[];
extern SceneCmd games_room_0_header00[];
extern s16 games_room_0_header00_objectList[];
extern ActorEntry games_room_0_header00_actorList[];
extern Gfx games_room_0_shapeHeader_entry_0_opaque[];
extern Gfx games_room_0_shapeHeader_entry_0_transparent[];
extern Vtx games_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx games_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[765];
extern Gfx games_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Vtx games_room_0_dl_Plane_003_mesh_layer_Transparent_vtx_cull[8];
extern Vtx games_room_0_dl_Plane_003_mesh_layer_Transparent_vtx_0[4];
extern Gfx games_room_0_dl_Plane_003_mesh_layer_Transparent_tri_0[];
extern Gfx mat_games_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mat_games_room_0_dl_trans_layerTransparent[];
extern Gfx games_room_0_dl_Floor_mesh_layer_Opaque[];
extern Gfx games_room_0_dl_Plane_003_mesh_layer_Transparent[];
extern RoomShapeNormal games_room_0_shapeHeader;
extern RoomShapeDListsEntry games_room_0_shapeDListsEntry[1];
extern SceneCmd games_room_1_header00[];
extern Gfx games_room_1_shapeHeader_entry_0_opaque[];
extern Gfx games_room_1_shapeHeader_entry_0_transparent[];
extern Vtx games_room_1_dl_floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx games_room_1_dl_floor_mesh_layer_Opaque_vtx_0[4];
extern Gfx games_room_1_dl_floor_mesh_layer_Opaque_tri_0[];
extern Vtx games_room_1_dl_Plane_001_mesh_layer_Transparent_vtx_cull[8];
extern Vtx games_room_1_dl_Plane_001_mesh_layer_Transparent_vtx_0[4];
extern Gfx games_room_1_dl_Plane_001_mesh_layer_Transparent_tri_0[];
extern Gfx mat_games_room_1_dl_trans_002_layerTransparent[];
extern Gfx games_room_1_dl_floor_mesh_layer_Opaque[];
extern Gfx games_room_1_dl_Plane_001_mesh_layer_Transparent[];
extern RoomShapeNormal games_room_1_shapeHeader;
extern RoomShapeDListsEntry games_room_1_shapeDListsEntry[1];
extern SceneCmd games_room_2_header00[];
extern Gfx games_room_2_shapeHeader_entry_0_opaque[];
extern Gfx games_room_2_shapeHeader_entry_0_transparent[];
extern Vtx games_room_2_dl_Plane_mesh_layer_Opaque_vtx_cull[8];
extern Vtx games_room_2_dl_Plane_mesh_layer_Opaque_vtx_0[4];
extern Gfx games_room_2_dl_Plane_mesh_layer_Opaque_tri_0[];
extern Vtx games_room_2_dl_Plane_002_mesh_layer_Transparent_vtx_cull[8];
extern Vtx games_room_2_dl_Plane_002_mesh_layer_Transparent_vtx_0[4];
extern Gfx games_room_2_dl_Plane_002_mesh_layer_Transparent_tri_0[];
extern Gfx mat_games_room_2_dl_trans_003_layerTransparent[];
extern Gfx games_room_2_dl_Plane_mesh_layer_Opaque[];
extern Gfx games_room_2_dl_Plane_002_mesh_layer_Transparent[];
extern RoomShapeNormal games_room_2_shapeHeader;
extern RoomShapeDListsEntry games_room_2_shapeDListsEntry[1];

#endif
