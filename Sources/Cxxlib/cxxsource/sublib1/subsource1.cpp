#include "subheader1.h"

#include <version>

#include <sublib1/public1.h>


void sublib1()
{
    std::cout << "test" << std::endl;
    std::cout << (int)std::memory_order_acquire << std::endl;

}