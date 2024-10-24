#ifndef FOREST_SCENE_H
#define FOREST_SCENE_H

#include "ultra64.h"
#include "macros.h"
#include "z64.h"


extern SceneCmd forest_scene_header00[];
extern RomFile forest_scene_roomList[];
extern u8 _forest_room_0SegmentRomStart[];
extern u8 _forest_room_0SegmentRomEnd[];
extern u8 _forest_room_1SegmentRomStart[];
extern u8 _forest_room_1SegmentRomEnd[];
extern ActorEntry forest_scene_header00_playerEntryList[];
extern Spawn forest_scene_header00_entranceList[];
extern TransitionActorEntry forest_scene_header00_transitionActors[];
extern u16 forest_scene_header00_exitList[3];
extern EnvLightSettings forest_scene_header00_lightSettings[4];
extern CollisionHeader forest_scene_collisionHeader;
extern Vec3s forest_scene_camPosData[];
extern BgCamInfo forest_scene_bgCamInfo[];
extern SurfaceType forest_scene_polygonTypes[4];
extern Vec3s forest_scene_vertices[331];
extern CollisionPoly forest_scene_polygons[570];
extern u64 forest_room_0_dl_takaraya_room_0Tex_004BE0_rgba16_ci8[];
extern u64 forest_room_0_dl_takaraya_room_0Tex_004BE0_rgba16_pal_rgba16[];
extern Gfx mat_forest_room_0_dl_wood_layerOpaque[];
extern SceneCmd forest_room_0_header00[];
extern s16 forest_room_0_header00_objectList[];
extern ActorEntry forest_room_0_header00_actorList[];
extern Gfx forest_room_0_shapeHeader_entry_0_opaque[];
extern Gfx forest_room_0_shapeHeader_entry_0_transparent[];
extern u64 forest_room_0_dl_donotenter_rgba16_rgba16[];
extern u64 forest_room_0_dl_spot16_sceneTex_00CD98_rgba16_ci8[];
extern u64 forest_room_0_dl_spot16_sceneTex_00CD98_rgba16_x_spot16_sceneTex_017E98_rgba16_pal_rgba16[];
extern u64 forest_room_0_dl_spot16_sceneTex_017E98_rgba16_ci8[];
extern u64 forest_room_0_dl_spot02_sceneTex_00B080_rgba16_ci8[];
extern u64 forest_room_0_dl_spot02_sceneTex_00B080_rgba16_pal_rgba16[];
extern u64 forest_room_0_dl_spot00_sceneTex_019B98_rgba16_rgba16[];
extern u64 forest_room_0_dl_spot04_sceneTex_00EA18_i4_i8[];
extern u64 forest_room_0_dl_spot20_sceneTex_00BDE0_ci8_ci8[];
extern u64 forest_room_0_dl_spot20_sceneTex_00BDE0_ci8_pal_rgba16[];
extern Vtx forest_room_0_dl_do_not_enterMesh_mesh_layer_Opaque_vtx_cull[8];
extern Vtx forest_room_0_dl_do_not_enterMesh_mesh_layer_Opaque_vtx_0[32];
extern Gfx forest_room_0_dl_do_not_enterMesh_mesh_layer_Opaque_tri_0[];
extern Vtx forest_room_0_dl_Floor_mesh_layer_Opaque_vtx_cull[8];
extern Vtx forest_room_0_dl_Floor_mesh_layer_Opaque_vtx_0[448];
extern Gfx forest_room_0_dl_Floor_mesh_layer_Opaque_tri_0[];
extern Vtx forest_room_0_dl_Floor_mesh_layer_Opaque_vtx_1[90];
extern Gfx forest_room_0_dl_Floor_mesh_layer_Opaque_tri_1[];
extern Vtx forest_room_0_dl_Floor_mesh_layer_Opaque_vtx_2[76];
extern Gfx forest_room_0_dl_Floor_mesh_layer_Opaque_tri_2[];
extern Vtx forest_room_0_dl_Floor_mesh_layer_Opaque_vtx_3[58];
extern Gfx forest_room_0_dl_Floor_mesh_layer_Opaque_tri_3[];
extern Vtx forest_room_0_dl_Plane_001_mesh_layer_Transparent_vtx_cull[8];
extern Vtx forest_room_0_dl_Plane_001_mesh_layer_Transparent_vtx_0[4];
extern Gfx forest_room_0_dl_Plane_001_mesh_layer_Transparent_tri_0[];
extern Vtx forest_room_0_dl_shack_mesh_layer_Opaque_vtx_cull[8];
extern Vtx forest_room_0_dl_shack_mesh_layer_Opaque_vtx_0[28];
extern Gfx forest_room_0_dl_shack_mesh_layer_Opaque_tri_0[];
extern Vtx forest_room_0_dl_shack_mesh_layer_Opaque_vtx_1[25];
extern Gfx forest_room_0_dl_shack_mesh_layer_Opaque_tri_1[];
extern Vtx forest_room_0_dl_shack_mesh_layer_Opaque_vtx_2[8];
extern Gfx forest_room_0_dl_shack_mesh_layer_Opaque_tri_2[];
extern Gfx mat_forest_room_0_dl_do_not_enter_layerOpaque[];
extern Gfx mat_forest_room_0_dl_undergrowth_layerOpaque[];
extern Gfx mat_forest_room_0_dl_path_layerOpaque[];
extern Gfx mat_forest_room_0_dl_f3dlite_material_001_layerOpaque[];
extern Gfx mat_forest_room_0_dl_trees_layerOpaque[];
extern Gfx mat_forest_room_0_dl_trans_02_layerTransparent[];
extern Gfx mat_forest_room_0_dl_f3dlite_material_layerOpaque[];
extern Gfx mat_forest_room_0_dl_roof_layerOpaque[];
extern Gfx forest_room_0_dl_do_not_enterMesh_mesh_layer_Opaque[];
extern Gfx forest_room_0_dl_Floor_mesh_layer_Opaque[];
extern Gfx forest_room_0_dl_Plane_001_mesh_layer_Transparent[];
extern Gfx forest_room_0_dl_shack_mesh_layer_Opaque[];
extern RoomShapeNormal forest_room_0_shapeHeader;
extern RoomShapeDListsEntry forest_room_0_shapeDListsEntry[1];
extern SceneCmd forest_room_1_header00[];
extern s16 forest_room_1_header00_objectList[];
extern Gfx forest_room_1_shapeHeader_entry_0_opaque[];
extern Gfx forest_room_1_shapeHeader_entry_0_transparent[];
extern Vtx forest_room_1_dl_Plane_mesh_layer_Transparent_vtx_cull[8];
extern Vtx forest_room_1_dl_Plane_mesh_layer_Transparent_vtx_0[8];
extern Gfx forest_room_1_dl_Plane_mesh_layer_Transparent_tri_0[];
extern Vtx forest_room_1_dl_shack_001_mesh_layer_Opaque_vtx_cull[8];
extern Vtx forest_room_1_dl_shack_001_mesh_layer_Opaque_vtx_0[175];
extern Gfx forest_room_1_dl_shack_001_mesh_layer_Opaque_tri_0[];
extern Vtx forest_room_1_dl_shack_001_mesh_layer_Opaque_vtx_1[4];
extern Gfx forest_room_1_dl_shack_001_mesh_layer_Opaque_tri_1[];
extern Vtx forest_room_1_dl_shack_001_mesh_layer_Opaque_vtx_2[16];
extern Gfx forest_room_1_dl_shack_001_mesh_layer_Opaque_tri_2[];
extern Gfx mat_forest_room_1_dl_trans_01_layerTransparent[];
extern Gfx mat_forest_room_1_dl_black_layerOpaque[];
extern Gfx mat_forest_room_1_dl_wood_vertex_layerOpaque[];
extern Gfx forest_room_1_dl_Plane_mesh_layer_Transparent[];
extern Gfx forest_room_1_dl_shack_001_mesh_layer_Opaque[];
extern RoomShapeNormal forest_room_1_shapeHeader;
extern RoomShapeDListsEntry forest_room_1_shapeDListsEntry[1];

#endif
