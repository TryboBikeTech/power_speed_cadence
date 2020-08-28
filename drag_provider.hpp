#pragma once

#include "aerodynamic_drag_provider.hpp"
#include "gravitational_drag_provider.hpp"
#include "mechanical_drag_provider.hpp"

#include <string>

namespace PSC
{

struct Drag
{
	float m_aero;
	float m_mechanical;
	float m_gravitational;

	Drag( float _aero, float _mechanical, float _gravitational )
	:	m_aero( _aero )
	,	m_mechanical( _mechanical )
	,	m_gravitational( _gravitational )
	{
	}

	float Total()
	{
		return m_aero + m_mechanical + m_gravitational;
	}
};

class DragProvider
{
public:
	DragProvider(
			float _riderWeight
		,	float _gearWeight
		,	float _temperature
		,	float _altitude
		,	float _aerodynamicFactor
		,	float _frontalArea
		,	float _humidityPercent
		,	std::string const & _tyreName
		);

	Drag GetDrag( float _inclinePercent, float _velocity );
private:
	std::string m_tyreName;

	AerodynamicDragProvider m_aerodynamics;
	GravitationalDragProvider m_gravity;
	MechanicalDragProvider m_mechanicals;
};

}