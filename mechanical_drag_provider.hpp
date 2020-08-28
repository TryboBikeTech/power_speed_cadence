#pragma once

#include "tyre_drag_info.hpp"

#include <string>

namespace PSC
{

class MechanicalDragProvider
{
public:
	MechanicalDragProvider( float _mass, std::string const & _tyre );

	float GetDrag( float _velocity );

private:

	std::string m_tyreName;
	float m_mass;

};

}