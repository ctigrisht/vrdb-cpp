#include <iostream>
#include "tdx-lib/includes.hpp"
#include <magic_enum/magic_enum.hpp>

int main(){
//    auto* document = new tdx_models::tdx_document();

    auto tdx_int = tdx_values::tdx_int64(3924);

    std::cout << "Hello there, val is: " << tdx_int.value.value() << std::endl;

}