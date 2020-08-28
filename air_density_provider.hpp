#pragma once

namespace PSC
{

class AirDensityProvider
{
public:
	AirDensityProvider( float _temperature, float _humidityPercent, float _pressure );

	float GetDensity();

private:
	float VaporSaturationPressure();

	float m_temperature;
	float m_humidityPercent;
	float m_pressure;
};

}
