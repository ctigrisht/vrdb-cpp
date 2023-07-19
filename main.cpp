#include <iostream>
#include "tdx-lib/includes.hpp"
#include <magic_enum/magic_enum.hpp>

int main(){
    auto* document = new tdx_models::tdx_document();

    std::cout << "Hello there :P" << std::endl;

    delete document;
}