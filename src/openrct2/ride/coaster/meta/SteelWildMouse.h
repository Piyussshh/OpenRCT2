/*****************************************************************************
 * Copyright (c) 2014-2020 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "../../../sprites.h"
#include "../../RideData.h"
#include "../../ShopItem.h"
#include "../../Track.h"

// clang-format off
constexpr const RideTypeDescriptor SteelWildMouseRTD =
{
    SET_FIELD(AlternateType, RIDE_TYPE_NULL),
    SET_FIELD(Category, RIDE_CATEGORY_ROLLERCOASTER),
    SET_FIELD(EnabledTrackPieces, (1ULL << TRACK_STRAIGHT) | (1ULL << TRACK_STATION_END) | (1ULL << TRACK_LIFT_HILL)
                                  | (1ULL << TRACK_LIFT_HILL_STEEP) | (1ULL << TRACK_SLOPE) | (1ULL << TRACK_SLOPE_STEEP) | (1ULL << TRACK_SLOPE_LONG)
                                  | (1ULL << TRACK_SLOPE_CURVE) | (1ULL << TRACK_CURVE_VERY_SMALL) | (1ULL << TRACK_CURVE_SMALL) | (1ULL << TRACK_BRAKES)
                                  | (1ULL << TRACK_BLOCK_BRAKES)),
    SET_FIELD(ExtraTrackPieces, 0),
    SET_FIELD(CoveredTrackPieces, 0),
    SET_FIELD(StartTrackPiece, TRACK_ELEM_END_STATION),
    SET_FIELD(TrackPaintFunction, get_track_paint_function_wild_mouse),
    SET_FIELD(Flags, RIDE_TYPE_FLAGS_TRACK_HAS_3_COLOURS | RIDE_TYPE_FLAG_HAS_LEAVE_WHEN_ANOTHER_VEHICLE_ARRIVES_AT_STATION |
                     RIDE_TYPE_FLAGS_COMMON_COASTER | RIDE_TYPE_FLAGS_COMMON_COASTER_NON_ALT | RIDE_TYPE_FLAG_ALLOW_DOORS_ON_TRACK |
                     RIDE_TYPE_FLAG_PEEP_CHECK_GFORCES),
    SET_FIELD(RideModes, EnumsToFlags(RideMode::ContinuousCircuit, RideMode::ContinuousCircuitBlockSectioned)),
    SET_FIELD(DefaultMode, RideMode::ContinuousCircuit),
    SET_FIELD(OperatingSettings, { 0, 0, 0, 0, 0, 0 }),
    SET_FIELD(Naming, { STR_RIDE_NAME_WILD_MOUSE, STR_RIDE_DESCRIPTION_WILD_MOUSE }),
    SET_FIELD(NameConvention, { RIDE_COMPONENT_TYPE_CAR, RIDE_COMPONENT_TYPE_TRACK, RIDE_COMPONENT_TYPE_STATION }),
    SET_FIELD(EnumName, nameof(RIDE_TYPE_STEEL_WILD_MOUSE)),
    SET_FIELD(AvailableBreakdowns, (1 << BREAKDOWN_SAFETY_CUT_OUT) | (1 << BREAKDOWN_RESTRAINTS_STUCK_CLOSED) | (1 << BREAKDOWN_RESTRAINTS_STUCK_OPEN) | (1 << BREAKDOWN_VEHICLE_MALFUNCTION) | (1 << BREAKDOWN_BRAKES_FAILURE)),
    SET_FIELD(Heights, { 16, 24, 4, 7, }),
    SET_FIELD(MaxMass, 4),
    SET_FIELD(LiftData, { SoundId::LiftWildMouse, 4, 6 }),
    SET_FIELD(RatingsCalculationFunction, ride_ratings_calculate_wild_mouse),
    SET_FIELD(RatingsMultipliers, { 50, 30, 30 }),
    SET_FIELD(UpkeepCosts, { 40, 20, 80, 9, 3, 10 }),
    SET_FIELD(BuildCosts, { 55, 4, 40, }),
    SET_FIELD(DefaultPrices, { 20, 20 }),
    SET_FIELD(DefaultMusic, MUSIC_STYLE_ROCK),
    SET_FIELD(PhotoItem, SHOP_ITEM_PHOTO),
    SET_FIELD(BonusValue, 55),
    SET_FIELD(ColourPresets, TRACK_COLOUR_PRESETS(
        { COLOUR_LIGHT_BLUE, COLOUR_LIGHT_BLUE, COLOUR_YELLOW },
        { COLOUR_BRIGHT_RED, COLOUR_BRIGHT_RED, COLOUR_WHITE },
        { COLOUR_DARK_PURPLE, COLOUR_BRIGHT_PINK, COLOUR_DARK_PURPLE },
        { COLOUR_LIGHT_BROWN, COLOUR_LIGHT_BROWN, COLOUR_BORDEAUX_RED },
    )),
    SET_FIELD(ColourPreview, { SPR_RIDE_DESIGN_PREVIEW_WILD_MOUSE_TRACK, SPR_RIDE_DESIGN_PREVIEW_WILD_MOUSE_SUPPORTS }),
    SET_FIELD(ColourKey, RideColourKey::Ride),
};
// clang-format on
