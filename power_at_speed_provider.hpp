#pragma once

#include <map>

namespace PSC
{

class PowerAtSpeedProvider
{
public:
	PowerAtSpeedProvider( /* Todo, cyclist data */ );

	float GetPower( float _speed, float _incline = 0.0f );

	float GetSpeed( float _power, float _incline = 0.0f );
private:

	float InterpolateResult(
			float _reference
		,	float _baseBottom
		,	float _baseTop
		,	float _resBottom
		,	float _resTop
		);

	typedef std::map< float, float > SpeedAtPower;
	SpeedAtPower m_powerData;


};


}
