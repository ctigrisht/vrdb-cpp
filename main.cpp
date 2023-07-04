#include <iostream>
#include "lib/tdx-lib/includes.hpp"

int main(){
    auto* document = new tdx_models::tdx_document();

    std::cout << "Hello there :P" << std::endl;

    delete document;
}