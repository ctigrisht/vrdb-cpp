//
// Created by Jayanta Chakrabarty on 25/03/2026.
//

#include "async_fs.hpp"

void async_fs_handle::continue_with(std::function<void(async_fs)> on_fs_handle)
{
    auto fs = async_fs{};

    on_fs_handle(fs);
}
