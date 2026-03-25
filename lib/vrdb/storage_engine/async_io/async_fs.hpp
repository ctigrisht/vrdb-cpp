#pragma once
#include <functional>

class async_fs
{
};

class async_fs_handle
{
public:
    void continue_with(std::function<void(async_fs)> on_fs_handle);
};
