#ifndef HALL2_SCENE_H
#define HALL2_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd hall2_scene_header00[];
extern RomFile hall2_scene_roomList[];
extern u8 _hall2_room_0SegmentRomStart[];
extern u8 _hall2_room_0SegmentRomEnd[];
extern ActorEntry hall2_scene_header00_playerEntryList[];
extern Spawn hall2_scene_header00_entranceList[];
extern u16 hall2_scene_header00_exitList[1];
extern EnvLightSettings hall2_scene_header00_lightSettings[4];
extern CollisionHeader hall2_scene_collisionHeader;
extern Vec3s hall2_scene_camPosData[];
extern BgCamInfo hall2_scene_bgCamInfo[];
extern SurfaceType hall2_scene_polygonTypes[3];
extern Vec3s hall2_scene_vertices[93];
extern CollisionPoly hall2_scene_polygons[98];
extern SceneCmd hall2_room_0_header00[];
extern Gfx hall2_room_0_shapeHeader_entry_0_opaque[];
extern Gfx hall2_room_0_shapeHeader_entry_0_transparent[];
extern u64 hall2_room_0_dl_hakasitarelay_room_2Tex_006CA8_i8_i8[];
extern u64 hall2_room_0_dl_wall_i4_i4[];
extern Vtx hall2_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx hall2_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[4];
extern Gfx hall2_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Vtx hall2_room_0_dl_Plane_mesh_layer_Transparent_vtx_cull[8];
extern Vtx hall2_room_0_dl_Plane_mesh_layer_Transparent_vtx_0[4];
extern Gfx hall2_room_0_dl_Plane_mesh_layer_Transparent_tri_0[];
extern Vtx hall2_room_0_dl_stairs_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx hall2_room_0_dl_stairs_001_mesh_layer_Opaque_vtx_0[159];
extern Gfx hall2_room_0_dl_stairs_001_mesh_layer_Opaque_tri_0[];
extern Vtx hall2_room_0_dl_stairs_001_mesh_layer_Opaque_vtx_1[21];
extern Gfx hall2_room_0_dl_stairs_001_mesh_layer_Opaque_tri_1[];
extern Gfx mat_hall2_room_0_dl_floor_mat_layerOpaque[];
extern Gfx mat_hall2_room_0_dl_trans01_layerTransparent[];
extern Gfx mat_hall2_room_0_dl_stairs_layerOpaque[];
extern Gfx mat_hall2_room_0_dl_siding_textured_layerOpaque[];
extern Gfx hall2_room_0_dl_Floor_mesh_layer_Opaque[];
extern Gfx hall2_room_0_dl_Plane_mesh_layer_Transparent[];
extern Gfx hall2_room_0_dl_stairs_001_mesh_layer_Opaque[];
extern RoomShapeNormal hall2_room_0_shapeHeader;
extern RoomShapeDListsEntry hall2_room_0_shapeDListsEntry[1];

#endif
