InsideOfTruck_MapBorder::
	.incbin "data/layouts/InsideOfTruck/border.bin"

InsideOfTruck_MapBlockdata::
	.incbin "data/layouts/InsideOfTruck/map.bin"

	.align 2
InsideOfTruck_Layout::
	.4byte 50
	.4byte 36
	.4byte InsideOfTruck_MapBorder
	.4byte InsideOfTruck_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Rustboro

