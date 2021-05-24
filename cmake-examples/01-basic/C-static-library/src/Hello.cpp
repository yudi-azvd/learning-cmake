
#include <iostream>

// As duas alternativas abaixo funcionam
// #include "static/Hello.h"
#include <static/Hello.h>

void Hello::print()
{
    std::cout << "Hello Static Library!" << std::endl;
}