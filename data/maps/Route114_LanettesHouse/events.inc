Route114_LanettesHouse_EventObjects::
	object_event 1, EVENT_OBJ_GFX_WOMAN_3, 0, 5, 4, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route114_LanettesHouse_EventScript_15C262, FLAG_HIDE_LANETTE

Route114_LanettesHouse_MapWarps::
	warp_def 5, 7, 0, 2, MAP_ROUTE114
	warp_def 6, 7, 0, 2, MAP_ROUTE114

Route114_LanettesHouse_MapBGEvents::
	bg_event 5, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route114_LanettesHouse_EventScript_15C299
	bg_event 8, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route114_LanettesHouse_EventScript_15C2D5
	bg_event 7, 1, 0, BG_EVENT_PLAYER_FACING_ANY, Route114_LanettesHouse_EventScript_15C2D5

Route114_LanettesHouse_MapEvents::
	map_events Route114_LanettesHouse_EventObjects, Route114_LanettesHouse_MapWarps, 0x0, Route114_LanettesHouse_MapBGEvents
