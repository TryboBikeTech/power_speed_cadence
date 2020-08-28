#pragma once

namespace PSC
{
	inline float MetersPerSecond( float _kmh )
	{
		return _kmh * ( 1000.0f / 3600.0f );
	}

	inline float KilometersPerHour( float _mps )
	{
		return _mps * ( 3600.0f / 1000.0f );
	}

	inline float Kelvin( float _cel )
	{
		return 273.15f + _cel;
	}

}