Route103_MapBorder::
	.incbin "data/layouts/Route103/border.bin"

Route103_MapBlockdata::
	.incbin "data/layouts/Route103/map.bin"

	.align 2
Route103_Layout::
	.4byte 22
	.4byte 50
	.4byte Route103_MapBorder
	.4byte Route103_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Rustboro

