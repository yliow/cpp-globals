#include <iostream>
#include "X.h"

extern int a;

int main()
{
    std::cout << "main a:" << X::a << std::endl;
    return 0;
}
