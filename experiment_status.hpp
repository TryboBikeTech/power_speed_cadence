#pragma once

#include <sstream>
#include <vector>

struct SpeedCriteria
{
	float m_lowest;
	float m_highest;
	float m_step;
};

struct ExperimentStats
{
	// defaults for the sake of the video

	ExperimentStats(
			float _riderMass = 75.0f // kg
		,	float _bikeMass = 6.8f // kg
		,	float _wheelMass = 1.5f // kg
		,	float _temperature = 25.0f // celsius
		,	float _altitude = 300.0f // altitude
		,	float _cD = 0.45f // aero factor
		,	float _A = 1.0f // frontal area
		,	float _humidity = 25.0f // percent
		,	float _targetPower = 200.0f // target power
		,	float _cadence = 80.0f // rpm
		,	float _circumference = 2.2f // meters
		,	float _incline = 0.0f // incline
		,	std::vector< int > _rings = { 53, 39 } // chainrings
		,	std::vector< int > _cogs  = { 11, 12, 13, 14, 15, 17, 19, 21, 23, 25, 28 } // cassette cogs
		,	std::vector< int > _rings_2 = { 44 } // chainrings
		,	std::vector< int > _cogs_2  = { 9, 10, 11, 12, 13, 14, 16, 18, 20, 23, 27, 31, 36 } // cassette cogs
		,	SpeedCriteria _speed = { 5.0f, 55.0f, 0.1f }
	);

	float GetKineticMass() const;

	std::string ToString() const;
	
	float m_riderMass;
	float m_bikeMass;
	float m_wheelMass;
	float m_temperature;
	float m_altitude;
	float m_cD;
	float m_A;
	float m_humidity;
	float m_targetPower;
	float m_cadence;
	float m_circumference;
	float m_incline;
	std::string m_experimentName;
	std::vector< int > m_rings;
	std::vector< int > m_cogs;

	std::vector< int > m_rings_2;
	std::vector< int > m_cogs_2;

	SpeedCriteria m_speed;
};
//----------------------------------------------------------------------------------------