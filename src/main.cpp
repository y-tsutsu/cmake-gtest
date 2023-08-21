#include "add.h"

#include <iostream>

int main([[maybe_unused]] int argc, [[maybe_unused]] char const *argv[])
{
    std::cout << "Hello, world!" << std::endl;
    std::cout << add(42, 23) << std::endl;
    return 0;
}
