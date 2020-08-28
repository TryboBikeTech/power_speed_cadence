#pragma once

#include "converters.hpp"

#include <string>

namespace PSC
{

class TyreDragInfo
{
/*
This class claculates Crr ( drag coefficient ) of a bicycle tyre from
the usually available data - which is power lost at a certain speed and
laden mass

The speed/power/mass are usually available from online tests
*/

public:
	TyreDragInfo( float _power, float _speed, float _loadMass, std::string const & _name )
	:	m_power( _power )
	,	m_speed( _speed )
	,	m_loadMass( _loadMass )
	,	m_name( _name )
	{
	}

	float GetCoefficient() const
	{
		// we want Crr
		// P = V * F
		// F = Crr * m
		// P = V * Crr * m
		// P / ( V * m ) = Crr
		const static float EarthsGravitationalAcceleration = 9.81f;

		return m_power / ( MetersPerSecond( m_speed ) * m_loadMass * EarthsGravitationalAcceleration );
	}

private:
	float m_power;
	float m_speed;
	float m_loadMass;
	std::string m_name;
};

}