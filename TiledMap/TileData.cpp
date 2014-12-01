#include "TileData.hpp"

namespace tme
{

////////////////////////////////////////////////////////////
TileData::TileData() : mId(0), mTerrain(""), mProbability(0.0f)
{
}

////////////////////////////////////////////////////////////
int TileData::getId() const
{
    return mId;
}

////////////////////////////////////////////////////////////
std::string TileData::getTerrain() const
{
    return mTerrain;
}

////////////////////////////////////////////////////////////
float TileData::getProbability() const
{
    return mProbability;
}

////////////////////////////////////////////////////////////
void TileData::setId(int id)
{
    mId = id;
}

////////////////////////////////////////////////////////////
void TileData::setTerrain(std::string const& terrain)
{
    mTerrain = terrain;
}

////////////////////////////////////////////////////////////
void TileData::setProbability(float probability)
{
    mProbability = probability;
}

}
