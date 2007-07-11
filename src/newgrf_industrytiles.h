/* $Id$ */

/** @file newgrf_industrytiles.h */

#ifndef NEWGRF_INDUSTRYTILES_H
#define NEWGRF_INDUSTRYTILES_H

enum IndustryAnimationTrigger {
	IAT_CONSTRUCTION_STATE_CHANGE,
	IAT_TILELOOP,
	IAT_INDUSTRY_TICK,
	IAT_INDUSTRY_RECEIVED_CARGO,
	IAT_INDUSTRY_DISTRIBUTES_CARGO,
};

bool DrawNewIndustryTile(TileInfo *ti, Industry *i, IndustryGfx gfx, const IndustryTileSpec *inds);
uint16 GetIndustryTileCallback(uint16 callback, uint32 param1, uint32 param2, IndustryGfx gfx_id, Industry *industry, TileIndex tile);
bool PerformIndustryTileSlopeCheck(TileIndex tile, const IndustryTileSpec *its, IndustryType type, IndustryGfx gfx);

void AnimateNewIndustryTile(TileIndex tile);
bool StartStopIndustryTileAnimation(TileIndex tile, IndustryAnimationTrigger iat, uint32 random = Random());
bool StartStopIndustryTileAnimation(const Industry *ind, IndustryAnimationTrigger iat);

#endif /* NEWGRF_INDUSTRYTILES_H */
