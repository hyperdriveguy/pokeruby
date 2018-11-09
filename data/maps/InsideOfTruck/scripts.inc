InsideOfTruck_MapScripts:: @ 815FBFF
	@map_script 1, InsideOfTruck_MapScript1_15FC0A
	@map_script 5, InsideOfTruck_MapScript1_15FC26
	.byte 0

InsideOfTruck_MapScript1_15FC0A:: @ 815FC0A
	setmetatile 4, 1, 520, 0
	setmetatile 4, 2, 528, 0
	setmetatile 4, 3, 536, 0
	end

InsideOfTruck_MapScript1_15FC26:: @ 815FC26
	setstepcallback 5
	end

InsideOfTruck_EventScript_15FC29:: @ 815FC29
	lockall
	setflag FLAG_SPECIAL_FLAG_0
	checkplayergender
	compare RESULT, 0
	goto_if_eq InsideOfTruck_EventScript_15FC45
	compare RESULT, 1
	goto_if_eq InsideOfTruck_EventScript_15FC68
	end

InsideOfTruck_EventScript_15FC45:: @ 815FC45
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 1
	setflag FLAG_HIDE_MAY_MOM_DOWNSTAIRS
	setflag FLAG_HIDE_MOVING_TRUCK_MAY
	setflag FLAG_HIDE_BRENDAN_MOM
	setflag FLAG_HIDE_BRENDAN_UPSTAIRS
	setvar VAR_LITTLEROOT_HOUSES_STATE_2, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 255, 3, 10
	releaseall
	end

InsideOfTruck_EventScript_15FC68:: @ 815FC68
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_MAYS_HOUSE_2F
	setvar VAR_LITTLEROOT_INTRO_STATE, 2
	setflag FLAG_HIDE_BRENDAN_MOM_DOWNSTAIRS
	setflag FLAG_HIDE_MOVING_TRUCK_BRENDAN
	setflag FLAG_HIDE_MAY_MOM
	setflag FLAG_HIDE_MAY_UPSTAIRS
	setvar VAR_LITTLEROOT_HOUSES_STATE, 1
	setdynamicwarp MAP_LITTLEROOT_TOWN, 255, 12, 10
	releaseall
	end

InsideOfTruck_EventScript_15FC8B:: @ 815FC8B
	msgbox InsideOfTruck_Text_198FAD, 3
	end

InsideOfTruck_EventScript_Fence_On_Top::
    setmetatile 3, 23, 871, 3
    setmetatile 4, 23, 871, 3
    setmetatile 5, 23, 871, 3
    setmetatile 6, 23, 871, 3
    setmetatile 7, 23, 871, 3
    setmetatile 8, 23, 871, 3
    setmetatile 9, 23, 871, 3
    setmetatile 10, 23, 871, 3
    setmetatile 11, 23, 871, 3
    setmetatile 12, 23, 871, 3
    setmetatile 13, 23, 871, 3
    setmetatile 14, 23, 871, 3
    setmetatile 15, 23, 871, 3
    setmetatile 16, 23, 871, 3
    setmetatile 17, 23, 871, 3
    setmetatile 18, 23, 871, 3
    setmetatile 19, 23, 871, 3
    setmetatile 20, 23, 871, 3
    setmetatile 21, 23, 871, 3
    setmetatile 22, 23, 871, 3
    setmetatile 23, 23, 871, 3
    setmetatile 24, 23, 871, 3
    setmetatile 25, 23, 871, 3
    setmetatile 26, 23, 871, 3
    setmetatile 27, 23, 871, 3
    setmetatile 28, 23, 871, 3
    setmetatile 29, 23, 871, 3
    setmetatile 30, 23, 871, 3
    setmetatile 31, 23, 871, 3
    setmetatile 32, 23, 871, 3
    setmetatile 33, 23, 871, 3
    setmetatile 34, 23, 871, 3
    setmetatile 35, 23, 871, 3
    setmetatile 36, 23, 871, 3
    setmetatile 37, 23, 871, 3
    setmetatile 38, 23, 871, 3
    setmetatile 39, 23, 871, 3
    setmetatile 40, 23, 871, 3
    setmetatile 41, 23, 871, 3
    setmetatile 42, 23, 871, 3
    setmetatile 43, 23, 871, 3
    setmetatile 44, 23, 871, 3
    setmetatile 45, 23, 871, 3
    setmetatile 46, 23, 871, 3
    releaseall
    end

InsideOfTruck_EventScript_Fence_On_Bottom::
    setmetatile 3, 23, 652, 3
    setmetatile 4, 23, 652, 3
    setmetatile 5, 23, 652, 3
    setmetatile 6, 23, 652, 3
    setmetatile 7, 23, 652, 3
    setmetatile 8, 23, 652, 3
    setmetatile 9, 23, 652, 3
    setmetatile 10, 23, 652, 3
    setmetatile 11, 23, 652, 3
    setmetatile 12, 23, 652, 3
    setmetatile 13, 23, 652, 3
    setmetatile 14, 23, 652, 3
    setmetatile 15, 23, 652, 3
    setmetatile 16, 23, 652, 3
    setmetatile 17, 23, 652, 3
    setmetatile 18, 23, 652, 3
    setmetatile 19, 23, 652, 3
    setmetatile 20, 23, 652, 3
    setmetatile 21, 23, 652, 3
    setmetatile 22, 23, 652, 3
    setmetatile 23, 23, 652, 3
    setmetatile 24, 23, 652, 3
    setmetatile 25, 23, 652, 3
    setmetatile 26, 23, 652, 3
    setmetatile 27, 23, 652, 3
    setmetatile 28, 23, 652, 3
    setmetatile 29, 23, 652, 3
    setmetatile 30, 23, 652, 3
    setmetatile 31, 23, 652, 3
    setmetatile 32, 23, 652, 3
    setmetatile 33, 23, 652, 3
    setmetatile 34, 23, 652, 3
    setmetatile 35, 23, 652, 3
    setmetatile 36, 23, 652, 3
    setmetatile 37, 23, 652, 3
    setmetatile 38, 23, 652, 3
    setmetatile 39, 23, 652, 3
    setmetatile 40, 23, 652, 3
    setmetatile 41, 23, 652, 3
    setmetatile 42, 23, 652, 3
    setmetatile 43, 23, 652, 3
    setmetatile 44, 23, 652, 3
    setmetatile 45, 23, 652, 3
    setmetatile 46, 23, 652, 3
    releaseall
    end
    
