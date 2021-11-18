#include "pretty_print.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> oneDim = {1, 2, 3};
    std::cout << "One dimensional vector: " << oneDim << std::endl;

    std::vector<std::vector<int>> twoDim = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::cout << "Two dimensional vector: " << twoDim << std::endl;
    return 0;
}