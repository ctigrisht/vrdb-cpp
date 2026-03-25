#pragma once

enum tds_value_type
{
    STRING = 1000,
    UINT_8 = 2000,
    UINT_16 = 2001,
    UINT_32 = 2002,
    UINT_64 = 2003,
    INT_8 = 3000,
    INT_16 = 3001,
    INT_32 = 3002,
    INT_64 = 3003,
    FLOAT_8 = 3001,
    FLOAT_16 = 3002,
    FLOAT_32 = 3003,
    FLOAT_64 = 3004,
    DECIMAL_64 = 4000,
    DECIMAL_128 = 4001,

    //
    TIMESPAN = 5000,
    TIMESTAMP_UTC = 6001,
    TIMESTAMP_TZ = 6002,

    //
    BINARY_INLINE = 7000,
    BINARY_REF = 7001,

    //
    ROW_LINK = 10001,
    ROWSET_LINK = 10002,

    //
    STRUCT_DOCUMENT = 11001,
    FREE_DOCUMENT = 11002,

    //
    ARRAY_TYPED = 12001,
    ARRAY_DYNAMIC = 12002,

    //

};
