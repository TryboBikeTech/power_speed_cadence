#pragma once

#include "tyre_drag_info.hpp"
#include <uccc/singleton.hpp>

namespace PSC
{

class TyreDragInfoDatabaseImpl
{
public:
	TyreDragInfo Get( std::string const & _name );
};

typedef Uccc::opaque_singleton< TyreDragInfoDatabaseImpl > TyreDragDatabase;

}