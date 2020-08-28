#pragma once

namespace PSC
{

inline
float SpeedAtRatio( float _ratio, float _circumverence, float _cadence )
{
	return _cadence * _circumverence * _ratio;
}


};
