#ifndef SPIRAL_SCENE_H
#define SPIRAL_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd spiral_scene_header00[];
extern RomFile spiral_scene_roomList[];
extern u8 _spiral_room_0SegmentRomStart[];
extern u8 _spiral_room_0SegmentRomEnd[];
extern ActorEntry spiral_scene_header00_playerEntryList[];
extern Spawn spiral_scene_header00_entranceList[];
extern u16 spiral_scene_header00_exitList[1];
extern EnvLightSettings spiral_scene_header00_lightSettings[4];
extern CollisionHeader spiral_scene_collisionHeader;
extern SurfaceType spiral_scene_polygonTypes[2];
extern Vec3s spiral_scene_vertices[15];
extern CollisionPoly spiral_scene_polygons[13];
extern SceneCmd spiral_room_0_header00[];
extern Gfx spiral_room_0_shapeHeader_entry_0_opaque[];
extern Vtx spiral_room_0_dl_Plane_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx spiral_room_0_dl_Plane_001_mesh_layer_Opaque_vtx_0[128];
extern Gfx spiral_room_0_dl_Plane_001_mesh_layer_Opaque_tri_0[];
extern Vtx spiral_room_0_dl_Plane_003_mesh_layer_Opaque_vtx_cull[8];
extern Vtx spiral_room_0_dl_Plane_003_mesh_layer_Opaque_vtx_0[3];
extern Gfx spiral_room_0_dl_Plane_003_mesh_layer_Opaque_tri_0[];
extern Gfx mat_spiral_room_0_dl_floor_intag_layerOpaque[];
extern Gfx mat_spiral_room_0_dl_floor_layerOpaque[];
extern Gfx spiral_room_0_dl_Plane_001_mesh_layer_Opaque[];
extern Gfx spiral_room_0_dl_Plane_003_mesh_layer_Opaque[];
extern RoomShapeNormal spiral_room_0_shapeHeader;
extern RoomShapeDListsEntry spiral_room_0_shapeDListsEntry[1];

#endif
