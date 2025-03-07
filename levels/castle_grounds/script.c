#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"
#include "make_const_nonconst.h"
#include "levels/castle_grounds/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bbh_skybox_yay0SegmentRomStart, _bbh_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group10_yay0SegmentRomStart, _group10_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_11), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, castle_grounds_geo_0006F4), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_WARP_PIPE, warp_pipe_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_VCUTM_GRILL, castle_grounds_geo_00070C), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_FLAG, castle_grounds_geo_000660), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_GROUNDS_CANNON_GRILL, castle_grounds_geo_000724), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_CASTLE_GROUNDS, 0x02, 0x0E, WARP_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_CASTLE_GROUNDS, 0x02, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_CASTLE_GROUNDS, 0x02, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_CASTLE_GROUNDS, 0x02, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_CASTLE_GROUNDS, 0x02, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x08, LEVEL_CASTLE_GROUNDS, 0x02, 0x05, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_RED_FLAME, -1595, 16, 1156, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -1671, 16, 1110, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -1671, 16, 1205, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -1670, 75, 1156, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_HEART, -1605, 738, -507, 0, 0, 0, 0x00000000, bhvRecoveryHeart),
		MARIO_POS(0x01, -180, -13, 80, 1727),
		OBJECT(MODEL_BOBOMB_BUDDY, -1232, 0, -892, 0, 39, 0, (0x00 << 16), bhvBobombBuddy),
		OBJECT(MODEL_NONE, -1872, 1671, 1047, 0, 0, 0, (0x01 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -2040, 1671, 1047, 0, 0, 0, (0x02 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -1872, 1671, 1234, 0, 0, 0, (0x03 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -2040, 1671, 1234, 0, 0, 0, (0x04 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -1956, 1362, 1140, 0, 0, 0, (0x07 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -1958, 1671, 1141, 0, 0, 0, (0x08 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 22, 0, -1347, 0, 0, 0, (0x0D << 16), bhvWarp),
		OBJECT(MODEL_NONE, -13, 80, 1727, 0, -180, 0, (0xF1 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -13, 80, 1727, 0, -180, 0, (0xF0 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -13, 80, 1727, 0, -180, 0, (0x0A << 16), bhvSpinAirborneWarp),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, castle_grounds_area_2),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x02, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x02, 0xF1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_CASTLE_GROUNDS, 0x01, 0x0D, WARP_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_CASTLE_GROUNDS, 0x01, 0x07, WARP_NO_CHECKPOINT),
		WARP_NODE(0xB1, LEVEL_CASTLE_GROUNDS, 0x03, 0xB0, WARP_CHECKPOINT),
		OBJECT(MODEL_NONE, 7781, -49, -8108, 0, 0, 0, (0x01 << 24) | (0x08 << 16), bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, 6934, 2283, -10244, 0, -180, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4441, -249, -10608, 0, -180, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4441, -249, -10399, 0, -180, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4441, -249, -10119, 0, -180, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4441, -249, -9856, 0, -180, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4441, -249, -9487, 0, -180, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4441, -249, -9068, 0, -180, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 4441, -249, -8608, 0, -180, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 6812, 3810, -12142, 0, -90, 0, (0x05 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 7052, 3375, -12151, 0, -90, 0, (0x06 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 6216, 2185, -11618, 0, 0, 0, (0x0C << 16), bhvWarp),
		OBJECT(MODEL_NONE, 6216, 2142, -11326, 0, 0, 0, (0x0E << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, 9477, -1703, -4861, 0, 0, 0, (0xB1 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 9418, -1867, -4296, 0, 0, 0, (0xB3 << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, 5930, 1759, -10704, 0, -14, 0, (0xF1 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 5930, 1759, -10704, 0, -14, 0, (0xF0 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 5930, 1759, -10704, 0, -14, 0, (0x0A << 16), bhvSpinAirborneWarp),
		TERRAIN(castle_grounds_area_2_collision),
		MACRO_OBJECTS(castle_grounds_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(3, castle_grounds_area_3),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x03, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x03, 0xF1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x03, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xB2, LEVEL_CASTLE_GROUNDS, 0x02, 0xB3, WARP_CHECKPOINT),
		OBJECT(MODEL_NONE, -7357, 3665, -1537, 0, 0, 0, 0x00000000, bhvLeafParticleSpawner),
		OBJECT(MODEL_NONE, -7363, 576, -2014, 0, -3, 0, 0x00000000, bhvGiantPole),
		OBJECT(MODEL_NONE, -6484, 0, 2608, 0, 0, 0, (0xB0 << 16), bhvInstantActiveWarp),
		OBJECT(MODEL_NONE, -6544, 135, 4122, 0, 179, 0, (0xB2 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -6676, 80, 2047, 0, 21, 0, (0xF1 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -6676, 80, 2047, 0, 21, 0, (0xF0 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, -6676, 80, 2047, 0, 21, 0, (0x0A << 16), bhvSpinAirborneWarp),
		TERRAIN(castle_grounds_area_3_collision),
		MACRO_OBJECTS(castle_grounds_area_3_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, -13, 80, 1727),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};