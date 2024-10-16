#ifndef HALLWAY_SCENE_H
#define HALLWAY_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd hallway_scene_header00[];
extern RomFile hallway_scene_roomList[];
extern u8 _hallway_room_0SegmentRomStart[];
extern u8 _hallway_room_0SegmentRomEnd[];
extern ActorEntry hallway_scene_header00_playerEntryList[];
extern Spawn hallway_scene_header00_entranceList[];
extern u16 hallway_scene_header00_exitList[2];
extern EnvLightSettings hallway_scene_header00_lightSettings[4];
extern CollisionHeader hallway_scene_collisionHeader;
extern Vec3s hallway_scene_camPosData[];
extern BgCamInfo hallway_scene_bgCamInfo[];
extern SurfaceType hallway_scene_polygonTypes[3];
extern Vec3s hallway_scene_vertices[151];
extern CollisionPoly hallway_scene_polygons[161];
extern SceneCmd hallway_room_0_header00[];
extern Gfx hallway_room_0_shapeHeader_entry_0_opaque[];
extern u64 hallway_room_0_dl_spot05_sceneTex_00E360_i4_i8[];
extern u64 hallway_room_0_dl_hakasitarelay_room_2Tex_006CA8_i8_i8[];
extern Vtx hallway_room_0_dl_Cylinder_mesh_layer_Opaque_vtx_cull[8];
extern Vtx hallway_room_0_dl_Cylinder_mesh_layer_Opaque_vtx_0[52];
extern Gfx hallway_room_0_dl_Cylinder_mesh_layer_Opaque_tri_0[];
extern Vtx hallway_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx hallway_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[4];
extern Gfx hallway_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Vtx hallway_room_0_dl_stairs_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx hallway_room_0_dl_stairs_001_mesh_layer_Opaque_vtx_0[67];
extern Gfx hallway_room_0_dl_stairs_001_mesh_layer_Opaque_tri_0[];
extern Vtx hallway_room_0_dl_stairs_002_mesh_layer_Opaque_vtx_cull[8];
extern Vtx hallway_room_0_dl_stairs_002_mesh_layer_Opaque_vtx_0[183];
extern Gfx hallway_room_0_dl_stairs_002_mesh_layer_Opaque_tri_0[];
extern Gfx mat_hallway_room_0_dl_f3dlite_material_001_layerOpaque[];
extern Gfx mat_hallway_room_0_dl_stairs_001_layerOpaque[];
extern Gfx hallway_room_0_dl_Cylinder_mesh_layer_Opaque[];
extern Gfx hallway_room_0_dl_Floor_mesh_layer_Opaque[];
extern Gfx hallway_room_0_dl_stairs_001_mesh_layer_Opaque[];
extern Gfx hallway_room_0_dl_stairs_002_mesh_layer_Opaque[];
extern RoomShapeNormal hallway_room_0_shapeHeader;
extern RoomShapeDListsEntry hallway_room_0_shapeDListsEntry[1];

#endif
