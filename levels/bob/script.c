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
#include "levels/bob/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bbh_skybox_yay0SegmentRomStart, _bbh_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x01, 0xF1, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x01, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0D, LEVEL_CASTLE_GROUNDS, 0x02, 0x0E, WARP_CHECKPOINT),
		WARP_NODE(0x04, LEVEL_CASTLE_GROUNDS, 0x02, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x03, LEVEL_CASTLE_GROUNDS, 0x02, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x02, LEVEL_CASTLE_GROUNDS, 0x02, 0x05, WARP_NO_CHECKPOINT),
		WARP_NODE(0x01, LEVEL_CASTLE_GROUNDS, 0x02, 0x05, WARP_NO_CHECKPOINT),
		MARIO_POS(0x01, -180, 0, 80, 0),
		OBJECT(MODEL_NONE, -1872, 1671, 1047, 0, 0, 0, (0x01 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -2040, 1671, 1047, 0, 0, 0, (0x02 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -1872, 1671, 1234, 0, 0, 0, (0x03 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -2040, 1671, 1234, 0, 0, 0, (0x04 << 16), bhvWarp),
		OBJECT(MODEL_NONE, -1956, 1362, 1140, 0, 0, 0, (0x07 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 22, 0, -1347, 0, 0, 0, (0x0D << 16), bhvWarp),
		OBJECT(MODEL_NONE, 0, 80, 0, 0, -180, 0, (0xF1 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 0, 80, 0, 0, -180, 0, (0xF0 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 0, 80, 0, 0, -180, 0, (0x0A << 16), bhvSpinAirborneWarp),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, bob_area_2),
		WARP_NODE(0x0A, LEVEL_CASTLE_GROUNDS, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_CASTLE_GROUNDS, 0x02, 0xF0, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_CASTLE_GROUNDS, 0x02, 0xF1, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0C, LEVEL_CASTLE_GROUNDS, 0x01, 0x0D, WARP_CHECKPOINT),
		WARP_NODE(0x06, LEVEL_CASTLE_GROUNDS, 0x01, 0x07, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_STAR, 5079, -417, -8077, 0, 0, 0, (0x01 << 24) | (0x08 << 16), bhvHiddenRedCoinStar),
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
		OBJECT(MODEL_NONE, 5930, 1759, -10704, 0, -14, 0, (0xF1 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 5930, 1759, -10704, 0, -14, 0, (0xF0 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 5930, 1759, -10704, 0, -14, 0, (0x0A << 16), bhvSpinAirborneWarp),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		STOP_MUSIC(0),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -180, 0, 80, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};