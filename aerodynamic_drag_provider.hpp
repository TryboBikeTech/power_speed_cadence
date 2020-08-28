#pragma once

#include "air_density_provider.hpp"

namespace PSC
{

class AerodynamicDragProvider
{
public:
	AerodynamicDragProvider(
			float _cD
		,	float _A
		,	AirDensityProvider _airProvider
		);

	float GetDrag( float _velocity );
private:

	float MeterPerSecond( float _velocity );

	float m_cD;
	float m_A;
	AirDensityProvider m_provider;

};

}