#pragma once
#include <string>

#include "../storage_engine/tds_streamer/tds_value_type.hpp"

namespace vr
{
    struct table_column
    {
        tds_value_type value_type;

    };

    struct table_schema
    {
    };
}
