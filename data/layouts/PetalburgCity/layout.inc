PetalburgCity_MapBorder::
	.incbin "data/layouts/PetalburgCity/border.bin"

PetalburgCity_MapBlockdata::
	.incbin "data/layouts/PetalburgCity/map.bin"

	.align 2
PetalburgCity_Layout::
	.4byte 50
	.4byte 30
	.4byte PetalburgCity_MapBorder
	.4byte PetalburgCity_MapBlockdata
	.4byte gTileset_General
	.4byte gTileset_Rustboro

