#pragma once

namespace PSC
{

class GravitationalDragProvider
{
public:
	GravitationalDragProvider( float _mass );

	float GetDrag( float _inclinePercent );

private:
	float m_mass;

};

}