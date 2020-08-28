#pragma once

namespace PSC
{

class SpeedAtCadenceProvider
{
public:
	SpeedAtCadenceProvider( float _wheelCircumverence, int _ring, int _cog );

	float GetSpeed( float _cadence );

	float GetCadence( float _speed );

private:
	float m_circumverence;
	int m_ring;
	int m_cog;
};

}