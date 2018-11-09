LinkContestRoom6_MapBorder::
	.incbin "data/layouts/LinkContestRoom6/border.bin"

LinkContestRoom6_MapBlockdata::
	.incbin "data/layouts/LinkContestRoom6/map.bin"

	.align 2
LinkContestRoom6_Layout::
	.4byte 12
	.4byte 6
	.4byte LinkContestRoom6_MapBorder
	.4byte LinkContestRoom6_MapBlockdata
	.4byte gTileset_Building
	.4byte gTileset_Cave

