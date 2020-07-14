#pragma once
#include "carla/geom/Location.h"

namespace carla {
namespace rpc {
    class LocationAndChannel{
        public:
        geom::Location loc;
	float channel;
    };
}
}
