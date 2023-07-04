#pragma once

namespace tdx_models
{
    class tdx_value
    {
    private:
        /* data */
    public:
        tdx_value(/* args */);
        ~tdx_value();
    };

    // tdx_value::tdx_value(/* args */)
    // {
    // }

    // tdx_value::~tdx_value()
    // {
    // }

    enum struct tdx_value_type
    {
        string,
        int16,
        int32,
        int64,
        int128,
        uint16,
        uint32,
        uint64,
        uint128,
        float32,
        float64,
        decimal,
        blob,
        blob_ref,
        json,
        document,

        // relationships
        link_ref,        
    };
}
