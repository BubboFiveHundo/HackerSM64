#include "src/game/envfx_snow.h"

const GeoLayout castle_grounds_area_4_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2518, 2624, -9258, 0, 76, 90, castle_grounds_dl_Cube_012_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 532, 4781, -12170, castle_grounds_dl_Cube_017_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_ALPHA, -920, 4053, -11919, castle_grounds_dl_Cube_023_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 960, 1385, -6358, 0, 109, 90, castle_grounds_dl_Cube_026_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1039, 1368, -6210, -9, 106, 118, castle_grounds_dl_Cube_027_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 3683, 2081, 439, 0, 118, 90, castle_grounds_dl_Cube_028_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 3973, 2708, 4790, castle_grounds_dl_Cube_029_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 2108, 3266, 4060, 0, -19, 0, castle_grounds_dl_Cube_030_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 954, 4138, 5059, 0, 42, 0, castle_grounds_dl_Cube_031_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 1592, 2218, 1443, castle_grounds_dl_Cube_032_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 847, 2261, 2480, castle_grounds_dl_Cube_033_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1013, 2564, 3576, 0, 4, 0, castle_grounds_dl_Cube_034_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1281, 2468, 6685, 0, 4, 0, castle_grounds_dl_Cube_035_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 319, 4781, 7177, 0, 4, 0, castle_grounds_dl_Cube_036_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1037, 3721, 8133, 0, 4, 0, castle_grounds_dl_Cube_037_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1281, 2468, 6685, 0, 4, 0, castle_grounds_dl_Cube_038_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4433, 2468, 6907, 0, 4, 0, castle_grounds_dl_Cube_039_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6768, 2468, 7072, 0, 4, 0, castle_grounds_dl_Cube_040_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7654, 2495, 11914, 90, 0, -108, castle_grounds_dl_Cube_041_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7654, 4911, 11914, 90, 0, -108, castle_grounds_dl_Cube_042_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7654, 4911, 11914, 90, 0, -108, castle_grounds_dl_Cube_043_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -8806, 2700, 8992, 0, 19, 0, castle_grounds_dl_Cube_044_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 0, 1303, -4013, castle_grounds_dl_Cylinder_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1301, 796, -3123, 0, 65, 0, castle_grounds_dl_Cylinder_007_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_TRANSPARENT, 0, 1303, -4013, castle_grounds_dl_LightRayUFOInterior_mesh_layer_5),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout castle_grounds_area_4[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, castle_grounds_area_4_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
